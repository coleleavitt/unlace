void *__fastcall sub_21D6FF0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  signed __int64 v5; // rax
  __int64 v6; // rdx
  signed __int64 v7; // r9
  char *v8; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 *v12; // rax
  void *v13; // rax
  unsigned __int64 v14; // rax
  char v15; // dl
  signed __int64 v16; // [rsp+8h] [rbp-F0h]
  char v17; // [rsp+17h] [rbp-E1h]
  __int64 v18; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v20[184]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = nullptr;
  v5 = sub_21CFC00((char **)a1, 1);
  if ( v5 )
  {
    v7 = v5;
    v8 = *(char **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v8 == 69 )
    {
      v10 = v6;
      *(_QWORD *)a1 = v8 + 1;
      v16 = v7;
      v17 = *(_BYTE *)(a1 + 937);
      ptr[0] = v20;
      ptr[1] = (void *)0x2000000000LL;
      sub_9B7040((__int64)ptr, 77);
      sub_21CFFC0((__int64)ptr);
      if ( a2 )
        sub_2222BB0(ptr, a3, a2);
      else
        sub_2222BB0(ptr, 0, 0);
      sub_2222BB0(ptr, v10, v16);
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
        }
      }
      else
      {
        if ( v17 )
        {
          v14 = sub_21D40A0((__int64 *)(a1 + 808), 56, 3u);
          *(_WORD *)(v14 + 16) = 16461;
          v15 = *(_BYTE *)(v14 + 18);
          v3 = (void *)(v14 + 8);
          *(_QWORD *)v14 = 0;
          *(_QWORD *)(v14 + 24) = a2;
          *(_QWORD *)(v14 + 32) = a3;
          *(_BYTE *)(v14 + 18) = v15 & 0xF0 | 5;
          *(_QWORD *)(v14 + 40) = v16;
          *(_QWORD *)(v14 + 48) = v10;
          *(_QWORD *)(v14 + 8) = off_2BE8460;
          sub_2223210(a1 + 904, v14, v18, off_2BE9FD0);
        }
        if ( ptr[0] != v20 )
          free(ptr[0]);
        *(_QWORD *)(a1 + 920) = v3;
      }
    }
  }
  return v3;
}
