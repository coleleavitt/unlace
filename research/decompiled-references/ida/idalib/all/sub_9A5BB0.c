__int64 __fastcall sub_9A5BB0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r14
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __m128i si128; // xmm6
  __m128i v17; // xmm7
  __m128 v18; // xmm4
  __m128i v19; // xmm7
  __m128i v20; // xmm0
  __m128i v21; // xmm3
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  char *v35; // r12
  __m128i v36; // xmm5
  __m128i v37; // xmm2
  char *v38; // r15
  __m128i v39; // xmm3
  __m128i v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rsi
  __m128i v48; // xmm0
  __int64 v49; // rsi
  char *v50; // rbx
  _QWORD *v51; // rsi
  unsigned __int64 *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v57; // rbx
  __int16 i; // ax
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // r12
  void *v62; // rsi
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rsi
  unsigned __int64 *v69; // [rsp+0h] [rbp-458h]
  __int64 v71; // [rsp+10h] [rbp-448h]
  void **v72; // [rsp+10h] [rbp-448h]
  __int64 v73; // [rsp+18h] [rbp-440h]
  void **p_ptr; // [rsp+20h] [rbp-438h] BYREF
  __m128i *v75; // [rsp+28h] [rbp-430h]
  __m128i v76; // [rsp+30h] [rbp-428h] BYREF
  __m128i v77; // [rsp+40h] [rbp-418h]
  __int64 v78; // [rsp+50h] [rbp-408h]
  __m128i v79; // [rsp+60h] [rbp-3F8h] BYREF
  __int64 v80; // [rsp+70h] [rbp-3E8h]
  __m128i v81; // [rsp+78h] [rbp-3E0h] BYREF
  __int64 v82; // [rsp+88h] [rbp-3D0h]
  __m128i v83; // [rsp+90h] [rbp-3C8h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-3B8h] BYREF
  __m128i v85; // [rsp+B0h] [rbp-3A8h] BYREF
  __m128i v86; // [rsp+C0h] [rbp-398h] BYREF
  __m128i v87; // [rsp+D0h] [rbp-388h]
  __m128i v88; // [rsp+E0h] [rbp-378h] BYREF
  __m128i v89; // [rsp+F0h] [rbp-368h] BYREF
  __m128i v90[21]; // [rsp+100h] [rbp-358h] BYREF
  __m128i v91; // [rsp+250h] [rbp-208h]
  __m128i v92; // [rsp+260h] [rbp-1F8h]
  __m128i v93; // [rsp+270h] [rbp-1E8h]
  __m128i v94; // [rsp+280h] [rbp-1D8h]
  __m128i v95; // [rsp+290h] [rbp-1C8h] BYREF
  __m128i v96; // [rsp+2A0h] [rbp-1B8h] BYREF
  __m128i v97; // [rsp+2B0h] [rbp-1A8h]
  __m128i v98; // [rsp+2C0h] [rbp-198h]
  __m128i v99; // [rsp+2D0h] [rbp-188h]
  __m128i v100; // [rsp+2E0h] [rbp-178h]
  __m128i v101; // [rsp+2F0h] [rbp-168h]
  __m128i v102; // [rsp+300h] [rbp-158h]
  __m128i v103; // [rsp+310h] [rbp-148h]
  __m128i v104; // [rsp+320h] [rbp-138h] BYREF
  __m256i v105; // [rsp+330h] [rbp-128h]
  void *ptr; // [rsp+350h] [rbp-108h] BYREF
  __int64 v107; // [rsp+358h] [rbp-100h]
  __m128i v108; // [rsp+360h] [rbp-F8h] BYREF
  __int64 v109; // [rsp+370h] [rbp-E8h] BYREF
  __m128i v110; // [rsp+378h] [rbp-E0h] BYREF
  __int64 v111; // [rsp+388h] [rbp-D0h]
  __m128i v112; // [rsp+3A0h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+3B0h] [rbp-A8h]
  __int64 v114; // [rsp+3B8h] [rbp-A0h] BYREF
  __m128i v115; // [rsp+3C0h] [rbp-98h] BYREF
  __m128i v116[8]; // [rsp+3D0h] [rbp-88h] BYREF

  if ( (unsigned __int8)sub_99C080((_QWORD *)a1, (_WORD *)a2) || a3 == 1 )
  {
    v27 = *(_QWORD *)(a1 + 16);
    if ( !v27 )
    {
      v65 = sub_9996F0(*(__m128i **)(a1 + 8), a2, v4, v5, v6, v7);
      v68 = *(_QWORD *)(a1 + 24);
      v27 = v65;
      if ( v68 )
        sub_9999E0(v65, v68, 0, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v66, v67);
      *(_QWORD *)(a1 + 16) = v27;
    }
    sub_99C220((_QWORD *)a1, v27, a2);
  }
  v69 = *(unsigned __int64 **)(a1 + 16);
  v8 = *(unsigned int **)(a2 + 24);
  if ( v8 )
  {
    v9 = (__int64)(v8 + 4);
    v10 = (__int64)&v8[2 * *v8 + 4];
    if ( v8 + 4 == (unsigned int *)v10 )
    {
      v71 = 0;
      v8 = nullptr;
      v13 = 0;
      v73 = 0;
    }
    else
    {
      v11 = *((_QWORD *)v8 + 2);
      p_ptr = (void **)(v8 + 4);
      sub_EB5840(&v112, v11);
      v12 = *((_QWORD *)v8 + 2);
      v103 = _mm_load_si128(&v112);
      v13 = v103.m128i_i64[0];
      v108 = v103;
      v109 = v113;
      v73 = v103.m128i_i64[1];
      sub_EB5840(&v112, v12);
      v14 = _mm_loadu_si128((const __m128i *)&v114);
      v8 = (unsigned int *)v14.m128i_i64[0];
      v103 = v14;
      v104.m128i_i64[0] = v115.m128i_i64[1];
      v71 = v14.m128i_i64[1];
      v9 = (__int64)p_ptr;
      v110 = v14;
      v111 = v115.m128i_i64[1];
      if ( v13 == v14.m128i_i64[0] )
      {
        do
        {
          if ( v71 != v73 )
            break;
          v64 = v9;
          v9 += 8;
          if ( v10 == v9 )
            break;
          v72 = (void **)v9;
          sub_EB5840(&v112, *(_QWORD *)(v64 + 8));
          v103 = _mm_load_si128(&v112);
          v13 = v103.m128i_i64[0];
          v104.m128i_i64[0] = v113;
          v73 = v103.m128i_i64[1];
          v108 = v103;
          v62 = *v72;
          v109 = v113;
          p_ptr = v72;
          sub_EB5840(&v112, v62);
          v63 = _mm_loadu_si128((const __m128i *)&v114);
          v8 = (unsigned int *)v63.m128i_i64[0];
          v103 = v63;
          v104.m128i_i64[0] = v115.m128i_i64[1];
          v71 = v63.m128i_i64[1];
          v9 = (__int64)p_ptr;
          v110 = v63;
          v111 = v115.m128i_i64[1];
        }
        while ( v63.m128i_i64[0] == v13 );
      }
    }
  }
  else
  {
    v71 = 0;
    v10 = 0;
    v13 = 0;
    v9 = 0;
    v73 = 0;
  }
  p_ptr = (void **)v9;
  v110.m128i_i64[0] = (__int64)v8;
  v15 = 0x800000000LL;
  si128 = _mm_load_si128((const __m128i *)&v109);
  p_ptr = (void **)v10;
  v110.m128i_i64[1] = v71;
  v17 = _mm_load_si128((const __m128i *)&v110.m128i_u64[1]);
  v115 = si128;
  v116[0] = v17;
  v18 = _mm_loadh_ps((const double *)&p_ptr);
  v115.m128i_i64[1] = (__int64)v8;
  si128.m128i_i64[0] = _mm_load_si128(&v115).m128i_u64[0];
  v116[0].m128i_i64[0] = v71;
  v19 = _mm_load_si128(v116);
  p_ptr = &ptr;
  v112.m128i_i64[0] = v9;
  v83.m128i_i64[0] = v9;
  v76 = (__m128i)v18;
  v108.m128i_i64[0] = v13;
  v108.m128i_i64[1] = v73;
  ptr = &v108;
  v107 = 0x800000000LL;
  v112.m128i_i64[1] = v10;
  v113 = v13;
  v114 = v73;
  v85.m128i_i64[0] = si128.m128i_i64[0];
  v86 = v19;
  v83.m128i_i64[1] = v10;
  v84.m128i_i64[0] = v13;
  v84.m128i_i64[1] = v73;
  v85.m128i_i64[1] = (__int64)v8;
  v20 = _mm_load_si128(&v83);
  v21 = _mm_load_si128(&v84);
  v86.m128i_i64[0] = v71;
  v22 = _mm_load_si128(&v85);
  v23 = _mm_load_si128(&v86);
  v87 = v20;
  v88 = v21;
  v89 = v22;
  v90[0] = v23;
  v99 = v20;
  v100 = v21;
  v101 = v22;
  v102 = v23;
  v103 = v20;
  v104 = v21;
  *(__m128i *)v105.m256i_i8 = v22;
  *(__m128i *)&v105.m256i_u64[2] = v23;
  if ( v10 == v20.m128i_i64[0] )
  {
    v75 = nullptr;
    v33 = 0;
  }
  else
  {
    v24 = nullptr;
    v75 = &v95;
    do
    {
      if ( (v104.m128i_i8[8] & 3) != 0 )
      {
        if ( (v104.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v104);
        else
          sub_EF2750(&v104, 1);
        v25 = v104.m128i_i64[0];
      }
      else
      {
        v25 = v104.m128i_i64[0] + 8;
        v104.m128i_i64[0] += 8;
      }
      v26 = v103.m128i_i64[0];
      if ( __PAIR128__(v104.m128i_u64[1], v25) == *(_OWORD *)&v105.m256i_u64[1] )
      {
        v28 = v103.m128i_i64[1];
        if ( v103.m128i_i64[0] == v103.m128i_i64[1] )
        {
          v29 = v103.m128i_i64[1];
        }
        else
        {
          v29 = v103.m128i_i64[0] + 8;
          v103.m128i_i64[0] += 8;
          if ( v103.m128i_i64[1] != v26 + 8 )
          {
            v30 = *(_QWORD *)(v26 + 8);
            goto LABEL_20;
          }
        }
        while ( v28 != v29 )
        {
          v26 = v29 + 8;
          v103.m128i_i64[0] = v29 + 8;
          if ( v28 == v29 + 8 )
            goto LABEL_10;
          v30 = *(_QWORD *)(v29 + 8);
LABEL_20:
          sub_EB5840(v75, v30);
          v31 = _mm_load_si128(&v95);
          v92.m128i_i64[0] = v96.m128i_i64[0];
          v105.m256i_i64[0] = v96.m128i_i64[0];
          v91 = v31;
          v32 = *(_QWORD *)v103.m128i_i64[0];
          v104 = v31;
          sub_EB5840(v75, v32);
          v91 = _mm_loadu_si128((const __m128i *)&v96.m128i_u64[1]);
          v26 = v103.m128i_i64[0];
          v92.m128i_i64[0] = v97.m128i_i64[1];
          *(__m128i *)&v105.m256i_u64[1] = v91;
          v105.m256i_i64[3] = v97.m128i_i64[1];
          if ( *(_OWORD *)&v104 != *(_OWORD *)&v91 )
            goto LABEL_10;
          v28 = v103.m128i_i64[1];
          v29 = v103.m128i_i64[0];
        }
        v26 = v28;
      }
LABEL_10:
      v24 = (__m128i *)((char *)v24 + 1);
    }
    while ( v10 != v26 );
    v33 = (unsigned int)v107;
    v15 = HIDWORD(v107);
    v75 = v24;
    v34 = (unsigned __int64)v24->m128i_u64 + (unsigned int)v107;
    if ( v34 > HIDWORD(v107) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v34, 8);
      v33 = (unsigned int)v107;
    }
  }
  v35 = (char *)ptr;
  v36 = _mm_load_si128(&v76);
  v88.m128i_i64[0] = v13;
  v89.m128i_i64[1] = (__int64)v8;
  v37 = _mm_load_si128(&v89);
  v38 = (char *)ptr + 8 * v33;
  v87 = v36;
  v90[1] = v36;
  v88.m128i_i64[1] = v73;
  v39 = _mm_load_si128(&v88);
  v90[3] = v37;
  v90[0].m128i_i64[0] = v71;
  v40 = _mm_load_si128(v90);
  v90[2] = v39;
  v90[4] = v40;
  v90[5] = v36;
  v90[6] = v39;
  v90[7] = v37;
  v90[8] = v40;
  v90[9] = v36;
  v90[10] = v39;
  v90[11] = v37;
  v90[12] = v40;
  v90[13] = v36;
  v90[14] = v39;
  v90[15] = v37;
  v90[16] = v40;
  v103 = v36;
  v104 = v39;
  *(__m128i *)v105.m256i_i8 = v37;
  *(__m128i *)&v105.m256i_u64[2] = v40;
  v90[17] = v36;
  v90[18] = v39;
  v90[19] = v37;
  v90[20] = v40;
  v91 = v36;
  v92 = v39;
  v93 = v37;
  v94 = v40;
  v99 = v36;
  v100 = v39;
  v101 = v37;
  v102 = v40;
  v95 = v36;
  v96 = v39;
  v97 = v37;
  v98 = v40;
  if ( v10 == v36.m128i_i64[0] )
    goto LABEL_43;
  do
  {
    if ( (v104.m128i_i8[8] & 3) == 0 )
    {
      v41 = v104.m128i_i64[0];
      v38 += 8;
      *((_QWORD *)v38 - 1) = *(_QWORD *)v104.m128i_i64[0];
LABEL_28:
      v42 = v41 + 8;
      v104.m128i_i64[0] = v42;
      goto LABEL_29;
    }
    v38 += 8;
    v43 = (_QWORD *)sub_EF2B30(&v104);
    v44 = v104.m128i_i64[1];
    *((_QWORD *)v38 - 1) = *v43;
    if ( (v44 & 3) == 0 )
    {
      v41 = v104.m128i_i64[0];
      goto LABEL_28;
    }
    if ( (v44 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      sub_EF2960(&v104);
    else
      sub_EF2750(&v104, 1);
    v42 = v104.m128i_i64[0];
LABEL_29:
    v15 = v103.m128i_i64[0];
    if ( __PAIR128__(v104.m128i_u64[1], v42) == *(_OWORD *)&v105.m256i_u64[1] )
    {
      v45 = v103.m128i_i64[1];
      if ( v103.m128i_i64[1] == v103.m128i_i64[0] )
      {
        v46 = v103.m128i_i64[1];
      }
      else
      {
        v46 = v103.m128i_i64[0] + 8;
        v103.m128i_i64[0] += 8;
        if ( v103.m128i_i64[1] != v15 + 8 )
        {
          v47 = *(_QWORD *)(v15 + 8);
          goto LABEL_39;
        }
      }
      while ( v45 != v46 )
      {
        v15 = v46 + 8;
        v103.m128i_i64[0] = v46 + 8;
        if ( v45 == v46 + 8 )
          goto LABEL_30;
        v47 = *(_QWORD *)(v46 + 8);
LABEL_39:
        sub_EB5840(&v79, v47);
        v48 = _mm_load_si128(&v79);
        v78 = v80;
        v105.m256i_i64[0] = v80;
        v77 = v48;
        v49 = *(_QWORD *)v103.m128i_i64[0];
        v104 = v48;
        sub_EB5840(&v79, v49);
        v77 = _mm_loadu_si128(&v81);
        v15 = v103.m128i_i64[0];
        v78 = v82;
        *(__m128i *)&v105.m256i_u64[1] = v77;
        v105.m256i_i64[3] = v82;
        if ( *(_OWORD *)&v104 != *(_OWORD *)&v77 )
          goto LABEL_30;
        v45 = v103.m128i_i64[1];
        v46 = v103.m128i_i64[0];
      }
      v15 = v45;
    }
LABEL_30:
    ;
  }
  while ( v10 != v15 );
  v35 = (char *)ptr;
LABEL_43:
  LODWORD(v107) = (_DWORD)v75 + v107;
  v50 = &v35[8 * (unsigned int)v107];
  while ( v35 != v50 )
  {
    while ( 1 )
    {
      v51 = *((_QWORD **)v50 - 1);
      v50 -= 8;
      v52 = sub_9A1D70((__m128i *)a1, v51, 0, v15, v6, v7);
      v53 = (__int64)v52;
      if ( !v52 )
        break;
      if ( v35 == v50 )
        goto LABEL_49;
      v69 = v52;
    }
  }
  v53 = (__int64)v69;
LABEL_49:
  if ( !(unsigned __int8)sub_EF53A0(a2) )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(a2 + 24)
                    + 8
                    * (*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL) + (unsigned __int64)**(unsigned int **)(a2 + 24))
                    + 16);
    for ( i = *(_WORD *)v57 & 0x1FF; i == 250; i = *(_WORD *)v57 & 0x1FF )
      v57 = *(_QWORD *)(v57 + 8LL * *(unsigned int *)(v57 + 8) + 32);
    if ( i != 249 )
    {
      v60 = *(_QWORD *)(a1 + 128);
      v61 = *(_QWORD *)(a1 + 136);
      sub_999430(a1, v57);
      sub_99A450((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v60, v61, v57);
    }
    v59 = sub_99D480(a1, v57, 1, 0, v54, v55);
    if ( v59 )
      v53 = v59;
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v53;
}
