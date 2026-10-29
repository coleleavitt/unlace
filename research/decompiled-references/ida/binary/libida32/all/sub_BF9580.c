bool __fastcall sub_BF9580(_QWORD *a1)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( (*(_DWORD *)a1 & 7) == 6 )
  {
    result = 1;
    v2 = *(_DWORD *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v2 != 1 )
      return v2 == 3;
  }
  return result;
}

