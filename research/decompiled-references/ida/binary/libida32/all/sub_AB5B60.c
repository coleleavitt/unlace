void __fastcall sub_AB5B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // cl
  __int64 v7; // rbp
  unsigned __int16 v8; // dx
  __int64 *v9; // rbx
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm6
  __m128i v16; // xmm7
  __m128i *v17; // rdx
  void (__fastcall *v18)(__m128i *, __m128i *, __int64); // rax
  __m128i *v19; // rdi
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm5
  __m128i *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm6
  __m128i v35; // xmm7
  __m128i *v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // r9
  __m128d v39; // xmm3
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rdi
  void (__fastcall *v46)(__int64, __int64, __int64); // rax
  __int64 v47; // rax
  _BYTE *v48; // rax
  __m128d v49; // [rsp+0h] [rbp-158h]
  int v50; // [rsp+1Ch] [rbp-13Ch]
  __int64 v51; // [rsp+20h] [rbp-138h]
  __int64 v52; // [rsp+28h] [rbp-130h]
  __int64 *v53; // [rsp+30h] [rbp-128h]
  __m128i v54; // [rsp+40h] [rbp-118h] BYREF
  __m128i v55; // [rsp+50h] [rbp-108h] BYREF
  __m128i v56; // [rsp+60h] [rbp-F8h] BYREF
  __m128 v57; // [rsp+70h] [rbp-E8h]
  __int64 v58; // [rsp+80h] [rbp-D8h]
  __m128i v59; // [rsp+88h] [rbp-D0h] BYREF
  __m128i v60; // [rsp+98h] [rbp-C0h] BYREF
  void *v61; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-A8h]
  __m128i v63; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v65; // [rsp+D8h] [rbp-80h] BYREF
  __m128i v66; // [rsp+E8h] [rbp-70h] BYREF
  void *v67; // [rsp+F8h] [rbp-60h]
  __int64 v68; // [rsp+100h] [rbp-58h]
  __m128i v69[5]; // [rsp+108h] [rbp-50h] BYREF

  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    sub_AAE4E0(a1 + 8, 0, 0, *(_QWORD *)(a2 + 32), a1, a6);
    sub_AB4A40(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
  }
  else
  {
    sub_AB4A40(a1, **(_QWORD **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32));
  }
  v50 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
  v6 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v7 = 0;
  v8 = *(_WORD *)(a2 + 16) & 0x7FFF;
  v9 = (__int64 *)(a2 + 8LL * v6 + 32);
  v51 = a2 + 8LL * (unsigned __int16)(v8 + v6) + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0) + 32;
  v53 = &v9[v8];
  v52 = a1 + 8;
  while ( v53 != v9 )
  {
    while ( 1 )
    {
      v54.m128i_i64[0] = a1;
      v20 = *v9;
      v55.m128i_i8[8] = v50 == (_DWORD)v7;
      v21 = *(_BYTE *)(a1 + 1064) == 0;
      v22 = *(_QWORD *)(v51 + 8 * v7);
      v54.m128i_i64[1] = v20;
      v55.m128i_i64[0] = v22;
      if ( v21 )
        break;
      *(_BYTE *)(a1 + 1064) = 0;
      sub_F06920(v52, &v54.m128i_u64[1]);
      if ( v55.m128i_i64[0] )
        sub_AB4A40(v54.m128i_i64[0], *(_QWORD *)v55.m128i_i64[0]);
      v39 = (__m128d)_mm_load_si128(&v54);
      v49 = _mm_shuffle_pd(v39, v39, 1);
      sub_AAE4E0(v54.m128i_i64[0] + 8, 0, 0, *(__int64 *)&v49.m128d_f64[0], *(__int64 *)&v49.m128d_f64[1], v38);
      v40 = *(unsigned int *)(a1 + 32);
      if ( (_DWORD)v40 )
      {
        v41 = *(_QWORD *)(a1 + 24);
        LOBYTE(v64) = 1;
        v42 = v41 + 32 * v40 - 32;
        if ( !*(_QWORD *)(v42 + 16) )
LABEL_41:
          std::__throw_bad_function_call();
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v42 + 24))(v42, &v64);
          v44 = (unsigned int)(*(_DWORD *)(a1 + 32) - 1);
          *(_DWORD *)(a1 + 32) = v44;
          v45 = *(_QWORD *)(a1 + 24) + 32 * v44;
          v46 = *(void (__fastcall **)(__int64, __int64, __int64))(v45 + 16);
          if ( v46 )
            v46(v45, v45, 3);
          v47 = *(unsigned int *)(a1 + 32);
          if ( !(_DWORD)v47 )
            break;
          v43 = *(_QWORD *)(a1 + 24);
          LOBYTE(v64) = 1;
          v42 = v43 + 32 * v47 - 32;
          if ( !*(_QWORD *)(v42 + 16) )
            goto LABEL_41;
        }
      }
      v48 = *(_BYTE **)(a1 + 1072);
      ++v7;
      ++v9;
      *(_QWORD *)(a1 + 1080) = 0;
      *v48 = 0;
      sub_971800(*(_QWORD *)(a1 + 8), "\n");
      *(_BYTE *)(a1 + 1064) = 1;
      if ( v53 == v9 )
        return;
    }
    v23 = _mm_load_si128(&v54);
    v24 = _mm_load_si128(&v55);
    v58 = v52;
    v59 = v23;
    v60 = v24;
    v61 = &v63;
    sub_AA6CE0(&v61, &byte_22CD811, (__int64)&byte_22CD811);
    if ( *(_BYTE *)(a1 + 1065) )
    {
      v67 = v69;
      v11 = _mm_loadu_si128(&v59);
      v12 = _mm_loadu_si128(&v60);
      v64 = v58;
      v65 = v11;
      v66 = v12;
      if ( v61 == &v63 )
      {
        v69[0] = _mm_loadu_si128(&v63);
      }
      else
      {
        v67 = v61;
        v69[0].m128i_i64[0] = v63.m128i_i64[0];
      }
      v13 = v62;
      v62 = 0;
      v63.m128i_i8[0] = 0;
      v68 = v13;
      v61 = &v63;
      v57.m128_u64[0] = 0;
      v14 = operator new(0x48u);
      v15 = _mm_loadu_si128(&v65);
      v16 = _mm_loadu_si128(&v66);
      *(_QWORD *)v14 = v64;
      *(_QWORD *)(v14 + 40) = v14 + 56;
      v17 = (__m128i *)v67;
      *(__m128i *)(v14 + 8) = v15;
      *(__m128i *)(v14 + 24) = v16;
      if ( v17 == v69 )
      {
        *(__m128i *)(v14 + 56) = _mm_loadu_si128(v69);
      }
      else
      {
        *(_QWORD *)(v14 + 40) = v17;
        *(_QWORD *)(v14 + 56) = v69[0].m128i_i64[0];
      }
      v56.m128i_i64[0] = v14;
      v67 = v69;
      *(_QWORD *)(v14 + 48) = v68;
      v69[0].m128i_i8[0] = 0;
      v68 = 0;
      v57 = _mm_loadh_ps((const double *)off_2C4EF08);
      sub_AA95F0(a1 + 24, &v56);
      v18 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128_u64[0];
      if ( !v57.m128_u64[0] )
        goto LABEL_11;
    }
    else
    {
      v25 = *(unsigned int *)(a1 + 32);
      v26 = *(_QWORD *)(a1 + 24);
      v56.m128i_i8[0] = 0;
      v27 = v26 + 32 * v25 - 32;
      if ( !*(_QWORD *)(v27 + 16) )
        goto LABEL_41;
      (*(void (__fastcall **)(__int64, __m128i *))(v27 + 24))(v27, &v56);
      v28 = *(unsigned int *)(a1 + 32);
      v29 = *(_QWORD *)(a1 + 24);
      v67 = v69;
      v30 = _mm_loadu_si128(&v60);
      v31 = (__m128i *)(v29 + 32 * v28 - 32);
      v65 = _mm_loadu_si128(&v59);
      v66 = v30;
      v64 = v58;
      if ( v61 == &v63 )
      {
        v69[0] = _mm_loadu_si128(&v63);
      }
      else
      {
        v67 = v61;
        v69[0].m128i_i64[0] = v63.m128i_i64[0];
      }
      v32 = v62;
      v62 = 0;
      v63.m128i_i8[0] = 0;
      v68 = v32;
      v61 = &v63;
      v57.m128_u64[0] = 0;
      v33 = operator new(0x48u);
      v34 = _mm_loadu_si128(&v65);
      v35 = _mm_loadu_si128(&v66);
      *(_QWORD *)v33 = v64;
      *(_QWORD *)(v33 + 40) = v33 + 56;
      v36 = (__m128i *)v67;
      *(__m128i *)(v33 + 8) = v34;
      *(__m128i *)(v33 + 24) = v35;
      if ( v36 == v69 )
      {
        *(__m128i *)(v33 + 56) = _mm_loadu_si128(v69);
      }
      else
      {
        *(_QWORD *)(v33 + 40) = v36;
        *(_QWORD *)(v33 + 56) = v69[0].m128i_i64[0];
      }
      v56.m128i_i64[0] = v33;
      v69[0].m128i_i8[0] = 0;
      v37 = _mm_load_si128(&v56);
      *(_QWORD *)(v33 + 48) = v68;
      v67 = v69;
      v68 = 0;
      v56 = _mm_loadu_si128(v31);
      v18 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v31[1].m128i_i64[0];
      *v31 = v37;
      v57.m128_u64[0] = (unsigned __int64)v18;
      v31[1].m128i_i64[0] = (__int64)sub_AA7370;
      v57.m128_u64[1] = v31[1].m128i_u64[1];
      v31[1].m128i_i64[1] = (__int64)sub_AB58E0;
      if ( !v18 )
        goto LABEL_11;
    }
    v18(&v56, &v56, 3);
LABEL_11:
    if ( v67 != v69 )
      operator delete(v67);
    v19 = (__m128i *)v61;
    *(_BYTE *)(a1 + 1065) = 0;
    if ( v19 != &v63 )
      operator delete(v19);
    ++v7;
    ++v9;
  }
}

