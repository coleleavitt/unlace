__int64 __fastcall sub_3EAC10(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax

  if ( *(_DWORD *)(a1 + 80) == 8 )
  {
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 440);
    v3 = *(_DWORD *)(a1 + 464);
    v2 = 16;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      v3 = *(_DWORD *)(a1 + 460);
  }
  else
  {
    v2 = 4;
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 360);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 364);
    v3 = *(_DWORD *)(a1 + 356);
  }
  *(_DWORD *)(a2 + 8) = v3;
  *(_QWORD *)(a2 + 16) = v2;
  *(_QWORD *)(a2 + 24) = 2;
  return 1;
}
