unsigned __int64 __fastcall sub_A4C4C0(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v10[184]; // [rsp+20h] [rbp-B8h] BYREF

  ptr[0] = v10;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, a3);
  v8 = 0;
  v4 = sub_21FF620(a1 + 824, ptr, &v8, off_2B17200);
  if ( !v4 || (v5 = v4 - 24, v4 == 24) )
  {
    v5 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    sub_F33CF0(v5, a2, a3);
    sub_21FF4D0(a1 + 824, v5 + 24, v8, off_2B17200);
    sub_A469E0(a1 + 8, v5);
  }
  v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v10 )
    free(ptr[0]);
  return v6;
}

