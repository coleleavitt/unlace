__int16 __fastcall sub_12DBEA0(__int64 a1)
{
  _BYTE *v1; // rdx
  unsigned __int8 v2; // al
  unsigned int v4; // eax

  v1 = *(_BYTE **)a1;
  v2 = 8;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 47LL) & 0x20) == 0 )
  {
    v2 = 10;
    if ( (v1[60] & 0x10) == 0 )
    {
      v4 = (v1[2] & 4) == 0 ? 0xFFFFFFFE : 0;
      if ( (v1[1] & 8) != 0 )
        v2 = v4 + 7;
      else
        v2 = v4 + 6;
    }
  }
  return ((v1[201] >> 5 == 1) << 8) | v2;
}
