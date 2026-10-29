__int64 __fastcall sub_6B0140(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 result; // rax

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (v5 = *(_QWORD *)(a1 + 32), v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    result = sub_15D7BC0(v5, v4);
    *(_QWORD *)(a1 + 24) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a2;
  }
  return result;
}

