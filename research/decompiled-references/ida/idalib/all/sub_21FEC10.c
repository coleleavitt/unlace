__int64 __fastcall sub_21FEC10(__int64 a1, const __m128i **a2)
{
  const __m128i *v3; // rsi
  __int64 v4; // rax
  bool v6; // [rsp+Fh] [rbp-D9h] BYREF
  void *v7; // [rsp+10h] [rbp-D8h] BYREF
  void *v8; // [rsp+18h] [rbp-D0h]
  void *v9; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-C0h]
  __int64 v11[4]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-98h] BYREF
  char v13; // [rsp+64h] [rbp-84h]
  void *v14; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+78h] [rbp-70h]
  __m128i v16; // [rsp+90h] [rbp-58h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-48h]
  __int32 v18; // [rsp+A8h] [rbp-40h]

  v3 = *a2;
  v16 = _mm_loadu_si128(v3);
  v4 = v3[1].m128i_i64[0];
  v16.m128i_i32[1] = -1022;
  v17 = v4;
  v18 = v3[1].m128i_i32[2];
  sub_21F9140(v11, (__int64)v3);
  sub_21F9190((__int64)v11, (__int64)a2);
  sub_21FDAB0((__int64)v11, &v16, 1, &v6);
  sub_21F9140(v12, v11[0]);
  sub_21F9190((__int64)v12, (__int64)v11);
  sub_21FDAB0((__int64)v12, dword_26F7D20, 1, &v6);
  sub_21F7B00((__int64)&v14, (__int64)v12);
  if ( v15 <= 0x40 )
  {
    v7 = v14;
  }
  else
  {
    v7 = *(void **)v14;
    operator delete[](v14);
  }
  if ( (v13 & 6) != 0 && (v13 & 7) != 3 && v6 )
  {
    sub_21FDAB0((__int64)v12, &v16, 1, &v6);
    sub_21F9140(&v14, v11[0]);
    sub_21F9190((__int64)&v14, (__int64)v11);
    sub_21FD790(&v14, (__int64)v12, 1, 1);
    sub_21FDAB0((__int64)&v14, dword_26F7D20, 1, &v6);
    sub_21F7B00((__int64)&v9, (__int64)&v14);
    if ( v10 <= 0x40 )
    {
      v8 = v9;
    }
    else
    {
      v8 = *(void **)v9;
      operator delete[](v9);
    }
    sub_21F9170(&v14);
  }
  else
  {
    v8 = nullptr;
  }
  sub_2205600(a1, 128, &v7, 2);
  sub_21F9170(v12);
  sub_21F9170(v11);
  return a1;
}
