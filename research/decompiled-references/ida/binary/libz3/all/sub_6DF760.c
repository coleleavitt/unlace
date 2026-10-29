__int64 __fastcall sub_6DF760(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf

  v4 = (_QWORD *)a1[1];
  (*(void (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
  result = sub_15E1A70(*v4);
  v6 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v7 = *a3;
  if ( *a3 && (v8 = a3[1], v9 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v9) )
  {
    result = sub_15D7BC0(v8, v7);
    *a3 = v6;
  }
  else
  {
    *a3 = result;
  }
  return result;
}

