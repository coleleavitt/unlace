__int64 __fastcall sub_B954C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 240);
  if ( v3 )
  {
    a3 = 1;
    if ( *(_DWORD *)(a1 + 300) < *(_DWORD *)(v3 - 4) )
      return 1;
  }
  v5 = *(_QWORD *)(a1 + 224);
  if ( !v5 )
    return 0;
  LOBYTE(a3) = *(_DWORD *)(a1 + 296) < *(_DWORD *)(v5 - 4);
  return a3;
}

