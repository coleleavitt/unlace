__int64 __fastcall sub_62A430(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  bool v7; // zf
  __int64 result; // rax

  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 && (v7 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v7) )
  {
    result = sub_15D7BC0(a2, v6);
    *(_QWORD *)(a1 + 48) = a3;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = a3;
  }
  return result;
}

