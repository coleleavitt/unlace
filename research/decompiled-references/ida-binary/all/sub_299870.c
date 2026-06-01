unsigned __int64 __fastcall sub_299870(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v19; // r12d
  unsigned __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // r13
  __int64 (__fastcall *v23)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v24)(__int64); // rax
  int v25; // eax
  __int64 v26; // r12
  int v27; // ebp
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // r10
  __int64 (__fastcall *v32)(__int64, int); // rax
  int v33; // esi
  int v34; // kr00_4
  int v35; // ebp
  int v36; // r9d
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  __int64 (__fastcall *v41)(__int64, int); // rax
  int v42; // esi
  __m128i v43; // xmm0
  int v44; // eax
  int v45; // eax
  unsigned __int64 v46; // rdx
  __m128i v47; // xmm2
  __m128i v48; // xmm1
  int v49; // r13d
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // xmm1_8
  unsigned __int64 v62; // xmm2_8
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // xmm3_8
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-70h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  unsigned __int64 v69; // [rsp+18h] [rbp-60h]
  unsigned __int64 v70; // [rsp+20h] [rbp-58h]
  unsigned __int64 v71; // [rsp+28h] [rbp-50h]
  unsigned __int64 v72; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v73; // [rsp+38h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 != a2 + 8 )
  {
    v68 = a2 + 8;
    do
    {
      v22 = *(unsigned int *)(v2 + 32);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 208LL))(
        a1,
        v22,
        (unsigned int)v22,
        v2 + 40);
      v23 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
      if ( v23 == interactive_graph_t__::vfunc_19 )
      {
        v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
        if ( v24 == interactive_graph_t__::vfunc_7 )
          v25 = *(_DWORD *)(a1 + 184);
        else
          v25 = v24(a1);
        if ( (int)v22 >= v25 )
          sub_16B930((__int64)"nrect(%d) failed", v22);
        v26 = *(_QWORD *)(a1 + 224) + 16LL * (int)v22;
      }
      else
      {
        v26 = v23(a1, v22);
      }
      v27 = *(_DWORD *)(v26 + 8) - *(_DWORD *)v26;
      v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
      v29 = (v22 << 32) | (unsigned int)v22;
      if ( v28 == interactive_graph_t__::vfunc_20 )
      {
        v30 = interactive_graph_t__::vfunc_20(a1, v29);
      }
      else
      {
        v56 = v28(a1, v29);
        v31 = *(_QWORD *)a1;
        v30 = v56;
      }
      v32 = *(__int64 (__fastcall **)(__int64, int))(v31 + 96);
      if ( v32 == interactive_graph_t__::vfunc_12 )
        v33 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 24LL * (int)v22 + 8);
      else
        v33 = v32(a1, v22);
      v34 = v27;
      v35 = v27 - 4;
      v36 = v34 / 2;
      v37 = v34 / 2;
      v38 = v35 / (v33 + 1);
      v39 = v34 / 2;
      if ( v38 > 8 )
      {
        if ( v38 > 20 )
          v38 = 20;
        v39 = v36 - v38 * (v33 / 2);
        v40 = v39 + (v38 >> 1);
        if ( (v33 & 1) == 0 )
          v39 = v40;
      }
      *(_DWORD *)(v30 + 8) = v39;
      v41 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
      if ( v41 == interactive_graph_t__::vfunc_13 )
      {
        v42 = *(_DWORD *)(*(_QWORD *)(a1 + 200) + 24LL * (int)v22 + 8);
      }
      else
      {
        LODWORD(v69) = v34 / 2;
        v55 = v41(a1, v22);
        v39 = *(_DWORD *)(v30 + 8);
        v36 = v69;
        v37 = v34 / 2;
        v42 = v55;
      }
      v43 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(0xAu));
      v44 = v35 / (v42 + 1);
      if ( v44 > 8 )
      {
        if ( v44 > 20 )
          v44 = 20;
        v37 = v36 - v44 * (v42 / 2);
        v45 = v37 + (v44 >> 1);
        if ( (v42 & 1) == 0 )
          v37 = v45;
      }
      v63 = *(_QWORD *)(v30 + 16);
      v46 = *(_QWORD *)(v30 + 32);
      *(_DWORD *)(v30 + 12) = v37;
      v47 = _mm_loadl_epi64((const __m128i *)v26);
      v48 = _mm_loadl_epi64((const __m128i *)(v26 + 8));
      v64 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)&qword_5DBF18), v47).m128i_u64[0];
      v48.m128i_i32[0] = v47.m128i_i32[0];
      v49 = *(_DWORD *)(v26 + 4) - 12;
      v67 = v30 + 16;
      v65 = *(_QWORD *)(v30 + 24);
      v62 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)&qword_5DBF20), v48).m128i_u64[0];
      v61 = _mm_add_epi32(v48, v43).m128i_u64[0];
      v50 = v65 + 1;
      v72 = v61;
      if ( (unsigned __int64)&v72 < v63 || (unsigned __int64)&v72 >= v63 + 8 * v46 )
      {
        if ( v46 < v50 )
        {
          v70 = v62;
          v69 = v64;
          v51 = qvector_reserve(v67, v63, v65 + 1, 8);
          v62 = v70;
          v64 = v69;
          *(_QWORD *)(v30 + 16) = v51;
          v63 = v51;
          v65 = *(_QWORD *)(v30 + 24);
        }
        *(_QWORD *)(v63 + 8 * v65) = v72;
      }
      else
      {
        if ( v46 < v50 )
        {
          v71 = v61;
          v70 = v62;
          v69 = v64;
          v60 = qvector_reserve(v67, v63, v65 + 1, 8);
          v61 = v71;
          v62 = v70;
          *(_QWORD *)(v30 + 16) = v60;
          v63 = v60;
          v64 = v69;
          v65 = *(_QWORD *)(v30 + 24);
        }
        *(_QWORD *)(v63 + 8 * v65) = v61;
      }
      v4 = *(_QWORD *)(v30 + 24);
      v5 = *(_QWORD *)(v30 + 16);
      v72 = v62;
      v6 = *(_QWORD *)(v30 + 32);
      v7 = v4 + 1;
      v8 = v4 + 2;
      *(_QWORD *)(v30 + 24) = v4 + 1;
      if ( (unsigned __int64)&v72 < v5 || (unsigned __int64)&v72 >= v5 + 8 * v6 )
      {
        if ( v6 < v8 )
        {
          v69 = v64;
          v54 = qvector_reserve(v67, v5, v8, 8);
          v7 = *(_QWORD *)(v30 + 24);
          v64 = v69;
          *(_QWORD *)(v30 + 16) = v54;
          v5 = v54;
        }
        *(_QWORD *)(v5 + 8 * v7) = v72;
      }
      else
      {
        if ( v6 < v8 )
        {
          v70 = v62;
          v69 = v64;
          v59 = qvector_reserve(v67, v5, v8, 8);
          v7 = *(_QWORD *)(v30 + 24);
          v62 = v70;
          *(_QWORD *)(v30 + 16) = v59;
          v64 = v69;
          v5 = v59;
        }
        *(_QWORD *)(v5 + 8 * v7) = v62;
      }
      v9 = *(_QWORD *)(v30 + 24);
      v10 = *(_QWORD *)(v30 + 16);
      v72 = v64;
      v11 = *(_QWORD *)(v30 + 32);
      v12 = v9 + 1;
      v13 = v9 + 2;
      *(_QWORD *)(v30 + 24) = v12;
      if ( (unsigned __int64)&v72 < v10 || (unsigned __int64)&v72 >= v10 + 8 * v11 )
      {
        if ( v11 < v13 )
        {
          v53 = qvector_reserve(v67, v10, v13, 8);
          *(_QWORD *)(v30 + 16) = v53;
          v10 = v53;
          v12 = *(_QWORD *)(v30 + 24);
        }
        *(_QWORD *)(v10 + 8 * v12) = v72;
      }
      else
      {
        if ( v11 < v13 )
        {
          v69 = v64;
          v66 = qvector_reserve(v67, v10, v13, 8);
          v64 = v69;
          *(_QWORD *)(v30 + 16) = v66;
          v10 = v66;
          v12 = *(_QWORD *)(v30 + 24);
        }
        *(_QWORD *)(v10 + 8 * v12) = v64;
      }
      v14 = *(_QWORD *)(v30 + 24);
      v15 = *(_QWORD *)(v30 + 16);
      HIDWORD(v72) = v49;
      v16 = *(_DWORD *)(v30 + 12);
      v17 = v14 + 1;
      v18 = v14 + 2;
      *(_QWORD *)(v30 + 24) = v17;
      LODWORD(v72) = *(_DWORD *)v26 + v16;
      v19 = v72;
      v20 = *(_QWORD *)(v30 + 32);
      if ( (unsigned __int64)&v72 < v15 || (unsigned __int64)&v72 >= v15 + 8 * v20 )
      {
        if ( v20 < v18 )
        {
          v52 = qvector_reserve(v67, v15, v18, 8);
          *(_QWORD *)(v30 + 16) = v52;
          v15 = v52;
          v17 = *(_QWORD *)(v30 + 24);
        }
        *(_QWORD *)(v15 + 8 * v17) = v72;
      }
      else
      {
        if ( v20 < v18 )
        {
          v58 = qvector_reserve(v67, v15, v18, 8);
          *(_QWORD *)(v30 + 16) = v58;
          v15 = v58;
          v17 = *(_QWORD *)(v30 + 24);
        }
        v21 = (_DWORD *)(v15 + 8 * v17);
        *v21 = v19;
        v21[1] = v49;
      }
      ++*(_QWORD *)(v30 + 24);
      v2 = std::_Rb_tree_increment(v2);
    }
    while ( v2 != v68 );
  }
  return v73 - __readfsqword(0x28u);
}
