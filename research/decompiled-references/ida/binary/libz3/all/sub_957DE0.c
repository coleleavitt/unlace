__int64 *__fastcall sub_957DE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rax
  int v15; // esi
  __int64 *v16; // r8
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 *v23; // rsi
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // r13
  int v31; // edi
  int v32; // eax
  int v33; // esi
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // r15d
  __int64 v43; // r13
  _DWORD *v44; // rbx
  _DWORD *v45; // r13
  __int64 v46; // r15
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 *v50; // rbx
  int v51; // r8d
  __int64 v52; // r9
  __int64 *v53; // r13
  __int64 v54; // r8
  __int64 *v55; // rdi
  __int64 *result; // rax
  __int64 *v57; // rsi
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  unsigned int v60; // edx
  int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // ebx
  __int64 v64; // r15
  _DWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  const __m128i *v69; // r13
  __int64 v70; // r10
  __m128i *v71; // rbx
  __m128i *v72; // rcx
  __int64 v73; // rax
  __m128i *v74; // rdx
  __m128i *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  int v78; // r9d
  _OWORD *v79; // rax
  __int64 v80; // rdx
  const double *v81; // rax
  double *v82; // r11
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 *v88; // rax
  int v89; // r10d
  __int64 *v90; // rdx
  const double *v91; // rax
  double *v92; // r11
  __int64 v93; // rdx
  __int64 *v94; // rdi
  __m128 *v95; // rdx
  int v96; // [rsp+8h] [rbp-B0h]
  _QWORD *v97; // [rsp+8h] [rbp-B0h]
  unsigned int v98; // [rsp+8h] [rbp-B0h]
  size_t v99; // [rsp+8h] [rbp-B0h]
  void *v100; // [rsp+8h] [rbp-B0h]
  size_t v101; // [rsp+10h] [rbp-A8h]
  int v102; // [rsp+10h] [rbp-A8h]
  int v103; // [rsp+18h] [rbp-A0h]
  __int64 v104; // [rsp+18h] [rbp-A0h]
  size_t v105; // [rsp+18h] [rbp-A0h]
  int v106; // [rsp+28h] [rbp-90h]
  _BYTE *v107; // [rsp+30h] [rbp-88h]
  __int64 v108; // [rsp+38h] [rbp-80h]
  unsigned int v109; // [rsp+38h] [rbp-80h]
  _BYTE v110[120]; // [rsp+40h] [rbp-78h] BYREF

  v3 = 32;
  ++*(_DWORD *)(*a1 + 72);
  v7 = *(unsigned int *)(a2 + 24);
  v107 = v110;
  v8 = 8 * v7 + 32;
  v108 = 0x1000000000LL;
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( *(_QWORD *)(a2 + v3) != *(_QWORD *)(a3 + v3) )
      {
        v10 = sub_957D50(a1);
        v11 = (unsigned int)v108;
        v12 = v10 ^ 1;
        v13 = v12;
        if ( (unsigned int)v108 < HIDWORD(v108) )
        {
          v9 = (__int64)v107;
        }
        else
        {
          v96 = v12;
          v9 = sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v108)));
          v14 = 0;
          v13 = v96;
          v11 = (unsigned int)v108;
          if ( (_DWORD)v108 )
          {
            do
            {
              *(_DWORD *)(v9 + v14) = *(_DWORD *)&v107[v14];
              v14 += 4;
            }
            while ( 4LL * (unsigned int)v108 != v14 );
          }
          if ( v107 != v110 && v107 )
          {
            sub_186B220(v107);
            v11 = (unsigned int)v108;
            v13 = v96;
          }
          v107 = (_BYTE *)v9;
          HIDWORD(v108) *= 2;
        }
        *(_DWORD *)(v9 + 4 * v11) = v13;
        LODWORD(v108) = v108 + 1;
      }
      v3 += 8;
    }
    while ( v8 != v3 );
  }
  v15 = *(_DWORD *)(a2 + 12);
  v16 = (__int64 *)a1[3];
  v17 = (*(_DWORD *)(a3 + 12) - v15) ^ (v15 << 8);
  v18 = ((v17 ^ ((v15 - v17) << 16)) + v17 - v15) ^ ((v15 - v17) << 10);
  v19 = *((unsigned int *)a1 + 8);
  v20 = 24LL * (v18 & (unsigned int)(v19 - 1));
  v21 = 24 * v19;
  v22 = &v16[(unsigned __int64)v20 / 8];
  v23 = &v16[3 * v19];
  v24 = &v16[(unsigned __int64)v20 / 8];
  if ( v20 == v21 )
  {
LABEL_83:
    if ( v16 != v22 )
    {
      v24 = (__int64 *)a1[3];
      while ( 1 )
      {
        v76 = *v24;
        if ( (unsigned __int64)*v24 > 1 )
        {
          if ( *((_DWORD *)v24 + 5) == v18 && a2 == v76 && a3 == v24[1] )
            goto LABEL_58;
        }
        else if ( !v76 )
        {
          goto LABEL_21;
        }
        v24 += 3;
        if ( v22 == v24 )
          goto LABEL_21;
      }
    }
    goto LABEL_21;
  }
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned __int64)*v24 > 1 )
      break;
    if ( !v25 )
      goto LABEL_21;
LABEL_18:
    v24 += 3;
    if ( v23 == v24 )
      goto LABEL_83;
  }
  if ( *((_DWORD *)v24 + 5) != v18 || a2 != v25 || a3 != v24[1] )
    goto LABEL_18;
LABEL_58:
  v59 = v24 + 3;
  if ( v23 == v24 + 3 )
    v59 = (_QWORD *)a1[3];
  v60 = *((_DWORD *)a1 + 9) - 1;
  if ( *v59 )
  {
    *v24 = 1;
    v61 = *((_DWORD *)a1 + 10);
    *((_DWORD *)a1 + 9) = v60;
    v62 = v61 + 1;
    if ( v60 < 0x40 )
      v60 = 64;
    *((_DWORD *)a1 + 10) = v62;
    if ( v60 < v62 && !(unsigned __int8)sub_186AF10(v22) )
    {
      v63 = *((_DWORD *)a1 + 8);
      v64 = sub_186B270(24LL * v63);
      if ( v63 )
      {
        if ( v63 - 1 <= 2 )
        {
          v67 = v64;
LABEL_71:
          *(_QWORD *)(v67 + 16) = 0;
          *(_OWORD *)v67 = 0;
          if ( v63 != 1 )
          {
            *(_QWORD *)(v67 + 40) = 0;
            *(_OWORD *)(v67 + 24) = 0;
            if ( v63 != 2 )
            {
              *(_QWORD *)(v67 + 64) = 0;
              *(_OWORD *)(v67 + 48) = 0;
            }
          }
        }
        else
        {
          v65 = (_DWORD *)(v64 + 20);
          do
          {
            *v65 = 0;
            v65 += 24;
            *(_OWORD *)(v65 - 29) = 0;
            *(_OWORD *)(v65 - 23) = 0;
            *(_OWORD *)(v65 - 17) = 0;
            *(_OWORD *)(v65 - 11) = 0;
            *(v65 - 18) = 0;
            *(v65 - 12) = 0;
            *(v65 - 6) = 0;
          }
          while ( (_DWORD *)(v64 + 96LL * (v63 >> 2) + 20) != v65 );
          if ( (v63 & 3) != 0 )
          {
            v66 = v63 & 0xFFFFFFFC;
            v63 -= v66;
            v67 = v64 + 24 * v66;
            goto LABEL_71;
          }
        }
      }
      v68 = *((unsigned int *)a1 + 8);
      v69 = (const __m128i *)a1[3];
      v70 = 24 * v68;
      v98 = v68 - 1;
      v71 = (__m128i *)((char *)v69 + 24 * v68);
      v72 = (__m128i *)(v64 + 24 * v68);
      if ( v69 != v71 )
      {
        do
        {
          if ( v69->m128i_i64[0] > 1uLL )
          {
            v73 = 24LL * (v69[1].m128i_i32[1] & v98);
            v74 = (__m128i *)(v64 + v73);
            if ( v70 == v73 )
            {
LABEL_179:
              if ( (__m128i *)v64 == v74 )
              {
LABEL_188:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v75 = (__m128i *)v64;
              while ( v75->m128i_i64[0] )
              {
                v75 = (__m128i *)((char *)v75 + 24);
                if ( v74 == v75 )
                  goto LABEL_188;
              }
            }
            else
            {
              v75 = (__m128i *)(v64 + v73);
              while ( v75->m128i_i64[0] )
              {
                v75 = (__m128i *)((char *)v75 + 24);
                if ( v72 == v75 )
                  goto LABEL_179;
              }
            }
            *v75 = _mm_loadu_si128(v69);
            v75[1].m128i_i64[0] = v69[1].m128i_i64[0];
          }
          v69 = (const __m128i *)((char *)v69 + 24);
        }
        while ( v71 != v69 );
        v71 = (__m128i *)a1[3];
      }
      if ( v71 )
        sub_186B220(v71);
      a1[3] = v64;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  else
  {
    *v24 = 0;
    *((_DWORD *)a1 + 9) = v60;
  }
LABEL_21:
  v26 = *((unsigned int *)a1 + 22);
  if ( 3 * (int)v26 < (unsigned int)(4 * (*((_DWORD *)a1 + 23) + *((_DWORD *)a1 + 24))) )
  {
    v103 = 2 * v26;
    v101 = 24LL * (unsigned int)(2 * v26);
    v77 = sub_186B270(v101);
    v78 = v103;
    v27 = v77;
    v79 = (_OWORD *)(v77 + 8);
    v29 = v101;
    v80 = v27 + v101 + 8;
    if ( v103 )
    {
      if ( (((_BYTE)v80 - (_BYTE)v79) & 8) == 0 || (*v79 = 0, v79 = (_OWORD *)(v27 + 32), v80 != v27 + 32) )
      {
        do
        {
          *v79 = 0;
          v79 += 3;
          *(_OWORD *)((char *)v79 - 24) = 0;
        }
        while ( (_OWORD *)v80 != v79 );
      }
    }
    v81 = (const double *)a1[10];
    v28 = v103 - 1;
    v30 = v27 + v101;
    v82 = (double *)&v81[3 * *((unsigned int *)a1 + 22)];
    if ( v81 != v82 )
    {
      do
      {
        while ( *((_QWORD *)v81 + 1) <= 1u )
        {
          v81 += 3;
          if ( v82 == v81 )
            goto LABEL_115;
        }
        v83 = *(_DWORD *)v81;
        v84 = 24LL * (*(_DWORD *)v81 & v28);
        v85 = v27 + v84;
        if ( v101 == v84 )
        {
LABEL_119:
          if ( v27 == v85 )
          {
LABEL_165:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v86 = v27;
          while ( *(_QWORD *)(v86 + 8) )
          {
            v86 += 24;
            if ( v85 == v86 )
              goto LABEL_165;
          }
        }
        else
        {
          v86 = v27 + v84;
          while ( *(_QWORD *)(v86 + 8) )
          {
            v86 += 24;
            if ( v30 == v86 )
              goto LABEL_119;
          }
        }
        v81 += 3;
        *(_DWORD *)v86 = v83;
        *(__m128 *)(v86 + 8) = _mm_loadh_ps(v81 - 1);
      }
      while ( v82 != v81 );
LABEL_115:
      v82 = (double *)a1[10];
    }
    if ( v82 )
    {
      sub_186B220(v82);
      v78 = v103;
      v29 = v101;
    }
    a1[10] = v27;
    *((_DWORD *)a1 + 22) = v78;
    *((_DWORD *)a1 + 24) = 0;
  }
  else
  {
    v27 = a1[10];
    v28 = v26 - 1;
    v29 = 24 * v26;
    v30 = v27 + 24 * v26;
  }
  v31 = *(_DWORD *)(a2 + 12);
  v32 = (*(_DWORD *)(a3 + 12) - v31) ^ (v31 << 8);
  v33 = ((v32 ^ ((v31 - v32) << 16)) + v32 - v31) ^ ((v31 - v32) << 10);
  v34 = v33 & v28;
  v35 = v27 + 24 * v34;
  if ( 24 * v34 != v29 )
  {
    v36 = v27 + 24 * v34;
    v37 = 0;
    while ( 1 )
    {
      v38 = *(_QWORD *)(v36 + 8);
      if ( v38 > 1 )
      {
        if ( *(_DWORD *)v36 == v33 && a2 == v38 && a3 == *(_QWORD *)(v36 + 16) )
        {
          *(_QWORD *)(v36 + 8) = a2;
          goto LABEL_40;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v37 )
            goto LABEL_158;
          v37 = v36;
          goto LABEL_159;
        }
        v37 = v36;
      }
      v36 += 24;
      if ( v36 == v30 )
        goto LABEL_34;
    }
  }
  v37 = 0;
LABEL_34:
  while ( 2 )
  {
    if ( v35 == v27 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v39 = *(_QWORD *)(v27 + 8);
    if ( v39 > 1 )
    {
      if ( *(_DWORD *)v27 == v33 && a2 == v39 && a3 == *(_QWORD *)(v27 + 16) )
      {
        *(_QWORD *)(v27 + 8) = a2;
        goto LABEL_40;
      }
      goto LABEL_33;
    }
    if ( v39 )
    {
      v37 = v27;
LABEL_33:
      v27 += 24;
      continue;
    }
    break;
  }
  if ( v37 )
LABEL_158:
    --*((_DWORD *)a1 + 24);
  else
    v37 = v27;
LABEL_159:
  *(_QWORD *)(v37 + 8) = a2;
  *(_QWORD *)(v37 + 16) = a3;
  *(_DWORD *)v37 = v33;
  ++*((_DWORD *)a1 + 23);
LABEL_40:
  v40 = sub_957D50(a1);
  v41 = (unsigned int)v108;
  v42 = v40;
  if ( (unsigned int)v108 >= HIDWORD(v108) )
  {
    v43 = sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v108)));
    v87 = 0;
    v41 = (unsigned int)v108;
    if ( (_DWORD)v108 )
    {
      do
      {
        *(_DWORD *)(v43 + v87) = *(_DWORD *)&v107[v87];
        v87 += 4;
      }
      while ( v87 != 4LL * (unsigned int)v108 );
    }
    if ( v107 != v110 && v107 )
    {
      sub_186B220(v107);
      v41 = (unsigned int)v108;
    }
    v107 = (_BYTE *)v43;
  }
  else
  {
    v43 = (__int64)v107;
  }
  *(_DWORD *)(v43 + 4 * v41) = v42;
  v109 = v108 + 1;
  v97 = (_QWORD *)sub_186B270(0x10u);
  *v97 = off_1C55FC8;
  v97[1] = a1;
  v44 = v107;
  v45 = &v107[4 * v109];
  if ( v45 != (_DWORD *)v107 )
  {
    do
    {
      v46 = *a1;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 7488) + 48LL))(
        *(_QWORD *)(*a1 + 7488),
        *(_QWORD *)(*(_QWORD *)(*a1 + 8840) + 8LL * (*v44 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v46 + 7488) + 64LL))(*(_QWORD *)(v46 + 7488));
      ++v44;
    }
    while ( v45 != v44 );
  }
  if ( *(_DWORD *)(a1[1] + 712) )
  {
    v47 = (_QWORD *)sub_186B270(0x20u);
    v47[1] = 0;
    *v47 = off_1C55F18;
    v47[2] = a2;
    v47[3] = a3;
  }
  v48 = sub_B68F30(*a1, v109);
  if ( !v48 )
  {
    (*(void (__fastcall **)(_QWORD *))*v97)(v97);
    sub_186B220(v97);
    result = (__int64 *)v110;
    if ( v107 != v110 && v107 )
      return (__int64 *)sub_186B220(v107);
    return result;
  }
  v49 = *((unsigned int *)a1 + 28);
  if ( 3 * (int)v49 < (unsigned int)(4 * (*((_DWORD *)a1 + 29) + *((_DWORD *)a1 + 30))) )
  {
    v104 = v48;
    v99 = 24LL * (unsigned int)(2 * v49);
    v88 = (__int64 *)sub_186B270(v99);
    v89 = 2 * v49;
    v52 = v99;
    v50 = v88;
    v48 = v104;
    if ( 2 * (_DWORD)v49 )
    {
      v90 = &v88[6 * (v49 & 0x7FFFFFFF)];
      do
      {
        *(_OWORD *)v88 = 0;
        v88 += 6;
        *((_OWORD *)v88 - 2) = 0;
        *((_OWORD *)v88 - 1) = 0;
      }
      while ( v90 != v88 );
    }
    v91 = (const double *)a1[13];
    v51 = v89 - 1;
    v53 = &v50[v99 / 8];
    v92 = (double *)&v91[3 * *((unsigned int *)a1 + 28)];
    if ( v91 != v92 )
    {
      do
      {
        while ( *(_QWORD *)v91 <= 1u )
        {
          v91 += 3;
          if ( v92 == v91 )
            goto LABEL_148;
        }
        v93 = 24LL * ((unsigned int)*(_QWORD *)v91 & v51);
        v94 = &v50[(unsigned __int64)v93 / 8];
        if ( v99 == v93 )
        {
LABEL_152:
          if ( v50 == v94 )
          {
LABEL_166:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v95 = (__m128 *)v50;
          while ( v95->m128_u64[0] )
          {
            v95 = (__m128 *)((char *)v95 + 24);
            if ( v94 == (__int64 *)v95 )
              goto LABEL_166;
          }
        }
        else
        {
          v95 = (__m128 *)&v50[(unsigned __int64)v93 / 8];
          while ( v95->m128_u64[0] )
          {
            v95 = (__m128 *)((char *)v95 + 24);
            if ( v53 == (__int64 *)v95 )
              goto LABEL_152;
          }
        }
        v91 += 3;
        *v95 = _mm_loadh_ps(v91 - 2);
        *(double *)v95[1].m128_u64 = *(v91 - 1);
      }
      while ( v92 != v91 );
LABEL_148:
      v92 = (double *)a1[13];
    }
    if ( v92 )
    {
      v106 = v89;
      v105 = v99;
      v102 = v89 - 1;
      v100 = (void *)v48;
      sub_186B220(v92);
      v89 = v106;
      v52 = v105;
      v51 = v102;
      v48 = (__int64)v100;
    }
    a1[13] = (__int64)v50;
    *((_DWORD *)a1 + 28) = v89;
    *((_DWORD *)a1 + 30) = 0;
  }
  else
  {
    v50 = (__int64 *)a1[13];
    v51 = v49 - 1;
    v52 = 24 * v49;
    v53 = &v50[3 * v49];
  }
  v54 = (unsigned int)v48 & v51;
  v55 = &v50[3 * v54];
  if ( 24 * v54 != v52 )
  {
    result = &v50[3 * v54];
    v57 = nullptr;
    while ( 1 )
    {
      v58 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( v48 == v58 && (_DWORD)v48 == (_DWORD)v58 )
        {
          *result = v48;
          result[1] = a2;
          result[2] = a3;
          goto LABEL_131;
        }
      }
      else
      {
        if ( !v58 )
        {
          if ( v57 )
            goto LABEL_161;
          v57 = result;
          goto LABEL_162;
        }
        v57 = result;
      }
      result += 3;
      if ( result == v53 )
        goto LABEL_94;
    }
  }
  v57 = nullptr;
LABEL_94:
  while ( 2 )
  {
    if ( v55 == v50 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__int64 *)*v50;
    if ( (unsigned __int64)*v50 > 1 )
    {
      if ( (__int64 *)v48 == result && (_DWORD)v48 == (_DWORD)result )
      {
        *v50 = v48;
        v50[1] = a2;
        v50[2] = a3;
        goto LABEL_131;
      }
      goto LABEL_93;
    }
    if ( result )
    {
      v57 = v50;
LABEL_93:
      v50 += 3;
      continue;
    }
    break;
  }
  if ( v57 )
LABEL_161:
    --*((_DWORD *)a1 + 30);
  else
    v57 = v50;
LABEL_162:
  *v57 = v48;
  v57[1] = a2;
  v57[2] = a3;
  ++*((_DWORD *)a1 + 29);
LABEL_131:
  if ( v107 )
  {
    result = (__int64 *)v110;
    if ( v107 != v110 )
      return (__int64 *)sub_186B220(v107);
  }
  return result;
}

