__int64 __fastcall sub_15EEA20(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 24);
  if ( (v1 & 0xC) != 0 || (v1 & 3) == 3 )
    return 0;
  else
    return sub_B79970(*(_QWORD *)a1);
}
