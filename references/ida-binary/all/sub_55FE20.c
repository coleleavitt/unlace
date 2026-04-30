__int64 __fastcall sub_55FE20(int a1, __int64 *a2)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = *a2;
  v3 = (*(_BYTE *)a2 & 2) != 0;
  if ( (*a2 & 1) == 0 )
    v3 = *(_BYTE *)(v2 + 44) & 1;
  LOBYTE(v2) = a1 != 0;
  return v3 | (unsigned int)v2;
}
