__int64 __fastcall sub_557DA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r14
  unsigned int v11; // ebx
  char v12; // al
  char v13; // dl
  unsigned int v14; // edx
  __int64 v15; // r12
  int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 k; // r12
  __int64 *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // r14
  unsigned int v27; // ebp
  unsigned int v28; // edx
  __int64 v29; // r12
  int v30; // r14d
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 result; // rax
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 *v39; // rdi
  unsigned int v40; // edx
  unsigned int v41; // ebp
  __int64 v42; // r12
  __int64 v43; // rbp
  _QWORD *v44; // rdi
  __int64 v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // r12
  __int64 m; // rax
  unsigned int v49; // edx
  unsigned int v50; // ebx
  __int64 v51; // r12
  __int64 v52; // rbx
  unsigned int v53; // eax
  __int64 *v54; // rdi
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 n; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 v63; // rax
  char v64; // [rsp+0h] [rbp-78h]
  unsigned int v65; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+8h] [rbp-70h]
  __int64 v69; // [rsp+28h] [rbp-50h]
  int v70; // [rsp+34h] [rbp-44h]

  v7 = sub_552E90(a1, (__int64)a2);
  v69 = sub_1829B00(a1, *(_QWORD *)a3);
  if ( (unsigned __int8)sub_182A530(a1, v69, *a2) )
  {
    v8 = *((_DWORD *)v7 + 4);
    v65 = v8;
    if ( v8 )
    {
      v64 = 0;
      v9 = v8;
      v10 = 0;
      v11 = 0;
      do
      {
        while ( 1 )
        {
          v12 = sub_182A680(a1, *(_QWORD *)(v7[1] + 8 * v10), v69, *(double *)a5.m128_u64);
          if ( v12 )
            break;
          v13 = sub_182A680(a1, v69, *(_QWORD *)(v7[1] + 8 * v10), *(double *)a5.m128_u64);
          v12 = v64;
          if ( !v13 )
            break;
          sub_182A4B0(a1, *(_QWORD *)(v7[1] + 8 * v10++));
          if ( v10 == v9 )
            goto LABEL_10;
        }
        if ( v11 != (_DWORD)v10 )
          *(_QWORD *)(v7[1] + 8LL * v11) = *(_QWORD *)(v7[1] + 8 * v10);
        ++v10;
        v64 = v12;
        ++v11;
      }
      while ( v10 != v9 );
LABEL_10:
      if ( v65 != v11 )
      {
        v14 = *((_DWORD *)v7 + 4);
        if ( v14 >= v11 )
        {
          if ( v11 < v14 )
            *((_DWORD *)v7 + 4) = v11;
        }
        else
        {
          LODWORD(v15) = *((_DWORD *)v7 + 5);
          v16 = *((_DWORD *)v7 + 4);
          do
          {
            if ( v14 < (unsigned int)v15 )
            {
              v17 = v7[1];
            }
            else
            {
              v15 = (unsigned int)(2 * v15);
              v19 = sub_186B270(8 * v15);
              v14 = *((_DWORD *)v7 + 4);
              v20 = (__int64 *)v7[1];
              v17 = v19;
              if ( v14 )
              {
                if ( v14 - 1 <= 2 || (__int64 *)v19 == v20 + 1 )
                {
                  for ( i = 0; i != v14; ++i )
                    *(_QWORD *)(v17 + i * 8) = v20[i];
                }
                else
                {
                  v21 = 0;
                  do
                  {
                    a5 = (__m128)_mm_loadu_si128((const __m128i *)&v20[v21]);
                    *(__m128 *)(v17 + v21 * 8) = a5;
                    v21 += 2;
                  }
                  while ( v21 != 2LL * (v14 >> 1) );
                  if ( (v14 & 1) != 0 )
                    *(_QWORD *)(v17 + 8LL * (v14 & 0xFFFFFFFE)) = v20[v14 & 0xFFFFFFFE];
                }
              }
              if ( v20 != v7 + 3 && v20 )
              {
                sub_186B220(v20);
                v14 = *((_DWORD *)v7 + 4);
              }
              v7[1] = v17;
              *((_DWORD *)v7 + 5) = v15;
            }
            v18 = v14;
            ++v16;
            ++v14;
            *(_QWORD *)(v17 + 8 * v18) = 0;
            *((_DWORD *)v7 + 4) = v14;
          }
          while ( v16 != v11 );
        }
      }
      if ( v64 )
      {
        sub_182A4B0(a1, v69);
LABEL_31:
        v69 = 0;
        goto LABEL_32;
      }
      v65 = *((_DWORD *)v7 + 4);
    }
    v46 = *((_DWORD *)v7 + 5);
    if ( v65 >= v46 )
    {
      v52 = 2 * v46;
      v47 = sub_186B270(8 * v52);
      v53 = *((_DWORD *)v7 + 4);
      v54 = (__int64 *)v7[1];
      v65 = v53;
      if ( v53 )
      {
        v55 = *((_DWORD *)v7 + 4);
        if ( v53 - 1 <= 2 || (__int64 *)v47 == v54 + 1 )
        {
          v63 = 0;
          do
          {
            *(_QWORD *)(v47 + v63 * 8) = v54[v63];
            ++v63;
          }
          while ( v63 != v65 );
        }
        else
        {
          v56 = 0;
          do
          {
            a5 = (__m128)_mm_loadu_si128((const __m128i *)&v54[v56]);
            *(__m128 *)(v47 + v56 * 8) = a5;
            v56 += 2;
          }
          while ( v56 != 2LL * (v55 >> 1) );
          if ( (v65 & 1) != 0 )
            *(_QWORD *)(v47 + 8LL * (v65 & 0xFFFFFFFE)) = v54[v65 & 0xFFFFFFFE];
        }
      }
      if ( v54 != v7 + 3 && v54 )
      {
        sub_186B220(v54);
        v65 = *((_DWORD *)v7 + 4);
      }
      v7[1] = v47;
      *((_DWORD *)v7 + 5) = v52;
    }
    else
    {
      v47 = v7[1];
    }
    *(_QWORD *)(v47 + 8LL * v65) = v69;
    *((_DWORD *)v7 + 4) = v65 + 1;
    goto LABEL_31;
  }
LABEL_32:
  if ( (unsigned __int8)sub_5537F0(a1, v7, a5) )
  {
    v49 = *(_DWORD *)(a4 + 8);
    v50 = *(_DWORD *)(a4 + 12);
    if ( v49 >= v50 )
    {
      v58 = 2 * v50;
      v51 = sub_186B270(8 * v58);
      v49 = *(_DWORD *)(a4 + 8);
      v59 = *(_QWORD **)a4;
      if ( v49 )
      {
        if ( v49 - 1 <= 2 || (_QWORD *)v51 == v59 + 1 )
        {
          for ( j = 0; j != v49; ++j )
            *(_QWORD *)(v51 + j * 8) = v59[j];
        }
        else
        {
          v60 = 0;
          do
          {
            a5 = (__m128)_mm_loadu_si128((const __m128i *)&v59[v60]);
            *(__m128 *)(v51 + v60 * 8) = a5;
            v60 += 2;
          }
          while ( v60 != 2LL * (v49 >> 1) );
          if ( (v49 & 1) != 0 )
            *(_QWORD *)(v51 + 8LL * (v49 & 0xFFFFFFFE)) = v59[v49 & 0xFFFFFFFE];
        }
      }
      if ( v59 && v59 != (_QWORD *)(a4 + 16) )
      {
        sub_186B220(v59);
        v49 = *(_DWORD *)(a4 + 8);
      }
      *(_QWORD *)a4 = v51;
      *(_DWORD *)(a4 + 12) = v58;
    }
    else
    {
      v51 = *(_QWORD *)a4;
    }
    *(_QWORD *)(v51 + 8LL * v49) = v7;
    v7 = nullptr;
    *(_DWORD *)(a4 + 8) = v49 + 1;
    if ( !*(_DWORD *)(a3 + 16) )
    {
      result = v69;
      if ( v69 )
        return sub_182A4B0(a1, v69);
      return result;
    }
  }
  else if ( !*(_DWORD *)(a3 + 16) )
  {
    if ( v69 )
      sub_182A4B0(a1, v69);
LABEL_72:
    v37 = 0;
    sub_182A4B0(a1, *v7);
    if ( *((_DWORD *)v7 + 4) )
    {
      do
      {
        v38 = *(_QWORD *)(v7[1] + 8 * v37++);
        sub_182A4B0(a1, v38);
      }
      while ( (unsigned int)v37 < *((_DWORD *)v7 + 4) );
    }
    v39 = (__int64 *)v7[1];
    *((_DWORD *)v7 + 4) = 0;
    if ( v39 )
    {
      if ( v39 != v7 + 3 )
        sub_186B220(v39);
    }
    return sub_17E9C40(a1 + 560, 88, v7);
  }
  v66 = 0;
  do
  {
    v22 = sub_552E90(a1, (__int64)a2);
    if ( v7 )
    {
      sub_182A4B0(a1, *v7);
      for ( k = 0; (unsigned int)k < *((_DWORD *)v7 + 4); ++k )
        sub_182A4B0(a1, *(_QWORD *)(v7[1] + 8 * k));
      v24 = (__int64 *)v7[1];
      *((_DWORD *)v7 + 4) = 0;
      if ( v24 != v7 + 3 && v24 )
        sub_186B220(v24);
      sub_17E9C40(a1 + 560, 88, v7);
    }
    v25 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v66);
    if ( !(unsigned __int8)sub_182A530(a1, *v22, v25) )
      goto LABEL_67;
    v26 = 0;
    v27 = 0;
    v70 = *((_DWORD *)v22 + 4);
    if ( v70 )
    {
      do
      {
        while ( !(unsigned __int8)sub_182A530(a1, *(_QWORD *)(v22[1] + 8 * v26), v25) )
        {
          sub_182A4B0(a1, *(_QWORD *)(v22[1] + 8 * v26++));
          if ( v70 == v26 )
            goto LABEL_50;
        }
        if ( v27 != (_DWORD)v26 )
          *(_QWORD *)(v22[1] + 8LL * v27) = *(_QWORD *)(v22[1] + 8 * v26);
        ++v27;
        ++v26;
      }
      while ( v70 != v26 );
LABEL_50:
      if ( v70 != v27 )
      {
        v28 = *((_DWORD *)v22 + 4);
        if ( v28 >= v27 )
        {
          if ( v27 < v28 )
            *((_DWORD *)v22 + 4) = v27;
        }
        else
        {
          LODWORD(v29) = *((_DWORD *)v22 + 5);
          v30 = *((_DWORD *)v22 + 4);
          do
          {
            if ( v28 < (unsigned int)v29 )
            {
              v31 = v22[1];
            }
            else
            {
              v29 = (unsigned int)(2 * v29);
              v33 = sub_186B270(8 * v29);
              v28 = *((_DWORD *)v22 + 4);
              v34 = (__int64 *)v22[1];
              v31 = v33;
              if ( v28 )
              {
                if ( v28 - 1 <= 2 || (__int64 *)v33 == v34 + 1 )
                {
                  for ( m = 0; m != v28; ++m )
                    *(_QWORD *)(v31 + m * 8) = v34[m];
                }
                else
                {
                  v35 = 0;
                  do
                  {
                    a5 = (__m128)_mm_loadu_si128((const __m128i *)&v34[v35]);
                    *(__m128 *)(v31 + v35 * 8) = a5;
                    v35 += 2;
                  }
                  while ( 2LL * (v28 >> 1) != v35 );
                  if ( (v28 & 1) != 0 )
                    *(_QWORD *)(v31 + 8LL * (v28 & 0xFFFFFFFE)) = v34[v28 & 0xFFFFFFFE];
                }
              }
              if ( v34 != v22 + 3 && v34 )
              {
                sub_186B220(v34);
                v28 = *((_DWORD *)v22 + 4);
              }
              v22[1] = v31;
              *((_DWORD *)v22 + 5) = v29;
            }
            v32 = v28;
            ++v30;
            ++v28;
            *(_QWORD *)(v31 + 8 * v32) = 0;
            *((_DWORD *)v22 + 4) = v28;
          }
          while ( v30 != v27 );
        }
      }
    }
    if ( (unsigned __int8)sub_5537F0(a1, v22, a5) )
    {
      v40 = *(_DWORD *)(a4 + 8);
      v41 = *(_DWORD *)(a4 + 12);
      if ( v40 >= v41 )
      {
        v43 = 2 * v41;
        v42 = sub_186B270(8 * v43);
        v40 = *(_DWORD *)(a4 + 8);
        v44 = *(_QWORD **)a4;
        if ( v40 )
        {
          if ( v40 - 1 <= 2 || (_QWORD *)v42 == v44 + 1 )
          {
            for ( n = 0; n != v40; ++n )
              *(_QWORD *)(v42 + n * 8) = v44[n];
          }
          else
          {
            v45 = 0;
            do
            {
              a5 = (__m128)_mm_loadu_si128((const __m128i *)&v44[v45]);
              *(__m128 *)(v42 + v45 * 8) = a5;
              v45 += 2;
            }
            while ( v45 != 2LL * (v40 >> 1) );
            if ( (v40 & 1) != 0 )
              *(_QWORD *)(v42 + 8LL * (v40 & 0xFFFFFFFE)) = v44[v40 & 0xFFFFFFFE];
          }
        }
        if ( v44 != (_QWORD *)(a4 + 16) && v44 )
        {
          sub_186B220(v44);
          v40 = *(_DWORD *)(a4 + 8);
        }
        *(_QWORD *)a4 = v42;
        *(_DWORD *)(a4 + 12) = v43;
      }
      else
      {
        v42 = *(_QWORD *)a4;
      }
      v7 = nullptr;
      *(_QWORD *)(v42 + 8LL * v40) = v22;
      *(_DWORD *)(a4 + 8) = v40 + 1;
    }
    else
    {
LABEL_67:
      v7 = v22;
    }
    ++v66;
  }
  while ( (unsigned int)v66 < *(_DWORD *)(a3 + 16) );
  result = v69;
  if ( v69 )
    result = sub_182A4B0(a1, v69);
  if ( v7 )
    goto LABEL_72;
  return result;
}

