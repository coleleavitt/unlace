__int64 __fastcall sub_6F80C0(const __m128i *a1, __int64 a2, __int64 *a3, double *a4, int a5, int a6)
{
  const __m128i *v7; // r12
  __int64 (__fastcall **v10)(); // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  double v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // rsi
  double v21; // rdi
  __int64 v22; // r8
  _QWORD *v23; // r15
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 result; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int **v35; // r15
  _QWORD *v36; // r15
  _QWORD *v37; // rdx
  char v38; // r14
  _QWORD *v39; // r12
  _QWORD *v40; // r15
  unsigned int **v41; // r14
  _DWORD *v42; // rdx
  unsigned int i; // eax
  unsigned int v44; // ecx
  __int64 v45; // r15
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  _DWORD *v49; // rsi
  unsigned int **v50; // rax
  unsigned int v51; // r8d
  unsigned int **k; // r9
  unsigned int *v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned int **v58; // rcx
  unsigned int *v59; // rsi
  _DWORD *v60; // rsi
  __m128i v61; // xmm0
  int v62; // eax
  __m128i v63; // xmm0
  unsigned int v64; // r14d
  __int64 v65; // rax
  int v66; // edx
  unsigned int v67; // r14d
  __int64 j; // rax
  void *v69; // [rsp-8h] [rbp-1A8h]
  _QWORD *v70; // [rsp+0h] [rbp-1A0h]
  const __m128i *v71; // [rsp+10h] [rbp-190h]
  unsigned int v72; // [rsp+10h] [rbp-190h]
  __int64 v73; // [rsp+10h] [rbp-190h]
  __int64 v74; // [rsp+18h] [rbp-188h]
  unsigned int **v75; // [rsp+20h] [rbp-180h]
  _DWORD *v76; // [rsp+20h] [rbp-180h]
  unsigned int **v77; // [rsp+28h] [rbp-178h]
  _DWORD *v78; // [rsp+28h] [rbp-178h]
  unsigned int *v79; // [rsp+30h] [rbp-170h]
  unsigned int v80; // [rsp+3Ch] [rbp-164h]
  unsigned int **v81; // [rsp+40h] [rbp-160h]
  int v82; // [rsp+54h] [rbp-14Ch] BYREF
  __int64 v83; // [rsp+58h] [rbp-148h] BYREF
  __int64 v84; // [rsp+60h] [rbp-140h]
  __m128 v85; // [rsp+68h] [rbp-138h] BYREF
  __int64 v86; // [rsp+80h] [rbp-120h] BYREF
  void *v87; // [rsp+88h] [rbp-118h]
  int v88[2]; // [rsp+98h] [rbp-108h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-100h] BYREF
  void *v90; // [rsp+A8h] [rbp-F8h]
  int v91[4]; // [rsp+B8h] [rbp-E8h] BYREF
  int *v92; // [rsp+C8h] [rbp-D8h] BYREF
  _DWORD *v93; // [rsp+D0h] [rbp-D0h]
  void *v94[2]; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+E8h] [rbp-B8h]
  __int64 v96; // [rsp+F0h] [rbp-B0h]
  void *v97; // [rsp+F8h] [rbp-A8h]
  __int64 v98; // [rsp+100h] [rbp-A0h]
  __int64 *v99; // [rsp+108h] [rbp-98h]
  void *ptr; // [rsp+110h] [rbp-90h]
  __int64 (__fastcall **v101)(); // [rsp+118h] [rbp-88h] BYREF
  __int64 v102; // [rsp+120h] [rbp-80h]
  __int64 (__fastcall **v103)(); // [rsp+128h] [rbp-78h] BYREF
  void *v104; // [rsp+130h] [rbp-70h]
  __int64 (__fastcall **v105)(); // [rsp+138h] [rbp-68h] BYREF
  __int64 v106; // [rsp+140h] [rbp-60h]
  void *v107; // [rsp+148h] [rbp-58h]
  __int64 v108[2]; // [rsp+150h] [rbp-50h] BYREF
  char v109; // [rsp+160h] [rbp-40h]

  v7 = a1;
  v10 = (__int64 (__fastcall **)())a1->m128i_i64[0];
  v11 = a1[2].m128i_i8[10] == 0;
  *(_QWORD *)v91 = &off_1C53478;
  *(_QWORD *)&v91[2] = v10;
  v101 = v10;
  v103 = v10;
  v105 = v10;
  v93 = nullptr;
  v96 = 0;
  v97 = nullptr;
  v99 = nullptr;
  ptr = nullptr;
  v102 = 0;
  v104 = nullptr;
  v106 = 0;
  *(_OWORD *)v94 = 0;
  if ( v11 )
  {
    sub_EBF490((int)v91, a2, (int)a3, (int)a4, a5, a6, v69);
    *(_QWORD *)v91 = &off_1C53478;
    sub_2334C0((__int64 *)&v105);
    sub_2334C0((__int64 *)&v103);
    result = sub_2334C0((__int64 *)&v101);
    if ( ptr )
      result = sub_186B220(ptr);
    if ( v97 )
      result = sub_186B220(v97);
    if ( v94[1] )
      result = sub_186B220((char *)v94[1] - 8);
    if ( v94[0] )
      result = sub_186B220(v94[0]);
    while ( 1 )
    {
      v35 = (unsigned int **)a3[1];
      if ( !v35 || !*((_DWORD *)v35 - 1) )
        return result;
      v86 = 0;
      v89 = 0;
      result = *((unsigned int *)v35 - 1);
      v87 = nullptr;
      v90 = nullptr;
      if ( (_DWORD)result )
      {
        v41 = &v35[result];
        v42 = nullptr;
        for ( i = 0; ; i = v86 )
        {
          v44 = **v35;
          if ( v44 >= i )
          {
            v72 = **v35;
            sub_186B510(&v86, v44 + 1, 0);
            v42 = v87;
            v44 = v72;
          }
          ++v35;
          v42[v44 >> 5] |= 1 << v44;
          if ( v41 == v35 )
            break;
        }
        v45 = v7->m128i_i64[0];
        v46 = *((_QWORD *)a4 + 1);
        v83 = 0;
        v82 = 0;
        v84 = v45;
        if ( v46 )
        {
          v73 = 0;
          v38 = 0;
          v47 = 0;
          v74 = 0;
          do
          {
            if ( v47 >= *(_DWORD *)(v46 - 4) )
              break;
            while ( 1 )
            {
              v48 = *(_QWORD *)(v46 + 8LL * v47);
              if ( !*(_WORD *)(v48 + 4) )
              {
                v49 = *(_DWORD **)(*(_QWORD *)(v48 + 16) + 24LL);
                if ( v49 )
                {
                  if ( !*v49 && v49[1] == 2 && *(_DWORD *)(v48 + 24) == 2 )
                  {
                    v60 = *(_DWORD **)(v48 + 32);
                    v78 = *(_DWORD **)(v48 + 40);
                    v76 = v60;
                    if ( *v78 < (unsigned int)v86 && (*((_DWORD *)v87 + (*v78 >> 5)) & (1 << *v78)) != 0 )
                      goto LABEL_104;
                    if ( *v60 < (unsigned int)v86 && (*((_DWORD *)v87 + (*v60 >> 5)) & (1 << *v60)) != 0 )
                      break;
                  }
                }
              }
              v82 = ++v47;
              if ( v47 >= *(_DWORD *)(v46 - 4) )
                goto LABEL_78;
            }
            v78 = *(_DWORD **)(v48 + 32);
            v76 = *(_DWORD **)(v48 + 40);
LABEL_104:
            v61 = _mm_loadl_epi64(v7);
            ++v78[2];
            v93 = v78;
            v94[0] = &v92;
            v92 = &off_1C4E7B8;
            v96 = 0;
            v94[1] = &off_1C62200;
            v101 = &off_1C62200;
            v97 = nullptr;
            v99 = nullptr;
            ptr = nullptr;
            v103 = nullptr;
            v104 = nullptr;
            v106 = 0;
            v107 = nullptr;
            v108[1] = 0;
            v109 = 1;
            *(__m128i *)v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v78, v61);
            v108[0] = v61.m128i_i64[0];
            if ( (unsigned __int8)sub_168D740(v94, v76) )
            {
              sub_2334C0(v108);
              v101 = &off_1C62200;
              if ( v107 )
                sub_186B220(v107);
              if ( v104 )
                sub_186B220(v104);
              v94[1] = &off_1C62200;
              if ( ptr )
                sub_186B220(ptr);
              if ( v97 )
                sub_186B220(v97);
              sub_6EF3E0(*(__int64 *)v91, *(__int64 *)&v91[2]);
              v46 = *((_QWORD *)a4 + 1);
              v62 = v82;
            }
            else
            {
              ++v78[2];
              sub_6EF400(v73, v45);
              if ( v76 )
                ++v76[2];
              sub_6EF400(v74, v45);
              sub_2334C0(v108);
              v101 = &off_1C62200;
              if ( v107 )
                sub_186B220(v107);
              if ( v104 )
                sub_186B220(v104);
              v94[1] = &off_1C62200;
              if ( ptr )
                sub_186B220(ptr);
              if ( v97 )
                sub_186B220(v97);
              sub_6EF3E0(*(__int64 *)v91, *(__int64 *)&v91[2]);
              sub_EBCB40(a4, &v82);
              v63 = _mm_loadl_epi64(v7);
              v92 = nullptr;
              v94[0] = nullptr;
              v94[1] = nullptr;
              v95 = 0;
              v96 = 0;
              v98 = 0;
              v99 = (__int64 *)&v105;
              ptr = &dword_0 + 1;
              v101 = nullptr;
              v102 = 0;
              LODWORD(v103) = 1065353216;
              v104 = nullptr;
              v105 = nullptr;
              *(__m128i *)v91 = _mm_unpacklo_epi64(v63, v63);
              v93 = (_DWORD *)v63.m128i_i64[0];
              v97 = (void *)v63.m128i_i64[0];
              sub_14EA0D0(v91, v78, v76);
              v64 = *v78;
              if ( *v78 >= (unsigned int)v89 )
                sub_186B510(&v89, v64 + 1, 0);
              v65 = v64 >> 5;
              v66 = 1 << v64;
              v67 = 0;
              *((_DWORD *)v90 + v65) |= v66;
              for ( j = *((_QWORD *)a4 + 1); j; ++v67 )
              {
                if ( v67 >= *(_DWORD *)(j - 4) )
                  break;
                sub_14EA2A0(v91, *(_QWORD *)(j + 8LL * v67), &v83);
                sub_14B9B80(&v7[1], &v83);
                v85 = _mm_loadh_ps(a4);
                sub_6EF420((__int64 **)&v85, v83);
                j = *((_QWORD *)a4 + 1);
              }
              v38 = 1;
              sub_268600((__int64)v91);
              v46 = *((_QWORD *)a4 + 1);
              v62 = v82;
              v73 = (__int64)v78;
              v74 = (__int64)v76;
            }
            v47 = v62 + 1;
            v82 = v47;
          }
          while ( v46 );
LABEL_78:
          if ( v38 )
          {
            v50 = (unsigned int **)a3[1];
            if ( v50 )
            {
              v51 = 0;
              for ( k = &v50[*((unsigned int *)v50 - 1)]; k != v50; ++v50 )
              {
                v53 = *v50;
                v54 = **v50;
                if ( v54 >= (unsigned int)v89 || (*((_DWORD *)v90 + (v54 >> 5)) & (1 << v54)) == 0 )
                {
                  v55 = a3[1];
                  v56 = v51;
                  v57 = *a3;
                  ++v51;
                  ++v53[2];
                  v58 = (unsigned int **)(v55 + 8 * v56);
                  v59 = *v58;
                  if ( *v58 )
                  {
                    v11 = v59[2]-- == 1;
                    if ( v11 )
                    {
                      v81 = v58;
                      v80 = v51;
                      v79 = v53;
                      v77 = k;
                      v75 = v50;
                      sub_15D7BC0(v57, v59);
                      v58 = v81;
                      v51 = v80;
                      v53 = v79;
                      k = v77;
                      v50 = v75;
                    }
                  }
                  *v58 = v53;
                }
              }
            }
            else
            {
              v51 = 0;
            }
            sub_3A9A20(a3, v51);
          }
          sub_6EF400(v73, v45);
        }
        else
        {
          v74 = 0;
          v38 = 0;
          sub_6EF400(0, v45);
        }
        sub_6EF400(v74, v45);
        result = sub_6EF400(v83, v84);
        if ( v90 )
          result = sub_186B220(v90);
        if ( v87 )
          result = sub_186B220(v87);
        v36 = (_QWORD *)v7[2].m128i_i64[0];
        if ( !v36 )
          goto LABEL_63;
        result = *((unsigned int *)v36 - 1);
        v37 = &v36[result];
        if ( v36 == v37 )
          goto LABEL_63;
      }
      else
      {
        v36 = (_QWORD *)v7[2].m128i_i64[0];
        if ( !v36 )
          return result;
        result = *((unsigned int *)v36 - 1);
        v37 = &v36[result];
        if ( v36 == v37 )
          return result;
        v38 = 0;
      }
      v71 = v7;
      v39 = v36;
      v40 = v37;
      do
      {
        if ( *v39 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, double *))(*(_QWORD *)*v39 + 24LL))(
                     *v39,
                     a2,
                     a3,
                     a4);
          v38 |= result;
        }
        ++v39;
      }
      while ( v40 != v39 );
      v7 = v71;
LABEL_63:
      if ( !v38 )
        return result;
    }
  }
  sub_EBF490((int)v91, a2, (int)a3, (int)a4, a5, a6, v69);
  *(_QWORD *)v91 = &off_1C53478;
  sub_2334C0((__int64 *)&v105);
  sub_2334C0((__int64 *)&v103);
  sub_2334C0((__int64 *)&v101);
  if ( ptr )
    sub_186B220(ptr);
  if ( v97 )
    sub_186B220(v97);
  if ( v94[1] )
    sub_186B220((char *)v94[1] - 8);
  if ( v94[0] )
    sub_186B220(v94[0]);
  *(_QWORD *)v88 = 0;
  v89 = a1->m128i_i64[0];
  do
  {
    v12 = a3[1];
    if ( !v12 || !*(_DWORD *)(v12 - 4) )
      break;
    v13 = *((_QWORD *)a4 + 1);
    if ( v13 )
      v14 = *(unsigned int *)(v13 - 4);
    else
      v14 = 0;
    v15 = *a4;
    v16 = sub_15EC1C0(*(_QWORD *)a4, v14);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = *(_QWORD *)v88;
    *(_QWORD *)v88 = v16;
    sub_6EF400(v17, *(__int64 *)&v15);
    sub_E65950(v91, v7->m128i_i64[0], &v7->m128i_u64[1]);
    sub_E659B0(v91, a3, v88);
    sub_14B9B80(&v7[1], v88);
    sub_E65980(v91);
    v18 = *((_QWORD **)a4 + 1);
    if ( v18 )
    {
      v19 = &v18[*((unsigned int *)v18 - 1)];
      if ( v18 >= v19 )
        goto LABEL_25;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v21 = *a4;
            v11 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( ++v18 >= v19 )
            goto LABEL_24;
        }
        sub_15D7BC0(*(_QWORD *)&v21, v20);
        ++v18;
      }
      while ( v18 < v19 );
LABEL_24:
      v18 = *((_QWORD **)a4 + 1);
      if ( v18 )
LABEL_25:
        *((_DWORD *)v18 - 1) = 0;
    }
    sub_15EEF60(*(_QWORD *)v88);
    v22 = v7[2].m128i_i64[0];
    if ( !v22 )
      break;
    v70 = (_QWORD *)(v22 + 8LL * *(unsigned int *)(v22 - 4));
    if ( v70 == (_QWORD *)v22 )
      break;
    v23 = (_QWORD *)v7[2].m128i_i64[0];
    v24 = 0;
    do
    {
      if ( *v23 )
        v24 |= (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, double *))(*(_QWORD *)*v23 + 24LL))(
                 *v23,
                 a2,
                 a3,
                 a4);
      ++v23;
    }
    while ( v70 != v23 );
  }
  while ( (_BYTE)v24 );
  v25 = *((_QWORD *)a4 + 1);
  v26 = v7->m128i_i64[0];
  if ( v25 )
    v27 = *(unsigned int *)(v25 - 4);
  else
    v27 = 0;
  v28 = sub_15EC1C0(*(_QWORD *)a4, v27);
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v26);
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  *(__m128i *)v91 = v29;
  sub_6F0450(v28, a2, (__int64)v91);
  v30 = *(_QWORD *)v91;
  v31 = *(_QWORD *)&v91[2];
  result = sub_15EEF60(*(_QWORD *)v91);
  if ( v30 )
  {
    v11 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v31, v30);
  }
  v33 = *(_QWORD *)v88;
  if ( *(_QWORD *)v88 )
  {
    v34 = v89;
    v11 = (*(_DWORD *)(*(_QWORD *)v88 + 8LL))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v34, v33);
  }
  return result;
}

