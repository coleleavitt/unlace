bool __fastcall sub_382E60(__int64 a1, int a2)
{
  bool result; // al
  int v3; // edx

  result = 0;
  if ( *(_QWORD *)(a1 + 200) != *(_QWORD *)(a1 + 16) && (a2 & 0x600) != 0x200 )
  {
    v3 = sub_42A1E0(*(_QWORD *)(qword_2CCB598 + 1672));
    result = 1;
    if ( (*(_BYTE *)(a1 + 144) & 8) != 0 && ((*(_DWORD *)(a1 + 720) | a2) & 0x400) == 0 )
      return (*(_QWORD *)(a1 + 200) & (v3 - 1)) == 0;
  }
  return result;
}
