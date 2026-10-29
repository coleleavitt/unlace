__int64 __fastcall sub_553E00(__int64 a1, _QWORD *a2, __int64 a3, __m128 a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // rsi
  unsigned int v12; // edx
  int v13; // r15d
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbp
  unsigned int v23; // r13d
  __int64 v24; // rax
  unsigned int v25; // r12d
  _QWORD *v26; // r13
  __int64 v27; // r14
  char v28; // al
  char v29; // dl
  __int64 v30; // rsi
  unsigned int v31; // eax
  _QWORD *v32; // r13
  unsigned int v33; // ebx
  unsigned int v34; // r12d
  _QWORD *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 j; // rdx
  __int64 i; // rax
  __int64 k; // rax
  __int64 v49; // [rsp+8h] [rbp-60h]
  unsigned __int8 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+10h] [rbp-58h]
  char v54; // [rsp+27h] [rbp-41h]
  int v55; // [rsp+28h] [rbp-40h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  result = sub_182A530(a1, *a2, *(_QWORD *)a3);
  if ( (_BYTE)result )
  {
    v7 = *((unsigned int *)a2 + 4);
    v8 = *a2;
    v9 = 0;
    v10 = 0;
    if ( (_DWORD)v7 )
    {
      do
      {
        while ( !(unsigned __int8)sub_182A530(a1, *(_QWORD *)(v4[1] + 8 * v9), v8) )
        {
          v11 = *(_QWORD *)(v4[1] + 8 * v9++);
          sub_182A4B0(a1, v11);
          if ( v7 == v9 )
            goto LABEL_10;
        }
        if ( v10 != (_DWORD)v9 )
          *(_QWORD *)(v4[1] + 8LL * v10) = *(_QWORD *)(v4[1] + 8 * v9);
        ++v9;
        ++v10;
      }
      while ( v7 != v9 );
LABEL_10:
      if ( (_DWORD)v7 != v10 )
      {
        v12 = *((_DWORD *)v4 + 4);
        if ( v12 >= v10 )
        {
          if ( v10 < v12 )
            *((_DWORD *)v4 + 4) = v10;
        }
        else
        {
          v13 = *((_DWORD *)v4 + 4);
          v14 = v10;
          LODWORD(v15) = *((_DWORD *)v4 + 5);
          do
          {
            if ( v12 < (unsigned int)v15 )
            {
              v16 = v4[1];
            }
            else
            {
              v15 = (unsigned int)(2 * v15);
              v18 = sub_186B270(8 * v15);
              v12 = *((_DWORD *)v4 + 4);
              v19 = (_QWORD *)v4[1];
              v16 = v18;
              if ( v12 )
              {
                if ( v12 - 1 <= 2 || (_QWORD *)v18 == v19 + 1 )
                {
                  for ( i = 0; i != v12; ++i )
                    *(_QWORD *)(v16 + i * 8) = v19[i];
                }
                else
                {
                  v20 = 0;
                  do
                  {
                    a4 = (__m128)_mm_loadu_si128((const __m128i *)&v19[v20]);
                    *(__m128 *)(v16 + v20 * 8) = a4;
                    v20 += 2;
                  }
                  while ( v20 != 2LL * (v12 >> 1) );
                  if ( (v12 & 1) != 0 )
                    *(_QWORD *)(v16 + 8LL * (v12 & 0xFFFFFFFE)) = v19[v12 & 0xFFFFFFFE];
                }
              }
              if ( v19 != v4 + 3 && v19 )
              {
                sub_186B220(v19);
                v12 = *((_DWORD *)v4 + 4);
              }
              v4[1] = v16;
              *((_DWORD *)v4 + 5) = v15;
            }
            v17 = v12;
            ++v13;
            ++v12;
            *(_QWORD *)(v16 + 8 * v17) = 0;
            *((_DWORD *)v4 + 4) = v12;
          }
          while ( v13 != v14 );
        }
      }
    }
    if ( !*(_DWORD *)(a3 + 16) )
      return sub_5537F0(v5, v4, a4);
    v49 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = sub_1829B00(v5, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v49));
      if ( v21 )
        sub_182A4B0(v5, v21);
      v21 = v22;
      if ( !(unsigned __int8)sub_182A530(v5, v22, *v4) )
        goto LABEL_31;
      v23 = *((_DWORD *)v4 + 4);
      if ( !v23 )
        goto LABEL_66;
      v24 = v23;
      v55 = *((_DWORD *)v4 + 4);
      v25 = 0;
      v26 = v4;
      v51 = v24;
      v27 = 0;
      v54 = 0;
      do
      {
        while ( 1 )
        {
          v28 = sub_182A680(v5, *(_QWORD *)(v26[1] + 8 * v27), v22, *(double *)a4.m128_u64);
          if ( v28 )
            break;
          v29 = sub_182A680(v5, v22, *(_QWORD *)(v26[1] + 8 * v27), *(double *)a4.m128_u64);
          v28 = v54;
          if ( !v29 )
            break;
          v30 = *(_QWORD *)(v26[1] + 8 * v27++);
          sub_182A4B0(v5, v30);
          if ( v51 == v27 )
            goto LABEL_43;
        }
        if ( v25 != (_DWORD)v27 )
          *(_QWORD *)(v26[1] + 8LL * v25) = *(_QWORD *)(v26[1] + 8 * v27);
        v54 = v28;
        ++v25;
        ++v27;
      }
      while ( v51 != v27 );
LABEL_43:
      v4 = v26;
      if ( v55 != v25 )
      {
        v31 = *((_DWORD *)v26 + 4);
        if ( v31 >= v25 )
        {
          if ( v25 < v31 )
            *((_DWORD *)v26 + 4) = v25;
        }
        else
        {
          v52 = v22;
          v32 = v26 + 3;
          v56 = v5;
          v33 = v25;
          v34 = v31;
          LODWORD(v22) = *((_DWORD *)v4 + 5);
          do
          {
            if ( v31 < (unsigned int)v22 )
            {
              v35 = (_QWORD *)v4[1];
            }
            else
            {
              v22 = (unsigned int)(2 * v22);
              v37 = sub_186B270(8 * v22);
              v38 = (_QWORD *)v4[1];
              v35 = (_QWORD *)v37;
              v31 = *((_DWORD *)v4 + 4);
              if ( v31 )
              {
                if ( v31 - 1 <= 2 || v35 == v38 + 1 )
                {
                  for ( j = 0; j != v31; ++j )
                    v35[j] = v38[j];
                }
                else
                {
                  v39 = 0;
                  do
                  {
                    a4 = (__m128)_mm_loadu_si128((const __m128i *)&v38[v39]);
                    *(__m128 *)&v35[v39] = a4;
                    v39 += 2;
                  }
                  while ( 2LL * (v31 >> 1) != v39 );
                  if ( (v31 & 1) != 0 )
                    v35[v31 & 0xFFFFFFFE] = v38[v31 & 0xFFFFFFFE];
                }
              }
              if ( v38 && v38 != v32 )
              {
                sub_186B220(v38);
                v31 = *((_DWORD *)v4 + 4);
              }
              v4[1] = v35;
              *((_DWORD *)v4 + 5) = v22;
            }
            v36 = v31;
            ++v34;
            ++v31;
            v35[v36] = 0;
            *((_DWORD *)v4 + 4) = v31;
          }
          while ( v34 != v33 );
          v22 = v52;
          v5 = v56;
        }
      }
      if ( !v54 )
        break;
      sub_182A4B0(v5, v22);
LABEL_64:
      v21 = 0;
LABEL_31:
      if ( (unsigned int)++v49 >= *(_DWORD *)(a3 + 16) )
      {
        result = sub_5537F0(v5, v4, a4);
        if ( v21 )
        {
          v50 = result;
          sub_182A4B0(v5, v21);
          return v50;
        }
        return result;
      }
    }
    v23 = *((_DWORD *)v4 + 4);
LABEL_66:
    v40 = *((_DWORD *)v4 + 5);
    if ( v23 >= v40 )
    {
      v42 = 2 * v40;
      v43 = sub_186B270(8 * v42);
      v23 = *((_DWORD *)v4 + 4);
      v44 = (_QWORD *)v4[1];
      v41 = v43;
      if ( v23 )
      {
        if ( v23 - 1 <= 2 || (_QWORD *)v43 == v44 + 1 )
        {
          for ( k = 0; k != v23; ++k )
            *(_QWORD *)(v41 + k * 8) = v44[k];
        }
        else
        {
          v45 = 0;
          do
          {
            a4 = (__m128)_mm_loadu_si128((const __m128i *)&v44[v45]);
            *(__m128 *)(v41 + v45 * 8) = a4;
            v45 += 2;
          }
          while ( 2LL * (v23 >> 1) != v45 );
          if ( (v23 & 1) != 0 )
            *(_QWORD *)(v41 + 8LL * (v23 & 0xFFFFFFFE)) = v44[v23 & 0xFFFFFFFE];
        }
      }
      if ( v44 && v44 != v4 + 3 )
      {
        sub_186B220(v44);
        v23 = *((_DWORD *)v4 + 4);
      }
      v4[1] = v41;
      *((_DWORD *)v4 + 5) = v42;
    }
    else
    {
      v41 = v4[1];
    }
    *(_QWORD *)(v41 + 8LL * v23) = v22;
    *((_DWORD *)v4 + 4) = v23 + 1;
    goto LABEL_64;
  }
  return result;
}

