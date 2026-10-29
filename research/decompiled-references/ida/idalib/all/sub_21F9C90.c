__int64 __fastcall sub_21F9C90(_QWORD *a1)
{
  unsigned int v1; // esi

  v1 = *(_DWORD *)(*a1 + 8LL) + 64;
  if ( v1 > 0x7F )
    return sub_2209890(a1[1], v1 >> 6);
  else
    return sub_2209890(a1 + 1, 1);
}
