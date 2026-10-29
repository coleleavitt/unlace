__int64 __fastcall sub_B33C90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 384);
  if ( v3 )
  {
    a3 = 1;
    if ( *(_DWORD *)(a1 + 368) < *(_DWORD *)(v3 - 4) )
      return a3;
  }
  v5 = *(_QWORD *)(a1 + 480);
  if ( v5 )
  {
    a3 = 1;
    if ( *(_DWORD *)(a1 + 496) < *(_DWORD *)(v5 - 4) )
      return a3;
  }
  v6 = *(_QWORD *)(a1 + 520);
  if ( !v6 )
    return 0;
  LOBYTE(a3) = *(_DWORD *)(a1 + 528) < *(_DWORD *)(v6 - 4);
  return a3;
}

