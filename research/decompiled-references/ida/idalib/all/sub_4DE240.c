void __fastcall sub_4DE240(__int64 a1)
{
  unsigned int *v2; // rbp
  __int64 v3; // r12
  _BYTE *v4; // r13
  signed __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  bool v8; // cf
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  char *v11; // rax
  char *v12; // r15
  char *v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int *v16; // r9
  unsigned int *v17; // rdi
  unsigned int *v18; // rax
  __int64 v19; // r10
  __int64 i; // rdx

  v2 = *(unsigned int **)(a1 + 616);
  if ( v2 != *(unsigned int **)(a1 + 624) )
    *(_QWORD *)(a1 + 624) = v2;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v3) == -1 )
        goto LABEL_6;
      if ( *(unsigned int **)(a1 + 632) == v2 )
      {
        v4 = *(_BYTE **)(a1 + 616);
        v5 = (char *)v2 - v4;
        v6 = v5 >> 2;
        if ( v5 >> 2 == 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_append");
        v7 = 1;
        if ( v6 )
          v7 = v5 >> 2;
        v8 = __CFADD__(v7, v6);
        v9 = v7 + v6;
        if ( v8 )
        {
          v10 = 0x7FFFFFFFFFFFFFFCLL;
        }
        else
        {
          if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
            v9 = 0x1FFFFFFFFFFFFFFFLL;
          v10 = 4 * v9;
        }
        v11 = (char *)operator new(v10);
        v12 = v11;
        *(_DWORD *)&v11[v5] = v3;
        if ( v5 > 0 )
          memcpy(v11, v4, v5);
        v2 = (unsigned int *)&v12[v5 + 4];
        if ( v4 )
          operator delete(v4, *(_QWORD *)(a1 + 632) - (_QWORD)v4);
        *(_QWORD *)(a1 + 616) = v12;
        ++v3;
        *(_QWORD *)(a1 + 624) = v2;
        *(_QWORD *)(a1 + 632) = &v12[v10];
        if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
        {
LABEL_21:
          v13 = *(char **)(a1 + 616);
          if ( v2 != (unsigned int *)v13 )
          {
            v14 = -2;
            if ( ((char *)v2 - v13) >> 2 )
            {
              _BitScanReverse64(&v15, ((char *)v2 - v13) >> 2);
              v14 = 2LL * (int)v15;
            }
            sub_4DDB80(*(__m128i **)(a1 + 616), v2, v14, a1);
            if ( (char *)v2 - v13 <= 64 )
            {
              sub_4DE0A0(v13, (char *)v2, a1);
            }
            else
            {
              sub_4DE0A0(v13, v13 + 64, a1);
              v16 = (unsigned int *)(v13 + 64);
              if ( v2 != (unsigned int *)(v13 + 64) )
              {
                do
                {
                  v17 = v16;
                  v18 = v16 - 1;
                  v19 = *v16;
                  for ( i = *(v16 - 1);
                        *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v19) < *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * i);
                        i = *v18 )
                  {
                    v18[1] = i;
                    v17 = v18--;
                  }
                  ++v16;
                  *v17 = v19;
                }
                while ( v16 != v2 );
              }
            }
          }
          break;
        }
      }
      else
      {
        *v2 = v3;
        v2 = (unsigned int *)(*(_QWORD *)(a1 + 624) + 4LL);
        *(_QWORD *)(a1 + 624) = v2;
LABEL_6:
        if ( (unsigned int)++v3 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_21;
      }
    }
  }
  *(_BYTE *)(a1 + 640) = 1;
}
