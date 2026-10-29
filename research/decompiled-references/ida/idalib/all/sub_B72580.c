bool __fastcall sub_B72580(_QWORD *a1)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( (*(_DWORD *)a1 & 7) == 6 )
  {
    result = 1;
    v2 = *(_DWORD *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v2 != 2 )
      return v2 == 4;
  }
  return result;
}
