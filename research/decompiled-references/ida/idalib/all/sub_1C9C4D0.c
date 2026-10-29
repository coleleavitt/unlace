__int64 __fastcall sub_1C9C4D0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  const __m128i *v16; // r13
  __int32 v17; // eax
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdi
  __int16 v21; // ax
  unsigned int v22; // esi
  __m128 v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __m128i v32; // xmm1
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  const __m128i *v35; // rbx
  __int8 v36; // r14
  __int8 v37; // r15
  bool v38; // bp
  const __m128i *v39; // rdi
  unsigned int v40; // eax
  void *v41; // rdi
  const __m128i *v42; // rdx
  char v43; // cl
  __int8 v44; // bp
  __int16 v45; // ax
  __int8 v46; // al
  unsigned int v47; // eax
  __int8 v48; // al
  __int64 v49; // rdx
  __m128i v50; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+10h] [rbp-B8h]
  __m128i v52; // [rsp+20h] [rbp-A8h]
  __int64 v53; // [rsp+30h] [rbp-98h]
  const __m128i *v54; // [rsp+40h] [rbp-88h]
  __int32 v55; // [rsp+48h] [rbp-80h]
  __int64 v56; // [rsp+50h] [rbp-78h]
  __int64 v57; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-68h]
  __int8 v59; // [rsp+64h] [rbp-64h]
  char v60; // [rsp+68h] [rbp-60h]
  __int16 v61; // [rsp+70h] [rbp-58h]
  __m128 v62; // [rsp+78h] [rbp-50h]
  char v63; // [rsp+88h] [rbp-40h]

  v10 = 1;
  v13 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v14 = sub_EEE170(a2);
  sub_1C7D6B0((__int64)&v50, a1, *(unsigned int *)(a2 + 4), v14, v13, 0, a3, a4);
  if ( !(_BYTE)v51 )
  {
    v16 = *(const __m128i **)(*a1 + 744);
    v17 = v16[2].m128i_i32[0];
    v18 = v16[4].m128i_i8[0] == 0;
    v54 = v16;
    v55 = v17;
    v19 = v16[2].m128i_i64[1];
    v60 = 0;
    v56 = v19;
    if ( v18 )
    {
      v20 = (__int64)v16;
    }
    else
    {
      v58 = v16[3].m128i_u32[2];
      if ( v58 > 0x40 )
      {
        sub_2205510(&v57);
        v20 = *(_QWORD *)(*a1 + 744);
      }
      else
      {
        v20 = (__int64)v16;
        v57 = v16[3].m128i_i64[0];
      }
      v46 = v16[3].m128i_i8[12];
      v60 = 1;
      v59 = v46;
    }
    v21 = v16[4].m128i_i16[4];
    v22 = *(_DWORD *)(a2 + 4);
    v63 = 1;
    v23 = (__m128)_mm_loadu_si128(v16 + 5);
    v10 = 1;
    v61 = v21;
    v62 = v23;
    sub_1AA56C0(v20, v22);
    v29 = sub_1C9AFD0(
            a1,
            *(_WORD **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
            0,
            v23,
            a4,
            a5,
            a6,
            v27,
            v28,
            a9,
            a10,
            v24,
            v25,
            v26);
    if ( v29 != 1 )
    {
      v31 = *(unsigned int *)(a2 + 12);
      v32 = _mm_load_si128(&v50);
      v33 = *(unsigned int *)(a2 + 8);
      v53 = v51;
      v34 = *(unsigned int *)(a2 + 4);
      v52 = v32;
      v10 = sub_1C3AC70(
              *a1,
              v34,
              v33,
              v31,
              v29 & 0xFFFFFFFFFFFFFFFELL,
              *(double *)v23.m128_u64,
              v30,
              v32.m128i_i64[0],
              v32.m128i_i64[1],
              v51);
    }
    v35 = v54;
    if ( v63 )
    {
      v36 = v54[4].m128i_i8[8];
      v37 = v54[5].m128i_i8[12];
      v38 = (v54[2].m128i_i8[0] & 2) != 0;
    }
    else
    {
      v36 = v61;
      v37 = v62.m128_i8[12];
      v38 = (v55 & 2) != 0;
    }
    v18 = v54[4].m128i_i8[0] == 0;
    v39 = v54 + 3;
    v54[2].m128i_i32[0] = v55;
    v35[2].m128i_i64[1] = v56;
    if ( v18 )
    {
      if ( v60 )
      {
        v47 = v58;
        v35[3].m128i_i32[2] = v58;
        if ( v47 > 0x40 )
        {
          sub_2205510(v39);
          v42 = v54;
        }
        else
        {
          v42 = v35;
          v35[3].m128i_i64[0] = v57;
        }
        v48 = v59;
        v35[4].m128i_i8[0] = 1;
        v35[3].m128i_i8[12] = v48;
        goto LABEL_14;
      }
    }
    else
    {
      v40 = v35[3].m128i_u32[2];
      if ( v60 )
      {
        if ( v40 <= 0x40 && v58 <= 0x40 )
        {
          v49 = v57;
          v35[3].m128i_i32[2] = v58;
          v35[3].m128i_i64[0] = v49;
          v42 = v35;
        }
        else
        {
          sub_22056A0(v39, &v57);
          v42 = v54;
        }
        v35[3].m128i_i8[12] = v59;
        goto LABEL_14;
      }
      v35[4].m128i_i8[0] = 0;
      if ( v40 > 0x40 )
      {
        v41 = (void *)v35[3].m128i_i64[0];
        v42 = v35;
        if ( v41 )
        {
          operator delete[](v41);
          v42 = v54;
        }
        goto LABEL_14;
      }
    }
    v42 = v35;
LABEL_14:
    v43 = 2 * v38;
    v35[4].m128i_i16[4] = v61;
    v44 = v42[2].m128i_i8[0];
    v42[5].m128i_i64[0] = v62.m128_u64[0];
    v42[5].m128i_i32[2] = v62.m128_i32[2];
    v45 = v62.m128_i16[6];
    v42[4].m128i_i8[8] = v36;
    v42[5].m128i_i16[6] = v45;
    v42[2].m128i_i8[0] = v43 | v44 & 0xFD;
    v42[5].m128i_i8[12] = v37;
    sub_98E4B0((__int64)&v57);
  }
  return v10;
}
