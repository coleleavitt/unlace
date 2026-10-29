__int64 __fastcall sub_1DAE020(
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
  unsigned __int16 *v13; // r12
  unsigned __int64 v14; // rax
  __m128i v16; // kr00_16
  const __m128i *v17; // r15
  __int32 v18; // eax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdi
  __int16 v22; // ax
  unsigned int v23; // esi
  __m128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdi
  unsigned __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  const __m128i *v39; // rbx
  __int8 v40; // r14
  __int8 v41; // r15
  bool v42; // bp
  const __m128i *v43; // rdi
  unsigned int v44; // eax
  void *v45; // rdi
  const __m128i *v46; // rdx
  char v47; // cl
  __int8 v48; // bp
  __int16 v49; // ax
  __int8 v50; // al
  unsigned int v51; // eax
  __int8 v52; // al
  __int64 v53; // rdx
  unsigned __int64 v54; // [rsp+8h] [rbp-D0h]
  __m128i v55; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+20h] [rbp-B8h]
  __m128i v57; // [rsp+30h] [rbp-A8h]
  __int64 v58; // [rsp+40h] [rbp-98h]
  const __m128i *v59; // [rsp+50h] [rbp-88h]
  __int32 v60; // [rsp+58h] [rbp-80h]
  __int64 v61; // [rsp+60h] [rbp-78h]
  __int64 v62; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-68h]
  __int8 v64; // [rsp+74h] [rbp-64h]
  char v65; // [rsp+78h] [rbp-60h]
  __int16 v66; // [rsp+80h] [rbp-58h]
  __m128 v67; // [rsp+88h] [rbp-50h]
  char v68; // [rsp+98h] [rbp-40h]

  v10 = 1;
  v13 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v14 = sub_EEE170(a2);
  sub_1D8B7D0((__int64)&v55, a1, *(unsigned int *)(a2 + 4), v14, v13, 0, a3, a4);
  if ( !(_BYTE)v56 )
  {
    v16 = v55;
    v17 = *(const __m128i **)(*a1 + 744);
    v18 = v17[2].m128i_i32[0];
    v19 = v17[4].m128i_i8[0] == 0;
    v59 = v17;
    v60 = v18;
    v20 = v17[2].m128i_i64[1];
    v65 = 0;
    v61 = v20;
    if ( v19 )
    {
      v21 = (__int64)v17;
    }
    else
    {
      v63 = v17[3].m128i_u32[2];
      if ( v63 > 0x40 )
      {
        sub_2205510(&v62);
        v21 = *(_QWORD *)(*a1 + 744);
      }
      else
      {
        v21 = (__int64)v17;
        v62 = v17[3].m128i_i64[0];
      }
      v50 = v17[3].m128i_i8[12];
      v65 = 1;
      v64 = v50;
    }
    v22 = v17[4].m128i_i16[4];
    v23 = *(_DWORD *)(a2 + 4);
    v68 = 1;
    v24 = (__m128)_mm_loadu_si128(v17 + 5);
    v66 = v22;
    v67 = v24;
    sub_1AA56C0(v21, v23);
    v30 = sub_1DAD2E0(
            a1,
            *(unsigned __int16 **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
            nullptr,
            v24,
            a4,
            a5,
            a6,
            v28,
            v29,
            a9,
            a10,
            v25,
            v26,
            v27);
    if ( v30 == 1 )
    {
      v10 = 1;
    }
    else
    {
      v32 = *a1;
      v33 = v30 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        v54 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v34 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
        v35 = sub_EEE170(a2);
        v33 = v54;
        if ( v34 == (v16.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL) && v35 == v16.m128i_i64[0] )
        {
          v10 = a2;
          if ( *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16) == v54 )
            goto LABEL_11;
        }
        v32 = *a1;
      }
      v36 = *(unsigned int *)(a2 + 12);
      v37 = *(unsigned int *)(a2 + 8);
      v57 = _mm_load_si128(&v55);
      v38 = *(unsigned int *)(a2 + 4);
      v58 = v56;
      v10 = sub_1C3AC70(v32, v38, v37, v36, v33, *(double *)v24.m128_u64, v31, v57.m128i_i64[0], v57.m128i_i64[1], v56);
    }
LABEL_11:
    v39 = v59;
    if ( v68 )
    {
      v40 = v59[4].m128i_i8[8];
      v41 = v59[5].m128i_i8[12];
      v42 = (v59[2].m128i_i8[0] & 2) != 0;
    }
    else
    {
      v40 = v66;
      v41 = v67.m128_i8[12];
      v42 = (v60 & 2) != 0;
    }
    v19 = v59[4].m128i_i8[0] == 0;
    v43 = v59 + 3;
    v59[2].m128i_i32[0] = v60;
    v39[2].m128i_i64[1] = v61;
    if ( v19 )
    {
      if ( v65 )
      {
        v51 = v63;
        v39[3].m128i_i32[2] = v63;
        if ( v51 > 0x40 )
        {
          sub_2205510(v43);
          v46 = v59;
        }
        else
        {
          v46 = v39;
          v39[3].m128i_i64[0] = v62;
        }
        v52 = v64;
        v39[4].m128i_i8[0] = 1;
        v39[3].m128i_i8[12] = v52;
        goto LABEL_18;
      }
    }
    else
    {
      v44 = v39[3].m128i_u32[2];
      if ( v65 )
      {
        if ( v44 <= 0x40 && v63 <= 0x40 )
        {
          v53 = v62;
          v39[3].m128i_i32[2] = v63;
          v39[3].m128i_i64[0] = v53;
          v46 = v39;
        }
        else
        {
          sub_22056A0(v43, &v62);
          v46 = v59;
        }
        v39[3].m128i_i8[12] = v64;
        goto LABEL_18;
      }
      v39[4].m128i_i8[0] = 0;
      if ( v44 > 0x40 )
      {
        v45 = (void *)v39[3].m128i_i64[0];
        v46 = v39;
        if ( v45 )
        {
          operator delete[](v45);
          v46 = v59;
        }
        goto LABEL_18;
      }
    }
    v46 = v39;
LABEL_18:
    v47 = 2 * v42;
    v39[4].m128i_i16[4] = v66;
    v48 = v46[2].m128i_i8[0];
    v46[5].m128i_i64[0] = v67.m128_u64[0];
    v46[5].m128i_i32[2] = v67.m128_i32[2];
    v49 = v67.m128_i16[6];
    v46[4].m128i_i8[8] = v40;
    v46[5].m128i_i16[6] = v49;
    v46[2].m128i_i8[0] = v47 | v48 & 0xFD;
    v46[5].m128i_i8[12] = v41;
    sub_98E4B0((__int64)&v62);
  }
  return v10;
}
