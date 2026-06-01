__int64 __fastcall sub_21D7C10(__int64 a1, __int64 *a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rdx
  void *v5; // r14
  char v6; // al
  __int64 v7; // r13
  __int64 v8; // rax
  void *v9; // r8
  __int64 *v10; // rax
  void *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // dl
  int v15; // [rsp+0h] [rbp-F0h]
  void *v16; // [rsp+0h] [rbp-F0h]
  void *v17; // [rsp+0h] [rbp-F0h]
  void *v18; // [rsp+0h] [rbp-F0h]
  void *v19; // [rsp+0h] [rbp-F0h]
  char v20; // [rsp+16h] [rbp-DAh]
  char v21; // [rsp+17h] [rbp-D9h]
  __int64 v22; // [rsp+20h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+38h] [rbp-B8h] BYREF

  v2 = *(_BYTE **)a1;
  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)a1 || *v2 != 87 )
    return 0;
  while ( 1 )
  {
    v15 = 0;
    *(_QWORD *)a1 = v2 + 1;
    v21 = 0;
    if ( v2 + 1 != v3 && v2[1] == 80 )
    {
      v15 = 1;
      *(_QWORD *)a1 = v2 + 2;
      v21 = 1;
    }
    v5 = sub_21D7980(a1);
    if ( !v5 )
      break;
    v6 = *(_BYTE *)(a1 + 937);
    v7 = *a2;
    ptr[0] = v24;
    v20 = v6;
    ptr[1] = (void *)0x2000000000LL;
    sub_9B7040((__int64)ptr, 27);
    sub_21CFFC0((__int64)ptr);
    sub_9B7040((__int64)ptr, v7);
    sub_9B7040((__int64)ptr, SHIDWORD(v7));
    sub_9B7040((__int64)ptr, (int)v5);
    sub_9B7040((__int64)ptr, SHIDWORD(v5));
    sub_9B7040((__int64)ptr, v15);
    sub_21CFFC0((__int64)ptr);
    v8 = sub_2223360(a1 + 904, ptr, &v22, off_2BE9FD0);
    v9 = (void *)v8;
    if ( v8 )
    {
      v9 = (void *)(v8 + 8);
      if ( ptr[0] != v24 )
      {
        v16 = (void *)(v8 + 8);
        free(ptr[0]);
        v9 = v16;
      }
      if ( v9 )
      {
        ptr[0] = v9;
        v17 = v9;
        v10 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
        v9 = v17;
        if ( v10 )
        {
          v11 = (void *)v10[1];
          if ( v11 )
            v9 = v11;
        }
        if ( *(void **)(a1 + 928) == v9 )
          *(_BYTE *)(a1 + 936) = 1;
      }
    }
    else
    {
      if ( v20 )
      {
        v12 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
        *(_QWORD *)v12 = 0;
        v13 = *a2;
        *(_WORD *)(v12 + 16) = 16411;
        v14 = *(_BYTE *)(v12 + 18);
        *(_QWORD *)(v12 + 24) = v13;
        *(_QWORD *)(v12 + 32) = v5;
        *(_BYTE *)(v12 + 40) = v21;
        *(_BYTE *)(v12 + 18) = v14 & 0xF0 | 5;
        v19 = (void *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = off_2BE7080;
        sub_2223210(a1 + 904, v12, v22, off_2BE9FD0);
        v9 = v19;
      }
      if ( ptr[0] != v24 )
      {
        v18 = v9;
        free(ptr[0]);
        v9 = v18;
      }
      *(_QWORD *)(a1 + 920) = v9;
    }
    *a2 = (__int64)v9;
    ptr[0] = v9;
    sub_20D8690((char **)(a1 + 296), (__int64 *)ptr);
    v2 = *(_BYTE **)a1;
    v3 = *(_BYTE **)(a1 + 8);
    if ( *(_BYTE **)a1 == v3 || *v2 != 87 )
      return 0;
  }
  return 1;
}
