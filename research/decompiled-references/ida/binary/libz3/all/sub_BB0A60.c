__int64 __fastcall sub_BB0A60(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 1;
  v3 = *a2;
  v4 = 1;
  if ( (unsigned int)v3 < *(_DWORD *)(v2 - 4) )
    LOBYTE(v4) = *(_QWORD *)(v2 + 24 * v3 + 8) == 0;
  return v4;
}

