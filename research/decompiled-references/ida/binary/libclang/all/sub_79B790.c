__int64 __fastcall sub_79B790(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  LODWORD(v1) = 0;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned __int8)v2 <= 0x3Cu )
  {
    v1 = 0x1F00003F03FF01FFLL;
    LOBYTE(v1) = _bittest64(&v1, v2);
  }
  return (unsigned int)v1;
}

