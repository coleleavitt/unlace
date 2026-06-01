__int64 __fastcall dwarfstring_constructor(__int64 a1)
{
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)a1 = "";
  *(_OWORD *)(a1 + 8) = 0;
  return 1;
}

