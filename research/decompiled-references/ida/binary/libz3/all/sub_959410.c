__int64 *__fastcall sub_959410(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 *v6; // rbx
  __int64 v7; // r12
  char *v8; // r8
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // rdi
  char *i; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // esi
  __int64 v21; // r14
  unsigned int v22; // r11d
  __int64 v23; // r8
  __int64 v24; // r15
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r11
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  char *v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rax
  __m128i *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rax
  __m128i *v44; // rdi
  unsigned int v45; // r10d
  __int64 v46; // rax
  const __m128i *v47; // r14
  const __m128i *v48; // r9
  __m128i *v49; // r8
  __int64 v50; // r13
  __int64 v51; // rax
  __m128i *v52; // rdx
  __m128i *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // r15
  __int64 v56; // rax
  _QWORD *v57; // r14
  __int64 v58; // rcx
  __int64 v59; // r8
  __m128i *v60; // r12
  int v61; // r11d
  __int64 v62; // r8
  __int64 *v63; // r14
  __int64 v64; // r11
  __m128i *v65; // r9
  __int64 *result; // rax
  __int64 *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // esi
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rdx
  __m128i *v75; // r10
  __int64 *v76; // rax
  const __m128i *v77; // rbx
  __int64 v78; // rdx
  __m128i *v79; // rsi
  __m128i *v80; // rdx
  __m128i v81; // xmm0
  __int64 v82; // rax
  int v83; // r9d
  __m128i *v84; // rdx
  __m128i *v85; // rax
  const __m128i *v86; // r15
  __m128i *v87; // r10
  __int64 v88; // rdx
  __m128i *v89; // rsi
  __m128i *v90; // rdx
  __m128i v91; // xmm0
  unsigned int v93; // [rsp+8h] [rbp-C0h]
  unsigned int v94; // [rsp+8h] [rbp-C0h]
  unsigned int v95; // [rsp+8h] [rbp-C0h]
  size_t v96; // [rsp+8h] [rbp-C0h]
  __int64 v97; // [rsp+8h] [rbp-C0h]
  unsigned int v98; // [rsp+10h] [rbp-B8h]
  int v99; // [rsp+10h] [rbp-B8h]
  __int64 v100; // [rsp+10h] [rbp-B8h]
  int v101; // [rsp+10h] [rbp-B8h]
  __int64 v102; // [rsp+20h] [rbp-A8h]
  unsigned int v103; // [rsp+20h] [rbp-A8h]
  __int64 v104; // [rsp+20h] [rbp-A8h]
  size_t v105; // [rsp+20h] [rbp-A8h]
  __int64 v106; // [rsp+28h] [rbp-A0h]
  __int64 v107; // [rsp+30h] [rbp-98h]
  _DWORD v108[30]; // [rsp+50h] [rbp-78h] BYREF

  v4 = a3;
  v6 = a1;
  v7 = *a1;
  v8 = (char *)a1[16];
  ++*(_DWORD *)(*a1 + 72);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = (((*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8) ^ ((v9 - ((*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8))) << 16))
       + ((*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8))
       - v9)
      ^ ((v9 - ((*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8))) << 10);
  v11 = (((*(_DWORD *)(a4 + 12) - v10) ^ (v10 << 8) ^ ((v10 - ((*(_DWORD *)(a4 + 12) - v10) ^ (v10 << 8))) << 16))
       + ((*(_DWORD *)(a4 + 12) - v10) ^ (v10 << 8))
       - v10)
      ^ ((v10 - ((*(_DWORD *)(a4 + 12) - v10) ^ (v10 << 8))) << 10);
  v12 = *((unsigned int *)a1 + 34);
  v13 = v12 - 1;
  v12 *= 32;
  v14 = &v8[v12];
  v15 = 32LL * (v11 & v13);
  v16 = &v8[v15];
  if ( v15 != v12 )
  {
    for ( i = &v8[v15]; v14 != i; i += 32 )
    {
      v18 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *((_DWORD *)i + 7) == v11 && a2 == v18 && v4 == *((_QWORD *)i + 1) && a4 == *((_QWORD *)i + 2) )
        {
LABEL_30:
          v35 = i + 32;
          v36 = *((unsigned int *)v6 + 35);
          if ( v14 == i + 32 )
            v35 = v8;
          v37 = v36 - 1;
          if ( *(_QWORD *)v35 )
          {
            *(_QWORD *)i = 1;
            v38 = *((_DWORD *)v6 + 36);
            *((_DWORD *)v6 + 35) = v37;
            v39 = v38 + 1;
            if ( v37 < 0x40 )
              v37 = 64;
            *((_DWORD *)v6 + 36) = v39;
            if ( v37 < v39 && !(unsigned __int8)sub_186AF10(v36) )
            {
              v93 = *((_DWORD *)v6 + 34);
              v40 = sub_186B270(32LL * v93);
              v41 = (__m128i *)v40;
              v42 = v40 + 32LL * v93;
              if ( v93 )
              {
                do
                {
                  *(_QWORD *)(v40 + 16) = 0;
                  v40 += 32;
                  *(_OWORD *)(v40 - 32) = 0;
                  *(_DWORD *)(v40 - 4) = 0;
                }
                while ( v40 != v42 );
              }
              v43 = *((unsigned int *)v6 + 34);
              v44 = (__m128i *)v6[16];
              v45 = v43 - 1;
              v46 = 2 * v43;
              v47 = v44;
              v48 = &v44[v46];
              v49 = &v41[v46];
              if ( v44 != &v44[v46] )
              {
                v102 = v4;
                v50 = v46 * 16;
                do
                {
                  if ( v47->m128i_i64[0] > 1uLL )
                  {
                    v51 = 32LL * (v47[1].m128i_i32[3] & v45);
                    v52 = &v41[(unsigned __int64)v51 / 0x10];
                    if ( v50 == v51 )
                    {
LABEL_149:
                      if ( v52 == v41 )
                      {
LABEL_158:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v53 = v41;
                      while ( v53->m128i_i64[0] )
                      {
                        v53 += 2;
                        if ( v52 == v53 )
                          goto LABEL_158;
                      }
                    }
                    else
                    {
                      v53 = &v41[(unsigned __int64)v51 / 0x10];
                      while ( v53->m128i_i64[0] )
                      {
                        v53 += 2;
                        if ( v49 == v53 )
                          goto LABEL_149;
                      }
                    }
                    *v53 = _mm_loadu_si128(v47);
                    v53[1] = _mm_loadu_si128(v47 + 1);
                  }
                  v47 += 2;
                }
                while ( v48 != v47 );
                v4 = v102;
                v44 = (__m128i *)v6[16];
              }
              if ( v44 )
                sub_186B220(v44);
              v6[16] = (__int64)v41;
              *((_DWORD *)v6 + 36) = 0;
            }
          }
          else
          {
            *(_QWORD *)i = 0;
            *((_DWORD *)v6 + 35) = v37;
          }
          goto LABEL_8;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v8 != v16 )
  {
    for ( i = v8; v16 != i; i += 32 )
    {
      v54 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *((_DWORD *)i + 7) == v11 && a2 == v54 && v4 == *((_QWORD *)i + 1) && a4 == *((_QWORD *)i + 2) )
          goto LABEL_30;
      }
      else if ( !v54 )
      {
        break;
      }
    }
  }
LABEL_8:
  v19 = *((unsigned int *)v6 + 48);
  v20 = 2 * v19;
  if ( 3 * (int)v19 < (unsigned int)(4 * (*((_DWORD *)v6 + 49) + *((_DWORD *)v6 + 50))) )
  {
    v99 = 2 * v19;
    v70 = sub_186B270(32LL * v20);
    v23 = 32LL * v20;
    v71 = v99;
    v21 = v70;
    v72 = v70 + v23;
    if ( v99 )
    {
      do
      {
        *(_QWORD *)(v70 + 24) = 0;
        v70 += 32;
        *(_OWORD *)(v70 - 24) = 0;
      }
      while ( v70 != v72 );
    }
    v73 = v6[23];
    v22 = v99 - 1;
    v24 = v72;
    v74 = 32LL * *((unsigned int *)v6 + 48);
    v75 = (__m128i *)(v73 + v74);
    if ( v73 != v73 + v74 )
    {
      v76 = v6;
      v77 = (const __m128i *)v6[23];
      do
      {
        while ( v77->m128i_i64[1] <= 1uLL )
        {
          v77 += 2;
          if ( v75 == v77 )
            goto LABEL_95;
        }
        v78 = 32LL * (v77->m128i_i32[0] & v22);
        v79 = (__m128i *)(v21 + v78);
        if ( v78 == v23 )
        {
LABEL_99:
          if ( v79 == (__m128i *)v21 )
          {
LABEL_135:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v80 = (__m128i *)v21;
          while ( v80->m128i_i64[1] )
          {
            v80 += 2;
            if ( v79 == v80 )
              goto LABEL_135;
          }
        }
        else
        {
          v80 = (__m128i *)(v21 + v78);
          while ( v80->m128i_i64[1] )
          {
            v80 += 2;
            if ( (__m128i *)v72 == v80 )
              goto LABEL_99;
          }
        }
        v81 = _mm_loadu_si128(v77);
        v77 += 2;
        *v80 = v81;
        v80[1] = _mm_loadu_si128(v77 - 1);
      }
      while ( v75 != v77 );
LABEL_95:
      v71 = v99;
      v75 = (__m128i *)v76[23];
      v6 = v76;
    }
    if ( v75 )
    {
      v100 = v23;
      v95 = v22;
      sub_186B220(v75);
      v23 = v100;
      v22 = v95;
    }
    v6[23] = v21;
    *((_DWORD *)v6 + 48) = v71;
    *((_DWORD *)v6 + 50) = 0;
  }
  else
  {
    v21 = v6[23];
    v22 = v19 - 1;
    v23 = 32 * v19;
    v24 = v21 + v23;
  }
  v25 = *(_DWORD *)(a2 + 12);
  v26 = (*(_DWORD *)(v4 + 12) - v25) ^ (v25 << 8);
  v27 = ((v26 ^ ((v25 - v26) << 16)) + v26 - v25) ^ ((v25 - v26) << 10);
  v28 = (((*(_DWORD *)(a4 + 12) - v27) ^ (v27 << 8) ^ ((v27 - ((*(_DWORD *)(a4 + 12) - v27) ^ (v27 << 8))) << 16))
       + ((*(_DWORD *)(a4 + 12) - v27) ^ (v27 << 8))
       - v27)
      ^ ((v27 - ((*(_DWORD *)(a4 + 12) - v27) ^ (v27 << 8))) << 10);
  v29 = 32LL * (v28 & v22);
  v30 = v21 + v29;
  if ( v29 != v23 )
  {
    v31 = v21 + v29;
    v32 = 0;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v31 + 8);
      if ( v33 > 1 )
      {
        if ( *(_DWORD *)v31 == v28 && a2 == v33 && v4 == *(_QWORD *)(v31 + 16) && a4 == *(_QWORD *)(v31 + 24) )
        {
          *(_QWORD *)(v31 + 8) = a2;
          *(_QWORD *)(v31 + 16) = v4;
          *(_QWORD *)(v31 + 24) = a4;
          goto LABEL_63;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_109;
          v32 = v31;
          goto LABEL_110;
        }
        v32 = v31;
      }
      v31 += 32;
      if ( v31 == v24 )
        goto LABEL_21;
    }
  }
  v32 = 0;
  while ( 1 )
  {
LABEL_21:
    if ( v30 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = *(_QWORD *)(v21 + 8);
    if ( v34 <= 1 )
      break;
    if ( *(_DWORD *)v21 == v28 && a2 == v34 && v4 == *(_QWORD *)(v21 + 16) && a4 == *(_QWORD *)(v21 + 24) )
    {
      *(_QWORD *)(v21 + 8) = a2;
      *(_QWORD *)(v21 + 16) = v4;
      *(_QWORD *)(v21 + 24) = a4;
      goto LABEL_63;
    }
LABEL_20:
    v21 += 32;
  }
  if ( v34 )
  {
    v32 = v21;
    goto LABEL_20;
  }
  if ( v32 )
LABEL_109:
    --*((_DWORD *)v6 + 50);
  else
    v32 = v21;
LABEL_110:
  *(_QWORD *)(v32 + 8) = a2;
  *(_QWORD *)(v32 + 16) = v4;
  *(_QWORD *)(v32 + 24) = a4;
  *(_DWORD *)v32 = v28;
  ++*((_DWORD *)v6 + 49);
LABEL_63:
  v103 = sub_957D50(v6);
  v94 = sub_957D50(v6);
  v98 = sub_957D50(v6);
  v108[0] = v103 ^ 1;
  v108[1] = v94 ^ 1;
  v108[2] = v98;
  v55 = (_QWORD *)sub_186B270(0x10u);
  *v55 = off_1C55FC8;
  v56 = v6[1];
  v55[1] = v6;
  if ( *(_DWORD *)(v56 + 712) )
  {
    v57 = (_QWORD *)sub_186B270(0x40u);
    v106 = sub_15E1B70(v6[1]);
    v107 = sub_15E1B70(v6[1]);
    v57[5] = sub_15E1B70(v6[1]);
    v57[1] = 0;
    *v57 = off_1C55F70;
    v57[2] = a2;
    v57[3] = v4;
    v57[4] = a4;
    v57[6] = v107;
    v57[7] = v106;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 7488) + 48LL))(
    *(_QWORD *)(v7 + 7488),
    *(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * (v103 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 7488) + 64LL))(*(_QWORD *)(v7 + 7488));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 7488) + 48LL))(
    *(_QWORD *)(v7 + 7488),
    *(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * (v94 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 7488) + 64LL))(*(_QWORD *)(v7 + 7488));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 7488) + 48LL))(
    *(_QWORD *)(v7 + 7488),
    *(_QWORD *)(*(_QWORD *)(v7 + 8840) + 8LL * (v98 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 7488) + 64LL))(*(_QWORD *)(v7 + 7488));
  v58 = sub_B68F30(v7, 3);
  if ( !v58 )
  {
    (*(void (__fastcall **)(_QWORD *))*v55)(v55);
    result = (__int64 *)sub_186B220(v55);
    if ( v108 )
      return (__int64 *)v108;
    return result;
  }
  v59 = *((unsigned int *)v6 + 54);
  if ( 3 * (int)v59 < (unsigned int)(4 * (*((_DWORD *)v6 + 55) + *((_DWORD *)v6 + 56))) )
  {
    v104 = v58;
    v101 = 2 * v59;
    v96 = 32LL * (unsigned int)(2 * v59);
    v82 = sub_186B270(v96);
    v83 = v101;
    v62 = v96;
    v60 = (__m128i *)v82;
    v84 = (__m128i *)v82;
    v58 = v104;
    v85 = (__m128i *)(v96 + v82);
    if ( v101 )
    {
      do
      {
        *v84 = 0;
        v84 += 2;
        v84[-1] = 0;
      }
      while ( v84 != v85 );
    }
    v86 = (const __m128i *)v6[26];
    v61 = v101 - 1;
    v63 = (__int64 *)v85;
    v87 = (__m128i *)&v86[2 * *((unsigned int *)v6 + 54)];
    if ( v86 != v87 )
    {
      do
      {
        while ( v86->m128i_i64[0] <= 1uLL )
        {
          v86 += 2;
          if ( v87 == v86 )
            goto LABEL_122;
        }
        v88 = 32LL * (v61 & (unsigned int)v86->m128i_i64[0]);
        v89 = &v60[(unsigned __int64)v88 / 0x10];
        if ( v96 == v88 )
        {
LABEL_126:
          if ( v60 == v89 )
          {
LABEL_138:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v90 = v60;
          while ( v90->m128i_i64[0] )
          {
            v90 += 2;
            if ( v89 == v90 )
              goto LABEL_138;
          }
        }
        else
        {
          v90 = &v60[(unsigned __int64)v88 / 0x10];
          while ( v90->m128i_i64[0] )
          {
            v90 += 2;
            if ( v85 == v90 )
              goto LABEL_126;
          }
        }
        v91 = _mm_loadu_si128(v86);
        v86 += 2;
        *v90 = v91;
        v90[1] = _mm_loadu_si128(v86 - 1);
      }
      while ( v87 != v86 );
LABEL_122:
      v87 = (__m128i *)v6[26];
    }
    if ( v87 )
    {
      v105 = v96;
      v97 = v58;
      sub_186B220(v87);
      v83 = v101;
      v62 = v105;
      v61 = v101 - 1;
      v58 = v97;
    }
    v6[26] = (__int64)v60;
    *((_DWORD *)v6 + 54) = v83;
    *((_DWORD *)v6 + 56) = 0;
  }
  else
  {
    v60 = (__m128i *)v6[26];
    v61 = v59 - 1;
    v62 = 32 * v59;
    v63 = (__int64 *)((char *)v60->m128i_i64 + v62);
  }
  v64 = 32LL * ((unsigned int)v58 & v61);
  v65 = &v60[(unsigned __int64)v64 / 0x10];
  if ( v64 != v62 )
  {
    result = v60[(unsigned __int64)v64 / 0x10].m128i_i64;
    v67 = nullptr;
    while ( 1 )
    {
      v68 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( (_DWORD)v58 == (_DWORD)v68 && v58 == v68 )
        {
          *result = v58;
          result[1] = a2;
          result[2] = v4;
          result[3] = a4;
          goto LABEL_105;
        }
      }
      else
      {
        if ( !v68 )
        {
          if ( v67 )
            goto LABEL_132;
          v67 = result;
          goto LABEL_133;
        }
        v67 = result;
      }
      result += 4;
      if ( result == v63 )
        goto LABEL_79;
    }
  }
  v67 = nullptr;
LABEL_79:
  while ( 2 )
  {
    if ( v65 == v60 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v69 = v60->m128i_i64[0];
    if ( v60->m128i_i64[0] > 1uLL )
    {
      if ( v58 == v69 && (_DWORD)v58 == (_DWORD)v69 )
      {
        result = (__int64 *)a4;
        v60->m128i_i64[0] = v58;
        v60->m128i_i64[1] = a2;
        v60[1].m128i_i64[0] = v4;
        v60[1].m128i_i64[1] = a4;
        goto LABEL_105;
      }
      goto LABEL_78;
    }
    if ( v69 )
    {
      v67 = (__int64 *)v60;
LABEL_78:
      v60 += 2;
      continue;
    }
    break;
  }
  if ( v67 )
LABEL_132:
    --*((_DWORD *)v6 + 56);
  else
    v67 = (__int64 *)v60;
LABEL_133:
  result = (__int64 *)a4;
  *v67 = v58;
  v67[1] = a2;
  v67[2] = v4;
  v67[3] = a4;
  ++*((_DWORD *)v6 + 55);
LABEL_105:
  if ( v108 )
    return (__int64 *)v108;
  return result;
}

