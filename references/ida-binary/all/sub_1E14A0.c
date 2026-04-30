unsigned __int64 __fastcall sub_1E14A0(QT::QWidget *this, const char *a2, __int64 a3, __int64 a4, char a5)
{
  const char *v5; // r15
  char *v7; // r13
  _QWORD *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  __m128i v13; // xmm0
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rax
  int v20; // [rsp+2Ch] [rbp-7Ch] BYREF
  __int64 v21; // [rsp+30h] [rbp-78h] BYREF
  __int128 v22; // [rsp+38h] [rbp-70h]
  _BYTE v23[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v5 = ")";
  v7 = (char *)this + 40;
  v24 = __readfsqword(0x28u);
  sub_1F2240(this);
  v9 = (_QWORD *)sub_178210((__int64)a2, a3 + 8, (__int64)this);
  sub_209270(this, a2, v9);
  v21 = 0;
  v22 = 0;
  do
  {
    v10 = sub_524F80(v7, *((unsigned int *)v5 + 1), 0);
    sub_209180(a2, v9, &v21, *(unsigned __int8 *)v5, v10);
    v5 += 8;
  }
  while ( v5 != "10sync_pos_t" );
  if ( a5 )
  {
    sub_1E1330((__int64)v23, (__int64)this, 0);
    v20 = -1;
    v11 = sub_1E0C20((__int64)v23, (__int64)this + 1000, &v20);
    v12 = v20;
    v13 = _mm_cvtsi32_si128(v11);
    if ( v20 != -1 )
    {
      v15 = v9[21];
      v16 = v9[20];
      if ( v9[22] < (unsigned __int64)(v15 + 1) )
      {
        v18 = qvector_reserve(v9 + 20, v16, v15 + 1, 16);
        v9[20] = v18;
        v16 = v18;
        v13 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v13));
        v15 = v9[21];
      }
      v17 = v16 + 16 * v15;
      *(_QWORD *)v17 = -1;
      *(_DWORD *)(v17 + 8) = -1;
      *(_BYTE *)(v17 + 12) = 0;
      ++v9[21];
      *(_QWORD *)v17 = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v12)).m128i_u64[0];
      *(_DWORD *)(v17 + 8) = sub_524F80(v7, 2165563982LL, 0);
      *(_BYTE *)(v17 + 12) = 1;
    }
  }
  sub_1F2240(this);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, a2);
  }
  return v24 - __readfsqword(0x28u);
}
