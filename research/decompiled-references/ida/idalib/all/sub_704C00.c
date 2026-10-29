__m128i **__fastcall sub_704C00(
        __m128i **a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  __int64 v9; // rax
  __int64 v11; // rax
  _QWORD *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rcx
  __m128 v19; // xmm0
  unsigned __int64 v20; // xmm1_8
  volatile signed __int32 *v21; // rbp
  volatile signed __int32 *v22; // rdx
  signed __int32 v23; // eax
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 *i; // r15
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __m128i *v38; // rax
  __m128i v39; // xmm0
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128i *v48; // rdi
  bool v49; // zf
  _QWORD *v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  unsigned __int64 v56; // rbp
  __m128i *v57; // rax
  __m128i v58; // xmm0
  __m128i *v59; // rdi
  __int64 v60; // rax
  unsigned __int64 v61; // r15
  __int64 v62; // rax
  _QWORD *v63; // rbp
  char v64; // dl
  __int64 *v65; // rdi
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rcx
  __int64 v70; // [rsp+10h] [rbp-1068h]
  __m128i *v71; // [rsp+28h] [rbp-1050h] BYREF
  _BYTE v72[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v73; // [rsp+1038h] [rbp-40h]

  v9 = *(_QWORD *)(a3[1].m128i_i64[0] + 32);
  v73 = __readfsqword(0x28u);
  *(_BYTE *)(v9 + 1) &= ~2u;
  *(_DWORD *)(sub_A62AC0(a3[7].m128i_i64[0]) + 20) = 0;
  v11 = sub_A62AC0(a3[7].m128i_i64[0]);
  sub_FD0110(v11, 2563, 1, 0);
  v12 = (_QWORD *)a3[4].m128i_i64[1];
  sub_2230330(&v71, &byte_22F0C30, 0, a4, a5, 1);
  v13 = (int)sub_10270C0(v12, &v71, 0, 0, 0, 0);
  if ( v71 )
    (*(void (__fastcall **)(__m128i *))(v71->m128i_i64[0] + 8))(v71);
  v14 = sub_A62AC0(a3[7].m128i_i64[0]);
  LOBYTE(v71) = 0;
  v17 = v14;
  if ( (unsigned int)(v13 + 1) <= 1 )
    goto LABEL_4;
  if ( (int)v13 >= 0 )
  {
    v41 = v12[23] + 24 * v13;
    goto LABEL_28;
  }
  v61 = (unsigned int)(-2 - v13);
  v62 = *(_QWORD *)(v12[40] + 8LL * ((unsigned int)(-2 - v13) >> 6));
  if ( _bittest64(&v62, v61) )
  {
    v63 = (_QWORD *)(v12[34] + 8 * ((unsigned __int64)(int)v61 >> 5));
    if ( *v63 )
    {
      v41 = *v63 + 24 * (v61 & 0x1F);
      goto LABEL_28;
    }
    v65 = (__int64 *)(v12[36] & 0xFFFFFFFFFFFFFFF8LL);
    v66 = *v65;
    v65[10] += 768;
    v67 = (_QWORD *)((v66 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v65[1] >= (unsigned __int64)(v67 + 96) && v66 )
    {
      *v65 = (__int64)(v67 + 96);
      v64 = 0;
    }
    else
    {
      v67 = (_QWORD *)sub_6EF6D0((__int64)v65, 768, 3, v66, v15, v16);
      v64 = (char)v71;
    }
    *v63 = v67;
    v68 = v67 + 96;
    do
    {
      *v67 = 0;
      v67 += 3;
      *((_OWORD *)v67 - 1) = 0;
    }
    while ( v68 != v67 );
    v41 = *v63 + 24 * (v61 & 0x1F);
  }
  else
  {
    v41 = sub_101F930(v12, (unsigned int)v61, &v71);
    v64 = (char)v71;
  }
  if ( v64 || !v41 )
    goto LABEL_4;
LABEL_28:
  if ( *(char *)(v41 + 3) < 0 )
  {
LABEL_4:
    v18 = 0;
    goto LABEL_5;
  }
  v18 = *(_DWORD *)v41 & 0x7FFFFFFF;
LABEL_5:
  sub_FD0110(v17, 5516, 3, v18);
  *(_QWORD *)(*(_QWORD *)(a2 + 104) + 56LL) = a3;
  *(_BYTE *)(*(_QWORD *)a3[1].m128i_i64[0] + 21LL) &= ~2u;
  v70 = a3[7].m128i_i64[0];
  *(_QWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v70;
  v19 = (__m128)_mm_loadu_si128(a3 + 6);
  v20 = _mm_movehl_ps(a7, v19).m128_u64[0];
  if ( v20 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    else
      ++*(_DWORD *)(v20 + 8);
  }
  v21 = *(volatile signed __int32 **)(a2 + 128);
  *(__m128 *)(a2 + 120) = v19;
  if ( v21 )
  {
    v22 = v21 + 2;
    if ( *((_QWORD *)v21 + 1) == 0x100000001LL )
    {
      v60 = *(_QWORD *)v21;
      *((_QWORD *)v21 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v60 + 16))(v21, 5516, v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
      }
      else
      {
        v23 = *((_DWORD *)v21 + 2);
        *((_DWORD *)v21 + 2) = v23 - 1;
      }
      if ( v23 == 1 )
        sub_434350(v21);
    }
  }
  sub_6F3700(*(_QWORD *)(a2 + 104), (int)"=== Header search path\n");
  v24 = **(_QWORD **)(*(_QWORD *)(a2 + 120) + 104LL);
  v25 = *(__int64 **)(v24 + 40);
  for ( i = *(__int64 **)(v24 + 32); v25 != i; i += 5 )
  {
    v27 = *i;
    qmake_full_path(v72, 4096, v27);
    sub_6F3700(*(_QWORD *)(a2 + 104), (int)"  %s\n", v72);
  }
  v28 = *(_QWORD *)(a2 + 104);
  if ( (**(_QWORD **)(v28 + 8) & 0x800LL) == 0 )
  {
    v42 = operator new(0x38u);
    v43 = *(_QWORD *)(a2 + 104);
    *(_QWORD *)v42 = &off_2BFB670;
    *(_QWORD *)(v42 + 16) = v43;
    *(_QWORD *)(v42 + 8) = 0;
    *(_QWORD *)(v42 + 24) = 0;
    *(_BYTE *)(v42 + 48) = 0;
    *(_DWORD *)(v42 + 8) = v42 != 0;
    *(_OWORD *)(v42 + 32) = 0;
    v71 = (__m128i *)v42;
    sub_A5F5F0(v70, &v71);
    v48 = v71;
    if ( v71 )
    {
      v49 = v71->m128i_i32[2]-- == 1;
      if ( v49 )
        (*(void (__fastcall **)(__m128i *))(v48->m128i_i64[0] + 8))(v48);
    }
    v50 = sub_704780(
            (__int64 *)(*(_QWORD *)(*(_QWORD *)(v70 + 2264) + 80LL) + 72LL),
            *(_QWORD *)(*(_QWORD *)(v70 + 2264) + 80LL),
            v44,
            v45,
            v46,
            v47);
    v53 = *((unsigned __int8 *)v50 + 49);
    v54 = *((unsigned __int8 *)v50 + 49) | 1u;
    v49 = v50[5] == 0;
    *((_BYTE *)v50 + 49) |= 1u;
    if ( !v49 )
    {
      v53 = (unsigned int)v53 | 3;
      *((_BYTE *)v50 + 49) = v53;
    }
    v55 = sub_704780(
            (__int64 *)(*(_QWORD *)(*(_QWORD *)(v70 + 2264) + 80LL) + 72LL),
            *(_QWORD *)(*(_QWORD *)(v70 + 2264) + 80LL),
            v53,
            v54,
            v51,
            v52);
    *((_BYTE *)v55 + 48) |= 0x80u;
    v56 = *(_QWORD *)(v70 + 18360);
    v57 = (__m128i *)operator new(0x20u);
    v58 = _mm_loadl_epi64((const __m128i *)(a2 + 104));
    v57->m128i_i64[1] = 0;
    *(_BYTE *)(v56 + 48) = 1;
    v57->m128i_i64[0] = (__int64)&off_2BFB770;
    v71 = v57;
    v57[1] = _mm_unpacklo_epi64(v58, (__m128i)v56);
    if ( v57 )
      ++v57->m128i_i32[2];
    sub_12EA380(a3, &v71);
    v59 = v71;
    if ( v71 )
    {
      v49 = v71->m128i_i32[2]-- == 1;
      if ( v49 )
        (*(void (__fastcall **)(__m128i *))(v59->m128i_i64[0] + 8))(v59);
    }
    sub_FBE4E0(
      *(_QWORD *)(*(_QWORD *)(a2 + 120) + 688LL),
      *(_QWORD *)(a2 + 120) + 552LL,
      *(_QWORD *)(*(_QWORD *)(a2 + 120) + 56LL));
    v28 = *(_QWORD *)(a2 + 104);
  }
  if ( *(_QWORD *)(v28 + 480) || *(_QWORD *)(v28 + 512) || *(_QWORD *)(v28 + 544) )
  {
    v29 = *(_QWORD *)(a2 + 120);
    v30 = operator new(0x28u);
    v31 = *(_QWORD *)(a2 + 104);
    *(_QWORD *)v30 = &off_2BFB9D8;
    *(_QWORD *)(v30 + 8) = 0;
    *(_QWORD *)(v30 + 32) = v31;
    *(_OWORD *)(v30 + 16) = 0;
    if ( *(_QWORD *)(v29 + 1192) )
    {
      v32 = (_QWORD *)operator new(0x18u);
      v71 = *(__m128i **)(v29 + 1192);
      *(_QWORD *)(v29 + 1192) = 0;
      v32[1] = v30;
      *v32 = &off_2BB2860;
      v32[2] = v71;
      v33 = *(_QWORD *)(v29 + 1192);
      *(_QWORD *)(v29 + 1192) = v32;
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    }
    else
    {
      *(_QWORD *)(v29 + 1192) = v30;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 104) + 544LL) )
    {
      v34 = operator new(0x30u);
      v35 = *(_QWORD *)(a2 + 104);
      v36 = v34;
      strcpy((char *)(v34 + 24), "tilib_group");
      v37 = *(_QWORD *)(a2 + 112);
      *(_QWORD *)(v34 + 8) = v34 + 24;
      *(_QWORD *)(v34 + 16) = 11;
      *(_QWORD *)v34 = &off_2B37F90;
      *(_QWORD *)(v34 + 40) = v35;
      *(_QWORD *)(a2 + 112) = v34;
      if ( v37 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
        v36 = *(_QWORD *)(a2 + 112);
      }
      sub_1455F40(*(_QWORD *)(a2 + 120), 0, 0, v36);
    }
  }
  v38 = (__m128i *)operator new(0x20u);
  v39 = _mm_loadl_epi64((const __m128i *)(a2 + 104));
  v38->m128i_i8[8] = 0;
  v38->m128i_i64[0] = (__int64)off_2BFB920;
  *a1 = v38;
  v38[1] = _mm_unpacklo_epi64(v39, v39);
  return a1;
}
