__int64 __fastcall sub_586990(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  bool v7; // zf

  v3 = *a2;
  result = *(_QWORD *)(a1 + 48);
  if ( v3 != result )
  {
    if ( v3 && (v6 = a2[1], v7 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v7) )
    {
      sub_15D7BC0(v6, v3);
      result = *(_QWORD *)(a1 + 48);
      *a2 = result;
      if ( !result )
        return result;
    }
    else
    {
      *a2 = result;
      if ( !result )
        return result;
    }
    ++*(_DWORD *)(result + 8);
  }
  return result;
}

