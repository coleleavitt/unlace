__int64 __fastcall sub_54A5D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf

  v3 = a2[1];
  v4 = sub_15D1F10(**(_QWORD **)(a1 + 40));
  sub_15DB5C0(v3, 0, v4);
  result = sub_15E1B70(v3);
  v6 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v7 = *a2;
  if ( *a2 && (v8 = a2[1], v9 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v9) )
  {
    result = sub_15D7BC0(v8, v7);
    *a2 = v6;
  }
  else
  {
    *a2 = result;
  }
  return result;
}

