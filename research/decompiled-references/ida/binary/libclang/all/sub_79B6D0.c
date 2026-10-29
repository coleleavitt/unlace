unsigned __int64 __fastcall sub_79B6D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)v2;
  v3 = 8388688;
  v4 = *(_BYTE *)(v2 + 8) & 0x7F;
  if ( (_BYTE)v4 == 60 )
  {
    if ( *(char *)(v2 + 12) >= 0 )
      goto LABEL_6;
    return v2;
  }
  if ( (unsigned __int8)v4 > 0x17u || !_bittest64(&v3, v4) )
    return v2;
  do
  {
    while ( 1 )
    {
LABEL_6:
      v5 = *(_QWORD *)(sub_79A2E0(v2) + 16);
      v2 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 4) != 0 )
        v2 = *(_QWORD *)v2;
      v7 = *(_BYTE *)(v2 + 8) & 0x7F;
      if ( (_BYTE)v7 != 60 )
        break;
      if ( *(char *)(v2 + 12) < 0 )
        return v2;
    }
  }
  while ( (unsigned __int8)v7 <= 0x17u && _bittest64(&v6, v7) );
  return v2;
}

