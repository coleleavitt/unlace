__int64 __fastcall sub_3641A0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = **(char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}

