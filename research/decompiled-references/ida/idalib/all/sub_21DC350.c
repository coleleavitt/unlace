char *__fastcall sub_21DC350(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx
  char *v3; // rbp
  char v5; // dl
  char *v6; // r12
  _BYTE *v7; // rax
  char v8; // r15
  size_t v9; // rax
  __int64 *v10; // rax
  char *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  size_t v14; // rax
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v2 )
    return nullptr;
  if ( *v1 != 68 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 1;
  if ( v2 == v1 + 1 )
    return nullptr;
  v5 = v1[1];
  if ( v5 != 116 && v5 != 84 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 2;
  v6 = sub_21D94E0(a1);
  if ( !v6 )
    return nullptr;
  v7 = *(_BYTE **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v7 != 69 )
    return nullptr;
  v8 = *(_BYTE *)(a1 + 937);
  *(_QWORD *)a1 = v7 + 1;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, 60);
  sub_21CFFC0((__int64)ptr);
  v9 = j__strlen("decltype");
  if ( v9 )
    sub_2222BB0(ptr, "decltype", v9);
  else
    sub_2222BB0(ptr, 0, 0);
  sub_9B7040((__int64)ptr, (int)v6);
  sub_9B7040((__int64)ptr, SHIDWORD(v6));
  v3 = (char *)sub_2223360(a1 + 904, ptr, &v17, off_2BE9FD0);
  if ( v3 )
  {
    v3 += 8;
    if ( ptr[0] != v19 )
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
    if ( v8 )
    {
      v12 = (_QWORD *)sub_21D40A0((__int64 *)(a1 + 808), 64, 3u);
      *v12 = 0;
      v13 = v12;
      v3 = (char *)(v12 + 1);
      v14 = j__strlen("decltype");
      v15 = *((_BYTE *)v13 + 18);
      v13[3] = v14;
      *((_WORD *)v13 + 8) = 16444;
      v13[4] = "decltype";
      *((_BYTE *)v13 + 18) = v15 & 0xF0 | 5;
      v13[5] = v6;
      v13[6] = 0;
      v13[1] = off_2BE7D40;
      v16 = v17;
      v13[7] = 0;
      sub_2223210(a1 + 904, v13, v16, off_2BE9FD0);
    }
    if ( ptr[0] != v19 )
      free(ptr[0]);
    *(_QWORD *)(a1 + 920) = v3;
  }
  return v3;
}
