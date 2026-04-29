__int64 *__fastcall sub_75750(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  int **v8; // rax
  int *v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax

  v5 = operator new(0x20u);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *a1 = v5;
  *(_OWORD *)(v5 + 16) = 0;
  if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 560) )
  {
    v6 = v5;
    v7 = 56LL * a3;
    v8 = (int **)(v7 + *(_QWORD *)(a2 + 552));
    v9 = *v8;
    if ( 4LL * (_QWORD)v8[1] )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        v13 = *v9;
        if ( v11 < v12 + 1 )
        {
          v14 = qvector_reserve(v6 + 8, v10, v12 + 1, 4);
          *(_QWORD *)(v6 + 8) = v14;
          v10 = v14;
          v12 = *(_QWORD *)(v6 + 16);
        }
        *(_DWORD *)(v10 + 4 * v12) = v13;
        ++v9;
        ++*(_QWORD *)(v6 + 16);
        if ( v9 == (int *)(*(_QWORD *)(v7 + *(_QWORD *)(a2 + 552)) + 4LL * *(_QWORD *)(v7 + *(_QWORD *)(a2 + 552) + 8)) )
          break;
        v6 = *a1;
        v12 = *(_QWORD *)(*a1 + 16);
        v11 = *(_QWORD *)(*a1 + 24);
        v10 = *(_QWORD *)(*a1 + 8);
      }
    }
  }
  return a1;
}
