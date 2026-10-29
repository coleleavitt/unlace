__int64 *__fastcall sub_7EB9B0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // r14
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned int *v7; // rbp
  char v8; // al
  unsigned int v9; // edx
  unsigned int v10; // r14d
  __int64 v11; // r15
  unsigned int *v12; // r15
  __int64 v13; // rax
  unsigned int *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 (*v21)(void); // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *result; // rax
  __int64 *k; // rcx
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rax
  __int64 j; // rax
  __int64 i; // rax
  _QWORD *v35; // [rsp+10h] [rbp-C8h]
  unsigned int v36; // [rsp+18h] [rbp-C0h]
  int v37; // [rsp+1Ch] [rbp-BCh]
  _QWORD v38[23]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = v38;
  v38[0] = a2;
  v35 = v38;
  v37 = 16;
  v5 = 1;
LABEL_2:
  if ( v5 )
  {
    do
    {
      v6 = v5 - 1;
      v7 = (unsigned int *)v4[v6];
      --v5;
      v36 = v6;
      v8 = *((_BYTE *)v7 + 6);
      if ( (v8 & 1) != 0 )
        goto LABEL_2;
      *((_BYTE *)v7 + 6) = v8 | 1;
      v9 = *(_DWORD *)(a1 + 2384);
      v10 = *(_DWORD *)(a1 + 2388);
      if ( v9 >= v10 )
      {
        v28 = 2 * v10;
        v29 = sub_186B270(8 * v28);
        v9 = *(_DWORD *)(a1 + 2384);
        v30 = *(_QWORD **)(a1 + 2376);
        v11 = v29;
        if ( v9 )
        {
          if ( v9 - 1 <= 2 || (_QWORD *)v29 == v30 + 1 )
          {
            for ( i = 0; i != v9; ++i )
              *(_QWORD *)(v11 + i * 8) = v30[i];
          }
          else
          {
            v31 = 0;
            do
            {
              *(__m128i *)(v11 + v31 * 8) = _mm_loadu_si128((const __m128i *)&v30[v31]);
              v31 += 2;
            }
            while ( 2LL * (v9 >> 1) != v31 );
            if ( (v9 & 1) != 0 )
              *(_QWORD *)(v11 + 8LL * (v9 & 0xFFFFFFFE)) = v30[v9 & 0xFFFFFFFE];
          }
        }
        if ( v30 && v30 != (_QWORD *)(a1 + 2392) )
        {
          sub_186B220(v30);
          v9 = *(_DWORD *)(a1 + 2384);
        }
        *(_QWORD *)(a1 + 2376) = v11;
        *(_DWORD *)(a1 + 2388) = v28;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 2376);
      }
      *(_QWORD *)(v11 + 8LL * v9) = v7;
      *(_DWORD *)(a1 + 2384) = v9 + 1;
      if ( !*((_WORD *)v7 + 2) )
      {
        if ( (*((_BYTE *)v7 + 30) & 1) == 0 )
        {
          v12 = v7 + 8;
          v5 = v36;
          v4 = v35;
          v13 = 2LL * v7[6];
          v14 = &v7[v13 + 8];
          if ( v13 * 4 )
          {
            LODWORD(v15) = v37;
            do
            {
              v17 = *(_QWORD *)v12;
              if ( v5 < (unsigned int)v15 )
              {
                v4 = v35;
              }
              else
              {
                v15 = (unsigned int)(2 * v15);
                v18 = sub_186B270(8 * v15);
                v5 = v36;
                v4 = (_QWORD *)v18;
                if ( v36 )
                {
                  if ( v36 - 1 <= 2 || (_QWORD *)v18 == v35 + 1 )
                  {
                    for ( j = 0; j != v36; ++j )
                      v4[j] = v35[j];
                  }
                  else
                  {
                    v19 = 0;
                    do
                    {
                      *(__m128i *)&v4[v19] = _mm_loadu_si128((const __m128i *)&v35[v19]);
                      v19 += 2;
                    }
                    while ( 2LL * (v36 >> 1) != v19 );
                    if ( (v36 & 1) != 0 )
                      v4[v36 & 0xFFFFFFFE] = v35[v36 & 0xFFFFFFFE];
                  }
                }
                if ( v35 != v38 )
                {
                  if ( v35 )
                  {
                    sub_186B220(v35);
                    v5 = v36;
                  }
                }
                v35 = v4;
                v37 = v15;
              }
              v16 = v5;
              v12 += 2;
              ++v5;
              v4[v16] = v17;
              v36 = v5;
            }
            while ( v14 != v12 );
          }
          goto LABEL_2;
        }
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 440LL);
        if ( (char *)v21 == (char *)sub_79F010 )
          v22 = v20 + 1592;
        else
          v22 = v21();
        v23 = *(_QWORD *)(v22 + 128);
        if ( v23 )
        {
          v24 = *v7;
          if ( (unsigned int)v24 >= *(_DWORD *)(v23 - 4) )
          {
            sub_7EB550(a1, 0, a3);
            goto LABEL_30;
          }
          v23 = *(_QWORD *)(v23 + 8 * v24);
        }
        sub_7EB550(a1, v23, a3);
      }
LABEL_30:
      v5 = v36;
      v4 = v35;
    }
    while ( v36 );
  }
  result = *(__int64 **)(a1 + 2376);
  for ( k = &result[*(unsigned int *)(a1 + 2384)]; k != result; *(_BYTE *)(v27 + 6) &= ~1u )
    v27 = *result++;
  *(_DWORD *)(a1 + 2384) = 0;
  if ( v4 )
  {
    result = v38;
    if ( v4 != v38 )
      return (__int64 *)sub_186B220(v4);
  }
  return result;
}

