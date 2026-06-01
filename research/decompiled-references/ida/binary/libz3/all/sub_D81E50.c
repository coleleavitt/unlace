__int64 __fastcall sub_D81E50(_QWORD *a1, int a2, int a3, int a4, __int64 *a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi

  result = sub_14E2530((_DWORD)a1, a2, a3, a4, (_DWORD)a5, a6);
  if ( (_DWORD)result == 5 )
  {
    result = sub_15E1BF0(*a1);
    v8 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v9 = *a5;
    if ( *a5 )
    {
      v10 = a5[1];
      if ( (*(_DWORD *)(v9 + 8))-- == 1 )
        result = sub_15D7BC0(v10, v9);
    }
    *a5 = v8;
  }
  return result;
}

