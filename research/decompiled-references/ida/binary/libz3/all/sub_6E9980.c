__int64 __fastcall sub_6E9980(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned int v13; // edx

  v7 = sub_6E10F0(a1, a2, a3);
  v8 = sub_6E1010(a1, v7);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *(_QWORD *)(a5 + 8);
  if ( !v10 || (v11 = *(_DWORD *)(v10 - 4), v11 == *(_DWORD *)(v10 - 8)) )
  {
    sub_3A6B20((unsigned int **)(a5 + 8));
    v10 = *(_QWORD *)(a5 + 8);
    v11 = *(_DWORD *)(v10 - 4);
  }
  *(_QWORD *)(v10 + 8LL * v11) = v9;
  *(_DWORD *)(v10 - 4) = v11 + 1;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  result = *(_QWORD *)(a4 + 8);
  if ( !result || (v13 = *(_DWORD *)(result - 4), v13 == *(_DWORD *)(result - 8)) )
  {
    sub_23A6F0((unsigned int **)(a4 + 8));
    result = *(_QWORD *)(a4 + 8);
    v13 = *(_DWORD *)(result - 4);
  }
  *(_QWORD *)(result + 8LL * v13) = v9;
  *(_DWORD *)(result - 4) = v13 + 1;
  return result;
}

