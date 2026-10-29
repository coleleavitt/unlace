__int64 __fastcall sub_4EA5A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v4 = *a2;
  if ( *a2 && (v5 = a2[1], v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    result = sub_15D7BC0(v5, v4);
    *a2 = v3;
  }
  else
  {
    *a2 = v3;
  }
  return result;
}

