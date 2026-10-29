__int64 __fastcall sub_435730(__int64 *a1, const char *a2)
{
  __int64 vault_filesys; // rbp
  __int64 v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // r12
  const char *v6; // rsi
  unsigned int v7; // eax
  _QWORD *v9; // [rsp+8h] [rbp-60h]
  const char *v10; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v9 = sub_426230(a1, a2);
  v10 = nullptr;
  v11 = 0;
  vault_filesys = get_vault_filesys(&v10, 0, 0);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, nullptr);
  }
  v3 = *a1;
  v4 = 0;
  v5 = *a1 + 48 * a1[1];
  if ( v5 != *a1 )
  {
    while ( 1 )
    {
      sub_417500((__int64)&v10, (__int64)v9, v3);
      v6 = &s1;
      if ( (_QWORD)v11 )
        v6 = v10;
      v7 = (*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)vault_filesys + 40LL))(
             vault_filesys,
             v6,
             0);
      if ( !v7 )
        break;
      sub_416980(v7, (__int64)"Failed to delete file");
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        v3 += 48;
        qfree(v10, "Failed to delete file");
        if ( v5 == v3 )
          return v4;
      }
      else
      {
LABEL_8:
        v3 += 48;
        if ( v5 == v3 )
          return v4;
      }
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10, v6);
    }
    v4 = 1;
    goto LABEL_8;
  }
  return v4;
}
