void *__fastcall sub_21D7440(__int64 a1)
{
  char *v1; // rax
  char *v2; // rdx
  void *v3; // rbp
  char v5; // cl
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r13d
  char v10; // al
  __int64 v11; // rax
  __int64 *v12; // rax
  void *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // dl
  char v17; // [rsp+Fh] [rbp-D9h]
  __int64 v18; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v20[184]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( v2 == *(char **)a1 || *v1 != 83 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 )
  {
LABEL_8:
    ptr[0] = nullptr;
    if ( !(unsigned __int8)sub_21CFDE0((char **)a1, (__int64 *)ptr) )
    {
      v6 = *(char **)a1;
      v7 = (unsigned __int64)++ptr[0];
      if ( v6 != *(char **)(a1 + 8) && *v6 == 95 )
      {
        v8 = *(_QWORD *)(a1 + 296);
        *(_QWORD *)a1 = v6 + 1;
        if ( v7 < (*(_QWORD *)(a1 + 304) - v8) >> 3 )
          return *(void **)(v8 + 8 * v7);
      }
    }
    return nullptr;
  }
  v5 = v1[1];
  if ( (unsigned __int8)(v5 - 97) > 0x19u )
  {
    if ( v5 == 95 )
    {
      *(_QWORD *)a1 = v1 + 2;
      v14 = *(_QWORD *)(a1 + 296);
      if ( v14 != *(_QWORD *)(a1 + 304) )
        return *(void **)v14;
      return nullptr;
    }
    goto LABEL_8;
  }
  switch ( v1[1] )
  {
    case 'a':
      v9 = 0;
      break;
    case 'b':
      v9 = 1;
      break;
    case 'd':
      v9 = 5;
      break;
    case 'i':
      v9 = 3;
      break;
    case 'o':
      v9 = 4;
      break;
    case 's':
      v9 = 2;
      break;
    default:
      return nullptr;
  }
  *(_QWORD *)a1 = v1 + 2;
  v10 = *(_BYTE *)(a1 + 937);
  ptr[0] = v20;
  v17 = v10;
  ptr[1] = (void *)0x2000000000LL;
  sub_21D0130((__int64)ptr, 0x30u, v9);
  v11 = sub_2223360(a1 + 904, ptr, &v18, off_2BE9FD0);
  v3 = (void *)v11;
  if ( v11 )
  {
    v3 = (void *)(v11 + 8);
    if ( ptr[0] != v20 )
      free(ptr[0]);
    if ( v3 )
    {
      ptr[0] = v3;
      v12 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
      if ( v12 )
      {
        v13 = (void *)v12[1];
        if ( v13 )
          v3 = v13;
      }
      if ( *(void **)(a1 + 928) == v3 )
        *(_BYTE *)(a1 + 936) = 1;
LABEL_24:
      ptr[0] = (void *)sub_21D7230(a1, (unsigned __int64)v3);
      if ( ptr[0] != v3 )
      {
        sub_20D8690((char **)(a1 + 296), (__int64 *)ptr);
        return ptr[0];
      }
    }
  }
  else
  {
    if ( v17 )
    {
      v15 = sub_21D40A0((__int64 *)(a1 + 808), 24, 3u);
      *(_WORD *)(v15 + 16) = 16432;
      v16 = *(_BYTE *)(v15 + 18);
      v3 = (void *)(v15 + 8);
      *(_QWORD *)v15 = 0;
      *(_DWORD *)(v15 + 20) = v9;
      *(_BYTE *)(v15 + 18) = v16 & 0xF0 | 5;
      *(_QWORD *)(v15 + 8) = off_2BE78C0;
      sub_2223210(a1 + 904, v15, v18, off_2BE9FD0);
    }
    if ( ptr[0] != v20 )
      free(ptr[0]);
    *(_QWORD *)(a1 + 920) = v3;
    if ( v3 )
      goto LABEL_24;
  }
  return v3;
}
