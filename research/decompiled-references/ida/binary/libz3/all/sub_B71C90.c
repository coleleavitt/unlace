__int64 __fastcall sub_B71C90(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  bool v5; // zf
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 && (v5 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v5) )
  {
    result = sub_15D7BC0(a2, v4);
    *(_QWORD *)(a1 + 16) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}

