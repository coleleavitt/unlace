__int64 __fastcall sub_4C4190(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf

  result = sub_1625BE0(*(_QWORD *)(a1 + 8) + 56LL, *a3, *a2);
  v6 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v7 = *a4;
  if ( *a4 && (v8 = a4[1], v9 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v9) )
  {
    result = sub_15D7BC0(v8, v7);
    *a4 = v6;
  }
  else
  {
    *a4 = result;
  }
  return result;
}

