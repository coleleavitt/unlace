__int64 __fastcall sub_36F0A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = *(_QWORD *)(qword_2CA1698 + 536);
  v3 = 0;
  if ( v2 )
  {
    v3 = 1;
    if ( (*(_BYTE *)(v2 + 32) & 0x40) != 0 )
      callui();
  }
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

