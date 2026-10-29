__int64 __fastcall sub_5537F0(__int64 a1, __int64 *a2, __m128 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // eax
  __int64 v14; // r12
  int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 i; // rax
  unsigned int v22; // eax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r15
  unsigned int v26; // r13d
  __int64 v27; // rsi
  unsigned int v28; // r9d
  int v29; // r14d
  __int64 *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // rdi
  __int64 v34; // rdx
  __int64 j; // rdx
  _QWORD *v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+1Ch] [rbp-4Ch]
  int v38; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v39[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v5 = *((_DWORD *)a2 + 4);
  v36 = a2 + 3;
  while ( v5 )
  {
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_182A680(a1, *(_QWORD *)(a2[1] + 8LL * v6), *a2, *(double *)a3.m128_u64) )
          return 0;
        v10 = *a2;
        v11 = *(_QWORD *)(a2[1] + 8LL * v6);
        v12 = sub_5536F0(a1, *a2, v11, v39);
        if ( v12 != 2 )
          break;
        if ( ++v6 >= *((_DWORD *)a2 + 4) )
          return 1;
      }
      if ( !v12 )
        return 0;
      if ( v12 != 3 )
        break;
      sub_182A4B0(a1, v11);
      v7 = *((_DWORD *)a2 + 4);
      v8 = v6 + 1;
      if ( (unsigned int)v8 >= v7 )
      {
        v9 = v7 - 1;
        if ( !v7 )
        {
          LODWORD(v14) = *((_DWORD *)a2 + 5);
          v15 = -1;
          v9 = 0;
          do
          {
            if ( v9 < (unsigned int)v14 )
            {
              v16 = a2[1];
            }
            else
            {
              v14 = (unsigned int)(2 * v14);
              v18 = sub_186B270(8 * v14);
              v9 = *((_DWORD *)a2 + 4);
              v19 = (_QWORD *)a2[1];
              v16 = v18;
              if ( v9 )
              {
                if ( v9 - 1 <= 2 || (_QWORD *)v18 == v19 + 1 )
                {
                  for ( i = 0; i != v9; ++i )
                    *(_QWORD *)(v16 + i * 8) = v19[i];
                }
                else
                {
                  v20 = 0;
                  do
                  {
                    a3 = (__m128)_mm_loadu_si128((const __m128i *)&v19[v20]);
                    *(__m128 *)(v16 + v20 * 8) = a3;
                    v20 += 2;
                  }
                  while ( v20 != 2LL * (v9 >> 1) );
                  if ( (v9 & 1) != 0 )
                    *(_QWORD *)(v16 + 8LL * (v9 & 0xFFFFFFFE)) = v19[v9 & 0xFFFFFFFE];
                }
              }
              if ( v19 != v36 )
              {
                if ( v19 )
                {
                  sub_186B220(v19);
                  v9 = *((_DWORD *)a2 + 4);
                }
              }
              a2[1] = v16;
              *((_DWORD *)a2 + 5) = v14;
            }
            v17 = v9++;
            *(_QWORD *)(v16 + 8 * v17) = 0;
            *((_DWORD *)a2 + 4) = v9;
            --v15;
          }
          while ( v15 );
          goto LABEL_9;
        }
      }
      else
      {
        memmove((void *)(8LL * v6 + a2[1]), (const void *)(a2[1] + 8 * v8), 8LL * (v7 - 2 - v6) + 8);
        v9 = v7 - 1;
      }
      *((_DWORD *)a2 + 4) = v9;
LABEL_9:
      if ( v6 >= v9 )
        return 1;
    }
    sub_182A020(
      a1,
      v10,
      v39[0],
      (((*(_DWORD *)(v11 + 4LL * ((2 * v39[0]) >> 5)) & (1 << (2 * LOBYTE(v39[0]) + 1))) != 0)
     | (2 * ((*(_DWORD *)(v11 + 4LL * ((2 * v39[0]) >> 5)) & (1 << ((2 * LOBYTE(v39[0])) & 0x1F))) != 0)))
    ^ 3u);
    v22 = *((_DWORD *)a2 + 4);
    v23 = *a2;
    v37 = v22;
    if ( !v22 )
      return 1;
    v24 = v22;
    v25 = 0;
    v26 = 0;
    do
    {
      while ( !(unsigned __int8)sub_182A530(a1, *(_QWORD *)(a2[1] + 8 * v25), v23) )
      {
        v27 = *(_QWORD *)(a2[1] + 8 * v25++);
        sub_182A4B0(a1, v27);
        if ( v25 == v24 )
          goto LABEL_41;
      }
      if ( v26 != (_DWORD)v25 )
        *(_QWORD *)(a2[1] + 8LL * v26) = *(_QWORD *)(a2[1] + 8 * v25);
      ++v25;
      ++v26;
    }
    while ( v25 != v24 );
LABEL_41:
    v5 = *((_DWORD *)a2 + 4);
    if ( v37 != v26 )
    {
      if ( v5 >= v26 )
      {
        if ( v26 < v5 )
        {
          *((_DWORD *)a2 + 4) = v26;
          v5 = v26;
        }
      }
      else
      {
        v28 = *((_DWORD *)a2 + 5);
        v29 = *((_DWORD *)a2 + 4);
        do
        {
          if ( v5 < v28 )
          {
            v30 = (__int64 *)a2[1];
          }
          else
          {
            v38 = 2 * v28;
            v32 = sub_186B270(16LL * v28);
            v33 = (__int64 *)a2[1];
            v28 = v38;
            v30 = (__int64 *)v32;
            v5 = *((_DWORD *)a2 + 4);
            if ( v5 )
            {
              if ( v5 - 1 <= 2 || v30 == v33 + 1 )
              {
                for ( j = 0; j != v5; ++j )
                  v30[j] = v33[j];
              }
              else
              {
                v34 = 0;
                do
                {
                  a3 = (__m128)_mm_loadu_si128((const __m128i *)&v33[v34]);
                  *(__m128 *)&v30[v34] = a3;
                  v34 += 2;
                }
                while ( 2LL * (v5 >> 1) != v34 );
                if ( (v5 & 1) != 0 )
                  v30[v5 & 0xFFFFFFFE] = v33[v5 & 0xFFFFFFFE];
              }
            }
            if ( v33 && v33 != a2 + 3 )
            {
              sub_186B220(v33);
              v5 = *((_DWORD *)a2 + 4);
              v28 = v38;
            }
            a2[1] = (__int64)v30;
            *((_DWORD *)a2 + 5) = v28;
          }
          v31 = v5;
          ++v29;
          ++v5;
          v30[v31] = 0;
          *((_DWORD *)a2 + 4) = v5;
        }
        while ( v29 != v26 );
      }
    }
  }
  return 1;
}

