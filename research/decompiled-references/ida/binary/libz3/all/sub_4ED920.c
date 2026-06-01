__int64 __fastcall sub_4ED920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v7; // dl
  __int64 result; // rax
  bool v9; // bp
  __int64 i; // r15
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r9
  unsigned int v17; // eax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ebp
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // ebp
  __int64 v33; // r9
  _QWORD *v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // rax
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 k; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdi
  __int64 v48; // rax
  __int64 m; // rax
  __int64 j; // rax
  int v52; // [rsp+8h] [rbp-60h]
  bool v53; // [rsp+17h] [rbp-51h]
  bool v54; // [rsp+17h] [rbp-51h]
  __int64 v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+18h] [rbp-50h]
  _QWORD *v58; // [rsp+20h] [rbp-48h]

  v7 = 0;
  if ( a5 )
    v7 = *(_DWORD *)(a5 + 8) == 0;
  result = *(unsigned int *)(a4 + 8);
  if ( *(_DWORD *)(a3 + 8) )
  {
    v9 = a5 != 0;
    if ( (_DWORD)result )
    {
      v53 = v7;
      for ( i = 0; (unsigned int)i < *(_DWORD *)(a4 + 8); ++i )
      {
        while ( 1 )
        {
          v19 = sub_552E90(a2, *(_QWORD *)(*(_QWORD *)a4 + 8 * i));
          result = sub_4F5180(a3, a2, v19);
          if ( (_BYTE)result )
          {
            if ( v9 )
              break;
          }
LABEL_9:
          if ( (unsigned int)++i >= *(_DWORD *)(a4 + 8) )
            return result;
        }
        v20 = *(_QWORD *)(*(_QWORD *)a4 + 8 * i);
        if ( v53 )
        {
          v14 = sub_552E90(a2, v20);
          v15 = *(_DWORD *)(a5 + 8);
          v16 = v14;
          v17 = *(_DWORD *)(a5 + 12);
          if ( v15 >= v17 )
          {
            v57 = v16;
            v52 = 2 * v17;
            v46 = sub_186B270(16LL * v17);
            v15 = *(_DWORD *)(a5 + 8);
            v47 = *(_QWORD **)a5;
            v16 = v57;
            v18 = (_QWORD *)v46;
            if ( v15 )
            {
              if ( v15 - 1 <= 2 || (_QWORD *)v46 == v47 + 1 )
              {
                for ( j = 0; j != v15; ++j )
                  v18[j] = v47[j];
              }
              else
              {
                v48 = 0;
                do
                {
                  *(__m128i *)&v18[v48] = _mm_loadu_si128((const __m128i *)&v47[v48]);
                  v48 += 2;
                }
                while ( 2LL * (v15 >> 1) != v48 );
                if ( (v15 & 1) != 0 )
                  v18[v15 & 0xFFFFFFFE] = v47[v15 & 0xFFFFFFFE];
              }
            }
            if ( v47 )
            {
              if ( v47 != (_QWORD *)(a5 + 16) )
              {
                sub_186B220(v47);
                v15 = *(_DWORD *)(a5 + 8);
                v16 = v57;
              }
            }
            *(_QWORD *)a5 = v18;
            *(_DWORD *)(a5 + 12) = v52;
          }
          else
          {
            v18 = *(_QWORD **)a5;
          }
          result = v15;
          v18[v15] = v16;
          *(_DWORD *)(a5 + 8) = v15 + 1;
          goto LABEL_9;
        }
        v21 = sub_552E90(a2, v20);
        result = sub_4F5180(a5, a2, v21);
      }
    }
  }
  else if ( (_DWORD)result )
  {
    v54 = v7;
    v22 = 0;
    v23 = a3;
    v58 = (_QWORD *)(a3 + 16);
    do
    {
      v30 = sub_552E90(a2, *(_QWORD *)(*(_QWORD *)a4 + 8 * v22));
      v31 = *(_DWORD *)(v23 + 8);
      v32 = *(_DWORD *)(v23 + 12);
      v33 = v30;
      if ( v31 >= v32 )
      {
        v55 = v30;
        v37 = 2 * v32;
        v38 = sub_186B270(8 * v37);
        v31 = *(_DWORD *)(v23 + 8);
        v39 = *(_QWORD **)v23;
        v33 = v55;
        v34 = (_QWORD *)v38;
        if ( v31 )
        {
          if ( v31 - 1 <= 2 || (_QWORD *)v38 == v39 + 1 )
          {
            for ( k = 0; k != v31; ++k )
              v34[k] = v39[k];
          }
          else
          {
            v40 = 0;
            do
            {
              *(__m128i *)&v34[v40] = _mm_loadu_si128((const __m128i *)&v39[v40]);
              v40 += 2;
            }
            while ( 2LL * (v31 >> 1) != v40 );
            if ( (v31 & 1) != 0 )
              v34[v31 & 0xFFFFFFFE] = v39[v31 & 0xFFFFFFFE];
          }
        }
        if ( v39 != v58 && v39 )
        {
          sub_186B220(v39);
          v31 = *(_DWORD *)(v23 + 8);
          v33 = v55;
        }
        *(_QWORD *)v23 = v34;
        *(_DWORD *)(v23 + 12) = v37;
      }
      else
      {
        v34 = *(_QWORD **)v23;
      }
      result = v31;
      v34[v31] = v33;
      *(_DWORD *)(v23 + 8) = v31 + 1;
      if ( a5 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)a4 + 8 * v22);
        if ( v54 )
        {
          v25 = sub_552E90(a2, v35);
          v26 = *(_DWORD *)(a5 + 8);
          v27 = *(_DWORD *)(a5 + 12);
          v28 = v25;
          if ( v26 >= v27 )
          {
            v56 = v25;
            v41 = 2 * v27;
            v42 = sub_186B270(8 * v41);
            v26 = *(_DWORD *)(a5 + 8);
            v43 = *(_QWORD **)a5;
            v28 = v56;
            v29 = (_QWORD *)v42;
            if ( v26 )
            {
              if ( v26 - 1 <= 2 || (_QWORD *)v42 == v43 + 1 )
              {
                for ( m = 0; m != v26; ++m )
                  v29[m] = v43[m];
              }
              else
              {
                v44 = 0;
                do
                {
                  *(__m128i *)&v29[v44] = _mm_loadu_si128((const __m128i *)&v43[v44]);
                  v44 += 2;
                }
                while ( 2LL * (v26 >> 1) != v44 );
                if ( (v26 & 1) != 0 )
                  v29[v26 & 0xFFFFFFFE] = v43[v26 & 0xFFFFFFFE];
              }
            }
            if ( v43 != (_QWORD *)(a5 + 16) && v43 )
            {
              sub_186B220(v43);
              v26 = *(_DWORD *)(a5 + 8);
            }
            *(_QWORD *)a5 = v29;
            *(_DWORD *)(a5 + 12) = v41;
          }
          else
          {
            v29 = *(_QWORD **)a5;
          }
          result = v26;
          v29[v26] = v28;
          *(_DWORD *)(a5 + 8) = v26 + 1;
        }
        else
        {
          v36 = sub_552E90(a2, v35);
          result = sub_4F5180(a5, a2, v36);
        }
      }
      ++v22;
    }
    while ( (unsigned int)v22 < *(_DWORD *)(a4 + 8) );
  }
  return result;
}

