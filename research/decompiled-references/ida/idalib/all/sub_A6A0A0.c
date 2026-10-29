__int64 __fastcall sub_A6A0A0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v13[184]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v13;
  ptr[1] = (void *)0x2000000000LL;
  v4 = (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | a2 & 6
      | 1
      | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7) >> 32;
  sub_9B7040(
    (__int64)ptr,
    *(_DWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFF8
  | a2 & 6
  | 1
  | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7);
  sub_9B7040((__int64)ptr, v4);
  sub_A4FF00(a3, (__int64)ptr);
  v5 = sub_2223360(a1 + 1296, ptr, &v11, &off_2B40D80);
  if ( !v5 || (v6 = v5 - 56, v5 == 56) )
  {
    v8 = sub_BC1580(a1, a2 | 1, a3);
    v9 = a1 + 1296;
    v10 = v8 + 56;
    v6 = v8;
    if ( !v8 )
      v10 = 0;
    sub_2223210(v9, v10, v11, &off_2B40D80);
  }
  if ( ptr[0] != v13 )
    free(ptr[0]);
  return v6;
}
