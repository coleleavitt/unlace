__int64 __fastcall sub_B76580(__int64 a1)
{
  do
    a1 = *(_QWORD *)(a1 + 72);
  while ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 53 <= 1 );
  return sub_E6C380(*(_QWORD *)(a1 + 64));
}

