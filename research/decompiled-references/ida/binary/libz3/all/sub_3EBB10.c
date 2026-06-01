void __fastcall sub_3EBB10(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf

  if ( !a3 )
    a2 = sub_15E1A70(a4[1]);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v6 = *a4;
  if ( *a4 && (v7 = a4[1], v8 = *(_DWORD *)(v6 + 8) == 1, --*(_DWORD *)(v6 + 8), v8) )
  {
    sub_15D7BC0(v7, v6);
    *a4 = a2;
  }
  else
  {
    *a4 = a2;
  }
}

