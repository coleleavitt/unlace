unsigned __int64 __fastcall sub_A4DB10(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // [rsp+8h] [rbp-E0h]
  __int64 v14; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v16[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[0] = v16;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  sub_993300((__int64)ptr, a4);
  sub_993300((__int64)ptr, SHIDWORD(a4));
  sub_993300((__int64)ptr, a5);
  sub_993300((__int64)ptr, SHIDWORD(a5));
  v14 = 0;
  v8 = sub_21FF620(a1 + 792, ptr, &v14, &off_2B17180);
  if ( v8 && (v9 = v8 - 24) != 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v13 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)a4 | (unsigned __int8)*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v12 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
    sub_F3A4A0(v12, v13, a2, a5, a3, a4);
    sub_A469E0(a1 + 8, v12);
    v10 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    sub_21FF4D0(a1 + 792, v12 + 24, v14, &off_2B17180);
  }
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v10;
}

