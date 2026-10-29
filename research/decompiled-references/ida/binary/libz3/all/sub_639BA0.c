__int64 *__fastcall sub_639BA0(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 *result; // rax
  __int64 *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned int v20; // r10d
  __int64 *v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 *v24; // r12
  int v25; // esi
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 *v28; // rax
  __int64 *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r12
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // r12
  unsigned int v41; // r9d
  __int64 v42; // rax
  __int64 *i; // r15
  __int64 v44; // rdx
  _QWORD *v45; // rsi
  _QWORD *v46; // rdx
  __int64 v47; // rsi
  int v48; // eax
  unsigned int v49; // edx
  __m128i *v50; // rbx
  int v51; // r10d
  size_t v52; // r15
  __m128i *v53; // r12
  int v54; // esi
  __int64 v55; // r10
  __m128i *v56; // rdi
  __m128i *v57; // rax
  __int64 *v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rdx
  __int64 v63; // r12
  __int64 *v64; // rax
  int v65; // r10d
  char *v66; // r14
  char *v67; // r11
  __int64 v68; // rdx
  __int64 *v69; // rsi
  __int64 *v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 *v73; // rdx
  __int64 v74; // rax
  int v75; // r8d
  __int64 m128i_i64; // rdx
  __m128i *v77; // rax
  const __m128i *v78; // r14
  __m128i *v79; // r9
  __int64 v80; // rdx
  __m128i *v81; // rsi
  __m128i *v82; // rdx
  __m128i v83; // xmm0
  __int64 *v85; // [rsp+8h] [rbp-70h]
  __int64 *v86; // [rsp+10h] [rbp-68h]
  __int64 *v87; // [rsp+10h] [rbp-68h]
  __int64 v88; // [rsp+18h] [rbp-60h]
  size_t v89; // [rsp+18h] [rbp-60h]
  __int64 v90; // [rsp+18h] [rbp-60h]
  __int64 v91; // [rsp+18h] [rbp-60h]
  int v92; // [rsp+18h] [rbp-60h]
  __int64 v93; // [rsp+18h] [rbp-60h]
  int v94; // [rsp+20h] [rbp-58h]
  size_t v95; // [rsp+20h] [rbp-58h]
  unsigned int v96; // [rsp+20h] [rbp-58h]
  __int64 v97; // [rsp+20h] [rbp-58h]
  int v98; // [rsp+20h] [rbp-58h]
  __int64 v99; // [rsp+28h] [rbp-50h]
  int v100; // [rsp+28h] [rbp-50h]
  __int64 v101; // [rsp+28h] [rbp-50h]
  int v102; // [rsp+28h] [rbp-50h]
  int v103; // [rsp+30h] [rbp-48h]

  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)a1 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 8) = 8;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = 8;
  *(_DWORD *)(a1 + 56) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v7 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 64) = v7;
  v8 = *(__int64 **)a2;
  *(_QWORD *)(a1 + 72) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v9 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 80) = 0;
  result = (__int64 *)(16 * v9);
  v11 = (__int64 *)((char *)result + (_QWORD)v8);
  v85 = (__int64 *)((char *)result + (_QWORD)v8);
  if ( a3 )
  {
    result = v8;
    if ( v8 == v11 )
      return result;
    while ( (unsigned __int64)*result <= 1 )
    {
      result += 2;
      if ( result == v11 )
        return result;
    }
    v86 = result;
    if ( result == v85 )
      return result;
    v12 = *result;
LABEL_8:
    v13 = v86[1];
    sub_639820(a1, v12);
    v14 = *(__int64 **)v13;
    v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
    if ( *(_QWORD *)v13 == v15 )
      goto LABEL_64;
    while ( (unsigned __int64)*v14 <= 1 )
    {
      if ( (__int64 *)v15 == ++v14 )
        goto LABEL_64;
    }
    if ( (__int64 *)v15 == v14 )
      goto LABEL_64;
    v16 = *v14;
LABEL_14:
    v17 = sub_639820(a1, v16);
    v18 = *(unsigned int *)(v17 + 8);
    v19 = v17;
    v20 = 2 * v18;
    if ( 3 * (int)v18 < (unsigned int)(4 * (*(_DWORD *)(v17 + 12) + *(_DWORD *)(v17 + 16))) )
    {
      v63 = v20;
      v99 = v17;
      v94 = 2 * v18;
      v89 = 8LL * v20;
      v64 = (__int64 *)sub_186B270(v89);
      v65 = v94;
      v23 = v89;
      v21 = v64;
      v19 = v99;
      if ( v94 )
      {
        v100 = v94;
        v95 = v89;
        v90 = v19;
        memset(v64, 0, 8 * v63);
        v19 = v90;
        v23 = v95;
        v65 = v100;
      }
      v66 = *(char **)v19;
      v22 = v65 - 1;
      v24 = (__int64 *)((char *)v21 + v23);
      v67 = (char *)(*(_QWORD *)v19 + 8LL * *(unsigned int *)(v19 + 8));
      if ( *(char **)v19 != v67 )
      {
        do
        {
          while ( *(_QWORD *)v66 <= 1u )
          {
            v66 += 8;
            if ( v67 == v66 )
              goto LABEL_81;
          }
          v68 = 8LL * (*(_DWORD *)(*(_QWORD *)v66 + 12LL) & v22);
          v69 = &v21[(unsigned __int64)v68 / 8];
          if ( v23 == v68 )
          {
LABEL_85:
            if ( v21 == v69 )
            {
LABEL_93:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v70 = v21;
            while ( *v70 )
            {
              if ( v69 == ++v70 )
                goto LABEL_93;
            }
          }
          else
          {
            v70 = &v21[(unsigned __int64)v68 / 8];
            while ( *v70 )
            {
              if ( v24 == ++v70 )
                goto LABEL_85;
            }
          }
          v71 = *(_QWORD *)v66;
          v66 += 8;
          *v70 = v71;
        }
        while ( v67 != v66 );
LABEL_81:
        v67 = *(char **)v19;
      }
      if ( v67 )
      {
        v103 = v65;
        v101 = v23;
        v96 = v65 - 1;
        v91 = v19;
        sub_186B220(v67);
        v65 = v103;
        v23 = v101;
        v22 = v96;
        v19 = v91;
      }
      *(_QWORD *)v19 = v21;
      *(_DWORD *)(v19 + 8) = v65;
      *(_DWORD *)(v19 + 16) = 0;
    }
    else
    {
      v21 = *(__int64 **)v17;
      v22 = v18 - 1;
      v23 = 8 * v18;
      v24 = (__int64 *)(*(_QWORD *)v19 + v23);
    }
    v25 = *(_DWORD *)(v12 + 12);
    v26 = 8LL * (v25 & v22);
    v27 = &v21[(unsigned __int64)v26 / 8];
    if ( v26 != v23 )
    {
      v28 = &v21[(unsigned __int64)v26 / 8];
      v29 = nullptr;
      while ( 1 )
      {
        v30 = *v28;
        if ( (unsigned __int64)*v28 > 1 )
        {
          if ( *(_DWORD *)(v30 + 12) == v25 && v30 == v12 )
          {
            *v28 = v12;
            goto LABEL_59;
          }
        }
        else
        {
          if ( !v30 )
          {
            if ( v29 )
              goto LABEL_91;
            v29 = v28;
            goto LABEL_92;
          }
          v29 = v28;
        }
        if ( ++v28 == v24 )
          goto LABEL_54;
      }
    }
    v29 = nullptr;
    while ( 1 )
    {
LABEL_54:
      if ( v27 == v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v60 = *v21;
      if ( (unsigned __int64)*v21 > 1 )
      {
        if ( *(_DWORD *)(v60 + 12) == v25 && v60 == v12 )
        {
          *v21 = v12;
          goto LABEL_59;
        }
      }
      else
      {
        if ( !v60 )
        {
          if ( v29 )
LABEL_91:
            --*(_DWORD *)(v19 + 16);
          else
            v29 = v21;
LABEL_92:
          *v29 = v12;
          ++*(_DWORD *)(v19 + 12);
LABEL_59:
          v61 = v14 + 1;
          if ( (__int64 *)v15 == v14 + 1 )
            goto LABEL_64;
          while ( 1 )
          {
            v16 = *v61;
            v14 = v61;
            if ( (unsigned __int64)*v61 > 1 )
              break;
            if ( (__int64 *)v15 == ++v61 )
              goto LABEL_64;
          }
          if ( (__int64 *)v15 == v61 )
          {
LABEL_64:
            result = v86 + 2;
            if ( v86 + 2 == v85 )
              return result;
            while ( 1 )
            {
              v12 = *result;
              v62 = result;
              if ( (unsigned __int64)*result > 1 )
                break;
              result += 2;
              if ( v85 == result )
                return result;
            }
            v86 = result;
            result = v85;
            if ( v62 == v85 )
              return result;
            goto LABEL_8;
          }
          goto LABEL_14;
        }
        v29 = v21;
      }
      ++v21;
    }
  }
  if ( !result )
    return result;
  result = v8;
  while ( (unsigned __int64)*result <= 1 )
  {
    result += 2;
    if ( result == v11 )
      return result;
  }
  v87 = result;
  if ( result != v85 )
  {
    v31 = *result;
    while ( 1 )
    {
      v32 = v87[1];
      v33 = sub_186B270(0x18u);
      v34 = *(unsigned int *)(v32 + 8);
      v88 = v33;
      *(_DWORD *)(v33 + 8) = v34;
      v35 = (_QWORD *)sub_186B270(8 * v34);
      v36 = v88;
      v37 = v35;
      if ( (_DWORD)v34 )
      {
        v38 = memset(v35, 0, 8 * v34);
        v36 = v88;
        v37 = v38;
      }
      v39 = *(unsigned int *)(v36 + 8);
      v40 = *(__int64 **)v32;
      *(_QWORD *)v36 = v37;
      v41 = v39 - 1;
      v42 = 8 * v39;
      for ( i = &v40[(unsigned __int64)v42 / 8]; i != v40; *v46 = v47 )
      {
        while ( (unsigned __int64)*v40 <= 1 )
        {
          if ( i == ++v40 )
            goto LABEL_41;
        }
        v44 = 8LL * (*(_DWORD *)(*v40 + 12) & v41);
        v45 = &v37[(unsigned __int64)v44 / 8];
        if ( v42 == v44 )
        {
LABEL_96:
          if ( v37 == v45 )
          {
LABEL_110:
            sub_1872CE0("");
            sub_1873130(114, 181);
          }
          v46 = v37;
          while ( *v46 )
          {
            if ( v45 == ++v46 )
              goto LABEL_110;
          }
        }
        else
        {
          v46 = &v37[(unsigned __int64)v44 / 8];
          while ( *v46 )
          {
            if ( &v37[(unsigned __int64)v42 / 8] == ++v46 )
              goto LABEL_96;
          }
        }
        v47 = *v40++;
      }
LABEL_41:
      v48 = *(_DWORD *)(v32 + 12);
      *(_DWORD *)(v36 + 16) = 0;
      v49 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v36 + 12) = v48;
      if ( 3 * v49 < 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16)) )
      {
        v97 = v36;
        v52 = 32LL * v49;
        v92 = 2 * v49;
        v74 = sub_186B270(v52);
        v75 = v92;
        v50 = (__m128i *)v74;
        m128i_i64 = v74;
        v36 = v97;
        v77 = (__m128i *)(v52 + v74);
        if ( v92 )
        {
          if ( (((_BYTE)v77 - (_BYTE)v50) & 0x10) == 0
            || (m128i_i64 = (__int64)v50[1].m128i_i64, *v50 = 0, v77 != &v50[1]) )
          {
            do
            {
              m128i_i64 += 32;
              *(_OWORD *)(m128i_i64 - 32) = 0;
              *(_OWORD *)(m128i_i64 - 16) = 0;
            }
            while ( v77 != (__m128i *)m128i_i64 );
          }
        }
        v51 = v92 - 1;
        v53 = v77;
        v78 = *(const __m128i **)a1;
        v79 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
        if ( *(__m128i **)a1 != v79 )
        {
          do
          {
            while ( v78->m128i_i64[0] <= 1uLL )
            {
              if ( v79 == ++v78 )
                goto LABEL_132;
            }
            v80 = 16LL * (*(_DWORD *)(v78->m128i_i64[0] + 12) & (unsigned int)v51);
            v81 = &v50[(unsigned __int64)v80 / 0x10];
            if ( v52 == v80 )
            {
LABEL_136:
              if ( v50 == v81 )
              {
LABEL_145:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v82 = v50;
              while ( v82->m128i_i64[0] )
              {
                if ( v81 == ++v82 )
                  goto LABEL_145;
              }
            }
            else
            {
              v82 = &v50[(unsigned __int64)v80 / 0x10];
              while ( v82->m128i_i64[0] )
              {
                if ( v77 == ++v82 )
                  goto LABEL_136;
              }
            }
            v83 = _mm_loadu_si128(v78++);
            *v82 = v83;
          }
          while ( v79 != v78 );
LABEL_132:
          v79 = *(__m128i **)a1;
        }
        if ( v79 )
        {
          v102 = v92;
          v98 = v92 - 1;
          v93 = v36;
          sub_186B220(v79);
          v75 = v102;
          v51 = v98;
          v36 = v93;
        }
        *(_QWORD *)a1 = v50;
        *(_DWORD *)(a1 + 8) = v75;
        *(_DWORD *)(a1 + 16) = 0;
      }
      else
      {
        v50 = *(__m128i **)a1;
        v51 = v49 - 1;
        v52 = 16LL * v49;
        v53 = (__m128i *)(*(_QWORD *)a1 + v52);
      }
      v54 = *(_DWORD *)(v31 + 12);
      v55 = 16LL * (v54 & (unsigned int)v51);
      v56 = &v50[(unsigned __int64)v55 / 0x10];
      if ( v55 != v52 )
      {
        v57 = &v50[(unsigned __int64)v55 / 0x10];
        v58 = nullptr;
        while ( 1 )
        {
          v59 = v57->m128i_i64[0];
          if ( v57->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v59 + 12) == v54 && v59 == v31 )
            {
              v57->m128i_i64[0] = v31;
              v57->m128i_i64[1] = v36;
              goto LABEL_113;
            }
          }
          else
          {
            if ( !v59 )
            {
              if ( v58 )
                goto LABEL_143;
              v58 = (__int64 *)v57;
              goto LABEL_144;
            }
            v58 = (__int64 *)v57;
          }
          if ( ++v57 == v53 )
            goto LABEL_104;
        }
      }
      v58 = nullptr;
      while ( 1 )
      {
LABEL_104:
        if ( v56 == v50 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v72 = v50->m128i_i64[0];
        if ( v50->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v72 + 12) == v54 && v72 == v31 )
        {
          v50->m128i_i64[0] = v31;
          v50->m128i_i64[1] = v36;
          goto LABEL_113;
        }
LABEL_103:
        ++v50;
      }
      if ( v72 )
        break;
      if ( v58 )
LABEL_143:
        --*(_DWORD *)(a1 + 16);
      else
        v58 = (__int64 *)v50;
LABEL_144:
      *v58 = v31;
      v58[1] = v36;
      ++*(_DWORD *)(a1 + 12);
LABEL_113:
      result = v87 + 2;
      if ( v87 + 2 != v85 )
      {
        while ( 1 )
        {
          v31 = *result;
          v73 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          result += 2;
          if ( v85 == result )
            return result;
        }
        v87 = result;
        result = v85;
        if ( v73 != v85 )
          continue;
      }
      return result;
    }
    v58 = (__int64 *)v50;
    goto LABEL_103;
  }
  return result;
}

