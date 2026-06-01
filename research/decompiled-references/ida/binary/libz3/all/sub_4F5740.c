void __fastcall sub_4F5740(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 v10; // rbx
  unsigned int v11; // r12d
  char i; // al
  __int64 v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // r15
  int v16; // r14d
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 j; // rax

  v7 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v7 )
    return;
  v10 = 0;
  v11 = 0;
  for ( i = sub_555180(a2, **(_QWORD **)a1, a3, a4, a5, a6);
        !i;
        i = sub_555180(a2, *(_QWORD *)(*(_QWORD *)a1 + 8 * v10), a3, a4, a5, a6) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10++);
    sub_553300(a2, v13);
    if ( v10 == v7 )
      goto LABEL_9;
LABEL_6:
    ;
  }
  if ( v11 != (_DWORD)v10 )
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v11) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  ++v10;
  ++v11;
  if ( v10 != v7 )
    goto LABEL_6;
LABEL_9:
  if ( (_DWORD)v7 != v11 )
  {
    v14 = *(_DWORD *)(a1 + 8);
    if ( v14 >= v11 )
    {
      if ( v11 < v14 )
        *(_DWORD *)(a1 + 8) = v11;
    }
    else
    {
      LODWORD(v15) = *(_DWORD *)(a1 + 12);
      v16 = *(_DWORD *)(a1 + 8);
      do
      {
        if ( v14 < (unsigned int)v15 )
        {
          v17 = *(_QWORD **)a1;
        }
        else
        {
          v15 = (unsigned int)(2 * v15);
          v19 = sub_186B270(8 * v15);
          v14 = *(_DWORD *)(a1 + 8);
          v20 = *(_QWORD **)a1;
          v17 = (_QWORD *)v19;
          if ( v14 )
          {
            if ( v14 - 1 <= 2 || (_QWORD *)v19 == v20 + 1 )
            {
              for ( j = 0; j != v14; ++j )
                v17[j] = v20[j];
            }
            else
            {
              v21 = 0;
              do
              {
                *(__m128i *)&v17[v21] = _mm_loadu_si128((const __m128i *)&v20[v21]);
                v21 += 2;
              }
              while ( 2LL * (v14 >> 1) != v21 );
              if ( (v14 & 1) != 0 )
                v17[v14 & 0xFFFFFFFE] = v20[v14 & 0xFFFFFFFE];
            }
          }
          if ( v20 )
          {
            if ( v20 != (_QWORD *)(a1 + 16) )
            {
              sub_186B220(v20);
              v14 = *(_DWORD *)(a1 + 8);
            }
          }
          *(_QWORD *)a1 = v17;
          *(_DWORD *)(a1 + 12) = v15;
        }
        v18 = v14;
        ++v16;
        ++v14;
        v17[v18] = 0;
        *(_DWORD *)(a1 + 8) = v14;
      }
      while ( v16 != v11 );
    }
  }
}

