__int64 __fastcall sub_1CA0920(
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
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // r13
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
  __int64 v43; // rdx
  const __m128i *v44; // [rsp+0h] [rbp-88h]
  __int32 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+20h] [rbp-68h]
  __int8 v49; // [rsp+24h] [rbp-64h]
  char v50; // [rsp+28h] [rbp-60h]
  __int16 v51; // [rsp+30h] [rbp-58h]
  __m128 v52; // [rsp+38h] [rbp-50h]
  char v53; // [rsp+48h] [rbp-40h]

  v12 = *(const __m128i **)(*a1 + 744);
  v13 = v12[4].m128i_i8[0] == 0;
  v44 = v12;
  v45 = v12[2].m128i_i32[0];
  v14 = v12[2].m128i_i64[1];
  v50 = 0;
  v46 = v14;
  if ( v13 )
  {
    v15 = (__int64)v12;
  }
  else
  {
    v48 = v12[3].m128i_u32[2];
    if ( v48 > 0x40 )
    {
      sub_2205510(&v47);
      v15 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v15 = (__int64)v12;
      v47 = v12[3].m128i_i64[0];
    }
    v16 = v12[3].m128i_i8[12];
    v50 = 1;
    v49 = v16;
  }
  v17 = v12[4].m128i_i16[4];
  v18 = (__m128)_mm_loadu_si128(v12 + 5);
  v53 = 1;
  v19 = *(_DWORD *)(a2 + 4);
  v51 = v17;
  v52 = v18;
  sub_1AA58B0(v15, v19);
  v27 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 8), 0, v18, a4, a5, a6, v23, v24, a9, a10, v20, v21, v22);
  if ( v27 == 1
    || (v42 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 16), v18, a4, v25, v26, v28),
        v42 == (unsigned __int16 *)((char *)&dword_0 + 1)) )
  {
    v29 = 1;
  }
  else
  {
    v29 = sub_1C3AA30(
            (__int64 *)*a1,
            *(_DWORD *)(a2 + 4),
            v27 & 0xFFFFFFFFFFFFFFFELL,
            *(_DWORD *)(a2 + 24),
            v18,
            a4,
            *(unsigned int *)(a2 + 24),
            (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFELL,
            *(_DWORD *)(a2 + 28));
  }
  if ( v53 )
  {
    v30 = v44[4].m128i_i8[8];
    v31 = v44[5].m128i_i8[12];
    v32 = (v44[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v30 = v51;
    v31 = v52.m128_i8[12];
    v32 = (v45 & 2) != 0;
  }
  v13 = v44[4].m128i_i8[0] == 0;
  v33 = v44 + 3;
  v44[2].m128i_i32[0] = v45;
  v44[2].m128i_i64[1] = v46;
  if ( v13 )
  {
    if ( !v50 )
      goto LABEL_16;
    v40 = v48;
    v44[3].m128i_i32[2] = v48;
    if ( v40 > 0x40 )
      sub_2205510(v33);
    else
      v44[3].m128i_i64[0] = v47;
    v36 = v44;
    v41 = v49;
    v44[4].m128i_i8[0] = 1;
    v44[3].m128i_i8[12] = v41;
  }
  else
  {
    v34 = v44[3].m128i_u32[2];
    if ( !v50 )
    {
      v44[4].m128i_i8[0] = 0;
      if ( v34 > 0x40 )
      {
        v35 = (void *)v44[3].m128i_i64[0];
        v36 = v44;
        if ( v35 )
        {
          operator delete[](v35);
          v36 = v44;
        }
        goto LABEL_17;
      }
LABEL_16:
      v36 = v44;
      goto LABEL_17;
    }
    if ( v34 <= 0x40 && v48 <= 0x40 )
    {
      v43 = v47;
      v44[3].m128i_i32[2] = v48;
      v36 = v44;
      v44[3].m128i_i64[0] = v43;
    }
    else
    {
      sub_22056A0(v33, &v47);
      v36 = v44;
    }
    v44[3].m128i_i8[12] = v49;
  }
LABEL_17:
  v44[4].m128i_i16[4] = v51;
  v36[5].m128i_i64[0] = v52.m128_u64[0];
  v36[5].m128i_i32[2] = v52.m128_i32[2];
  v37 = v52.m128_i16[6];
  v36[4].m128i_i8[8] = v30;
  v36[5].m128i_i16[6] = v37;
  LOBYTE(v37) = 2 * v32;
  v38 = v36[2].m128i_i8[0];
  v36[5].m128i_i8[12] = v31;
  v36[2].m128i_i8[0] = v37 | v38 & 0xFD;
  sub_98E4B0((__int64)&v47);
  return v29;
}
