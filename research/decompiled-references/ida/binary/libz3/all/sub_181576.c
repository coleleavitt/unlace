__int64 __fastcall sub_181576(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax

  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v6, v5);
  }
  v8 = *a2;
  *a1 = *a2;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  return a3;
}

