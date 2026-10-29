__int64 __fastcall sub_171780(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __m128i v14; // xmm0
  __m128i v16; // [rsp+0h] [rbp-B8h] BYREF
  int v17; // [rsp+10h] [rbp-A8h]
  char v18; // [rsp+14h] [rbp-A4h]
  int v19; // [rsp+18h] [rbp-A0h] BYREF
  char v20; // [rsp+1Ch] [rbp-9Ch]
  char v21; // [rsp+1Dh] [rbp-9Bh]
  _DWORD v22[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  __int64 v27; // [rsp+50h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp-48h]
  unsigned __int64 v30; // [rsp+98h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  v16 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)));
  v22[0] = a1;
  LODWORD(v23) = 0;
  v13 = qalloc_or_throw();
  v22[1] = a2;
  sub_1713F0(v13, (__int64)v22);
  v14 = _mm_load_si128(&v16);
  v17 = -1;
  v18 = 0;
  *(__m128i *)(v13 + 16) = v14;
  get_xrefpos();
  v20 = 0;
  v19 = v17;
  v21 = v18;
  sub_1954F0(v22, v13, 0, 0);
  v23 = v13 + 184;
  sub_197BC0(v13, &v19, v22);
  if ( v28 )
  {
    v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    v25 = 0;
    qfree();
  }
  return sub_193680(*(void **)(v13 + 40), a7, a8, a9, a10, a11, a12, a13);
}

