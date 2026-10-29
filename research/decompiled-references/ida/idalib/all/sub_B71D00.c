unsigned __int64 __fastcall sub_B71D00(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    return ((unsigned __int64)*(unsigned int *)(a1 + 56) << 32) | v1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 40LL);
  if ( v3 )
  {
    LODWORD(v4) = 1;
    do
    {
      v3 = *(_QWORD *)(v3 + 40);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( v3 );
    v5 = 4 * v4 + 52;
  }
  else
  {
    v5 = 56;
  }
  return ((unsigned __int64)*(unsigned int *)(a1 + v5) << 32) | v1;
}
