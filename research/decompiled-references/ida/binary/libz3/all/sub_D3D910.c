__int64 __fastcall sub_D3D910(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rsi
  __int64 *v6; // rdi
  bool v7; // zf
  __int64 result; // rax

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = *a1;
  v5 = **a1;
  if ( v5 && (v6 = a1[1], v7 = *(_DWORD *)(v5 + 8) == 1, --*(_DWORD *)(v5 + 8), v7) )
  {
    result = sub_15D7BC0(v6, v5);
    **a1 = a2;
  }
  else
  {
    *v4 = a2;
  }
  return result;
}

