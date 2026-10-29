void *__fastcall sub_21D56C0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  void *v4; // rbx
  __int64 *v5; // rax
  void *v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // dl
  char v11; // [rsp+Fh] [rbp-D9h]
  __int64 v12; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v14[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *a2;
  v11 = *(_BYTE *)(a1 + 129);
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v14;
  sub_21D0240((__int64)ptr, 0x2Au, v2);
  v3 = sub_2223360(a1 + 96, ptr, &v12, off_2BE9FD0);
  v4 = (void *)v3;
  if ( v3 )
  {
    v4 = (void *)(v3 + 8);
    if ( ptr[0] != v14 )
      free(ptr[0]);
    if ( v4 )
    {
      ptr[0] = v4;
      v5 = sub_21D4F30(a1 + 136, (__int64 *)ptr);
      if ( v5 )
      {
        v6 = (void *)v5[1];
        if ( v6 )
          v4 = v6;
      }
      if ( *(void **)(a1 + 120) == v4 )
        *(_BYTE *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( v11 )
    {
      v8 = sub_21D40A0((__int64 *)a1, 32, 3u);
      *(_QWORD *)v8 = 0;
      v9 = *a2;
      v4 = (void *)(v8 + 8);
      *(_WORD *)(v8 + 16) = 16426;
      v10 = *(_BYTE *)(v8 + 18);
      *(_QWORD *)(v8 + 24) = v9;
      *(_BYTE *)(v8 + 18) = v10 & 0xF0 | 5;
      *(_QWORD *)(v8 + 8) = off_2BE7680;
      sub_2223210(a1 + 96, v8, v12, off_2BE9FD0);
    }
    if ( ptr[0] != v14 )
      free(ptr[0]);
    *(_QWORD *)(a1 + 112) = v4;
  }
  return v4;
}
