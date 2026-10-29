__int64 __fastcall sub_1DFBD90(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // r12
  const __m128i *v12; // rbx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int8 v16; // al
  __int16 v17; // ax
  __m128 v18; // xmm0
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm4_8
  double v24; // xmm5_8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int8 v30; // r14
  __int8 v31; // r15
  bool v32; // bp
  const __m128i *v33; // rdi
  unsigned int v34; // eax
  void *v35; // rdi
  const __m128i *v36; // rax
  __int16 v37; // dx
  __int8 v38; // bp
  unsigned int v40; // eax
  __int8 v41; // dl
  unsigned __int16 *v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  const __m128i *v46; // [rsp+0h] [rbp-88h]
  __int32 v47; // [rsp+8h] [rbp-80h]
  __int64 v48; // [rsp+10h] [rbp-78h]
  __int64 v49; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+20h] [rbp-68h]
  __int8 v51; // [rsp+24h] [rbp-64h]
  char v52; // [rsp+28h] [rbp-60h]
  __int16 v53; // [rsp+30h] [rbp-58h]
  __m128 v54; // [rsp+38h] [rbp-50h]
  char v55; // [rsp+48h] [rbp-40h]

  v10 = a2;
  v12 = *(const __m128i **)(*a1 + 744);
  v13 = v12[4].m128i_i8[0] == 0;
  v46 = v12;
  v47 = v12[2].m128i_i32[0];
  v14 = v12[2].m128i_i64[1];
  v52 = 0;
  v48 = v14;
  if ( v13 )
  {
    v15 = (__int64)v12;
  }
  else
  {
    v50 = v12[3].m128i_u32[2];
    if ( v50 > 0x40 )
    {
      sub_2205510(&v49);
      v15 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v15 = (__int64)v12;
      v49 = v12[3].m128i_i64[0];
    }
    v16 = v12[3].m128i_i8[12];
    v52 = 1;
    v51 = v16;
  }
  v17 = v12[4].m128i_i16[4];
  v18 = (__m128)_mm_loadu_si128(v12 + 5);
  v55 = 1;
  v19 = *(_DWORD *)(a2 + 4);
  v53 = v17;
  v54 = v18;
  sub_1AA58B0(v15, v19);
  v27 = sub_1DF6720(a1, *(_WORD **)(v10 + 8), nullptr, v18, a4, a5, a6, v23, v24, a9, a10, v20, v21, v22);
  if ( v27 == 1
    || (v42 = sub_1DC71F0(a1, *(_QWORD *)(v10 + 16), v25, v26, v28, v29, v18, a4),
        v42 == (unsigned __int16 *)((char *)&dword_0 + 1)) )
  {
    v10 = 1;
  }
  else
  {
    v43 = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFELL;
    v44 = v27 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v10 + 16) != v43 || *(_QWORD *)(v10 + 8) != v44 )
      v10 = sub_1C3AA30(
              (__int64 *)*a1,
              *(_DWORD *)(v10 + 4),
              v44,
              *(_DWORD *)(v10 + 24),
              v18,
              a4,
              *(unsigned int *)(v10 + 24),
              v43,
              *(_DWORD *)(v10 + 28));
  }
  if ( v55 )
  {
    v30 = v46[4].m128i_i8[8];
    v31 = v46[5].m128i_i8[12];
    v32 = (v46[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v30 = v53;
    v31 = v54.m128_i8[12];
    v32 = (v47 & 2) != 0;
  }
  v13 = v46[4].m128i_i8[0] == 0;
  v33 = v46 + 3;
  v46[2].m128i_i32[0] = v47;
  v46[2].m128i_i64[1] = v48;
  if ( v13 )
  {
    if ( !v52 )
      goto LABEL_16;
    v40 = v50;
    v46[3].m128i_i32[2] = v50;
    if ( v40 > 0x40 )
      sub_2205510(v33);
    else
      v46[3].m128i_i64[0] = v49;
    v36 = v46;
    v41 = v51;
    v46[4].m128i_i8[0] = 1;
    v46[3].m128i_i8[12] = v41;
  }
  else
  {
    v34 = v46[3].m128i_u32[2];
    if ( !v52 )
    {
      v46[4].m128i_i8[0] = 0;
      if ( v34 > 0x40 )
      {
        v35 = (void *)v46[3].m128i_i64[0];
        v36 = v46;
        if ( v35 )
        {
          operator delete[](v35);
          v36 = v46;
        }
        goto LABEL_17;
      }
LABEL_16:
      v36 = v46;
      goto LABEL_17;
    }
    if ( v34 <= 0x40 && v50 <= 0x40 )
    {
      v45 = v49;
      v46[3].m128i_i32[2] = v50;
      v36 = v46;
      v46[3].m128i_i64[0] = v45;
    }
    else
    {
      sub_22056A0(v33, &v49);
      v36 = v46;
    }
    v46[3].m128i_i8[12] = v51;
  }
LABEL_17:
  v46[4].m128i_i16[4] = v53;
  v36[5].m128i_i64[0] = v54.m128_u64[0];
  v36[5].m128i_i32[2] = v54.m128_i32[2];
  v37 = v54.m128_i16[6];
  v36[4].m128i_i8[8] = v30;
  v36[5].m128i_i16[6] = v37;
  LOBYTE(v37) = 2 * v32;
  v38 = v36[2].m128i_i8[0];
  v36[5].m128i_i8[12] = v31;
  v36[2].m128i_i8[0] = v37 | v38 & 0xFD;
  sub_98E4B0((__int64)&v49);
  return v10;
}
