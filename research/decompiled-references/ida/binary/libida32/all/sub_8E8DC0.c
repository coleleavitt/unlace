unsigned __int64 __fastcall sub_8E8DC0(
        unsigned int *a1,
        const __m128i *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8,
        unsigned __int64 a9)
{
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __m128i v19; // xmm0
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __m128i v25; // xmm1
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]

  v13 = a9;
  v14 = 1LL << *a1;
  if ( v14 > a7 )
    v14 = a7;
  if ( !v14 )
    v14 = 1;
  if ( !a9 )
    v13 = 0x20000;
  if ( v14 > v13 )
    v14 = v13;
  if ( a1[4] == 3 || (v15 = 4, a8) )
    v15 = 3;
  v34 = (8 * (v14 / v15) + 63) & 0xFFFFFFFFFFFFFFC0LL;
  v16 = 3 * (v14 / v15);
  if ( v15 > v14 )
    v16 = 0;
  v17 = 0;
  v18 = sub_8E6480(a1, a4, 0, 1);
  v19 = _mm_loadu_si128(a2);
  v35 = v18;
  v24 = sub_934740((_DWORD)a1, a4, v20, v21, v22, v23, v19.m128i_i64[0], v19.m128i_i32[2]);
  v25 = _mm_loadu_si128(a2);
  v36 = v24;
  v30 = sub_934780(v14, a4, v26, v27, v28, v29, v25.m128i_i32[0], v25.m128i_i32[2]);
  if ( a2->m128i_i32[0] == 1 )
    v17 = (12 * v30 + 63) & 0xFFFFFFFFFFFFFFC0LL;
  v31 = sub_8E8DA0(v14);
  v32 = 0;
  if ( a8 )
    v32 = (16 * v31 + 63) & 0xFFFFFFFFFFFFFFC0LL;
  return v32 + (a3 != 0 ? 0x1488 : 0) + v17 + v36 + v35 + v16 + v34 + v14 + a5 + a6 + 20216;
}

