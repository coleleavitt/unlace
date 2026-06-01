__int64 __fastcall sub_141A820(__int64 a1, unsigned int *a2)
{
  char v2; // bp
  char v3; // bp
  char v4; // al
  unsigned int v5; // r12d
  __int64 v6; // rax

  v2 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v2 | 0x20;
  v3 = 32 * ((v2 & 0x20) != 0);
  sub_14634E0(a1, a2);
  v4 = v3 | *(_BYTE *)(a1 + 544) & 0xDF;
  *(_BYTE *)(a1 + 544) = v4;
  v5 = *a2;
  if ( *((_WORD *)a2 + 8) == 2 )
  {
    v6 = v5;
  }
  else
  {
    do
    {
      *(_BYTE *)(a1 + 544) = v4 | 0x20;
      sub_14634E0(a1, a2);
      v4 = v3 | *(_BYTE *)(a1 + 544) & 0xDF;
      *(_BYTE *)(a1 + 544) = v4;
    }
    while ( *((_WORD *)a2 + 8) != 2 );
    v6 = *a2;
  }
  return (v6 << 32) | v5;
}
