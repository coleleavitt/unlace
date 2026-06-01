unsigned __int64 __fastcall sub_A54370(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v10; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[0] = v12;
  ptr[1] = (void *)0x2000000000LL;
  sub_F3CC50(ptr, a2, a3, a4, 0, a1);
  v10 = 0;
  v6 = sub_21FF620(a1 + 544, ptr, &v10, &off_2B170A0);
  if ( !v6 || (v7 = v6 - 24, v6 == 24) )
  {
    v7 = sub_A4C290((__int64 *)(a1 + 2352), 24 * a4 + 48, 4u);
    sub_F3A8A0(v7, a2, 0, a3, a4, 0);
    sub_A469E0(a1 + 8, v7);
    sub_21FF4D0(a1 + 544, v7 + 24, v10, &off_2B170A0);
  }
  v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v12 )
    free(ptr[0]);
  return v8;
}

