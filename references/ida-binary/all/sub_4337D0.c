__int64 __fastcall sub_4337D0(_QWORD *a1)
{
  const char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v9; // rdi
  __int64 vault_filesys; // rdi
  __int64 v11; // rdi
  int v12; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  __int128 v14; // [rsp+18h] [rbp-20h]
  unsigned __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v2 = (const char *)&v12;
  check_process_exit(*a1, &v12, 0xFFFFFFFFLL);
  v3 = a1[11];
  if ( v3 )
  {
    v2 = nullptr;
    *(_DWORD *)(v3 + 24) = v12;
    sub_4797E0(a1[11], 0, 0);
    v4 = a1[11];
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a1 )
  {
    if ( *((_BYTE *)a1 + 8) )
    {
      v13 = 0;
      v14 = 0;
      v2 = &s1;
      vault_filesys = get_vault_filesys(&v13, 0, 0);
      if ( a1[3] )
        v2 = (const char *)a1[2];
      (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)vault_filesys + 40LL))(vault_filesys, v2, 0);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v2);
      }
    }
    if ( *((_BYTE *)a1 + 9) )
    {
      v13 = 0;
      v14 = 0;
      v2 = &s1;
      v11 = get_vault_filesys(&v13, 0, 0);
      if ( a1[6] )
        v2 = (const char *)a1[5];
      (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, v2, 0);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v2);
      }
    }
    if ( *((_BYTE *)a1 + 10) )
    {
      v13 = 0;
      v14 = 0;
      v2 = &s1;
      v9 = get_vault_filesys(&v13, 0, 0);
      if ( a1[9] )
        v2 = (const char *)a1[8];
      (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, v2, 0);
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v2);
      }
    }
    v5 = a1[8];
    if ( v5 )
    {
      a1[9] = 0;
      qfree(v5, v2);
    }
    v6 = a1[5];
    if ( v6 )
    {
      a1[6] = 0;
      qfree(v6, v2);
    }
    v7 = a1[2];
    if ( v7 )
    {
      a1[3] = 0;
      qfree(v7, v2);
    }
    operator delete(a1, 0x60u);
  }
  return 0;
}
