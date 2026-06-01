__int64 __fastcall sub_79A9F0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 1688);
  if ( !v2 )
    return 0;
  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) )
    LOBYTE(v4) = *(_QWORD *)(v2 + 8 * v3) != 0;
  return v4;
}

