__int64 __fastcall sub_519180(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // edx

  v2 = -33;
  v3 = *a1;
  if ( (unsigned int)v3 > 8 )
    return v2;
  v2 = v3 & (v3 - 1);
  if ( !v2 )
  {
    v4 = *a2;
    LOBYTE(v5) = 0;
    if ( (_DWORD)v3 )
      v5 = log2ceil((int)v3, a2, 0) + 1;
    *(_BYTE *)(v4 + 52) = v5 | *(_BYTE *)(v4 + 52) & 0xF8;
    return v2;
  }
  return 4294967263LL;
}

