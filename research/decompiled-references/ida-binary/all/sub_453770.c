__int64 __fastcall sub_453770(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 vault_filesys; // rbp
  const char *v6; // rdx
  int v7; // eax
  const char *v8; // rdi
  __int64 v9; // rdx
  const char *v10; // [rsp+0h] [rbp-98h] BYREF
  __int64 v11; // [rsp+8h] [rbp-90h]
  __int64 v12; // [rsp+20h] [rbp-78h] BYREF
  __int128 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  unsigned __int64 v15; // [rsp+78h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)(a2 + 8) <= 1u )
    return 0;
  v4 = sub_426230(a1, (const char *)a2);
  sub_417550((__int64)&v10, (__int64)v4, a2);
  v13 = 0;
  v12 = 0;
  vault_filesys = get_vault_filesys(&v12, 0, 0);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, nullptr);
  }
  v6 = &s1;
  if ( v11 )
    v6 = v10;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)vault_filesys + 96LL))(
         vault_filesys,
         &v12,
         v6);
  v8 = v10;
  if ( v7 )
  {
    if ( v10 )
    {
      v11 = 0;
      qfree(v10, (const char *)&v12);
    }
    return 0;
  }
  v9 = 0;
  if ( (WORD2(v13) & 0xF000) != 0x4000 )
    v9 = v14;
  *a1 = v9;
  if ( v8 )
  {
    v11 = 0;
    qfree(v8, (const char *)&v12);
  }
  return 1;
}
