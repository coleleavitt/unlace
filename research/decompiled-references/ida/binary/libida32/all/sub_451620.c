__int64 __fastcall sub_451620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v8; // rax
  bool v9; // cc
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( *(int *)(a1 + 348) > 2 )
  {
    v8 = *(_QWORD *)(a1 + 328);
    do
    {
      v10 = *(_QWORD **)(a1 + 304);
      if ( v8 >= v10[1] )
        break;
      v11 = *(_QWORD *)(*v10 + 8 * v8);
      if ( !v11 || *(_DWORD *)(v11 + 40) != *(_DWORD *)(a1 + 344) )
        break;
      if ( a2 )
        callui(1102, v11 + 32, a2, (int)&callui, a5, a6);
      ++v8;
      v9 = *(_DWORD *)(a1 + 348) <= 2;
      *(_QWORD *)(a1 + 328) = v8;
    }
    while ( !v9 );
  }
  v12 = *(__int64 **)(a1 + 336);
  v13 = v12[1];
  v14 = *v12;
  if ( v12[2] < (unsigned __int64)(v13 + 1) )
  {
    v19 = qvector_reserve(*(_QWORD *)(a1 + 336), v14, v13 + 1, 8);
    *v12 = v19;
    v14 = v19;
    v13 = v12[1];
  }
  *(_QWORD *)(v14 + 8 * v13) = a3;
  v15 = v12[4];
  ++v12[1];
  v16 = v12[3];
  if ( v12[5] < (unsigned __int64)(v15 + 1) )
  {
    v21 = qvector_reserve(v12 + 3, v16, v15 + 1, 8);
    v12[3] = v21;
    v16 = v21;
    v15 = v12[4];
  }
  *(_QWORD *)(v16 + 8 * v15) = a4;
  result = v12[7];
  ++v12[4];
  v18 = v12[6];
  if ( v12[8] < (unsigned __int64)(result + 1) )
  {
    v20 = qvector_reserve(v12 + 6, v18, result + 1, 8);
    v12[6] = v20;
    v18 = v20;
    result = v12[7];
  }
  *(_QWORD *)(v18 + 8 * result) = 0;
  ++v12[7];
  if ( a3 )
    ++*(_QWORD *)(a1 + 312);
  if ( a4 )
    ++*(_QWORD *)(a1 + 320);
  return result;
}

