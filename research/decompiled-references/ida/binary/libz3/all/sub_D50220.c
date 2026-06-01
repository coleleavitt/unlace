__int64 __fastcall sub_D50220(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v5 = a1[1];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      sub_15D7BC0(v5, v4);
  }
  result = *a2;
  *a1 = *a2;
  if ( result )
    ++*(_DWORD *)(result + 8);
  return result;
}

