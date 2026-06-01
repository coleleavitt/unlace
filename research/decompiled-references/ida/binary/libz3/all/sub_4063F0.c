__int64 __fastcall sub_4063F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned int v7; // edx

  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 || (v5 = *(_DWORD *)(v4 - 4), v5 == *(_DWORD *)(v4 - 8)) )
  {
    sub_3A6B20((unsigned int **)(a1 + 72));
    v4 = *(_QWORD *)(a1 + 72);
    v5 = *(_DWORD *)(v4 - 4);
  }
  *(_QWORD *)(v4 + 8LL * v5) = a3;
  *(_DWORD *)(v4 - 4) = v5 + 1;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  result = *(_QWORD *)(a1 + 56);
  if ( !result || (v7 = *(_DWORD *)(result - 4), v7 == *(_DWORD *)(result - 8)) )
  {
    sub_3A6B20((unsigned int **)(a1 + 56));
    result = *(_QWORD *)(a1 + 56);
    v7 = *(_DWORD *)(result - 4);
  }
  *(_QWORD *)(result + 8LL * v7) = a2;
  *(_DWORD *)(result - 4) = v7 + 1;
  return result;
}

