char *__fastcall sub_21DCD10(__int64 a1)
{
  _BYTE *v1; // rdx
  __int64 v2; // rax
  char *v3; // rbp
  char v5; // al
  char *v6; // r12
  char *v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 *v10; // rax
  char *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // dl
  char v14; // [rsp+7h] [rbp-E1h]
  char v15; // [rsp+17h] [rbp-D1h] BYREF
  void *v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = *(_BYTE **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v2 || v2 - (_QWORD)v1 == 1 || *v1 != 100 )
    return sub_21D94E0(a1);
  v5 = v1[1];
  if ( v5 == 105 )
  {
    *(_QWORD *)a1 = v1 + 2;
    v16 = sub_21D7980(a1);
    if ( !v16 )
      return nullptr;
    ptr[0] = (void *)sub_21DCD10(a1);
    if ( !ptr[0] )
      return nullptr;
    v15 = 0;
    return (char *)sub_21D6CC0(a1 + 808, (__int64 *)&v16, (__int64 *)ptr, &v15);
  }
  if ( v5 == 120 )
  {
    *(_QWORD *)a1 = v1 + 2;
    v16 = sub_21D94E0(a1);
    if ( !v16 )
      return nullptr;
    ptr[0] = (void *)sub_21DCD10(a1);
    if ( !ptr[0] )
      return nullptr;
    v15 = 1;
    return (char *)sub_21D6CC0(a1 + 808, (__int64 *)&v16, (__int64 *)ptr, &v15);
  }
  if ( v5 != 88 )
    return sub_21D94E0(a1);
  *(_QWORD *)a1 = v1 + 2;
  v6 = sub_21D94E0(a1);
  if ( !v6 )
    return nullptr;
  v7 = sub_21D94E0(a1);
  if ( !v7 )
    return nullptr;
  v8 = sub_21DCD10(a1);
  v9 = v8;
  if ( !v8 )
    return nullptr;
  v14 = *(_BYTE *)(a1 + 937);
  ptr[0] = v18;
  ptr[1] = (void *)0x2000000000LL;
  sub_21D1130((__int64)ptr, (__int64)v6, (unsigned __int64)v7, v8);
  v3 = (char *)sub_2223360(a1 + 904, ptr, &v16, off_2BE9FD0);
  if ( v3 )
  {
    v3 += 8;
    if ( ptr[0] != v18 )
      free(ptr[0]);
    if ( v3 )
    {
      ptr[0] = v3;
      v10 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
      if ( v10 )
      {
        v11 = (char *)v10[1];
        if ( v11 )
          v3 = v11;
      }
      if ( *(char **)(a1 + 928) == v3 )
        *(_BYTE *)(a1 + 936) = 1;
    }
  }
  else
  {
    if ( v14 )
    {
      v12 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
      *(_WORD *)(v12 + 16) = 16466;
      v13 = *(_BYTE *)(v12 + 18);
      v3 = (char *)(v12 + 8);
      *(_QWORD *)v12 = 0;
      *(_QWORD *)(v12 + 24) = v6;
      *(_QWORD *)(v12 + 32) = v7;
      *(_BYTE *)(v12 + 18) = v13 & 0xF0 | 5;
      *(_QWORD *)(v12 + 40) = v9;
      *(_QWORD *)(v12 + 8) = off_2BE81C0;
      sub_2223210(a1 + 904, v12, v16, off_2BE9FD0);
    }
    if ( ptr[0] != v18 )
      free(ptr[0]);
    *(_QWORD *)(a1 + 920) = v3;
  }
  return v3;
}
