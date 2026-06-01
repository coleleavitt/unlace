__int64 __fastcall sub_6EC8D0(__m128i *a1, int a2, unsigned int a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r13
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // r12d
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r12
  __m128 v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __m128 v43; // xmm1
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // r12d
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r12
  __m128i v56; // xmm4
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // r8
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  int v65; // [rsp+0h] [rbp-1F0h]
  __int64 v66; // [rsp+8h] [rbp-1E8h]
  __int64 v67; // [rsp+10h] [rbp-1E0h]
  __int64 v68; // [rsp+18h] [rbp-1D8h]
  __int64 v69; // [rsp+20h] [rbp-1D0h]
  __int64 v70; // [rsp+20h] [rbp-1D0h]
  __int64 v71; // [rsp+28h] [rbp-1C8h]
  __int64 v72; // [rsp+28h] [rbp-1C8h]
  __int64 v73; // [rsp+30h] [rbp-1C0h]
  void *ptr; // [rsp+38h] [rbp-1B8h]
  __int64 v75; // [rsp+40h] [rbp-1B0h]
  __int64 v76; // [rsp+50h] [rbp-1A0h]
  __int64 v77; // [rsp+58h] [rbp-198h]
  unsigned int **v78; // [rsp+68h] [rbp-188h] BYREF
  __int64 *v79; // [rsp+70h] [rbp-180h]
  __int64 v80; // [rsp+78h] [rbp-178h]
  __m128i v81; // [rsp+80h] [rbp-170h] BYREF
  __int64 v82; // [rsp+98h] [rbp-158h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-150h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-148h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-140h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-138h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-130h] BYREF
  __int64 v88; // [rsp+C8h] [rbp-128h] BYREF
  __m128i v89; // [rsp+D0h] [rbp-120h] BYREF
  __int64 v90; // [rsp+E0h] [rbp-110h] BYREF
  __int64 v91; // [rsp+E8h] [rbp-108h]
  __int64 v92; // [rsp+F0h] [rbp-100h] BYREF
  unsigned int *v93; // [rsp+F8h] [rbp-F8h] BYREF
  __int64 v94; // [rsp+100h] [rbp-F0h] BYREF
  unsigned int *v95; // [rsp+108h] [rbp-E8h] BYREF
  _OWORD v96[3]; // [rsp+110h] [rbp-E0h] BYREF
  __m128i v97; // [rsp+140h] [rbp-B0h] BYREF
  _BYTE v98[40]; // [rsp+150h] [rbp-A0h]
  __m128 v99; // [rsp+180h] [rbp-70h] BYREF
  int v100; // [rsp+190h] [rbp-60h]
  __m128 v101; // [rsp+198h] [rbp-58h]
  __m128 v102; // [rsp+1A8h] [rbp-48h]

  LODWORD(v69) = a2;
  v8 = *a4 + 16LL * a3;
  HIDWORD(v68) = a3;
  v79 = a4;
  v67 = a3;
  LODWORD(v80) = 0;
  if ( a3 != a2 )
    LODWORD(v80) = *(_DWORD *)(*a5 + 4LL * a3);
  v9 = *(__int64 **)(v8 + 8);
  v10 = a1[2].m128i_i64[0];
  if ( v9 && (v11 = *((_DWORD *)v9 - 1)) != 0 )
  {
    v77 = *v9;
    if ( v11 == 1 )
    {
      v81.m128i_i64[0] = a1[2].m128i_i64[0];
      v12 = v10;
      v76 = v10;
    }
    else
    {
      v63 = v9[1];
      v81.m128i_i64[0] = v63;
      if ( v11 == 2 )
      {
        v76 = v10;
        v12 = v63;
      }
      else
      {
        v12 = v63;
        v76 = v9[2];
      }
    }
  }
  else
  {
    v77 = a1[2].m128i_i64[0];
    v12 = v77;
    v81.m128i_i64[0] = v77;
    v76 = v10;
  }
  v89.m128i_i64[0] = 0;
  v13 = a1->m128i_i64[0];
  v90 = 0;
  v73 = v13;
  v89.m128i_i64[1] = v13;
  v91 = v13;
  v92 = v13;
  v94 = v13;
  v95 = nullptr;
  if ( v10 == v12 )
  {
    v81.m128i_i64[1] = 0;
    v75 = 0;
  }
  else
  {
    v14 = sub_6E0F30((__int64)a1);
    v15 = _mm_loadl_epi64(a1);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, v15);
    v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, v15);
    v97 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, v15);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    *(_DWORD *)v98 = 0;
    *(__m128i *)&v98[8] = v17;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    *(__m128i *)&v98[24] = v16;
    if ( v81.m128i_i64[0] )
      ++*(_DWORD *)(v81.m128i_i64[0] + 8);
    ptr = (void *)sub_1434DE0(v15.m128i_i64[0], 0);
    sub_1694970(&v99, a1->m128i_i64[0]);
    sub_1692DB0(&v99, v76, a1[2].m128i_i64[0], 0, 0);
    (*(void (__fastcall **)(void *, __m128 *))(*(_QWORD *)ptr + 24LL))(ptr, &v99);
    if ( a1[2].m128i_i64[0] == v76 )
    {
      v81.m128i_i64[1] = 0;
    }
    else
    {
      v22 = sub_6E15B0((_DWORD)a1, v76, v18, v19, v20, v21);
      v82 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      v93 = nullptr;
      sub_6DE920(&v93, &v82);
      v81.m128i_i64[1] = (__int64)v93;
    }
    v23 = sub_6E5990((_DWORD)a1, v81.m128i_i32[0], v18, v19, v20, v21);
    v83 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v93 = (unsigned int *)v81.m128i_i64[1];
    v78 = &v93;
    sub_6DE920(&v93, &v83);
    v81.m128i_i64[1] = (__int64)v93;
    if ( v93 )
    {
      v24 = *(v93 - 1);
      v25 = v93;
    }
    else
    {
      v24 = 0;
      v25 = nullptr;
    }
    v26 = sub_6E3580(a1, v24, v25);
    v75 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = *(_QWORD *)(*(_QWORD *)(a6 + 24) + 8 * v67);
    v84 = v27;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_6DE920(v78, &v84);
    v81.m128i_i64[1] = (__int64)v93;
    v28 = *v79;
    if ( *v79 )
    {
      v29 = 0;
      do
      {
        if ( v29 >= *(_DWORD *)(v28 - 4) )
          break;
        sub_6E7D60(a1->m128i_i64, v80, 16LL * v29 + v28, *(_DWORD *)(*a5 + 4LL * v29), v97.m128i_i64, &v89);
        sub_1435270((_DWORD)ptr, v89.m128i_i32[0], (unsigned int)&v90, v30, v31, v32, v65, v66, v67, v68, v69);
        v33 = sub_15E1B70(a1->m128i_i64[0]);
        v85 = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v93 = (unsigned int *)v81.m128i_i64[1];
        sub_6DE920(v78, &v85);
        v81.m128i_i64[1] = (__int64)v93;
        v86 = v89.m128i_i64[0];
        if ( v89.m128i_i64[0] )
          ++*(_DWORD *)(v89.m128i_i64[0] + 8);
        sub_6DE920(&v95, &v86);
        ++v29;
        v28 = *v79;
      }
      while ( *v79 );
    }
    v34 = a1[2].m128i_i64[0];
    v78 = (unsigned int **)a1->m128i_i64[0];
    v35 = _mm_loadh_ps((const double *)&v78);
    v96[0] = v35;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    v96[1] = v35;
    if ( v81.m128i_i64[0] )
      ++*(_DWORD *)(v81.m128i_i64[0] + 8);
    v96[2] = v35;
    if ( v77 )
      ++*(_DWORD *)(v77 + 8);
    v36 = sub_6E2170(a1, v80, v96, (__int64)&v97);
    if ( v81.m128i_i64[1] )
    {
      v37 = *(unsigned int *)(v81.m128i_i64[1] - 4);
      v38 = v81.m128i_i64[1];
    }
    else
    {
      v37 = 0;
      v38 = 0;
    }
    v71 = v36;
    v39 = sub_6E3580(a1, v37, v38);
    sub_6E1200(a6, v39, v75, &v94, v71, v76, v81.m128i_i64[0], v77);
    sub_6DE2A0(v77, (__int64)v78);
    sub_6DE2A0(v81.m128i_i64[0], (__int64)v78);
    sub_6DE2A0(v34, (__int64)v78);
    sub_1695230(&v99);
    (**(void (__fastcall ***)(void *))ptr)(ptr);
    sub_186B220(ptr);
    sub_6DE2A0(*(__int64 *)&v98[24], *(__int64 *)&v98[32]);
    sub_6DE2A0(*(__int64 *)&v98[8], *(__int64 *)&v98[16]);
    sub_6DE2A0(v97.m128i_i64[0], v97.m128i_i64[1]);
  }
  if ( HIDWORD(v68) == (_DWORD)v69 && a1[2].m128i_i64[0] != v76 )
  {
    v40 = sub_6DF7C0((__int64)a1, 2u);
    v72 = sub_6E1C90(a1, v40, v76);
    v41 = a1[2].m128i_i64[0];
    v42 = sub_6E0F30((__int64)a1);
    v43 = _mm_loadh_ps((const double *)a1->m128i_i64);
    v99 = v43;
    if ( v42 )
      ++*(_DWORD *)(v42 + 8);
    v100 = 0;
    v101 = v43;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v102 = v43;
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    v93 = (unsigned int *)v81.m128i_i64[1];
    sub_2FCDE0(&v92);
    sub_2FCDE0(&v94);
    v48 = sub_6E5990((_DWORD)a1, v76, v44, v45, v46, v47);
    v70 = v48;
    v49 = v48;
    if ( v48 )
    {
      ++*(_DWORD *)(v48 + 8);
      sub_6DE2C0(v75, v73);
      ++*(_DWORD *)(v49 + 8);
      v87 = v49;
    }
    else
    {
      sub_6DE2C0(v75, v73);
      v87 = 0;
    }
    v78 = &v93;
    sub_6DE920(&v93, &v87);
    v50 = *(_QWORD *)(*(_QWORD *)(a6 + 24) + 8 * v67);
    v88 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_6DE920(v78, &v88);
    v81.m128i_i64[1] = (__int64)v93;
    v51 = *v79;
    if ( *v79 )
    {
      v52 = 0;
      do
      {
        if ( v52 >= *(_DWORD *)(v51 - 4) )
          break;
        sub_6E7D60(a1->m128i_i64, v80, 16LL * v52 + v51, *(_DWORD *)(*a5 + 4LL * v52), (__int64 *)&v99, &v89);
        v53 = sub_15E1B70(a1->m128i_i64[0]);
        *(_QWORD *)&v96[0] = v53;
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        v93 = (unsigned int *)v81.m128i_i64[1];
        sub_6DE920(v78, v96);
        v81.m128i_i64[1] = (__int64)v93;
        v97.m128i_i64[0] = v89.m128i_i64[0];
        if ( v89.m128i_i64[0] )
          ++*(_DWORD *)(v89.m128i_i64[0] + 8);
        sub_6DE920(&v95, &v97);
        ++v52;
        v51 = *v79;
      }
      while ( *v79 );
    }
    v54 = a1->m128i_i64[0];
    v55 = a1[2].m128i_i64[0];
    v56 = (__m128i)a1->m128i_u64[0];
    v57 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v81), v56);
    v58 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, v56);
    v97 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v72, v56);
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    *(__m128i *)v98 = v57;
    if ( v81.m128i_i64[0] )
      ++*(_DWORD *)(v81.m128i_i64[0] + 8);
    *(__m128i *)&v98[16] = v58;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v59 = sub_6E2170(a1, v80, &v97, (__int64)&v99);
    if ( v81.m128i_i64[1] )
    {
      v60 = *(unsigned int *)(v81.m128i_i64[1] - 4);
      v61 = v81.m128i_i64[1];
    }
    else
    {
      v60 = 0;
      v61 = 0;
    }
    v80 = v59;
    v62 = sub_6E3580(a1, v60, v61);
    sub_6E1200(a6, v62, v70, &v94, v80, v76, v81.m128i_i64[0], v77);
    sub_6DE2A0(v55, v54);
    sub_6DE2A0(v81.m128i_i64[0], v54);
    sub_6DE2A0(v72, v54);
    sub_6DE2A0(v102.m128_i64[0], v102.m128_i64[1]);
    sub_6DE2A0(v101.m128_i64[0], v101.m128_i64[1]);
    sub_6DE2A0(v99.m128_i64[0], v99.m128_i64[1]);
    v75 = v70;
  }
  sub_2334C0(&v94);
  v93 = (unsigned int *)v81.m128i_i64[1];
  sub_2334C0(&v92);
  sub_6DE2C0(v75, v73);
  sub_6DE2C0(v90, v91);
  return sub_6DE2A0(v89.m128i_i64[0], v89.m128i_i64[1]);
}

