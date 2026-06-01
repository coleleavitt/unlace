__int64 __fastcall sub_36F8A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(qword_2CA1698 + 536);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 0x40) == 0 )
      callui();
    callui();
  }
  *(_DWORD *)(a2 + 8) = -1;
  return 0;
}

