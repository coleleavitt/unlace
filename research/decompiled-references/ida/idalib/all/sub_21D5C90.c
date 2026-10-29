void *__fastcall sub_21D5C90(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // rbx
  __int64 *v8; // rax
  void *v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  char v14; // dl
  char v15; // [rsp+7h] [rbp-E1h]
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = *a3;
  v5 = *a2;
  v15 = *(_BYTE *)(a1 + 129);
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v18;
  sub_21D05E0((__int64)ptr, 0x1Au, v5, v4);
  v6 = sub_2223360(a1 + 96, ptr, &v16, off_2BE9FD0);
  v7 = (void *)v6;
  if ( v6 )
  {
    v7 = (void *)(v6 + 8);
    if ( ptr[0] != v18 )
      free(ptr[0]);
    if ( v7 )
    {
      ptr[0] = v7;
      v8 = sub_21D4F30(a1 + 136, (__int64 *)ptr);
      if ( v8 )
      {
        v9 = (void *)v8[1];
        if ( v9 )
          v7 = v9;
      }
      if ( *(void **)(a1 + 120) == v7 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v15 )
    {
      v11 = sub_21D40A0((__int64 *)a1, 40, 3u);
      *(_QWORD *)v11 = 0;
      v12 = *a2;
      v7 = (void *)(v11 + 8);
      v13 = *a3;
      *(_WORD *)(v11 + 16) = 16410;
      v14 = *(_BYTE *)(v11 + 18);
      *(_QWORD *)(v11 + 24) = v12;
      *(_QWORD *)(v11 + 32) = v13;
      *(_BYTE *)(v11 + 18) = v14 & 0xF0 | 5;
      *(_QWORD *)(v11 + 8) = off_2BE7140;
      sub_2223210(a1 + 96, v11, v16, off_2BE9FD0);
    }
    if ( ptr[0] != v18 )
      free(ptr[0]);
    *(_QWORD *)(a1 + 112) = v7;
  }
  return v7;
}
