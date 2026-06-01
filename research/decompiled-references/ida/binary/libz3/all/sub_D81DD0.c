__int64 __fastcall sub_D81DD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi

  result = sub_14DE480(a1, a2, a3, (_DWORD)a4, a5, a6);
  if ( (_DWORD)result == 5 )
  {
    result = sub_14DC5D0(a1, a2, a3);
    v9 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v10 = *a4;
    if ( *a4 )
    {
      v11 = a4[1];
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        result = sub_15D7BC0(v11, v10);
    }
    *a4 = v9;
  }
  return result;
}

