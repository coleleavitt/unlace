_BOOL8 __fastcall sub_6F7A0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  int i; // ebx
  bool v8; // al
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  bool v12; // [rsp+Fh] [rbp-59h]
  __int64 (__fastcall **v13)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v14[2]; // [rsp+18h] [rbp-50h] BYREF
  char v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13 = off_4DBCA0;
  v4 = *a2;
  v14[0] = 0;
  v16 = v4;
  v5 = *a1;
  v14[1] = 0;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 80))(a1);
  sub_6F590((__int64 *)&v13, a1, v6, 0);
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) != i;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(i + 1)) )
  {
    v8 = sub_64930(v14, i);
    if ( !v8 )
    {
      v9 = *(_DWORD **)a3;
      v10 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
      if ( *(_QWORD *)a3 == v10 )
        goto LABEL_10;
      while ( i != *v9 )
      {
        if ( (_DWORD *)v10 == ++v9 )
          goto LABEL_10;
      }
    }
  }
  v8 = 1;
LABEL_10:
  v12 = v8;
  v13 = off_4DBB18;
  qfree(v14[0]);
  return v12;
}
