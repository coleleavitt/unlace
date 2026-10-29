__int64 __fastcall sub_CDB3A0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rbp
  __int64 result; // rax
  int v7; // edx
  __int64 *p_ptr; // r12
  __int16 v9; // dx
  __int64 *v10; // r13
  unsigned int v11; // edx
  __int64 v12; // rax
  int *v13; // rbp
  unsigned int v14; // ebx
  int v15; // eax
  int *v16; // rsi
  int v17; // edi
  __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  bool v22; // cc
  unsigned int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // esi
  __m128i *v32; // rbx
  int v33; // eax
  size_t v34; // r15
  __m128i *v35; // r12
  int v36; // edi
  __int64 v37; // rax
  __m128i *v38; // r9
  __m128i *v39; // rax
  __int64 *v40; // r10
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r14
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // esi
  unsigned int v52; // r10d
  __m128i *v53; // rbx
  unsigned int v54; // eax
  __int64 v55; // rcx
  __m128i *v56; // rbp
  int v57; // edi
  __int64 v58; // rax
  __m128i *v59; // r10
  __m128i *v60; // rax
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbp
  __m128i *v65; // rax
  int v66; // r10d
  __m128i *v67; // rdx
  const __m128i *v68; // r15
  __m128i *v69; // r11
  __int64 v70; // rdx
  __m128i *v71; // rsi
  __m128i *v72; // rdx
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v75; // rax
  __m128i *v76; // rax
  int v77; // r9d
  __m128i *v78; // rdx
  const __m128i *v79; // r14
  __m128i *v80; // r10
  __int64 v81; // rdx
  __m128i *v82; // rsi
  __m128i *v83; // rdx
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 *v86; // rax
  __int64 v87; // rdx
  __int64 v89; // [rsp+0h] [rbp-198h]
  __int64 v90; // [rsp+0h] [rbp-198h]
  int v91; // [rsp+0h] [rbp-198h]
  __int64 v92; // [rsp+0h] [rbp-198h]
  size_t v95; // [rsp+18h] [rbp-180h]
  __int64 v96; // [rsp+18h] [rbp-180h]
  __int64 v97; // [rsp+18h] [rbp-180h]
  int v98; // [rsp+18h] [rbp-180h]
  int v99; // [rsp+20h] [rbp-178h]
  __int64 v100; // [rsp+20h] [rbp-178h]
  __int64 v101; // [rsp+28h] [rbp-170h]
  size_t v102; // [rsp+28h] [rbp-170h]
  int v103; // [rsp+28h] [rbp-170h]
  __int64 v104; // [rsp+30h] [rbp-168h]
  unsigned int v105; // [rsp+48h] [rbp-150h]
  __int64 *v106; // [rsp+50h] [rbp-148h]
  __int64 v107; // [rsp+58h] [rbp-140h]
  __int64 ptr; // [rsp+60h] [rbp-138h] BYREF
  int v109; // [rsp+68h] [rbp-130h]

  v3 = (__int64)a3;
  if ( a3[2] > 1u )
  {
    v4 = 1 << *a3;
    v5 = 4LL * (*a3 >> 5);
    if ( *a3 >= *(_DWORD *)(a2 + 8) )
    {
      sub_186B510(a2 + 8, (unsigned int)(*a3 + 1), 0);
      v3 = (__int64)a3;
      result = v5 + *(_QWORD *)(a2 + 16);
      v7 = *(_DWORD *)result;
    }
    else
    {
      result = v5 + *(_QWORD *)(a2 + 16);
      v7 = *(_DWORD *)result;
      if ( (v4 & *(_DWORD *)result) != 0 )
        return result;
    }
    *(_DWORD *)result = v4 | v7;
  }
  p_ptr = &ptr;
  ptr = v3;
  v106 = &ptr;
  v109 = 0;
  v107 = 0x1000000001LL;
  for ( result = 0; ; v3 = p_ptr[2 * result] )
  {
    while ( 1 )
    {
      v9 = *(_WORD *)(v3 + 4);
      v10 = &p_ptr[2 * (unsigned int)result];
      if ( v9 == 1 )
        goto LABEL_27;
      if ( v9 != 2 )
        break;
      v19 = *(_DWORD *)(v3 + 72);
      v20 = *((_DWORD *)v10 + 2);
      v21 = v19 + *(_DWORD *)(v3 + 76) + 1;
      if ( v20 >= v21 )
      {
LABEL_26:
        result = (unsigned int)(v107 - 1);
LABEL_27:
        LODWORD(v107) = result;
        if ( !(_DWORD)result )
          goto LABEL_31;
        goto LABEL_28;
      }
      if ( !v20 )
      {
        v13 = *(int **)(v3 + 24);
        goto LABEL_37;
      }
      while ( 1 )
      {
        v74 = v20 - 1;
        if ( v19 < v20 )
          v74 = (unsigned int)v74 - v19;
        v13 = *(int **)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v74 + 80);
LABEL_37:
        ++v20;
        v22 = (unsigned int)v13[2] <= 1;
        *((_DWORD *)v10 + 2) = v20;
        if ( v22 )
          break;
        v23 = *v13;
        if ( (unsigned int)*v13 >= *(_DWORD *)(a2 + 8) )
        {
          sub_186B510(a2 + 8, v23 + 1, 0);
          v24 = *(_QWORD *)(a2 + 16);
LABEL_40:
          *(_DWORD *)(v24 + 4LL * (v23 >> 5)) |= 1 << v23;
          break;
        }
        v24 = *(_QWORD *)(a2 + 16);
        if ( (*(_DWORD *)(v24 + 4LL * (v23 >> 5)) & (1 << v23)) == 0 )
          goto LABEL_40;
        if ( v20 >= v21 )
          goto LABEL_26;
        v19 = *(_DWORD *)(v3 + 72);
      }
      v25 = (unsigned int)v107;
      if ( (unsigned int)v107 >= HIDWORD(v107) )
      {
        v43 = (unsigned int)(2 * HIDWORD(v107));
        p_ptr = (__int64 *)sub_186B270(16 * v43);
        v44 = v106;
        v75 = 0;
        v25 = (unsigned int)v107;
        if ( (_DWORD)v107 )
        {
          do
          {
            *(__m128i *)&p_ptr[v75] = _mm_loadu_si128((const __m128i *)&v106[v75]);
            v75 += 2;
          }
          while ( v75 != 2LL * (unsigned int)v107 );
        }
        goto LABEL_66;
      }
LABEL_42:
      p_ptr = v106;
LABEL_43:
      v26 = &p_ptr[2 * v25];
      *((_DWORD *)v26 + 2) = 0;
      v27 = (unsigned int)v107;
      *v26 = (__int64)v13;
      v28 = v107 + 1;
LABEL_44:
      LODWORD(v107) = v28;
      result = (unsigned int)(v28 - 1);
      v3 = p_ptr[2 * v27];
    }
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v11 = *((_DWORD *)v10 + 2);
    v105 = *(_DWORD *)(v3 + 24);
    if ( v11 < v105 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(int **)(v3 + 8 * v12 + 32);
        *((_DWORD *)v10 + 2) = v11;
        if ( (unsigned int)v13[2] > 1 )
        {
          v14 = *v13;
          if ( (unsigned int)*v13 < *(_DWORD *)(a2 + 8) )
          {
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v14 >> 5));
            v17 = *v16;
            v15 = 1 << v14;
            if ( ((1 << v14) & *v16) != 0 )
              goto LABEL_20;
          }
          else
          {
            v89 = v3;
            sub_186B510(a2 + 8, v14 + 1, 0);
            v3 = v89;
            v15 = 1 << v14;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v14 >> 5));
            v17 = *v16;
          }
          *v16 = v17 | v15;
        }
        v18 = *((_WORD *)v13 + 2);
        if ( v18 == 1 )
          goto LABEL_23;
        if ( v18 == 2 )
        {
          v25 = (unsigned int)v107;
          if ( (unsigned int)v107 < HIDWORD(v107) )
            goto LABEL_42;
          v43 = (unsigned int)(2 * HIDWORD(v107));
          p_ptr = (__int64 *)sub_186B270(16 * v43);
          v44 = v106;
          v45 = 0;
          v25 = (unsigned int)v107;
          if ( (_DWORD)v107 )
          {
            do
            {
              *(__m128i *)&p_ptr[v45] = _mm_loadu_si128((const __m128i *)&v106[v45]);
              v45 += 2;
            }
            while ( v45 != 2LL * (unsigned int)v107 );
          }
LABEL_66:
          if ( v44 != &ptr && v44 )
          {
            sub_186B220(v44);
            v25 = (unsigned int)v107;
          }
          v106 = p_ptr;
          HIDWORD(v107) = v43;
          goto LABEL_43;
        }
        if ( v18 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v13[6] )
        {
          v85 = (unsigned int)v107;
          if ( (unsigned int)v107 >= HIDWORD(v107) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v107)));
            v87 = 0;
            v85 = (unsigned int)v107;
            if ( (_DWORD)v107 )
            {
              do
              {
                *(__m128i *)&p_ptr[v87] = _mm_loadu_si128((const __m128i *)&v106[v87]);
                v87 += 2;
              }
              while ( v87 != 2LL * (unsigned int)v107 );
            }
            if ( v106 != &ptr && v106 )
            {
              sub_186B220(v106);
              v85 = (unsigned int)v107;
            }
            v106 = p_ptr;
            HIDWORD(v107) *= 2;
          }
          else
          {
            p_ptr = v106;
          }
          v86 = &p_ptr[2 * v85];
          *((_DWORD *)v86 + 2) = 0;
          v27 = (unsigned int)v107;
          *v86 = (__int64)v13;
          v28 = v107 + 1;
          goto LABEL_44;
        }
        v29 = *a1;
        v30 = *(_DWORD *)(*a1 + 8);
        v31 = *(_DWORD *)(*a1 + 16);
        if ( 3 * v30 < 4 * (v31 + *(_DWORD *)(*a1 + 12)) )
        {
          v100 = v3;
          v97 = *a1;
          v34 = 32LL * v30;
          v91 = 2 * v30;
          v76 = (__m128i *)sub_186B270(v34);
          v77 = v91;
          v29 = v97;
          v32 = v76;
          v78 = &v76[v34 / 0x10];
          v3 = v100;
          if ( v91 )
          {
            do
            {
              v76->m128i_i64[0] = 0;
              ++v76;
              v76[-1].m128i_i32[2] = 0;
            }
            while ( v76 != v78 );
          }
          v79 = *(const __m128i **)v97;
          v33 = v91 - 1;
          v35 = &v32[v34 / 0x10];
          v80 = (__m128i *)(*(_QWORD *)v97 + 16LL * *(unsigned int *)(v97 + 8));
          if ( *(__m128i **)v97 != v80 )
          {
            do
            {
              while ( v79->m128i_i64[0] <= 1uLL )
              {
                if ( v80 == ++v79 )
                  goto LABEL_143;
              }
              v81 = 16LL * (*(_DWORD *)(v79->m128i_i64[0] + 12) & (unsigned int)v33);
              v82 = &v32[(unsigned __int64)v81 / 0x10];
              if ( v34 == v81 )
              {
LABEL_147:
                if ( v32 == v82 )
                {
LABEL_155:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v83 = v32;
                while ( v83->m128i_i64[0] )
                {
                  if ( v82 == ++v83 )
                    goto LABEL_155;
                }
              }
              else
              {
                v83 = &v32[(unsigned __int64)v81 / 0x10];
                while ( v83->m128i_i64[0] )
                {
                  if ( v35 == ++v83 )
                    goto LABEL_147;
                }
              }
              v84 = _mm_loadu_si128(v79++);
              *v83 = v84;
            }
            while ( v80 != v79 );
LABEL_143:
            v80 = *(__m128i **)v97;
          }
          if ( v80 )
          {
            v103 = v91;
            v98 = v91 - 1;
            v92 = v29;
            sub_186B220(v80);
            v77 = v103;
            v3 = v100;
            v33 = v98;
            v29 = v92;
          }
          *(_QWORD *)v29 = v32;
          v31 = 0;
          *(_DWORD *)(v29 + 8) = v77;
          *(_DWORD *)(v29 + 16) = 0;
        }
        else
        {
          v32 = *(__m128i **)v29;
          v33 = v30 - 1;
          v34 = 16LL * v30;
          v35 = (__m128i *)(*(_QWORD *)v29 + v34);
        }
        v36 = v13[3];
        v37 = 16LL * (v36 & (unsigned int)v33);
        v38 = &v32[(unsigned __int64)v37 / 0x10];
        if ( v37 != v34 )
        {
          v39 = &v32[(unsigned __int64)v37 / 0x10];
          v40 = nullptr;
          while ( 1 )
          {
            v41 = v39->m128i_i64[0];
            if ( v39->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v41 + 12) == v36 && v13 == (int *)v41 )
                goto LABEL_73;
            }
            else
            {
              if ( !v41 )
              {
                if ( v40 )
                  goto LABEL_71;
                v40 = (__int64 *)v39;
                goto LABEL_72;
              }
              v40 = (__int64 *)v39;
            }
            if ( ++v39 == v35 )
              goto LABEL_59;
          }
        }
        v40 = nullptr;
        while ( 1 )
        {
LABEL_59:
          if ( v38 == v32 )
          {
            sub_1872CE0("");
            sub_1873130(114, 461);
          }
          v42 = v32->m128i_i64[0];
          if ( v32->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v42 + 12) == v36 && v13 == (int *)v42 )
            goto LABEL_73;
LABEL_58:
          ++v32;
        }
        if ( v42 )
          break;
        if ( v40 )
LABEL_71:
          *(_DWORD *)(v29 + 16) = v31 - 1;
        else
          v40 = (__int64 *)v32;
LABEL_72:
        *v40 = (__int64)v13;
        *((_DWORD *)v40 + 2) = 0;
        ++*(_DWORD *)(v29 + 12);
LABEL_73:
        v46 = (__int64 *)(v13 + 8);
        v47 = 2LL * (unsigned int)v13[6];
        v90 = (__int64)&v13[v47 + 8];
        if ( !(v47 * 4) )
          goto LABEL_23;
        while ( 2 )
        {
          v48 = *v46;
          if ( *(_WORD *)(*v46 + 4) )
            goto LABEL_75;
          v49 = *a1;
          v50 = *(unsigned int *)(*a1 + 8);
          v51 = *(_DWORD *)(*a1 + 16);
          v52 = 2 * v50;
          if ( 3 * (int)v50 < (unsigned int)(4 * (v51 + *(_DWORD *)(*a1 + 12))) )
          {
            v64 = v52;
            v104 = v3;
            v101 = *a1;
            v99 = 2 * v50;
            v95 = 16LL * v52;
            v65 = (__m128i *)sub_186B270(v95);
            v66 = v99;
            v55 = v95;
            v53 = v65;
            v49 = v101;
            v3 = v104;
            v67 = &v65[v64];
            if ( v99 )
            {
              do
              {
                v65->m128i_i64[0] = 0;
                ++v65;
                v65[-1].m128i_i32[2] = 0;
              }
              while ( v65 != v67 );
            }
            v68 = *(const __m128i **)v101;
            v54 = v99 - 1;
            v56 = &v53[v95 / 0x10];
            v69 = (__m128i *)(*(_QWORD *)v101 + 16LL * *(unsigned int *)(v101 + 8));
            if ( *(__m128i **)v101 != v69 )
            {
              do
              {
                while ( v68->m128i_i64[0] <= 1uLL )
                {
                  if ( v69 == ++v68 )
                    goto LABEL_106;
                }
                v70 = 16LL * (*(_DWORD *)(v68->m128i_i64[0] + 12) & v54);
                v71 = &v53[(unsigned __int64)v70 / 0x10];
                if ( v95 == v70 )
                {
LABEL_110:
                  if ( v53 == v71 )
                  {
LABEL_125:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v72 = v53;
                  while ( v72->m128i_i64[0] )
                  {
                    if ( v71 == ++v72 )
                      goto LABEL_125;
                  }
                }
                else
                {
                  v72 = &v53[(unsigned __int64)v70 / 0x10];
                  while ( v72->m128i_i64[0] )
                  {
                    if ( v56 == ++v72 )
                      goto LABEL_110;
                  }
                }
                v73 = _mm_loadu_si128(v68++);
                *v72 = v73;
              }
              while ( v69 != v68 );
LABEL_106:
              v69 = *(__m128i **)v101;
            }
            if ( v69 )
            {
              v102 = v95;
              v96 = v49;
              sub_186B220(v69);
              v66 = v99;
              v3 = v104;
              v55 = v102;
              v54 = v99 - 1;
              v49 = v96;
            }
            *(_QWORD *)v49 = v53;
            v51 = 0;
            *(_DWORD *)(v49 + 8) = v66;
            *(_DWORD *)(v49 + 16) = 0;
          }
          else
          {
            v53 = *(__m128i **)v49;
            v54 = v50 - 1;
            v55 = 16 * v50;
            v56 = (__m128i *)(*(_QWORD *)v49 + v55);
          }
          v57 = *(_DWORD *)(v48 + 12);
          v58 = 16LL * (v57 & v54);
          v59 = &v53[(unsigned __int64)v58 / 0x10];
          if ( v58 != v55 )
          {
            v60 = &v53[(unsigned __int64)v58 / 0x10];
            v61 = nullptr;
            while ( 1 )
            {
              v62 = v60->m128i_i64[0];
              if ( v60->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v62 + 12) == v57 && v48 == v62 )
                {
                  v61 = (__int64 *)v60;
                  goto LABEL_124;
                }
              }
              else
              {
                if ( !v62 )
                {
                  if ( v61 )
                    goto LABEL_122;
                  v61 = (__int64 *)v60;
                  goto LABEL_123;
                }
                v61 = (__int64 *)v60;
              }
              if ( ++v60 == v56 )
                goto LABEL_90;
            }
          }
          v61 = nullptr;
LABEL_90:
          while ( 2 )
          {
            if ( v59 == v53 )
            {
              sub_1872CE0("");
              sub_1873130(114, 461);
            }
            v63 = v53->m128i_i64[0];
            if ( v53->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v63 + 12) == v57 && v48 == v63 )
              {
                v61 = (__int64 *)v53;
                goto LABEL_124;
              }
              goto LABEL_89;
            }
            if ( v63 )
            {
              v61 = (__int64 *)v53;
LABEL_89:
              ++v53;
              continue;
            }
            break;
          }
          if ( v61 )
LABEL_122:
            *(_DWORD *)(v49 + 16) = v51 - 1;
          else
            v61 = (__int64 *)v53;
LABEL_123:
          *v61 = v48;
          *((_DWORD *)v61 + 2) = 0;
          ++*(_DWORD *)(v49 + 12);
LABEL_124:
          ++*((_DWORD *)v61 + 2);
LABEL_75:
          if ( (__int64 *)v90 != ++v46 )
            continue;
          break;
        }
LABEL_23:
        v11 = *((_DWORD *)v10 + 2);
LABEL_20:
        if ( v11 >= v105 )
        {
          LODWORD(result) = v107 - 1;
          goto LABEL_22;
        }
      }
      v40 = (__int64 *)v32;
      goto LABEL_58;
    }
LABEL_22:
    LODWORD(v107) = result;
    sub_CD9900(a1, v3);
    result = (unsigned int)v107;
    p_ptr = v106;
    if ( !(_DWORD)v107 )
      break;
LABEL_28:
    result = (unsigned int)(result - 1);
  }
LABEL_31:
  if ( p_ptr )
  {
    result = (__int64)&ptr;
    if ( p_ptr != &ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

