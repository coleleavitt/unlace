__int64 __fastcall sub_A3B0A0(__int64 a1, __int64 *a2, char **a3)
{
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rax
  char *v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // r12
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rax
  int v22; // edi
  char *v23; // rcx
  unsigned int v24; // edx
  char *v25; // rsi
  __int64 v26; // rdx
  char *v27; // r10
  char *i; // rax
  _DWORD *v29; // rdx
  int v30; // eax
  _QWORD *v31; // rbx
  _QWORD *v32; // rbp
  unsigned int v33; // r12d
  _QWORD *v34; // rax
  void *v36; // rbx
  unsigned int **v37; // r12
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned int *v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned int v43; // eax
  __int64 v44; // r9
  unsigned int v45; // eax
  __m128i *v46; // rbx
  int v47; // esi
  int v48; // edi
  __int64 v49; // r9
  __m128i *v50; // rbp
  __int64 v51; // rsi
  __m128i *v52; // rdx
  __m128i *j; // r10
  unsigned int *v54; // rcx
  int v55; // r8d
  unsigned int v56; // r10d
  __m128i *v57; // rsi
  __m128i *v58; // r9
  unsigned int *v59; // rcx
  unsigned int *v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // r14d
  __int64 v63; // rsi
  char *v64; // r13
  char *v65; // r13
  unsigned int *v66; // rcx
  __int64 v67; // rbp
  __m128i *v68; // rax
  int v69; // r10d
  size_t v70; // r9
  __m128i *v71; // rdx
  const __m128i *v72; // rax
  int v73; // ecx
  __m128i *v74; // r11
  __int64 v75; // rdx
  __m128i *v76; // rsi
  __m128i *v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // rsi
  __int64 v80; // r14
  __int64 v81; // rax
  char *v82; // rdi
  __int64 v83; // rax
  _DWORD *v84; // rax
  unsigned int v85; // esi
  unsigned int **v86; // [rsp+8h] [rbp-1B0h]
  __int64 v87; // [rsp+8h] [rbp-1B0h]
  __int64 v88; // [rsp+10h] [rbp-1A8h]
  size_t v89; // [rsp+20h] [rbp-198h]
  int v90; // [rsp+2Ch] [rbp-18Ch]
  int v91; // [rsp+30h] [rbp-188h]
  _BYTE v93[16]; // [rsp+50h] [rbp-168h] BYREF
  char v94[16]; // [rsp+60h] [rbp-158h] BYREF
  void *ptr; // [rsp+70h] [rbp-148h] BYREF
  __int64 v96; // [rsp+78h] [rbp-140h]
  _BYTE v97[312]; // [rsp+80h] [rbp-138h] BYREF

  *((_DWORD *)a3 + 2) = 0;
  if ( *(_DWORD *)(a1 + 1388) || *(_DWORD *)(a1 + 1392) )
  {
    v5 = *(char **)(a1 + 1376);
    v6 = 0;
    v7 = *(unsigned int *)(a1 + 1384);
    v8 = v5;
    v9 = &v5[16 * v7];
    if ( v5 == v9 )
      goto LABEL_15;
    do
    {
      while ( *(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = 0;
        v8 += 16;
        if ( v9 == v8 )
          goto LABEL_8;
      }
      v8 += 16;
      ++v6;
    }
    while ( v9 != v8 );
LABEL_8:
    if ( (unsigned int)v7 <= 0x10 || 3 * (int)v7 >= (unsigned int)(4 * v6) )
      goto LABEL_15;
    if ( v5 )
    {
      sub_186B220(v5);
      v10 = *(_DWORD *)(a1 + 1384);
      *(_QWORD *)(a1 + 1376) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 1384) = v10;
      v11 = v10;
      v12 = sub_186B270(16LL * v10);
      if ( !v10 )
      {
LABEL_14:
        *(_QWORD *)(a1 + 1376) = v12;
LABEL_15:
        *(_QWORD *)(a1 + 1388) = 0;
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1376) = 0;
      v85 = (unsigned int)v7 >> 1;
      v11 = v85;
      *(_DWORD *)(a1 + 1384) = v85;
      v12 = sub_186B270(16LL * v85);
    }
    v13 = (_QWORD *)v12;
    do
    {
      *v13 = 0;
      v13 += 2;
      *((_DWORD *)v13 - 2) = 0;
    }
    while ( v13 != (_QWORD *)(v12 + 16 * v11) );
    goto LABEL_14;
  }
LABEL_16:
  v14 = *a2;
  v88 = *a2 + 40LL * *((unsigned int *)a2 + 2);
  if ( *a2 == v88 )
    goto LABEL_37;
  do
  {
    v15 = *(_DWORD **)(v14 + 32);
    if ( !*((_WORD *)v15 + 2) )
    {
      v16 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
      if ( v16 )
      {
        if ( *v16 == 5 && !v16[1] )
          goto LABEL_36;
      }
    }
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v17
      && *v15 < *(_DWORD *)(v17 - 4)
      && *(_QWORD *)(v17 + 8LL * (unsigned int)*v15)
      && !(unsigned __int8)sub_98AD60(*(_QWORD *)(v14 + 32)) )
    {
      v19 = *(_QWORD *)(v17 + 8 * v18);
      if ( v19 )
      {
        if ( (unsigned int)sub_B39350(v19, *(unsigned int *)(a1 + 8)) != -1 )
        {
          v20 = sub_B39350(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * (unsigned int)*v15),
                  *(unsigned int *)(a1 + 8));
          if ( !sub_99A460(a1, v20) )
          {
            v21 = *(unsigned int *)(a1 + 1384);
            v22 = v15[3];
            v23 = *(char **)(a1 + 1376);
            v24 = v21 - 1;
            v21 *= 16;
            v25 = &v23[v21];
            v26 = 16LL * (v22 & v24);
            v27 = &v23[v26];
            if ( v26 != v21 )
            {
              for ( i = &v23[v26]; v25 != i; i += 16 )
              {
                v29 = *(_DWORD **)i;
                if ( *(_QWORD *)i > 1u )
                {
                  if ( v29[3] == v22 && v15 == v29 )
                  {
LABEL_135:
                    v30 = *((_DWORD *)i + 2) + 1;
                    goto LABEL_35;
                  }
                }
                else if ( !v29 )
                {
                  goto LABEL_34;
                }
              }
            }
            for ( ; v27 != v23; v23 += 16 )
            {
              v84 = *(_DWORD **)v23;
              if ( *(_QWORD *)v23 > 1u )
              {
                if ( v84[3] == v22 && v15 == v84 )
                {
                  i = v23;
                  goto LABEL_135;
                }
              }
              else if ( !v84 )
              {
                break;
              }
            }
LABEL_34:
            v30 = 1;
LABEL_35:
            ptr = v15;
            LODWORD(v96) = v30;
            sub_A3A380(a1 + 1376, &ptr);
          }
        }
      }
      goto LABEL_36;
    }
    ptr = v97;
    v96 = 0x1000000000LL;
    sub_9EB220((__int64)v93, a1, (__int64)v15, (__int64)&ptr);
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v93);
    sub_182CBA0(v36, v94);
    v37 = (unsigned int **)ptr;
    v38 = 16LL * (unsigned int)v96;
    v86 = (unsigned int **)((char *)ptr + v38);
    if ( (char *)ptr + v38 == ptr )
      goto LABEL_84;
    do
    {
LABEL_50:
      while ( 1 )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
        if ( v39 )
        {
          v40 = *v37;
          v41 = **v37;
          if ( (unsigned int)v41 < *(_DWORD *)(v39 - 4) )
          {
            v42 = *(_QWORD *)(v39 + 8 * v41);
            if ( v42 )
            {
              if ( (unsigned int)sub_B39350(v42, *(unsigned int *)(a1 + 8)) != -1 )
              {
                v43 = sub_B39350(
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v40),
                        *(unsigned int *)(a1 + 8));
                if ( !sub_99A460(a1, v43) )
                  break;
              }
            }
          }
        }
LABEL_82:
        v37 += 2;
        if ( v86 == v37 )
          goto LABEL_83;
      }
      v44 = *(unsigned int *)(a1 + 1384);
      v45 = v40[3];
      v46 = *(__m128i **)(a1 + 1376);
      v47 = v44 - 1;
      v48 = *(_DWORD *)(a1 + 1384);
      v49 = 16 * v44;
      v50 = &v46[(unsigned __int64)v49 / 0x10];
      v51 = 16LL * (v45 & v47);
      v52 = &v46[(unsigned __int64)v51 / 0x10];
      if ( v51 != v49 )
      {
        for ( j = &v46[(unsigned __int64)v51 / 0x10]; v50 != j; ++j )
        {
          v54 = (unsigned int *)j->m128i_i64[0];
          if ( j->m128i_i64[0] > 1uLL )
          {
            if ( v54[3] == v45 && v40 == v54 )
            {
LABEL_87:
              v55 = j->m128i_i32[2] + 1;
              goto LABEL_63;
            }
          }
          else if ( !v54 )
          {
            goto LABEL_62;
          }
        }
      }
      if ( v46 != v52 )
      {
        for ( j = *(__m128i **)(a1 + 1376); v52 != j; ++j )
        {
          v66 = (unsigned int *)j->m128i_i64[0];
          if ( j->m128i_i64[0] > 1uLL )
          {
            if ( v66[3] == v45 && v40 == v66 )
              goto LABEL_87;
          }
          else if ( !v66 )
          {
            break;
          }
        }
      }
LABEL_62:
      v55 = 1;
LABEL_63:
      v56 = 2 * v48;
      if ( 3 * v48 < (unsigned int)(4 * (*(_DWORD *)(a1 + 1388) + *(_DWORD *)(a1 + 1392))) )
      {
        v67 = v56;
        v91 = v55;
        v90 = 2 * v48;
        v89 = 16LL * v56;
        v68 = (__m128i *)sub_186B270(v89);
        v69 = 2 * v48;
        v70 = v89;
        v46 = v68;
        v55 = v91;
        v71 = &v68[v67];
        if ( 2 * v48 )
        {
          do
          {
            v68->m128i_i64[0] = 0;
            ++v68;
            v68[-1].m128i_i32[2] = 0;
          }
          while ( v68 != v71 );
        }
        v72 = *(const __m128i **)(a1 + 1376);
        v73 = v90 - 1;
        v50 = &v46[v89 / 0x10];
        v74 = (__m128i *)&v72[*(unsigned int *)(a1 + 1384)];
        if ( v72 != v74 )
        {
          do
          {
            while ( v72->m128i_i64[0] <= 1uLL )
            {
              if ( v74 == ++v72 )
                goto LABEL_111;
            }
            v75 = 16LL * (*(_DWORD *)(v72->m128i_i64[0] + 12) & (unsigned int)v73);
            v76 = &v46[(unsigned __int64)v75 / 0x10];
            if ( v89 == v75 )
            {
LABEL_116:
              if ( v46 == v76 )
              {
LABEL_129:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v77 = v46;
              while ( v77->m128i_i64[0] )
              {
                if ( v76 == ++v77 )
                  goto LABEL_129;
              }
            }
            else
            {
              v77 = &v46[(unsigned __int64)v75 / 0x10];
              while ( v77->m128i_i64[0] )
              {
                if ( v50 == ++v77 )
                  goto LABEL_116;
              }
            }
            v78 = _mm_loadu_si128(v72++);
            *v77 = v78;
          }
          while ( v74 != v72 );
LABEL_111:
          v74 = *(__m128i **)(a1 + 1376);
        }
        if ( v74 )
        {
          sub_186B220(v74);
          v69 = 2 * v48;
          v55 = v91;
          v73 = v90 - 1;
          v70 = v89;
        }
        v45 = v40[3];
        *(_QWORD *)(a1 + 1376) = v46;
        *(_DWORD *)(a1 + 1384) = v69;
        *(_DWORD *)(a1 + 1392) = 0;
        v79 = 16LL * (v45 & v73);
        v52 = &v46[(unsigned __int64)v79 / 0x10];
        if ( v79 != v70 )
        {
LABEL_65:
          v57 = v52;
          v58 = nullptr;
          while ( 1 )
          {
            v59 = (unsigned int *)v57->m128i_i64[0];
            if ( v57->m128i_i64[0] > 1uLL )
            {
              if ( v59[3] == v45 && v40 == v59 )
              {
                v57->m128i_i64[0] = (__int64)v40;
                v37 += 2;
                v57->m128i_i32[2] = v55;
                if ( v86 == v37 )
                  goto LABEL_83;
                goto LABEL_50;
              }
            }
            else
            {
              if ( !v59 )
              {
                if ( v58 )
                  goto LABEL_80;
                v58 = v57;
                goto LABEL_81;
              }
              v58 = v57;
            }
            if ( ++v57 == v50 )
              goto LABEL_75;
          }
        }
      }
      else if ( v51 != v49 )
      {
        goto LABEL_65;
      }
      v58 = nullptr;
      while ( 1 )
      {
LABEL_75:
        if ( v46 == v52 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v60 = (unsigned int *)v46->m128i_i64[0];
        if ( v46->m128i_i64[0] > 1uLL )
          break;
        if ( !v60 )
        {
          if ( v58 )
LABEL_80:
            --*(_DWORD *)(a1 + 1392);
          else
            v58 = v46;
LABEL_81:
          v58->m128i_i64[0] = (__int64)v40;
          v58->m128i_i32[2] = v55;
          ++*(_DWORD *)(a1 + 1388);
          goto LABEL_82;
        }
        v58 = v46;
LABEL_74:
        ++v46;
      }
      if ( v60[3] != v45 || v40 != v60 )
        goto LABEL_74;
      v46->m128i_i64[0] = (__int64)v40;
      v37 += 2;
      v46->m128i_i32[2] = v55;
    }
    while ( v86 != v37 );
LABEL_83:
    v37 = (unsigned int **)ptr;
LABEL_84:
    if ( v37 != (unsigned int **)v97 && v37 )
      sub_186B220(v37);
LABEL_36:
    v14 += 40;
  }
  while ( v88 != v14 );
LABEL_37:
  v31 = *(_QWORD **)(a1 + 1376);
  v32 = &v31[2 * *(unsigned int *)(a1 + 1384)];
  if ( v31 != v32 )
  {
    while ( *v31 <= 1u )
    {
      v31 += 2;
      if ( v32 == v31 )
        return 1;
    }
    if ( v32 != v31 )
    {
      do
      {
        v33 = *((_DWORD *)v31 + 2);
        if ( v33 > 1 )
        {
          v61 = *((unsigned int *)a3 + 2);
          v62 = *((_DWORD *)a3 + 3);
          v63 = *v31;
          if ( (unsigned int)v61 >= v62 )
          {
            v87 = *v31;
            v80 = 2 * v62;
            v81 = sub_186B270(16 * v80);
            v82 = *a3;
            v64 = (char *)v81;
            v83 = 0;
            v63 = v87;
            v61 = *((unsigned int *)a3 + 2);
            if ( (_DWORD)v61 )
            {
              do
              {
                *(__m128i *)&v64[v83] = _mm_loadu_si128((const __m128i *)&v82[v83]);
                v83 += 16;
              }
              while ( v83 != 16 * v61 );
            }
            if ( v82 != (char *)(a3 + 2) && v82 )
            {
              sub_186B220(v82);
              v61 = *((unsigned int *)a3 + 2);
            }
            *a3 = v64;
            *((_DWORD *)a3 + 3) = v80;
          }
          else
          {
            v64 = *a3;
          }
          v65 = &v64[16 * v61];
          *(_QWORD *)v65 = v63;
          *((_DWORD *)v65 + 2) = v33;
          ++*((_DWORD *)a3 + 2);
        }
        v34 = v31 + 2;
        if ( v32 == v31 + 2 )
          break;
        while ( 1 )
        {
          v31 = v34;
          if ( *v34 > 1u )
            break;
          v34 += 2;
          if ( v32 == v34 )
            return 1;
        }
      }
      while ( v32 != v34 );
    }
  }
  return 1;
}

