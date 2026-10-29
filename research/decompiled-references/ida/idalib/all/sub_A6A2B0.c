__int64 __fastcall sub_A6A2B0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v11[184]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v11;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_A4FF00(a3, (__int64)ptr);
  v4 = sub_2223360(a1 + 1280, ptr, &v9, off_2B40DA0);
  if ( !v4 || (v5 = v4 - 56, v4 == 56) )
  {
    v7 = sub_BA45F0(a1, a2, a3);
    v8 = v7 + 56;
    v5 = v7;
    if ( !v7 )
      v8 = 0;
    sub_2223210(a1 + 1280, v8, v9, off_2B40DA0);
  }
  if ( ptr[0] != v11 )
    free(ptr[0]);
  return v5;
}
