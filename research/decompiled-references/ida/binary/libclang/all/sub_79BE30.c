unsigned __int64 __fastcall sub_79BE30(unsigned __int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v1 = 8388688;
  v2 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (_BYTE)v2 == 60 )
  {
    if ( *(char *)(a1 + 12) >= 0 )
      goto LABEL_4;
    return a1;
  }
  if ( (unsigned __int8)v2 > 0x17u || !_bittest64(&v1, v2) )
    return a1;
  do
  {
    while ( 1 )
    {
LABEL_4:
      v3 = *(_QWORD *)(sub_79A2E0(a1) + 16);
      a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v3 & 4) != 0 )
        a1 = *(_QWORD *)a1;
      v5 = *(_BYTE *)(a1 + 8) & 0x7F;
      if ( (_BYTE)v5 != 60 )
        break;
      if ( *(char *)(a1 + 12) < 0 )
        return a1;
    }
  }
  while ( (unsigned __int8)v5 <= 0x17u && _bittest64(&v4, v5) );
  return a1;
}

