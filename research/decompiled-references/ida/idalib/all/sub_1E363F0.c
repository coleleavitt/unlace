__int64 __fastcall sub_1E363F0(
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
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  __int8 v29; // r14
  __int8 v30; // r15
  bool v31; // bp
  const __m128i *v32; // rdi
  unsigned int v33; // eax
  void *v34; // rdi
  const __m128i *v35; // rax
  __int16 v36; // dx
  __int8 v37; // bp
  unsigned int v39; // eax
  __int8 v40; // dl
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  const __m128i *v45; // [rsp+0h] [rbp-88h]
  __int32 v46; // [rsp+8h] [rbp-80h]
  __int64 v47; // [rsp+10h] [rbp-78h]
  __int64 v48; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v49; // [rsp+20h] [rbp-68h]
  __int8 v50; // [rsp+24h] [rbp-64h]
  char v51; // [rsp+28h] [rbp-60h]
  __int16 v52; // [rsp+30h] [rbp-58h]
  __m128 v53; // [rsp+38h] [rbp-50h]
  char v54; // [rsp+48h] [rbp-40h]

  v10 = a2;
  v12 = *(const __m128i **)(*a1 + 744);
  v13 = v12[4].m128i_i8[0] == 0;
  v45 = v12;
  v46 = v12[2].m128i_i32[0];
  v14 = v12[2].m128i_i64[1];
  v51 = 0;
  v47 = v14;
  if ( v13 )
  {
    v15 = (__int64)v12;
  }
  else
  {
    v49 = v12[3].m128i_u32[2];
    if ( v49 > 0x40 )
    {
      sub_2205510(&v48);
      v15 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v15 = (__int64)v12;
      v48 = v12[3].m128i_i64[0];
    }
    v16 = v12[3].m128i_i8[12];
    v51 = 1;
    v50 = v16;
  }
  v17 = v12[4].m128i_i16[4];
  v18 = (__m128)_mm_loadu_si128(v12 + 5);
  v54 = 1;
  v19 = *(_DWORD *)(a2 + 4);
  v52 = v17;
  v53 = v18;
  sub_1AA58B0(v15, v19);
  v27 = sub_1E31000(a1, *(unsigned __int16 **)(v10 + 8), nullptr, v18, a4, a5, a6, v23, v24, a9, a10, v20, v21, v22);
  if ( v27 == 1 || (v41 = sub_1E11560(a1, *(unsigned __int16 **)(v10 + 16), v18, a4, v25, v26, v28), v41 == 1) )
  {
    v10 = 1;
  }
  else
  {
    v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
    v43 = v27 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v10 + 16) != v42 || *(_QWORD *)(v10 + 8) != v43 )
      v10 = sub_1C3AA30(
              (__int64 *)*a1,
              *(_DWORD *)(v10 + 4),
              v43,
              *(_DWORD *)(v10 + 24),
              v18,
              a4,
              *(unsigned int *)(v10 + 24),
              v42,
              *(_DWORD *)(v10 + 28));
  }
  if ( v54 )
  {
    v29 = v45[4].m128i_i8[8];
    v30 = v45[5].m128i_i8[12];
    v31 = (v45[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v29 = v52;
    v30 = v53.m128_i8[12];
    v31 = (v46 & 2) != 0;
  }
  v13 = v45[4].m128i_i8[0] == 0;
  v32 = v45 + 3;
  v45[2].m128i_i32[0] = v46;
  v45[2].m128i_i64[1] = v47;
  if ( v13 )
  {
    if ( !v51 )
      goto LABEL_16;
    v39 = v49;
    v45[3].m128i_i32[2] = v49;
    if ( v39 > 0x40 )
      sub_2205510(v32);
    else
      v45[3].m128i_i64[0] = v48;
    v35 = v45;
    v40 = v50;
    v45[4].m128i_i8[0] = 1;
    v45[3].m128i_i8[12] = v40;
  }
  else
  {
    v33 = v45[3].m128i_u32[2];
    if ( !v51 )
    {
      v45[4].m128i_i8[0] = 0;
      if ( v33 > 0x40 )
      {
        v34 = (void *)v45[3].m128i_i64[0];
        v35 = v45;
        if ( v34 )
        {
          operator delete[](v34);
          v35 = v45;
        }
        goto LABEL_17;
      }
LABEL_16:
      v35 = v45;
      goto LABEL_17;
    }
    if ( v33 <= 0x40 && v49 <= 0x40 )
    {
      v44 = v48;
      v45[3].m128i_i32[2] = v49;
      v35 = v45;
      v45[3].m128i_i64[0] = v44;
    }
    else
    {
      sub_22056A0(v32, &v48);
      v35 = v45;
    }
    v45[3].m128i_i8[12] = v50;
  }
LABEL_17:
  v45[4].m128i_i16[4] = v52;
  v35[5].m128i_i64[0] = v53.m128_u64[0];
  v35[5].m128i_i32[2] = v53.m128_i32[2];
  v36 = v53.m128_i16[6];
  v35[4].m128i_i8[8] = v29;
  v35[5].m128i_i16[6] = v36;
  LOBYTE(v36) = 2 * v31;
  v37 = v35[2].m128i_i8[0];
  v35[5].m128i_i8[12] = v30;
  v35[2].m128i_i8[0] = v36 | v37 & 0xFD;
  sub_98E4B0((__int64)&v48);
  return v10;
}
