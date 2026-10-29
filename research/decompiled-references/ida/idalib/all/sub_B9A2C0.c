__int64 __fastcall sub_B9A2C0(__int64 a1)
{
  do
    a1 = *(_QWORD *)(a1 + 72);
  while ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 53 <= 1 );
  return sub_E900C0(*(_QWORD *)(a1 + 64));
}
