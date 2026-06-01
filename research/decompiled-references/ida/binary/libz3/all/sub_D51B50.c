__int64 __fastcall sub_D51B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf

  result = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v7 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v8 = *a5;
  if ( *a5 && (v9 = a5[1], v10 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v10) )
  {
    result = sub_15D7BC0(v9, v8);
    *a5 = v7;
  }
  else
  {
    *a5 = result;
  }
  return result;
}

