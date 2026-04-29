unsigned __int64 __fastcall sub_2BF0C0(_QWORD *a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 *v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i v12; // xmm0
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  __int64 v17; // rsi
  __int64 *v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  unsigned __int64 v29; // rbx
  _QWORD *v30; // r11
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  _QWORD *v33; // rdi
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 (__fastcall *v44)(__int64, __int64); // rcx
  __m128i v45; // xmm0
  int v46; // r9d
  int v47; // ecx
  int v48; // r10d
  int v49; // ecx
  __int64 v50; // r14
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // r12
  __int64 v53; // r13
  unsigned __int8 (***v54)(void); // rdi
  unsigned __int8 (*v55)(void); // rax
  __int64 v56; // rsi
  __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 (__fastcall *v60)(__int64, __int64); // rax
  __m128i v61; // xmm0
  int v62; // r8d
  int v63; // eax
  int v64; // r8d
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 (__fastcall *v69)(__int64, __int64); // rax
  __m128i v70; // xmm0
  int v71; // r8d
  int v72; // eax
  int v73; // r8d
  int v74; // eax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 (__fastcall *v77)(__int64, __int64); // rax
  __m128i v78; // xmm0
  int v79; // r8d
  int v80; // eax
  int v81; // r8d
  int v82; // eax
  unsigned __int8 (***v83)(void); // rdi
  unsigned __int8 (*v84)(void); // rax
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v92; // [rsp+0h] [rbp-168h]
  __int64 v93; // [rsp+0h] [rbp-168h]
  _QWORD *v94; // [rsp+0h] [rbp-168h]
  _QWORD *v95; // [rsp+0h] [rbp-168h]
  _QWORD *v96; // [rsp+0h] [rbp-168h]
  unsigned __int64 v98; // [rsp+10h] [rbp-158h]
  __int64 *v99; // [rsp+10h] [rbp-158h]
  __int64 v100; // [rsp+10h] [rbp-158h]
  __int64 v101; // [rsp+18h] [rbp-150h]
  __int64 v102; // [rsp+18h] [rbp-150h]
  __int64 *v104; // [rsp+20h] [rbp-148h]
  __int64 *v105; // [rsp+28h] [rbp-140h]
  __int64 v106; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v107; // [rsp+98h] [rbp-D0h]
  __int64 (__fastcall **v108)(); // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v109; // [rsp+B8h] [rbp-B0h] BYREF
  int v110; // [rsp+C8h] [rbp-A0h]
  __m128i v111; // [rsp+D0h] [rbp-98h] BYREF
  int v112; // [rsp+E0h] [rbp-88h]
  __m128i v113; // [rsp+F8h] [rbp-70h] BYREF
  __m128i v114; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 v115; // [rsp+128h] [rbp-40h]

  v3 = a1;
  v4 = a1[14];
  v115 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    v106 = 0;
    v107 = 0;
    if ( v5 )
    {
      sub_2A7F80(&v106, v5);
      if ( !a1[1] )
      {
LABEL_47:
        if ( v106 )
        {
          *(_QWORD *)&v107 = 0;
          qfree(v106);
        }
LABEL_49:
        if ( !a3 )
          return v115 - __readfsqword(0x28u);
        goto LABEL_50;
      }
    }
    else if ( !a1[1] )
    {
      goto LABEL_49;
    }
    v19 = a1 + 2;
    v20 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v20] + 8LL));
      v21 = *v19;
      v22 = *v19 + (v19[1] << 6);
      if ( *v19 != v22 )
      {
        do
        {
          while ( 1 )
          {
            v27 = v106 + 56LL * *(_QWORD *)(v21 + 56);
            v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 8LL);
            if ( v28 != sub_2A5E00 )
              break;
            v23 = *(_QWORD *)(v21 + 8);
            v24 = _mm_loadu_si128((const __m128i *)(v27 + 8));
            v21 += 64;
            *(_QWORD *)(v27 + 8) = v23;
            *(_DWORD *)(v27 + 16) = *(_DWORD *)(v21 - 48);
            v25 = *(_DWORD *)(v21 - 40);
            *(_QWORD *)(v21 - 56) = v24.m128i_i64[0];
            *(_DWORD *)(v21 - 48) = v24.m128i_i32[2];
            LODWORD(v23) = *(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 24) = v25;
            v26 = *(_DWORD *)(v21 - 16);
            *(_DWORD *)(v21 - 40) = v23;
            LODWORD(v23) = *(_DWORD *)(v27 + 48);
            *(_DWORD *)(v27 + 48) = v26;
            *(_DWORD *)(v21 - 16) = v23;
            if ( v22 == v21 )
              goto LABEL_25;
          }
          v92 = v22;
          v28(v27, v21);
          v22 = v92;
          v21 += 64;
        }
        while ( v92 != v21 );
LABEL_25:
        v22 = *v19;
      }
      if ( v22 )
      {
        v19[1] = 0;
        qfree(v22);
        *v19 = 0;
        v19[2] = 0;
      }
      v29 = v5 - v3[14];
      v30 = (_QWORD *)a2[v20];
      v31 = v30[6];
      if ( v29 != v31 )
      {
        v109.m128i_i64[0] = -1;
        v109.m128i_i32[2] = -1;
        v110 = 0;
        v111.m128i_i64[0] = -1;
        v111.m128i_i32[2] = -1;
        v112 = -2;
        v108 = off_4ADC38;
        if ( v29 >= v31 )
        {
          v32 = v30[5];
          v33 = v30 + 5;
          v34 = v30[7];
          if ( (unsigned __int64)&v108 < v32 || (unsigned __int64)&v108 >= v32 + 56 * v34 )
          {
            if ( v34 < v29 )
            {
              v95 = v30;
              v89 = qvector_reserve(v33, v32, v29, 56);
              v30 = v95;
              v95[5] = v89;
              v31 = v95[6];
            }
            if ( v31 < v29 )
            {
              v85 = _mm_loadu_si128(&v109);
              v86 = _mm_load_si128(&v111);
              v87 = 56 * v31;
              do
              {
                ++v31;
                v88 = v87 + v30[5];
                v87 += 56;
                *(_DWORD *)(v88 + 24) = 0;
                *(_DWORD *)(v88 + 48) = -2;
                *(_QWORD *)v88 = off_4ADC38;
                *(__m128i *)(v88 + 8) = v85;
                *(__m128i *)(v88 + 32) = v86;
              }
              while ( v29 != v31 );
            }
          }
          else
          {
            v113 = _mm_loadu_si128(&v109);
            v114 = _mm_load_si128(&v111);
            if ( v34 < v29 )
            {
              v96 = v30;
              v90 = qvector_reserve(v33, v32, v29, 56);
              v30 = v96;
              v96[5] = v90;
              v31 = v96[6];
            }
            if ( v31 < v29 )
            {
              v35 = _mm_loadu_si128(&v113);
              v36 = _mm_load_si128(&v114);
              v37 = 56 * v31;
              do
              {
                ++v31;
                v38 = v37 + v30[5];
                v37 += 56;
                *(_DWORD *)(v38 + 24) = 0;
                *(_DWORD *)(v38 + 48) = -2;
                *(_QWORD *)v38 = off_4ADC38;
                *(__m128i *)(v38 + 8) = v35;
                *(__m128i *)(v38 + 32) = v36;
              }
              while ( v29 != v31 );
            }
          }
        }
        v30[6] = v29;
      }
      if ( v5 )
      {
        v39 = 0;
        v40 = 0;
        v41 = 0;
        do
        {
          if ( *(_DWORD *)(v3[11] + 4 * v40) )
          {
            v42 = v30[5] + 56 * v41;
            v43 = v39 + v106;
            v44 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 8LL);
            if ( v44 == sub_2A5E00 )
            {
              v45 = _mm_loadu_si128((const __m128i *)(v42 + 8));
              *(_QWORD *)(v42 + 8) = *(_QWORD *)(v43 + 8);
              *(_DWORD *)(v42 + 16) = *(_DWORD *)(v43 + 16);
              v46 = *(_DWORD *)(v43 + 24);
              *(_QWORD *)(v43 + 8) = v45.m128i_i64[0];
              *(_DWORD *)(v43 + 16) = v45.m128i_i32[2];
              v47 = *(_DWORD *)(v42 + 24);
              *(_DWORD *)(v42 + 24) = v46;
              v48 = *(_DWORD *)(v43 + 48);
              *(_DWORD *)(v43 + 24) = v47;
              v49 = *(_DWORD *)(v42 + 48);
              *(_DWORD *)(v42 + 48) = v48;
              *(_DWORD *)(v43 + 48) = v49;
            }
            else
            {
              v102 = v39;
              v100 = v41;
              v94 = v30;
              v44(v42, v43);
              v30 = v94;
              v41 = v100;
              v39 = v102;
            }
            ++v41;
          }
          ++v40;
          v39 += 56;
        }
        while ( v40 != v5 );
      }
      else
      {
        v41 = 0;
      }
      if ( v30[6] != v41 )
      {
        if ( !under_debugger )
          sub_37B760(1962);
        BUG();
      }
      ++v20;
      v19 += 3;
    }
    while ( v20 < v3[1] );
    goto LABEL_47;
  }
  if ( !a1[1] )
  {
    if ( !a3 )
      return v115 - __readfsqword(0x28u);
    v99 = nullptr;
    v50 = *a2;
    v93 = a2[1];
    v101 = *a2;
    v104 = (__int64 *)(*a2 + 40LL);
    v105 = (__int64 *)(v93 + 40);
    goto LABEL_52;
  }
  v98 = a1[12];
  v6 = a1 + 2;
  v7 = 0;
  do
  {
    switch_dbctx(*(int *)(a2[v7] + 8LL));
    v8 = a2[v7];
    if ( v98 != *(_QWORD *)(v8 + 48) )
      sub_2A7F80((__int64 *)(v8 + 40), v98);
    v9 = *v6;
    v10 = *v6 + (v6[1] << 6);
    if ( *v6 != v10 )
    {
      do
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v8 + 40) + 56LL * *(_QWORD *)(v9 + 56);
          v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL);
          if ( v16 != sub_2A5E00 )
            break;
          v11 = *(_QWORD *)(v9 + 8);
          v12 = _mm_loadu_si128((const __m128i *)(v15 + 8));
          v9 += 64;
          *(_QWORD *)(v15 + 8) = v11;
          *(_DWORD *)(v15 + 16) = *(_DWORD *)(v9 - 48);
          v13 = *(_DWORD *)(v9 - 40);
          *(_QWORD *)(v9 - 56) = v12.m128i_i64[0];
          *(_DWORD *)(v9 - 48) = v12.m128i_i32[2];
          LODWORD(v11) = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v13;
          v14 = *(_DWORD *)(v9 - 16);
          *(_DWORD *)(v9 - 40) = v11;
          LODWORD(v11) = *(_DWORD *)(v15 + 48);
          *(_DWORD *)(v15 + 48) = v14;
          *(_DWORD *)(v9 - 16) = v11;
          if ( v9 == v10 )
            goto LABEL_11;
        }
        v17 = v9;
        v9 += 64;
        v16(v15, v17);
      }
      while ( v9 != v10 );
LABEL_11:
      v10 = *v6;
    }
    if ( v10 )
    {
      v6[1] = 0;
      qfree(v10);
      *v6 = 0;
      v6[2] = 0;
    }
    ++v7;
    v6 += 3;
  }
  while ( v7 < a1[1] );
  v3 = a1;
  if ( !a3 )
    return v115 - __readfsqword(0x28u);
LABEL_50:
  v99 = nullptr;
  v50 = *a2;
  v101 = *a2;
  v104 = (__int64 *)(*a2 + 40LL);
  v93 = a2[1];
  v105 = (__int64 *)(v93 + 40);
  if ( v3[1] > 2u )
    v99 = (__int64 *)(a2[2] + 40LL);
LABEL_52:
  v51 = *(_QWORD *)(v50 + 48);
  if ( !v51 )
    goto LABEL_79;
  v52 = 0;
  v51 = 0;
  v53 = 0;
  do
  {
    v83 = (unsigned __int8 (***)(void))(v53 + *(_QWORD *)(v50 + 40));
    v84 = **v83;
    if ( (char *)v84 == (char *)sub_2A62C0 )
    {
      if ( (unsigned int)sub_2508C0((__int64)(v83 + 1), (__int64)(v83 + 4)) )
        goto LABEL_57;
    }
    else if ( v84() )
    {
      goto LABEL_57;
    }
    v54 = (unsigned __int8 (***)(void))(v53 + *(_QWORD *)(v93 + 40));
    v55 = **v54;
    if ( (char *)v55 == (char *)sub_2A62C0 )
    {
      if ( !(unsigned int)sub_2508C0((__int64)(v54 + 1), (__int64)(v54 + 4)) )
        goto LABEL_66;
    }
    else if ( !v55() )
    {
      goto LABEL_66;
    }
LABEL_57:
    if ( v51 < v52 )
    {
      v56 = *(_QWORD *)(v50 + 40);
      v57 = 56 * v51;
      v58 = v56 + 56 * v51;
      v59 = v53 + v56;
      v60 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 8LL);
      if ( v60 == sub_2A5E00 )
      {
        v61 = _mm_loadu_si128((const __m128i *)(v58 + 8));
        *(_QWORD *)(v58 + 8) = *(_QWORD *)(v59 + 8);
        *(_DWORD *)(v58 + 16) = *(_DWORD *)(v59 + 16);
        v62 = *(_DWORD *)(v59 + 24);
        *(_QWORD *)(v59 + 8) = v61.m128i_i64[0];
        *(_DWORD *)(v59 + 16) = v61.m128i_i32[2];
        v63 = *(_DWORD *)(v58 + 24);
        *(_DWORD *)(v58 + 24) = v62;
        v64 = *(_DWORD *)(v59 + 48);
        *(_DWORD *)(v59 + 24) = v63;
        v65 = *(_DWORD *)(v58 + 48);
        *(_DWORD *)(v58 + 48) = v64;
        *(_DWORD *)(v59 + 48) = v65;
      }
      else
      {
        v60(v58, v59);
      }
      v66 = *(_QWORD *)(v93 + 40);
      v67 = v66 + v57;
      v68 = v53 + v66;
      v69 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 8LL);
      if ( v69 == sub_2A5E00 )
      {
        v70 = _mm_loadu_si128((const __m128i *)(v67 + 8));
        *(_QWORD *)(v67 + 8) = *(_QWORD *)(v68 + 8);
        *(_DWORD *)(v67 + 16) = *(_DWORD *)(v68 + 16);
        v71 = *(_DWORD *)(v68 + 24);
        *(_QWORD *)(v68 + 8) = v70.m128i_i64[0];
        *(_DWORD *)(v68 + 16) = v70.m128i_i32[2];
        v72 = *(_DWORD *)(v67 + 24);
        *(_DWORD *)(v67 + 24) = v71;
        v73 = *(_DWORD *)(v68 + 48);
        *(_DWORD *)(v68 + 24) = v72;
        v74 = *(_DWORD *)(v67 + 48);
        *(_DWORD *)(v67 + 48) = v73;
        *(_DWORD *)(v68 + 48) = v74;
      }
      else
      {
        v69(v67, v68);
      }
      if ( v99 )
      {
        v75 = *v99 + v57;
        v76 = v53 + *v99;
        v77 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 8LL);
        if ( v77 == sub_2A5E00 )
        {
          v78 = _mm_loadu_si128((const __m128i *)(v75 + 8));
          *(_QWORD *)(v75 + 8) = *(_QWORD *)(v76 + 8);
          *(_DWORD *)(v75 + 16) = *(_DWORD *)(v76 + 16);
          v79 = *(_DWORD *)(v76 + 24);
          *(_QWORD *)(v76 + 8) = v78.m128i_i64[0];
          *(_DWORD *)(v76 + 16) = v78.m128i_i32[2];
          v80 = *(_DWORD *)(v75 + 24);
          *(_DWORD *)(v75 + 24) = v79;
          v81 = *(_DWORD *)(v76 + 48);
          *(_DWORD *)(v76 + 24) = v80;
          v82 = *(_DWORD *)(v75 + 48);
          *(_DWORD *)(v75 + 48) = v81;
          *(_DWORD *)(v76 + 48) = v82;
        }
        else
        {
          v77(v75, v76);
        }
      }
    }
    ++v51;
LABEL_66:
    ++v52;
    v53 += 56;
  }
  while ( v52 < *(_QWORD *)(v50 + 48) );
  v50 = *a2;
LABEL_79:
  switch_dbctx(*(int *)(v50 + 8));
  if ( v51 != *(_QWORD *)(v101 + 48) )
    sub_2A7F80(v104, v51);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  if ( v51 != *(_QWORD *)(v93 + 48) )
    sub_2A7F80(v105, v51);
  if ( !v99 )
    return v115 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(a2[2] + 8LL));
  if ( v51 == v99[1] )
    return v115 - __readfsqword(0x28u);
  return sub_2A7F80(v99, v51);
}
