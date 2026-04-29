__int64 __fastcall sub_39DC90(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 56) + 1;
  if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 56) = v2;
    return 1;
  }
  return v1;
}
