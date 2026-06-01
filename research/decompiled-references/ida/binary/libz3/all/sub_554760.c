__int64 __fastcall sub_554760(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __m128 a6)
{
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r13
  int v12; // r8d
  unsigned int v13; // r9d
  unsigned int v14; // r15d
  __int64 v15; // rdx
  int v16; // edx
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // rbp
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r9
  _QWORD *v24; // rsi
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rbp
  __int64 v28; // r13
  unsigned int v29; // esi
  unsigned int v30; // r14d
  _QWORD *v31; // rax
  __int64 v32; // rbp
  _QWORD *v33; // r12
  char v34; // al
  char v35; // dl
  __int64 v36; // rsi
  unsigned int v37; // eax
  int v38; // r15d
  unsigned int v39; // ebx
  _QWORD *v40; // r14
  _QWORD *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rdx
  unsigned int v46; // r15d
  unsigned int v47; // r14d
  __int64 v48; // r12
  __int64 v49; // r13
  unsigned int v50; // r14d
  __int64 j; // r15
  char v52; // al
  char v53; // dl
  __int64 v54; // rsi
  unsigned int v55; // eax
  int v56; // r15d
  _QWORD *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rdi
  __int64 v61; // rdx
  unsigned int v62; // r15d
  __int64 v63; // r12
  __int64 v64; // r15
  __int64 v65; // rax
  _QWORD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rax
  _QWORD *v70; // rdi
  __int64 v71; // rax
  __int64 n; // rax
  __int64 m; // rax
  __int64 k; // rdx
  __int64 i; // rdx
  __int64 v76; // [rsp+0h] [rbp-78h]
  __int64 v77; // [rsp+0h] [rbp-78h]
  __int64 v78; // [rsp+0h] [rbp-78h]
  char v79; // [rsp+8h] [rbp-70h]
  char v82; // [rsp+18h] [rbp-60h]
  int v83; // [rsp+18h] [rbp-60h]
  __int64 v84; // [rsp+18h] [rbp-60h]
  unsigned int v85; // [rsp+20h] [rbp-58h]
  char v86; // [rsp+27h] [rbp-51h]
  unsigned int v87; // [rsp+28h] [rbp-50h]
  unsigned int v88; // [rsp+2Ch] [rbp-4Ch]
  __int64 v89; // [rsp+30h] [rbp-48h]
  unsigned int v90; // [rsp+38h] [rbp-40h]
  __int64 v91; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a4 + 16);
  do
  {
    v9 = a3;
    a3 = *(_DWORD *)(v8 + 4LL * a3);
    v10 = v9;
  }
  while ( a3 != v9 );
  v11 = v9;
  v12 = 0;
  v13 = v9;
  v14 = 3;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = ((*(_DWORD *)(*(_QWORD *)a2 + 4LL * ((unsigned int)(2 * v11) >> 5)) & (1 << (2 * v11 + 1))) != 0)
          | (2 * ((*(_DWORD *)(*(_QWORD *)a2 + 4LL * ((unsigned int)(2 * v11) >> 5)) & (1 << ((2 * v11) & 0x1F))) != 0));
      if ( v16 != 2 )
        break;
      if ( v14 == 1 )
        return 0;
      v14 = 2;
LABEL_7:
      v15 = *(_QWORD *)(a4 + 32);
      v11 = *(unsigned int *)(v15 + 4 * v11);
      if ( (_DWORD)v11 == v9 )
        goto LABEL_13;
    }
    if ( v16 != 3 )
      break;
    ++v12;
    v15 = *(_QWORD *)(a4 + 32);
    if ( (*(_DWORD *)(*(_QWORD *)(a5 + 8) + 4LL * ((unsigned int)v11 >> 5)) & (1 << v11)) == 0 )
      v13 = v11;
    v11 = *(unsigned int *)(v15 + 4 * v11);
    if ( (_DWORD)v11 == v9 )
    {
LABEL_13:
      v17 = v13;
      if ( !v12 )
        return 1;
      if ( v14 != 3 )
      {
        v18 = *(_QWORD *)a2;
        v19 = v9;
        while ( 1 )
        {
          while ( (((*(_DWORD *)(v18 + 4LL * ((unsigned int)(2 * v19) >> 5)) & (1 << (2 * v19 + 1))) != 0)
                 | (2 * ((*(_DWORD *)(v18 + 4LL * ((unsigned int)(2 * v19) >> 5)) & (1 << ((2 * v19) & 0x1F))) != 0))) != 3 )
          {
            v19 = *(unsigned int *)(v15 + 4 * v19);
            if ( v10 == (_DWORD)v19 )
              return 1;
          }
          sub_554430(a1, a2, (unsigned int)v19, v14);
          v15 = *(_QWORD *)(a4 + 32);
          v19 = *(unsigned int *)(v15 + 4 * v19);
          if ( v10 == (_DWORD)v19 )
            break;
          v18 = *(_QWORD *)a2;
        }
        return 1;
      }
      v21 = *(unsigned int *)(a2 + 16);
      v86 = 1;
      if ( !(_DWORD)v21 )
        goto LABEL_31;
      v22 = v9;
      v23 = *(_QWORD *)(a2 + 8) + 8 * v21;
      v24 = *(_QWORD **)(a2 + 8);
      do
      {
        v25 = v24;
        do
        {
          if ( (((*(_DWORD *)(*v25 + 4LL * ((2 * v22) >> 5)) & (1 << (2 * v22 + 1))) != 0)
              | (2 * ((*(_DWORD *)(*v25 + 4LL * ((2 * v22) >> 5)) & (1 << ((2 * v22) & 0x1F))) != 0))) != 3 )
          {
            v86 = 0;
            goto LABEL_31;
          }
          ++v25;
        }
        while ( v25 != (_QWORD *)v23 );
        v22 = *(_DWORD *)(v15 + 4LL * v22);
      }
      while ( v9 != v22 );
      v86 = 1;
LABEL_31:
      v89 = a5;
      v85 = v9;
      v88 = v9;
      v26 = a1;
      v87 = v17;
      v27 = (_QWORD *)a2;
      while ( 1 )
      {
        v79 = v86 & ((*(_DWORD *)(*(_QWORD *)(v89 + 8) + 4LL * (v85 >> 5)) & (1 << v85)) != 0);
        if ( v79 || v85 == v87 )
          goto LABEL_63;
        v28 = sub_1829B00(v26, *v27);
        sub_182A020(v26, v28, v85, 1);
        sub_182A020(v26, v28, v87, 2);
        v29 = *((_DWORD *)v27 + 4);
        if ( !v29 )
          goto LABEL_101;
        v82 = 0;
        v30 = 0;
        v76 = v29;
        v31 = v27;
        v32 = 0;
        v90 = v29;
        v33 = v31;
        do
        {
          while ( 1 )
          {
            v34 = sub_182A680(v26, *(_QWORD *)(v33[1] + 8 * v32), v28, *(double *)a6.m128_u64);
            if ( v34 )
              break;
            v35 = sub_182A680(v26, v28, *(_QWORD *)(v33[1] + 8 * v32), *(double *)a6.m128_u64);
            v34 = v82;
            if ( !v35 )
              break;
            v36 = *(_QWORD *)(v33[1] + 8 * v32++);
            sub_182A4B0(v26, v36);
            if ( v32 == v76 )
              goto LABEL_42;
          }
          if ( v30 != (_DWORD)v32 )
            *(_QWORD *)(v33[1] + 8LL * v30) = *(_QWORD *)(v33[1] + 8 * v32);
          v82 = v34;
          ++v32;
          ++v30;
        }
        while ( v32 != v76 );
LABEL_42:
        v27 = v33;
        if ( v90 != v30 )
        {
          v37 = *((_DWORD *)v33 + 4);
          if ( v37 >= v30 )
          {
            if ( v30 < v37 )
              *((_DWORD *)v33 + 4) = v30;
          }
          else
          {
            v77 = v28;
            v38 = *((_DWORD *)v33 + 4);
            v91 = v26;
            v39 = v30;
            v40 = v33 + 3;
            LODWORD(v28) = *((_DWORD *)v33 + 5);
            do
            {
              if ( v37 < (unsigned int)v28 )
              {
                v41 = (_QWORD *)v27[1];
              }
              else
              {
                v28 = (unsigned int)(2 * v28);
                v43 = sub_186B270(8 * v28);
                v44 = (_QWORD *)v27[1];
                v41 = (_QWORD *)v43;
                v37 = *((_DWORD *)v27 + 4);
                if ( v37 )
                {
                  if ( v37 - 1 <= 2 || v41 == v44 + 1 )
                  {
                    for ( i = 0; i != v37; ++i )
                      v41[i] = v44[i];
                  }
                  else
                  {
                    v45 = 0;
                    do
                    {
                      a6 = (__m128)_mm_loadu_si128((const __m128i *)&v44[v45]);
                      *(__m128 *)&v41[v45] = a6;
                      v45 += 2;
                    }
                    while ( v45 != 2LL * (v37 >> 1) );
                    if ( (v37 & 1) != 0 )
                      v41[v37 & 0xFFFFFFFE] = v44[v37 & 0xFFFFFFFE];
                  }
                }
                if ( v44 != v40 && v44 )
                {
                  sub_186B220(v44);
                  v37 = *((_DWORD *)v27 + 4);
                }
                v27[1] = v41;
                *((_DWORD *)v27 + 5) = v28;
              }
              v42 = v37;
              ++v38;
              ++v37;
              v41[v42] = 0;
              *((_DWORD *)v27 + 4) = v37;
            }
            while ( v38 != v39 );
            v28 = v77;
            v26 = v91;
          }
        }
        if ( !v82 )
          break;
        sub_182A4B0(v26, v28);
LABEL_71:
        v49 = sub_1829B00(v26, *v27);
        sub_182A020(v26, v49, v85, 2);
        sub_182A020(v26, v49, v87, 1);
        v46 = *((_DWORD *)v27 + 4);
        if ( !v46 )
          goto LABEL_60;
        v83 = *((_DWORD *)v27 + 4);
        v50 = 0;
        v78 = v46;
        for ( j = 0; j != v78; ++j )
        {
          while ( 1 )
          {
            v52 = sub_182A680(v26, *(_QWORD *)(v27[1] + 8 * j), v49, *(double *)a6.m128_u64);
            if ( v52 )
              break;
            v53 = sub_182A680(v26, v49, *(_QWORD *)(v27[1] + 8 * j), *(double *)a6.m128_u64);
            v52 = v79;
            if ( !v53 )
              break;
            v54 = *(_QWORD *)(v27[1] + 8 * j++);
            sub_182A4B0(v26, v54);
            if ( j == v78 )
              goto LABEL_79;
          }
          if ( v50 != (_DWORD)j )
            *(_QWORD *)(v27[1] + 8LL * v50) = *(_QWORD *)(v27[1] + 8 * j);
          v79 = v52;
          ++v50;
        }
LABEL_79:
        if ( v83 != v50 )
        {
          v55 = *((_DWORD *)v27 + 4);
          if ( v55 >= v50 )
          {
            if ( v50 < v55 )
              *((_DWORD *)v27 + 4) = v50;
          }
          else
          {
            v84 = v26;
            v56 = *((_DWORD *)v27 + 4);
            LODWORD(v26) = *((_DWORD *)v27 + 5);
            do
            {
              if ( v55 < (unsigned int)v26 )
              {
                v57 = (_QWORD *)v27[1];
              }
              else
              {
                v26 = (unsigned int)(2 * v26);
                v59 = sub_186B270(8 * v26);
                v60 = (_QWORD *)v27[1];
                v57 = (_QWORD *)v59;
                v55 = *((_DWORD *)v27 + 4);
                if ( v55 )
                {
                  if ( v55 - 1 <= 2 || v57 == v60 + 1 )
                  {
                    for ( k = 0; k != v55; ++k )
                      v57[k] = v60[k];
                  }
                  else
                  {
                    v61 = 0;
                    do
                    {
                      a6 = (__m128)_mm_loadu_si128((const __m128i *)&v60[v61]);
                      *(__m128 *)&v57[v61] = a6;
                      v61 += 2;
                    }
                    while ( v61 != 2LL * (v55 >> 1) );
                    if ( (v55 & 1) != 0 )
                      v57[v55 & 0xFFFFFFFE] = v60[v55 & 0xFFFFFFFE];
                  }
                }
                if ( v60 != v27 + 3 && v60 )
                {
                  sub_186B220(v60);
                  v55 = *((_DWORD *)v27 + 4);
                }
                v27[1] = v57;
                *((_DWORD *)v27 + 5) = v26;
              }
              v58 = v55;
              ++v56;
              ++v55;
              v57[v58] = 0;
              *((_DWORD *)v27 + 4) = v55;
            }
            while ( v56 != v50 );
            v26 = v84;
          }
        }
        if ( !v79 )
        {
          v46 = *((_DWORD *)v27 + 4);
LABEL_60:
          v47 = *((_DWORD *)v27 + 5);
          if ( v46 >= v47 )
          {
            v68 = 2 * v47;
            v69 = sub_186B270(8 * v68);
            v46 = *((_DWORD *)v27 + 4);
            v70 = (_QWORD *)v27[1];
            v48 = v69;
            if ( v46 )
            {
              if ( v46 - 1 <= 2 || (_QWORD *)v69 == v70 + 1 )
              {
                for ( m = 0; m != v46; ++m )
                  *(_QWORD *)(v48 + m * 8) = v70[m];
              }
              else
              {
                v71 = 0;
                do
                {
                  a6 = (__m128)_mm_loadu_si128((const __m128i *)&v70[v71]);
                  *(__m128 *)(v48 + v71 * 8) = a6;
                  v71 += 2;
                }
                while ( v71 != 2LL * (v46 >> 1) );
                if ( (v46 & 1) != 0 )
                  *(_QWORD *)(v48 + 8LL * (v46 & 0xFFFFFFFE)) = v70[v46 & 0xFFFFFFFE];
              }
            }
            if ( v70 )
            {
              if ( v70 != v27 + 3 )
              {
                sub_186B220(v70);
                v46 = *((_DWORD *)v27 + 4);
              }
            }
            v27[1] = v48;
            *((_DWORD *)v27 + 5) = v68;
          }
          else
          {
            v48 = v27[1];
          }
          *(_QWORD *)(v48 + 8LL * v46) = v49;
          *((_DWORD *)v27 + 4) = v46 + 1;
          v15 = *(_QWORD *)(a4 + 32);
          goto LABEL_63;
        }
        sub_182A4B0(v26, v49);
        v15 = *(_QWORD *)(a4 + 32);
LABEL_63:
        v85 = *(_DWORD *)(v15 + 4LL * v85);
        if ( v88 == v85 )
          return 1;
      }
      v29 = *((_DWORD *)v27 + 4);
LABEL_101:
      v62 = *((_DWORD *)v27 + 5);
      if ( v29 >= v62 )
      {
        v64 = 2 * v62;
        v65 = sub_186B270(8 * v64);
        v29 = *((_DWORD *)v27 + 4);
        v66 = (_QWORD *)v27[1];
        v63 = v65;
        if ( v29 )
        {
          if ( v29 - 1 <= 2 || (_QWORD *)v65 == v66 + 1 )
          {
            for ( n = 0; n != v29; ++n )
              *(_QWORD *)(v63 + n * 8) = v66[n];
          }
          else
          {
            v67 = 0;
            do
            {
              a6 = (__m128)_mm_loadu_si128((const __m128i *)&v66[v67]);
              *(__m128 *)(v63 + v67 * 8) = a6;
              v67 += 2;
            }
            while ( v67 != 2LL * (v29 >> 1) );
            if ( (v29 & 1) != 0 )
              *(_QWORD *)(v63 + 8LL * (v29 & 0xFFFFFFFE)) = v66[v29 & 0xFFFFFFFE];
          }
        }
        if ( v66 != v27 + 3 && v66 )
        {
          sub_186B220(v66);
          v29 = *((_DWORD *)v27 + 4);
        }
        v27[1] = v63;
        *((_DWORD *)v27 + 5) = v64;
      }
      else
      {
        v63 = v27[1];
      }
      *(_QWORD *)(v63 + 8LL * v29) = v28;
      *((_DWORD *)v27 + 4) = v29 + 1;
      goto LABEL_71;
    }
  }
  if ( v16 != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 245);
  }
  if ( v14 != 2 )
  {
    v14 = 1;
    goto LABEL_7;
  }
  return 0;
}

