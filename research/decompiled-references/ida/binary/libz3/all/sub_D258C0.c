__int64 __fastcall sub_D258C0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // r8
  __int64 *v18; // rsi
  __int64 v19; // r8
  __int64 *v20; // rdi
  __int64 *i; // rbx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // esi
  unsigned int v28; // edi
  int v29; // eax
  __m128i *v30; // r14
  __int32 v31; // edx
  __int64 v32; // r10
  __m128i *v33; // r8
  __int64 v34; // rdx
  __m128i *v35; // rdi
  __m128i *v36; // rax
  __int64 *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i *v40; // rax
  __m128i *v41; // rcx
  __int64 v42; // rsi
  const __m128i *v43; // r15
  __int64 v44; // rsi
  __m128i *v45; // r11
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int32 v48; // r12d
  __int64 v49; // rdx
  __m128i *v50; // rsi
  __int64 v51; // rdi
  __m128i *v52; // rdx
  __int32 v53; // eax
  __int64 v54; // rax
  __m128i *v55; // r14
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 *v59; // rdi
  int v60; // r8d
  int v61; // r9d
  __m128i *v62; // r10
  __int64 v63; // rsi
  __int64 v64; // xmm1_8
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // rdi
  int *v70; // rdi
  unsigned int v71; // esi
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  int *v76; // r8
  __int64 v77; // rax
  _QWORD *v78; // r10
  __int64 v79; // rax
  int *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // r11
  __int64 v83; // rdx
  unsigned __int64 v84; // rax
  __int64 v85; // r11
  int v86; // [rsp-8h] [rbp-128h]
  int v87; // [rsp+0h] [rbp-120h]
  int v88; // [rsp+0h] [rbp-120h]
  int v89; // [rsp+8h] [rbp-118h]
  __int64 v90; // [rsp+8h] [rbp-118h]
  int v91; // [rsp+10h] [rbp-110h]
  __int64 v92; // [rsp+10h] [rbp-110h]
  __m128i *v93; // [rsp+18h] [rbp-108h]
  __int64 v94; // [rsp+18h] [rbp-108h]
  __int64 v95; // [rsp+20h] [rbp-100h]
  __m128i *v96; // [rsp+20h] [rbp-100h]
  __int64 v97; // [rsp+28h] [rbp-F8h]
  __int64 v98; // [rsp+28h] [rbp-F8h]
  __int32 v99; // [rsp+28h] [rbp-F8h]
  __m128i v100; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v101; // [rsp+40h] [rbp-E0h]
  int v102[2]; // [rsp+48h] [rbp-D8h]
  int v103; // [rsp+50h] [rbp-D0h]
  __m128i *v104; // [rsp+58h] [rbp-C8h] BYREF
  __m128i ptr; // [rsp+60h] [rbp-C0h] BYREF
  int v106[14]; // [rsp+70h] [rbp-B0h] BYREF
  void *v107; // [rsp+A8h] [rbp-78h]
  int v108; // [rsp+B0h] [rbp-70h]
  __int64 v109; // [rsp+B8h] [rbp-68h]

  *(_QWORD *)v102 = a2;
  v7 = *a4;
  if ( *a4 )
  {
    v8 = a4[1];
    v9 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v8, v7);
  }
  v10 = *(_QWORD *)v102;
  *a4 = 0;
  if ( !*(_DWORD *)(v10 + 32) )
    return 5;
  v11 = *(_DWORD **)(v10 + 24);
  if ( v11 )
  {
    if ( *v11 != -1 )
      return 5;
  }
  v12 = a1[2];
  v13 = *(__int64 **)v12;
  v14 = *(unsigned int *)(v12 + 8);
  v15 = *(_DWORD *)(*(_QWORD *)v102 + 12LL);
  v16 = v14 - 1;
  v14 *= 24;
  v17 = 3LL * (v15 & v16);
  v18 = (__int64 *)((char *)v13 + v14);
  v19 = 8 * v17;
  v20 = &v13[(unsigned __int64)v19 / 8];
  if ( v19 != v14 )
  {
    for ( i = &v13[(unsigned __int64)v19 / 8]; v18 != i; i += 3 )
    {
      v22 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v15 && *(_QWORD *)v102 == v22 )
          goto LABEL_23;
      }
      else if ( !v22 )
      {
        return 5;
      }
    }
  }
  if ( v13 == v20 )
    return 5;
  while ( 1 )
  {
    v24 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
      break;
    if ( !v24 )
      return 5;
LABEL_19:
    v13 += 3;
    if ( v20 == v13 )
      return 5;
  }
  if ( *(_DWORD *)(v24 + 12) != v15 || *(_QWORD *)v102 != v24 )
    goto LABEL_19;
  i = v13;
LABEL_23:
  if ( v18 == i )
    return 5;
  while ( (unsigned __int64)*i <= 1 )
  {
    i += 3;
    if ( v18 == i )
      return 5;
  }
  if ( v18 == i )
    return 5;
  v25 = a1[3];
  v26 = *(unsigned int *)(v25 + 8);
  v27 = *(_DWORD *)(v25 + 16);
  v28 = 2 * v26;
  v29 = v27 + *(_DWORD *)(v25 + 12);
  v100.m128i_i32[0] = 2 * v26;
  if ( 3 * (int)v26 < (unsigned int)(4 * v29) )
  {
    v97 = v25;
    v101 = 16LL * v28;
    v40 = (__m128i *)sub_186B270(v101);
    v32 = v101;
    v25 = v97;
    v30 = v40;
    v41 = (__m128i *)((char *)v40 + v101);
    if ( v28 )
    {
      if ( (v101 & 0x10) == 0 || (*v40 = 0, ++v40, v40 != v41) )
      {
        v42 = *(_QWORD *)v102;
        do
        {
          *v40 = 0;
          v40 += 2;
          v40[-1] = 0;
        }
        while ( v40 != v41 );
        *(_QWORD *)v102 = v42;
      }
    }
    v43 = *(const __m128i **)v97;
    v33 = v41;
    v44 = 16LL * *(unsigned int *)(v97 + 8);
    v45 = (__m128i *)(*(_QWORD *)v97 + v44);
    v31 = v100.m128i_i32[0] - 1;
    if ( *(__m128i **)v97 != v45 )
    {
      v46 = *(_QWORD *)v102;
      v47 = a1;
      *(_QWORD *)v102 = *(_QWORD *)v97 + v44;
      v48 = v100.m128i_i32[0] - 1;
      do
      {
        if ( v43->m128i_i64[0] > 1uLL )
        {
          v49 = 16LL * (*(_DWORD *)(v43->m128i_i64[0] + 12) & (unsigned int)v48);
          v50 = &v30[(unsigned __int64)v49 / 0x10];
          if ( v32 == v49 )
          {
LABEL_61:
            if ( v30 == v50 )
            {
LABEL_117:
              v101 = v97;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = *(_QWORD *)v102;
            v52 = v30;
            while ( v52->m128i_i64[0] )
            {
              if ( v50 == ++v52 )
                goto LABEL_117;
            }
          }
          else
          {
            v51 = *(_QWORD *)v102;
            v52 = &v30[(unsigned __int64)v49 / 0x10];
            while ( v52->m128i_i64[0] )
            {
              if ( v33 == ++v52 )
                goto LABEL_61;
            }
          }
          *(_QWORD *)v102 = v51;
          *v52 = _mm_loadu_si128(v43);
        }
        ++v43;
      }
      while ( *(const __m128i **)v102 != v43 );
      *(_QWORD *)v102 = v46;
      v45 = *(__m128i **)v97;
      v31 = v48;
      a1 = v47;
    }
    if ( v45 )
    {
      v93 = v33;
      v95 = v32;
      LODWORD(v97) = v31;
      v101 = v25;
      sub_186B220(v45);
      v33 = v93;
      v32 = v95;
      v31 = v97;
      v25 = v101;
    }
    v53 = v100.m128i_i32[0];
    *(_QWORD *)v25 = v30;
    v27 = 0;
    *(_DWORD *)(v25 + 16) = 0;
    *(_DWORD *)(v25 + 8) = v53;
    v15 = *(_DWORD *)(*(_QWORD *)v102 + 12LL);
  }
  else
  {
    v30 = *(__m128i **)v25;
    v31 = v26 - 1;
    v32 = 16 * v26;
    v33 = (__m128i *)(*(_QWORD *)v25 + v32);
  }
  v34 = 16LL * (v15 & (unsigned int)v31);
  v35 = &v30[(unsigned __int64)v34 / 0x10];
  if ( v34 == v32 )
  {
    v37 = nullptr;
LABEL_38:
    if ( v35 == v30 )
    {
LABEL_132:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v39 = v30->m128i_i64[0];
      if ( v30->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v39 + 12) == v15 && *(_QWORD *)v102 == v39 )
        {
          v37 = (__int64 *)v30;
          v83 = v30->m128i_i64[1];
          goto LABEL_121;
        }
      }
      else
      {
        if ( !v39 )
        {
          v54 = *(_QWORD *)v102;
          if ( v37 )
            *(_DWORD *)(v25 + 16) = v27 - 1;
          else
            v37 = (__int64 *)v30;
          goto LABEL_72;
        }
        v37 = (__int64 *)v30;
      }
      if ( v35 == ++v30 )
        goto LABEL_132;
    }
  }
  v36 = &v30[(unsigned __int64)v34 / 0x10];
  v37 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = v36->m128i_i64[0];
      if ( v36->m128i_i64[0] > 1uLL )
        break;
      if ( !v38 )
      {
        if ( v37 )
        {
          v54 = *(_QWORD *)v102;
          *(_DWORD *)(v25 + 16) = v27 - 1;
        }
        else
        {
          v37 = (__int64 *)v36;
          v54 = *(_QWORD *)v102;
        }
LABEL_72:
        *v37 = v54;
        v37[1] = 0;
        ++*(_DWORD *)(v25 + 12);
        goto LABEL_73;
      }
      v37 = (__int64 *)v36++;
      if ( v36 == v33 )
        goto LABEL_38;
    }
    if ( *(_DWORD *)(v38 + 12) == v15 && *(_QWORD *)v102 == v38 )
      break;
    if ( ++v36 == v33 )
      goto LABEL_38;
  }
  v83 = v36->m128i_i64[1];
  v37 = (__int64 *)v36;
LABEL_121:
  if ( !v83 )
  {
LABEL_73:
    v100 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(i + 1), (__m128i)(unsigned __int64)(i + 1));
    v55 = (__m128i *)sub_186B270(0x28u);
    *v55 = _mm_load_si128(&v100);
    v56 = (_QWORD *)sub_186B270(0xC0u);
    v55[1].m128i_i64[1] = 8;
    *v56 = 0;
    v56[3] = 0;
    v56[6] = 0;
    v56[9] = 0;
    v56[12] = 0;
    v56[15] = 0;
    v56[18] = 0;
    v56[21] = 0;
    v55[1].m128i_i64[0] = (__int64)v56;
    v55[2].m128i_i32[0] = 0;
    v37[1] = (__int64)v55;
  }
  v57 = sub_15DC610(
          *a1,
          v102[0],
          0,
          0,
          (int)v33,
          v25,
          v87,
          v89,
          v91,
          (int)v93,
          v95,
          v97,
          v100.m128i_i32[0],
          v100.m128i_i32[2],
          *a1,
          *(void **)v102);
  v58 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v59 = (__int64 *)v37[1];
  v104 = nullptr;
  ptr = (__m128i)(unsigned __int64)v57;
  sub_D24260(v59, &ptr, &v104);
  v62 = v104;
  v63 = v104[1].m128i_i64[0];
  if ( v63 )
  {
    v64 = 0x1000000000LL;
  }
  else
  {
    ptr.m128i_i64[0] = (__int64)v106;
    v71 = *(_DWORD *)(*(_QWORD *)v102 + 32LL);
    ptr.m128i_i64[1] = 0x1000000000LL;
    if ( v71 )
    {
      v72 = v71;
      v73 = 0;
      v71 = 0;
      do
      {
        if ( (*(_DWORD *)(i[2] + 4LL * ((unsigned int)v73 >> 5)) & (1 << v73)) == 0 )
        {
          v100.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v102 + 8 * v73 + 48);
          if ( v71 >= ptr.m128i_i32[3] )
          {
            v92 = v72;
            v99 = 2 * ptr.m128i_i32[3];
            v94 = v73;
            v96 = v62;
            LODWORD(v90) = 0;
            v79 = sub_186B270(8LL * (unsigned int)(2 * ptr.m128i_i32[3]));
            v71 = ptr.m128i_u32[2];
            v80 = (int *)ptr.m128i_i64[0];
            v74 = v79;
            v62 = v96;
            v73 = v94;
            v72 = v92;
            if ( ptr.m128i_i32[2] )
            {
              if ( (unsigned int)(ptr.m128i_i32[2] - 1) <= 2 || v79 == ptr.m128i_i64[0] + 8 )
              {
                LODWORD(v96) = v94;
                v84 = 0;
                v85 = 8LL * ptr.m128i_u32[2];
                do
                {
                  *(_QWORD *)(v74 + v84) = *(_QWORD *)&v80[v84 / 4];
                  v84 += 8LL;
                }
                while ( v84 != v85 );
                v73 = v94;
              }
              else
              {
                LODWORD(v96) = v94;
                v81 = 0;
                v82 = 16LL * ((unsigned __int32)ptr.m128i_i32[2] >> 1);
                do
                {
                  *(__m128i *)(v74 + v81) = _mm_loadu_si128((const __m128i *)&v80[v81 / 4]);
                  v81 += 16LL;
                }
                while ( v81 != v82 );
                v73 = v94;
                if ( (v71 & 1) != 0 )
                  *(_QWORD *)(v74 + 8LL * (v71 & 0xFFFFFFFE)) = *(_QWORD *)&v80[2 * (v71 & 0xFFFFFFFE)];
              }
            }
            if ( v80 != v106 && v80 )
            {
              v90 = v74;
              v94 = v73;
              v96 = v62;
              v88 = 0;
              sub_186B220(v80);
              v71 = ptr.m128i_u32[2];
              v74 = v90;
              v72 = v92;
              v73 = v94;
              v62 = v96;
            }
            ptr.m128i_i64[0] = v74;
            ptr.m128i_i32[3] = v99;
          }
          else
          {
            v74 = ptr.m128i_i64[0];
          }
          v75 = v71++;
          *(_QWORD *)(v74 + 8 * v75) = v100.m128i_i64[0];
          ptr.m128i_i32[2] = v71;
        }
        ++v73;
      }
      while ( v73 != v72 );
      LODWORD(v76) = ptr.m128i_i32[0];
    }
    else
    {
      v76 = v106;
    }
    v77 = sub_15E3D10(
            *a1,
            v102[0] + 16,
            (int)&qword_18D6CD0,
            v71,
            (int)v76,
            *(_QWORD *)(*(_QWORD *)v102 + 40LL),
            1,
            v86,
            v88,
            v90,
            v92,
            v94,
            (int)v96,
            0,
            (char)v62,
            v100.m128i_i32[2],
            v101,
            v102[0],
            v103,
            (int)v104,
            ptr.m128i_i32[0],
            ptr.m128i_i32[2],
            v106[0],
            v106[2],
            v106[4],
            v106[6],
            v106[8],
            v106[10],
            v106[12],
            v107,
            v108,
            v109);
    v78 = (_QWORD *)v100.m128i_i64[0];
    v64 = v98;
    *(_QWORD *)(v100.m128i_i64[0] + 16) = v77;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    if ( v77 )
      ++*(_DWORD *)(v77 + 8);
    if ( (int *)ptr.m128i_i64[0] != v106 && ptr.m128i_i64[0] )
    {
      *(_QWORD *)v102 = v78;
      v100.m128i_i64[0] = v98;
      sub_186B220((void *)ptr.m128i_i64[0]);
      v78 = *(_QWORD **)v102;
      v64 = v100.m128i_i64[0];
    }
    v63 = v78[2];
  }
  v65 = *a1;
  ptr.m128i_i64[0] = (__int64)v106;
  ptr.m128i_i64[1] = v64;
  v66 = sub_15DC610(
          v65,
          v63,
          0,
          (int)v106,
          v60,
          v61,
          v88,
          v90,
          v92,
          v94,
          (int)v96,
          v98,
          v100.m128i_i32[0],
          v100.m128i_i32[2],
          v101,
          *(void **)v102);
  v67 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  v68 = *a3;
  if ( *a3 )
  {
    v69 = a3[1];
    v9 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v69, v68);
  }
  v70 = (int *)ptr.m128i_i64[0];
  *a3 = v67;
  if ( v70 && v70 != v106 )
    sub_186B220(v70);
  if ( v58 )
  {
    v9 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v101, v58);
  }
  return 4;
}

