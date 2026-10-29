/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C480
// Address: 0x000000000041C480

//----- (000000000041C480) ----------------------------------------------------
void __fastcall sub_41C480(
        __int64 a1,
        signed int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  __int64 v16; // rax
  __int64 v18; // rdi
  int v19; // r12d
  __int64 v20; // rsi
  __int64 v21; // rax
  __m128i v22; // xmm0
  _QWORD *v23; // rdi
  unsigned __int64 v24; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+10h] [rbp-68h]
  __int128 v27; // [rsp+18h] [rbp-60h]
  __int128 v28; // [rsp+28h] [rbp-50h]
  __int128 v29; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v16 = *(_QWORD *)(a1 + 1224);
  v30 = __readfsqword(0x28u);
  if ( !v16 )
    goto LABEL_8;
  v18 = a1 + 1216;
  v19 = a3;
  v20 = v18;
  do
  {
    while ( 1 )
    {
      a4 = *(_QWORD *)(v16 + 16);
      a3 = *(_QWORD *)(v16 + 24);
      if ( *(_DWORD *)(v16 + 32) < a2 )
        break;
      v20 = v16;
      v16 = *(_QWORD *)(v16 + 16);
      if ( !a4 )
        goto LABEL_6;
    }
    v16 = *(_QWORD *)(v16 + 24);
  }
  while ( a3 );
LABEL_6:
  if ( v18 != v20 && *(_DWORD *)(v20 + 32) <= a2 )
  {
    *(_DWORD *)(v20 + 60) = v19;
    v27 = 0;
    v25 = -1;
    v24 = 0xFFFFFFFFLL;
    v26 = 0;
    v28 = 0;
    v29 = 0;
    sub_4787B0((__int64)&v24, 4);
    if ( (((HIDWORD(v26) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
      sub_40D8E0();
    v21 = *(_QWORD *)(a1 + 184);
    v22 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
    LODWORD(v27) = 0;
    v23 = *(_QWORD **)(a1 + 168);
    LOBYTE(v26) = 1;
    v25 = -1;
    v24 = _mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(a2)).m128i_u64[0];
    if ( v23 == (_QWORD *)(v21 - 72) )
    {
      sub_41C280((_QWORD *)(a1 + 120), (__int64)&v24);
    }
    else
    {
      *v23 = 0xFFFFFFFFLL;
      v23[1] = -1;
      v23[2] = 0;
      sub_4788F0((__int64)v23, (__int64)&v24);
      *(_QWORD *)(a1 + 168) += 72LL;
    }
    *(_BYTE *)(a1 + 1412) = 0;
    if ( v19 == 3 )
      sub_414340(a1, a2);
    sub_478720((__int64)&v24);
  }
  else
  {
LABEL_8:
    sub_410EA0(
      (int)"unknown thread %d died\n",
      (unsigned int)a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15);
  }
}
