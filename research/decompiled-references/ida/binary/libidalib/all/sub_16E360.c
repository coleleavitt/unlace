__int64 __fastcall sub_16E360(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  int v3; // eax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12) + 1;
  if ( (unsigned __int64)v3 < *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)(a1 + 12) = v3;
    return 1;
  }
  return v2;
}

