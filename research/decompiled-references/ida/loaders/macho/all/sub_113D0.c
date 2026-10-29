__int64 __fastcall sub_113D0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 16) )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  else
    sub_112F0((__int64)"Warning: LC_ROUTINES_64 command in 32-bit file; ignored.\n");
  return 0;
}

