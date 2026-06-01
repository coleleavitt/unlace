__int64 *__fastcall sub_B3E490(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v7; // r9
  _DWORD *v8; // rbp
  size_t v9; // rbx
  unsigned int v10; // r11d
  int *v11; // r13
  __int64 v12; // r11
  _DWORD *v13; // r8
  int *v14; // rax
  int *v15; // rdi
  int v16; // edx
  int v17; // eax
  __int64 v18; // r13
  __m128i *v19; // rbp
  unsigned int v20; // r10d
  size_t v21; // rbx
  __m128i *v22; // r13
  __int64 v23; // rax
  __m128i *v24; // rdi
  __m128i *v25; // rax
  int *v26; // rsi
  __int32 v27; // edx
  __int32 v28; // eax
  __int64 v29; // r12
  __m128i *v30; // rbp
  unsigned int v31; // r10d
  __int64 v32; // rbx
  __m128i *v33; // r12
  __int64 v34; // rax
  __m128i *v35; // rdi
  __m128i *v36; // rax
  __m128i *v37; // rsi
  int v38; // edx
  __int32 v39; // eax
  __int64 v40; // r13
  __int64 *result; // rax
  unsigned int v42; // r9d
  __int64 v43; // r14
  __int64 v44; // r12
  int v45; // ebp
  __int64 v46; // rdx
  int v47; // edi
  __int64 *v48; // r15
  __int64 v49; // rbx
  double v50; // xmm2_8
  __int64 v51; // rdx
  unsigned int v52; // esi
  unsigned int v53; // r10d
  __int64 v54; // r11
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 i; // rax
  int v59; // edx
  double v60; // xmm0_8
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 j; // rax
  int v64; // r8d
  double v65; // xmm1_8
  __int64 v66; // r12
  size_t v67; // r15
  __m128i *v68; // rax
  int v69; // r9d
  __m128i *v70; // rdx
  const __m128i *v71; // r13
  __m128i *v72; // r11
  __int64 v73; // rax
  __m128i *v74; // rdx
  __m128i *v75; // rax
  __m128i v76; // xmm0
  __m128i *v77; // rax
  int v78; // r9d
  __m128i *v79; // rdx
  const __m128i *v80; // r15
  __m128i *v81; // r11
  __int64 v82; // rax
  __m128i *v83; // rdx
  __m128i *v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // rax
  int v87; // r10d
  size_t v88; // r8
  _DWORD *v89; // r15
  _DWORD *v90; // r9
  __int64 v91; // rax
  _DWORD *v92; // rdx
  _DWORD *v93; // rax
  __int64 v94; // rdx
  int v95; // ecx
  int v96; // edx
  __int64 v98; // [rsp+0h] [rbp-68h]
  __int64 v99; // [rsp+8h] [rbp-60h]
  unsigned int v100; // [rsp+8h] [rbp-60h]
  unsigned int v101; // [rsp+8h] [rbp-60h]
  int v102; // [rsp+8h] [rbp-60h]
  __int64 v103; // [rsp+10h] [rbp-58h]
  __int64 v104; // [rsp+10h] [rbp-58h]
  int v105; // [rsp+18h] [rbp-50h]
  int v106; // [rsp+18h] [rbp-50h]

  v4 = a1;
  v5 = a2;
  v7 = *(unsigned int *)(a1 + 88);
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 92) + *(_DWORD *)(a1 + 96))) )
  {
    v9 = 8LL * (unsigned int)(2 * v7);
    v102 = 2 * v7;
    v86 = sub_186B270(v9);
    v87 = v102;
    v4 = a1;
    v8 = (_DWORD *)v86;
    v88 = v86 + v9;
    if ( v102 )
    {
      if ( (v9 & 8) == 0 || (*(_DWORD *)(v86 + 4) = 0x80000000, v86 += 8, v86 != v88) )
      {
        do
        {
          *(_DWORD *)(v86 + 4) = 0x80000000;
          v86 += 16;
          *(_DWORD *)(v86 - 4) = 0x80000000;
        }
        while ( v86 != v88 );
      }
    }
    v89 = *(_DWORD **)(a1 + 80);
    v10 = v102 - 1;
    v11 = (int *)v88;
    v90 = &v89[2 * *(unsigned int *)(a1 + 88)];
    if ( v89 != v90 )
    {
      do
      {
        while ( v89[1] + 0x80000000 <= 1 )
        {
          v89 += 2;
          if ( v90 == v89 )
            goto LABEL_138;
        }
        v91 = 8LL * (*v89 & v10);
        v92 = &v8[(unsigned __int64)v91 / 4];
        if ( v9 == v91 )
        {
LABEL_142:
          if ( v8 == v92 )
          {
LABEL_153:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v93 = v8;
          while ( v93[1] != 0x80000000 )
          {
            v93 += 2;
            if ( v92 == v93 )
              goto LABEL_153;
          }
        }
        else
        {
          v93 = &v8[(unsigned __int64)v91 / 4];
          while ( v93[1] != 0x80000000 )
          {
            v93 += 2;
            if ( (_DWORD *)v88 == v93 )
              goto LABEL_142;
          }
        }
        v94 = *(_QWORD *)v89;
        v89 += 2;
        *(_QWORD *)v93 = v94;
      }
      while ( v90 != v89 );
LABEL_138:
      v11 = (int *)v88;
      v5 = a2;
      v90 = *(_DWORD **)(a1 + 80);
    }
    if ( v90 )
    {
      sub_186B220(v90);
      v87 = v102;
      v4 = a1;
      v10 = v102 - 1;
    }
    *(_QWORD *)(v4 + 80) = v8;
    *(_DWORD *)(v4 + 88) = v87;
    *(_DWORD *)(v4 + 96) = 0;
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 80);
    v9 = 8 * v7;
    v10 = v7 - 1;
    v11 = &v8[2 * v7];
  }
  v12 = v5 & v10;
  v13 = &v8[2 * v12];
  if ( 8 * v12 != v9 )
  {
    v14 = &v8[2 * v12];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14[1];
      if ( v16 + 0x80000000 > 1 )
      {
        if ( *v14 == v5 && v5 == v16 )
        {
          v14[1] = v5;
          goto LABEL_19;
        }
      }
      else
      {
        if ( v16 == 0x80000000 )
        {
          if ( v15 )
            goto LABEL_151;
          v15 = v14;
          goto LABEL_152;
        }
        v15 = v14;
      }
      v14 += 2;
      if ( v14 == v11 )
        goto LABEL_14;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v13 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v8[1];
    if ( v17 + 0x80000000 <= 1 )
      break;
    if ( *v8 == v5 && v5 == v17 )
    {
      v8[1] = v5;
      goto LABEL_19;
    }
LABEL_13:
    v8 += 2;
  }
  if ( v17 != 0x80000000 )
  {
    v15 = v8;
    goto LABEL_13;
  }
  if ( v15 )
LABEL_151:
    --*(_DWORD *)(v4 + 96);
  else
    v15 = v8;
LABEL_152:
  v15[1] = v5;
  *v15 = v5;
  ++*(_DWORD *)(v4 + 92);
LABEL_19:
  v18 = *(unsigned int *)(v4 + 112);
  if ( 3 * (int)v18 < (unsigned int)(4 * (*(_DWORD *)(v4 + 116) + *(_DWORD *)(v4 + 120))) )
  {
    v104 = v4;
    v21 = 16LL * (unsigned int)(2 * v18);
    v77 = (__m128i *)sub_186B270(v21);
    v78 = 2 * v18;
    v4 = v104;
    v19 = v77;
    if ( 2 * (_DWORD)v18 )
    {
      v79 = &v77[2 * (v18 & 0x7FFFFFFF)];
      do
      {
        v77->m128i_i64[0] = 0;
        v77 += 2;
        v77[-1].m128i_i64[0] = 0;
      }
      while ( v77 != v79 );
    }
    v80 = *(const __m128i **)(v104 + 104);
    v20 = v78 - 1;
    v22 = &v19[v21 / 0x10];
    v81 = (__m128i *)&v80[*(unsigned int *)(v104 + 112)];
    if ( v80 != v81 )
    {
      do
      {
        while ( v80->m128i_i32[1] != 2 )
        {
          if ( v81 == ++v80 )
            goto LABEL_121;
        }
        v82 = 16LL * (v80->m128i_i32[0] & v20);
        v83 = &v19[(unsigned __int64)v82 / 0x10];
        if ( v21 == v82 )
        {
LABEL_154:
          if ( v19 == v83 )
          {
LABEL_194:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v84 = v19;
          while ( v84->m128i_i32[1] )
          {
            if ( v83 == ++v84 )
              goto LABEL_194;
          }
        }
        else
        {
          v84 = &v19[(unsigned __int64)v82 / 0x10];
          while ( v84->m128i_i32[1] )
          {
            if ( v22 == ++v84 )
              goto LABEL_154;
          }
        }
        v85 = _mm_loadu_si128(v80++);
        *v84 = v85;
      }
      while ( v81 != v80 );
LABEL_121:
      v81 = *(__m128i **)(v104 + 104);
    }
    if ( v81 )
    {
      v106 = v78;
      v101 = v78 - 1;
      sub_186B220(v81);
      v78 = v106;
      v4 = v104;
      v20 = v101;
    }
    *(_QWORD *)(v4 + 104) = v19;
    *(_DWORD *)(v4 + 112) = v78;
    *(_DWORD *)(v4 + 120) = 0;
  }
  else
  {
    v19 = *(__m128i **)(v4 + 104);
    v20 = v18 - 1;
    v21 = 16 * v18;
    v22 = &v19[v18];
  }
  v23 = 16LL * (v5 & v20);
  v24 = &v19[(unsigned __int64)v23 / 0x10];
  if ( v23 != v21 )
  {
    v25 = &v19[(unsigned __int64)v23 / 0x10];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = v25->m128i_i32[1];
      if ( v27 == 2 )
      {
        if ( v5 == v25->m128i_i32[0] && v5 == v25->m128i_i32[2] )
        {
          v25->m128i_i32[2] = v5;
          v25->m128i_i32[3] = a3;
          v25->m128i_i32[1] = 2;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_39;
          v26 = (int *)v25;
          goto LABEL_40;
        }
        v26 = (int *)v25;
      }
      if ( ++v25 == v22 )
        goto LABEL_33;
    }
  }
  v26 = nullptr;
LABEL_33:
  while ( 2 )
  {
    if ( v24 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v28 = v19->m128i_i32[1];
    if ( v28 == 2 )
    {
      if ( v5 == v19->m128i_i32[0] && v5 == v19->m128i_i32[2] )
      {
        v19->m128i_i32[2] = v5;
        v19->m128i_i32[3] = a3;
        v19->m128i_i32[1] = 2;
        goto LABEL_41;
      }
      goto LABEL_32;
    }
    if ( v28 )
    {
      v26 = (int *)v19;
LABEL_32:
      ++v19;
      continue;
    }
    break;
  }
  if ( v26 )
LABEL_39:
    --*(_DWORD *)(v4 + 120);
  else
    v26 = (int *)v19;
LABEL_40:
  v26[2] = v5;
  v26[3] = a3;
  v26[1] = 2;
  *v26 = v5;
  ++*(_DWORD *)(v4 + 116);
LABEL_41:
  v29 = *(unsigned int *)(v4 + 32);
  if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(v4 + 36) + *(_DWORD *)(v4 + 40))) )
  {
    v103 = v4;
    v67 = 24LL * (unsigned int)(2 * v29);
    v32 = v67;
    v68 = (__m128i *)sub_186B270(v67);
    v69 = 2 * v29;
    v4 = v103;
    v30 = v68;
    if ( 2 * (_DWORD)v29 )
    {
      v70 = &v68[3 * (v29 & 0x7FFFFFFF)];
      do
      {
        v68->m128i_i64[0] = 0;
        v68 += 3;
        v68[-2].m128i_i64[1] = 0;
      }
      while ( v70 != v68 );
    }
    v71 = *(const __m128i **)(v103 + 24);
    v31 = v69 - 1;
    v33 = (__m128i *)((char *)v30 + v67);
    v72 = (__m128i *)((char *)v71 + 24 * *(unsigned int *)(v103 + 32));
    if ( v71 != v72 )
    {
      do
      {
        while ( v71->m128i_i32[1] != 2 )
        {
          v71 = (const __m128i *)((char *)v71 + 24);
          if ( v72 == v71 )
            goto LABEL_105;
        }
        v73 = 24LL * (v71->m128i_i32[0] & v31);
        v74 = (__m128i *)((char *)v30 + v73);
        if ( v67 == v73 )
        {
LABEL_159:
          if ( v30 == v74 )
          {
LABEL_193:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v75 = v30;
          while ( v75->m128i_i32[1] )
          {
            v75 = (__m128i *)((char *)v75 + 24);
            if ( v74 == v75 )
              goto LABEL_193;
          }
        }
        else
        {
          v75 = (__m128i *)((char *)v30 + v73);
          while ( v75->m128i_i32[1] )
          {
            v75 = (__m128i *)((char *)v75 + 24);
            if ( v33 == v75 )
              goto LABEL_159;
          }
        }
        v76 = _mm_loadu_si128(v71);
        v71 = (const __m128i *)((char *)v71 + 24);
        *v75 = v76;
        v75[1].m128i_i64[0] = v71[-1].m128i_i64[1];
      }
      while ( v72 != v71 );
LABEL_105:
      v72 = *(__m128i **)(v103 + 24);
    }
    if ( v72 )
    {
      v105 = v69;
      v100 = v69 - 1;
      sub_186B220(v72);
      v69 = v105;
      v4 = v103;
      v31 = v100;
    }
    *(_QWORD *)(v4 + 24) = v30;
    *(_DWORD *)(v4 + 32) = v69;
    *(_DWORD *)(v4 + 40) = 0;
  }
  else
  {
    v30 = *(__m128i **)(v4 + 24);
    v31 = v29 - 1;
    v32 = 24 * v29;
    v33 = (__m128i *)((char *)v30 + 24 * v29);
  }
  v34 = 24LL * (v5 & v31);
  v35 = (__m128i *)((char *)v30 + v34);
  if ( v34 == v32 )
  {
    v37 = nullptr;
    while ( 1 )
    {
LABEL_55:
      if ( v35 == v30 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v39 = v30->m128i_i32[1];
      if ( v39 == 2 )
      {
        if ( v5 == v30->m128i_i32[0] && v5 == v30->m128i_i32[2] )
        {
          v30->m128i_i32[2] = v5;
          v30->m128i_i32[1] = 2;
          *(double *)v30[1].m128i_i64 = a4;
          goto LABEL_63;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( v37 )
            --*(_DWORD *)(v4 + 40);
          else
            v37 = v30;
          v37->m128i_i32[2] = v5;
          v37->m128i_i32[1] = 2;
          v37->m128i_i32[0] = v5;
          *(double *)v37[1].m128i_i64 = a4;
          ++*(_DWORD *)(v4 + 36);
          goto LABEL_63;
        }
        v37 = v30;
      }
      v30 = (__m128i *)((char *)v30 + 24);
    }
  }
  v36 = (__m128i *)((char *)v30 + v34);
  v37 = nullptr;
  while ( 2 )
  {
    v38 = v36->m128i_i32[1];
    if ( v38 == 2 )
    {
      if ( v5 == v36->m128i_i32[0] && v5 == v36->m128i_i32[2] )
      {
        v36->m128i_i32[2] = v5;
        v36->m128i_i32[1] = 2;
        *(double *)v36[1].m128i_i64 = a4;
        goto LABEL_63;
      }
      goto LABEL_47;
    }
    if ( v38 )
    {
      v37 = v36;
LABEL_47:
      v36 = (__m128i *)((char *)v36 + 24);
      if ( v36 == v33 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  if ( v37 )
    --*(_DWORD *)(v4 + 40);
  else
    v37 = v36;
  v37->m128i_i32[2] = v5;
  v37->m128i_i32[1] = 2;
  v37->m128i_i32[0] = v5;
  *(double *)v37[1].m128i_i64 = a4;
  ++*(_DWORD *)(v4 + 36);
LABEL_63:
  v40 = *(_QWORD *)(v4 + 72);
  if ( v40 )
    result = (__int64 *)*(unsigned int *)(v40 - 4);
  else
    result = nullptr;
  if ( v5 < (int)result )
  {
    v42 = *(_DWORD *)(v40 + 4LL * (unsigned int)v5);
    if ( v42 )
    {
      if ( a4 <= 0.0 )
      {
        return sub_B3B670((__int64 **)(v4 + 48), v42);
      }
      else
      {
        v43 = *(_QWORD *)(v4 + 64);
        v44 = v42;
        v45 = (int)v42 >> 1;
        v46 = *(unsigned int *)(v43 + 4LL * v42);
        v47 = *(_DWORD *)(v43 + 4LL * v42);
        if ( (int)v42 >> 1 )
        {
          v48 = *(__int64 **)(v4 + 56);
          v99 = *(unsigned int *)(v43 + 4LL * v42);
          v49 = *v48;
          v98 = **(_QWORD **)(v4 + 48);
          v50 = *(double *)(v98 + 8 * v46);
          while ( 1 )
          {
            v51 = *((unsigned int *)v48 + 2);
            v52 = *(_DWORD *)(v43 + 4LL * (unsigned int)v45);
            v53 = v51 - 1;
            v54 = 24 * v51;
            v55 = v49 + 24 * v51;
            v56 = 24LL * (v47 & (unsigned int)(v51 - 1));
            v57 = v49 + v56;
            if ( v56 != 24 * v51 )
            {
              for ( i = v49 + v56; v55 != i; i += 24 )
              {
                v59 = *(_DWORD *)(i + 4);
                if ( v59 == 2 )
                {
                  if ( *(_DWORD *)i == v47 && *(_DWORD *)(i + 8) == v47 )
                  {
LABEL_77:
                    v60 = *(double *)(i + 16);
                    goto LABEL_78;
                  }
                }
                else if ( !v59 )
                {
                  goto LABEL_172;
                }
              }
            }
            if ( v49 != v57 )
            {
              for ( i = v49; v57 != i; i += 24 )
              {
                v96 = *(_DWORD *)(i + 4);
                if ( v96 == 2 )
                {
                  if ( *(_DWORD *)i == v47 && *(_DWORD *)(i + 8) == v47 )
                    goto LABEL_77;
                }
                else if ( !v96 )
                {
                  break;
                }
              }
            }
LABEL_172:
            v60 = 0.0;
LABEL_78:
            v61 = v52 & v53;
            v62 = v49 + 24 * v61;
            if ( v54 != 24 * v61 )
            {
              for ( j = v49 + 24 * v61; v55 != j; j += 24 )
              {
                v64 = *(_DWORD *)(j + 4);
                if ( v64 == 2 )
                {
                  if ( v52 == *(_DWORD *)j && v52 == *(_DWORD *)(j + 8) )
                  {
LABEL_85:
                    v65 = *(double *)(j + 16);
                    goto LABEL_86;
                  }
                }
                else if ( !v64 )
                {
                  goto LABEL_173;
                }
              }
            }
            if ( v49 != v62 )
            {
              for ( j = v49; v62 != j; j += 24 )
              {
                v95 = *(_DWORD *)(j + 4);
                if ( v95 == 2 )
                {
                  if ( v52 == *(_DWORD *)j && v52 == *(_DWORD *)(j + 8) )
                    goto LABEL_85;
                }
                else if ( !v95 )
                {
                  break;
                }
              }
            }
LABEL_173:
            v65 = 0.0;
LABEL_86:
            result = (__int64 *)v52;
            v66 = 4 * v44;
            if ( v60 + v50 <= v65 + *(double *)(v98 + 8LL * v52) )
              break;
            *(_DWORD *)(v43 + v66) = v52;
            *(_DWORD *)(v40 + 4LL * v52) = v42;
            v42 = v45;
            v45 >>= 1;
            if ( !v45 )
            {
              v46 = v99;
              goto LABEL_90;
            }
            v44 = v42;
          }
          v46 = v99;
        }
        else
        {
LABEL_90:
          v66 = 4;
          v42 = 1;
        }
        *(_DWORD *)(v43 + v66) = v47;
        *(_DWORD *)(v40 + 4 * v46) = v42;
      }
    }
  }
  return result;
}

