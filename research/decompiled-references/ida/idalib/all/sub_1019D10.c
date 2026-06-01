__int64 __fastcall sub_1019D10(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // r9
  void ***v10; // rbx
  void **v11; // r12
  __int64 v12; // r12
  __int64 v13; // rax
  signed __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r13
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  __m128 v22; // xmm0
  __int64 v23; // rbx
  unsigned __int64 v25; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-110h]
  __m128i v27; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v28[16]; // [rsp+20h] [rbp-F8h] BYREF
  void *v29[6]; // [rsp+30h] [rbp-E8h] BYREF
  void **v30; // [rsp+60h] [rbp-B8h] BYREF
  __m128 v31; // [rsp+68h] [rbp-B0h]
  _QWORD v32[5]; // [rsp+78h] [rbp-A0h] BYREF
  void **v33; // [rsp+A0h] [rbp-78h] BYREF
  __int16 v34; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-58h]
  __int64 v36; // [rsp+C8h] [rbp-50h]
  char v37; // [rsp+E0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 40) )
    sub_100CCE0(a2);
  else
    sub_1017040(a2);
  sub_E59960(&v30, (void **)"$schema", (void **)&byte_7);
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  LOWORD(v32[0]) = 5;
  v32[1] = v3;
  v32[2] = v4;
  if ( !(unsigned __int8)sub_22296D0(v3, v4, 0) )
  {
    sub_222A8E0(&v27, v3, v4);
    sub_E59390((__int64)v29, &v27);
    sub_222B2A0(v32);
    sub_2229580(v32, v29);
    sub_222B2A0(v29);
    if ( (_BYTE *)v27.m128i_i64[0] != v28 )
      operator delete((void *)v27.m128i_i64[0]);
  }
  sub_E59960(&v33, (void **)"version", (void **)&byte_7);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v34 = 5;
  v35 = v5;
  v36 = v6;
  if ( !(unsigned __int8)sub_22296D0(v5, v6, 0) )
  {
    sub_222A8E0(&v27, v5, v6);
    sub_E59390((__int64)v29, &v27);
    sub_222B2A0(&v34);
    sub_2229580(&v34, v29);
    sub_222B2A0(v29);
    if ( (_BYTE *)v27.m128i_i64[0] != v28 )
      operator delete((void *)v27.m128i_i64[0]);
  }
  sub_100DB20(a1, (__int64)&v30, 2, v7, v8, v9);
  v10 = (void ***)&v37;
  do
  {
    v10 -= 8;
    sub_222B2A0(v10 + 3);
    v11 = *v10;
    if ( *v10 )
    {
      if ( *v11 != v11 + 2 )
        operator delete(*v11);
      operator delete(v11, 0x20u);
    }
  }
  while ( v10 != &v30 );
  v12 = *(_QWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 48);
  if ( v12 != v13 )
  {
    v14 = v12 - v13;
    if ( 0xCCCCCCCCCCCCCCCDLL * (v14 >> 3) > 0x666666666666666LL )
      std::__throw_bad_alloc();
    v15 = operator new(v14);
    v16 = *(_QWORD *)(a2 + 56);
    v17 = *(_QWORD *)(a2 + 48);
    v25 = v15;
    v26 = v15 + v14;
    if ( v16 != v17 )
    {
      v18 = v17;
      v19 = v15;
      do
      {
        v20 = v18;
        v21 = v19;
        v18 += 40;
        v19 += 40LL;
        sub_222B350(v21, v20);
      }
      while ( v16 != v18 );
      v15 = v25 + 8 * ((unsigned __int64)(v16 - 40 - v17) >> 3) + 40;
    }
    v25 = v15;
    LOWORD(v30) = 8;
    v22 = _mm_loadh_ps((const double *)&v25);
    v32[0] = v26;
    v31 = v22;
    sub_E59B60((void ***)v29, "runs");
    v23 = sub_222E220(a1, v29);
    sub_222B2A0(v23);
    sub_2229580(v23, &v30);
    if ( v29[0] )
      sub_100CA80((void **)v29[0]);
    sub_222B2A0(&v30);
  }
  return a1;
}
