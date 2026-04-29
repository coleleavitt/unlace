__int64 __fastcall sub_BC080(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // r12
  __int64 v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax

  v3 = a2;
  v5 = (_QWORD *)a1[40];
  v6 = a1[8];
  v7 = v5[242];
  if ( v7 )
  {
    v8 = 0;
    if ( a2 < v7 )
      v8 = (*(_BYTE *)(v5[241] + 4LL * a2) & 4) != 0;
    v9 = v5[188];
    if ( a1[9] )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(v6 + 8 * v11);
        if ( v12 )
        {
          if ( v8
            || (v13 = a1[40], v11 < *(_QWORD *)(v13 + 1936)) && (*(_BYTE *)(*(_QWORD *)(v13 + 1928) + 4 * v11) & 4) != 0 )
          {
            if ( (unsigned __int8)sub_1255D0(a3, v9, v12, 9) )
              return 0;
            v6 = a1[8];
          }
        }
        v11 = ++v10;
      }
      while ( (unsigned __int64)v10 < a1[9] );
    }
  }
  *(_QWORD *)(v6 + 8 * v3) = a3;
  v14 = a1[12];
  v15 = a1[11];
  if ( a1[13] < (unsigned __int64)(v14 + 1) )
  {
    v17 = qvector_reserve(a1 + 11, v15, v14 + 1, 4);
    a1[11] = v17;
    v15 = v17;
    v14 = a1[12];
  }
  *(_DWORD *)(v15 + 4 * v14) = a2;
  ++a1[12];
  return 1;
}
