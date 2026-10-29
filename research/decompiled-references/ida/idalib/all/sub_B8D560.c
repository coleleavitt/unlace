__int64 __fastcall sub_B8D560(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // eax

  v1 = 0;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned __int8)v2 > 0x3Eu )
    return 0;
  v3 = 0x7C0000FC0FFC01FFLL;
  if ( !_bittest64(&v3, v2) )
    return 0;
  v5 = sub_B8D340(a1);
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 8) & 0x7F;
    LOBYTE(v1) = v6 == 0;
    LOBYTE(v6) = v6 == 24;
    v1 |= v6;
  }
  return v1;
}
