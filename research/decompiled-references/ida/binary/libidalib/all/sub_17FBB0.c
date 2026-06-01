__int64 __fastcall sub_17FBB0(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx

  v1 = *(_BYTE **)(a1 + 1888);
  v2 = &v1[80 * *(_QWORD *)(a1 + 1896)];
  if ( v1 == v2 )
    return 0;
  while ( (*v1 & 0x40) != 0 )
  {
    v1 += 80;
    if ( v2 == v1 )
      return 0;
  }
  return 1;
}

