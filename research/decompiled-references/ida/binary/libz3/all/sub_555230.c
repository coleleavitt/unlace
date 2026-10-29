__int64 *__fastcall sub_555230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // r15d
  __int64 v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // r15d
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbp
  unsigned int v27; // edx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 m; // rbp
  __int64 v32; // r15
  unsigned int v33; // edx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  unsigned int v42; // edx
  unsigned int v43; // r15d
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v47; // r15
  __int64 v48; // rax
  _QWORD *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rsi
  _QWORD *v53; // rdi
  __int64 k; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 n; // rax
  __int64 v64; // [rsp+8h] [rbp-80h]
  unsigned int v65; // [rsp+8h] [rbp-80h]
  __int64 v66; // [rsp+8h] [rbp-80h]
  __int64 v67; // [rsp+8h] [rbp-80h]
  int v68; // [rsp+8h] [rbp-80h]
  unsigned int v69; // [rsp+10h] [rbp-78h]
  __int64 v70; // [rsp+10h] [rbp-78h]
  unsigned int v74; // [rsp+30h] [rbp-58h]
  unsigned int v75; // [rsp+34h] [rbp-54h]
  _QWORD *v76; // [rsp+38h] [rbp-50h]
  unsigned int v77; // [rsp+40h] [rbp-48h]
  int v78; // [rsp+44h] [rbp-44h]
  __int64 v79; // [rsp+48h] [rbp-40h]

  v9 = sub_1829AC0(a1);
  v64 = a1 + 560;
  v10 = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *v10 = v9;
  v11 = v10;
  v76 = v10 + 3;
  v10[1] = (__int64)(v10 + 3);
  v10[2] = 0x800000000LL;
  v12 = *(_DWORD *)(a4 + 520) >> 1;
  LODWORD(a4) = *(_DWORD *)(a1 + 520) >> 1;
  v74 = v12;
  v75 = v12 - 1;
  sub_182A2A0(a1, v9, *(_QWORD *)a2, v12 - 1, 0);
  v77 = a4 - 1;
  sub_182A2A0(a1, v9, *(_QWORD *)a3, (unsigned int)(a4 - 1), v12);
  v13 = 0;
  v14 = *a5;
  if ( !*a5 )
    goto LABEL_17;
  do
  {
    if ( v13 >= *(_DWORD *)(v14 - 4) )
    {
LABEL_7:
      v19 = 0;
      do
      {
        if ( v19 >= *(_DWORD *)(v14 - 4) )
          break;
        v20 = *(_DWORD *)(v14 + 4LL * v19);
        v65 = v20;
        v69 = *(_DWORD *)(*a6 + 4LL * v19) + v74;
        if ( (((*(_DWORD *)(v9 + 4LL * ((2 * v20) >> 5)) & (1 << (2 * v20 + 1))) != 0)
            | (2 * ((*(_DWORD *)(v9 + 4LL * ((2 * v20) >> 5)) & (1 << ((2 * v20) & 0x1F))) != 0))) == 3 )
        {
          v21 = 2 * (*(_DWORD *)(*a6 + 4LL * v19) + v74);
          if ( (((*(_DWORD *)(v9 + 4LL * ((v21 + 1) >> 5)) & (1 << (v21 + 1))) != 0)
              | (2 * ((*(_DWORD *)(v9 + 4LL * (v21 >> 5)) & (1 << (v21 & 0x1F))) != 0))) == 3 )
          {
            v22 = sub_1829B00(a1, v9);
            sub_182A020(a1, v22, v65, 1);
            sub_182A020(a1, v22, v69, 2);
            v23 = *((_DWORD *)v11 + 4);
            v24 = *((_DWORD *)v11 + 5);
            if ( v23 >= v24 )
            {
              v78 = 2 * v24;
              v58 = sub_186B270(16LL * v24);
              v23 = *((_DWORD *)v11 + 4);
              v59 = (_QWORD *)v11[1];
              v25 = v58;
              if ( v23 )
              {
                if ( v23 - 1 <= 2 || (_QWORD *)v58 == v59 + 1 )
                {
                  for ( i = 0; i != v23; ++i )
                    *(_QWORD *)(v25 + i * 8) = v59[i];
                }
                else
                {
                  v60 = 0;
                  do
                  {
                    *(__m128i *)(v25 + v60 * 8) = _mm_loadu_si128((const __m128i *)&v59[v60]);
                    v60 += 2;
                  }
                  while ( v60 != 2LL * (v23 >> 1) );
                  if ( (v23 & 1) != 0 )
                    *(_QWORD *)(v25 + 8LL * (v23 & 0xFFFFFFFE)) = v59[v23 & 0xFFFFFFFE];
                }
              }
              if ( v76 != v59 && v59 )
              {
                v79 = v25;
                sub_186B220(v59);
                v23 = *((_DWORD *)v11 + 4);
                v25 = v79;
              }
              v11[1] = v25;
              *((_DWORD *)v11 + 5) = v78;
            }
            else
            {
              v25 = v11[1];
            }
            *(_QWORD *)(v25 + 8LL * v23) = v22;
            *((_DWORD *)v11 + 4) = v23 + 1;
            v26 = sub_1829B00(a1, v9);
            sub_182A020(a1, v26, v65, 2);
            sub_182A020(a1, v26, v69, 1);
            v27 = *((_DWORD *)v11 + 4);
            v28 = *((_DWORD *)v11 + 5);
            if ( v27 >= v28 )
            {
              v68 = 2 * v28;
              v55 = sub_186B270(16LL * v28);
              v27 = *((_DWORD *)v11 + 4);
              v56 = (_QWORD *)v11[1];
              v29 = v55;
              if ( v27 )
              {
                if ( v27 - 1 <= 2 || (_QWORD *)v55 == v56 + 1 )
                {
                  for ( j = 0; j != v27; ++j )
                    *(_QWORD *)(v29 + j * 8) = v56[j];
                }
                else
                {
                  v57 = 0;
                  do
                  {
                    *(__m128i *)(v29 + v57 * 8) = _mm_loadu_si128((const __m128i *)&v56[v57]);
                    v57 += 2;
                  }
                  while ( 2LL * (v27 >> 1) != v57 );
                  if ( (v27 & 1) != 0 )
                    *(_QWORD *)(v29 + 8LL * (v27 & 0xFFFFFFFE)) = v56[v27 & 0xFFFFFFFE];
                }
              }
              if ( v76 != v56 && v56 )
              {
                v70 = v29;
                sub_186B220(v56);
                v27 = *((_DWORD *)v11 + 4);
                v29 = v70;
              }
              v11[1] = v29;
              *((_DWORD *)v11 + 5) = v68;
            }
            else
            {
              v29 = v11[1];
            }
            *(_QWORD *)(v29 + 8LL * v27) = v26;
            *((_DWORD *)v11 + 4) = v27 + 1;
            v14 = *a5;
          }
        }
        ++v19;
      }
      while ( v14 );
      break;
    }
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 4LL * v13);
      v16 = *(_DWORD *)(*a6 + 4LL * v13) + v74;
      v17 = ((*(_DWORD *)(v9 + 4LL * ((2 * v15) >> 5)) & (1 << (2 * v15 + 1))) != 0)
          | (2 * ((*(_DWORD *)(v9 + 4LL * ((2 * v15) >> 5)) & (1 << ((2 * v15) & 0x1F))) != 0));
      v18 = ((*(_DWORD *)(v9 + 4LL * ((2 * v16 + 1) >> 5)) & (1 << (2 * (*(_BYTE *)(*a6 + 4LL * v13) + v74) + 1))) != 0)
          | (2
           * ((*(_DWORD *)(v9 + 4LL * ((2 * v16) >> 5)) & (1 << ((2 * (*(_BYTE *)(*a6 + 4LL * v13) + v74)) & 0x1F))) != 0));
      if ( v17 != 3 )
        break;
      if ( v18 != 3 )
      {
        sub_182A020(a1, v9, v15, v18);
        goto LABEL_30;
      }
LABEL_6:
      if ( ++v13 >= *(_DWORD *)(v14 - 4) )
        goto LABEL_7;
    }
    if ( v18 != 3 )
    {
      if ( v18 != v17 )
      {
        v45 = 0;
        if ( v11 )
        {
          v51 = 0;
          sub_182A4B0(a1, *v11);
          if ( *((_DWORD *)v11 + 4) )
          {
            do
            {
              v52 = *(_QWORD *)(v11[1] + 8 * v51++);
              sub_182A4B0(a1, v52);
            }
            while ( (unsigned int)v51 < *((_DWORD *)v11 + 4) );
          }
          v53 = (_QWORD *)v11[1];
          *((_DWORD *)v11 + 4) = 0;
          if ( v53 != v76 && v53 )
            sub_186B220(v53);
          sub_17E9C40(v64, 88, v11);
        }
        return (__int64 *)v45;
      }
      goto LABEL_6;
    }
    sub_182A020(a1, v9, v16, v17);
LABEL_30:
    ++v13;
    v14 = *a5;
  }
  while ( *a5 );
LABEL_17:
  v30 = 0;
  m = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_70:
    if ( *(_DWORD *)(a3 + 16) )
    {
      m = 0;
      goto LABEL_45;
    }
    return v11;
  }
  while ( 2 )
  {
    v32 = sub_1829AC0(a1);
    if ( m )
      sub_182A4B0(a1, m);
    m = v32;
    while ( 2 )
    {
      sub_182A2A0(a1, m, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v30), v75, 0);
      if ( (unsigned __int8)sub_182A530(a1, m, v9) )
      {
        v33 = *((_DWORD *)v11 + 4);
        v34 = *((_DWORD *)v11 + 5);
        if ( v33 < v34 )
        {
          v35 = v11[1];
LABEL_26:
          ++v30;
          *(_QWORD *)(v35 + 8LL * v33) = m;
          *((_DWORD *)v11 + 4) = v33 + 1;
          if ( (unsigned int)v30 >= *(_DWORD *)(a2 + 16) )
            goto LABEL_70;
          m = sub_1829AC0(a1);
          continue;
        }
        v36 = 2 * v34;
        v37 = sub_186B270(8 * v36);
        v33 = *((_DWORD *)v11 + 4);
        v38 = (_QWORD *)v11[1];
        v35 = v37;
        if ( v33 )
        {
          if ( v33 - 1 > 2 && (_QWORD *)v37 != v38 + 1 )
          {
            v39 = 0;
            do
            {
              *(__m128i *)(v35 + v39 * 8) = _mm_loadu_si128((const __m128i *)&v38[v39]);
              v39 += 2;
            }
            while ( 2LL * (v33 >> 1) != v39 );
            if ( (v33 & 1) != 0 )
              *(_QWORD *)(v35 + 8LL * (v33 & 0xFFFFFFFE)) = v38[v33 & 0xFFFFFFFE];
            goto LABEL_40;
          }
          for ( k = 0; k != v33; ++k )
            *(_QWORD *)(v35 + k * 8) = v38[k];
          if ( v76 == v38 )
          {
LABEL_43:
            v11[1] = v35;
            *((_DWORD *)v11 + 5) = v36;
            goto LABEL_26;
          }
        }
        else
        {
LABEL_40:
          if ( v76 == v38 )
            goto LABEL_43;
        }
        if ( v38 )
        {
          v66 = v35;
          sub_186B220(v38);
          v33 = *((_DWORD *)v11 + 4);
          v35 = v66;
        }
        goto LABEL_43;
      }
      break;
    }
    if ( (unsigned int)++v30 < *(_DWORD *)(a2 + 16) )
      continue;
    break;
  }
  if ( *(_DWORD *)(a3 + 16) )
  {
LABEL_45:
    v40 = 0;
    do
    {
      v41 = sub_1829AC0(a1);
      if ( m )
        sub_182A4B0(a1, m);
      for ( m = v41; ; m = sub_1829AC0(a1) )
      {
        sub_182A2A0(a1, m, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v40), v77, v74);
        if ( !(unsigned __int8)sub_182A530(a1, m, v9) )
          break;
        v42 = *((_DWORD *)v11 + 4);
        v43 = *((_DWORD *)v11 + 5);
        if ( v42 >= v43 )
        {
          v47 = 2 * v43;
          v48 = sub_186B270(8 * v47);
          v42 = *((_DWORD *)v11 + 4);
          v49 = (_QWORD *)v11[1];
          v44 = v48;
          if ( v42 )
          {
            if ( v42 - 1 <= 2 || (_QWORD *)v48 == v49 + 1 )
            {
              for ( n = 0; n != v42; ++n )
                *(_QWORD *)(v44 + n * 8) = v49[n];
            }
            else
            {
              v50 = 0;
              do
              {
                *(__m128i *)(v44 + v50 * 8) = _mm_loadu_si128((const __m128i *)&v49[v50]);
                v50 += 2;
              }
              while ( 2LL * (v42 >> 1) != v50 );
              if ( (v42 & 1) != 0 )
                *(_QWORD *)(v44 + 8LL * (v42 & 0xFFFFFFFE)) = v49[v42 & 0xFFFFFFFE];
            }
          }
          if ( v49 && v76 != v49 )
          {
            v67 = v44;
            sub_186B220(v49);
            v42 = *((_DWORD *)v11 + 4);
            v44 = v67;
          }
          v11[1] = v44;
          *((_DWORD *)v11 + 5) = v47;
        }
        else
        {
          v44 = v11[1];
        }
        ++v40;
        *(_QWORD *)(v44 + 8LL * v42) = m;
        *((_DWORD *)v11 + 4) = v42 + 1;
        if ( (unsigned int)v40 >= *(_DWORD *)(a3 + 16) )
          return v11;
      }
      ++v40;
    }
    while ( (unsigned int)v40 < *(_DWORD *)(a3 + 16) );
  }
  if ( m )
    sub_182A4B0(a1, m);
  return v11;
}

