/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434500
// Address: 0x00434500

//----- (00434500) --------------------------------------------------------
char *__thiscall sub_434500(int this)
{
  char *v2; // edi
  char v3; // bl
  char v4; // bl
  _BYTE *v5; // ecx
  char *v6; // ecx
  char v7; // al

  while ( 1 )
  {
    v2 = *(char **)(this + 4);
    v3 = *v2;
    if ( *v2 != 32 && v3 != 9 && v3 != 10 && v3 != 13 && v3 != 11 && v3 != 12 )
      break;
    *(_DWORD *)(this + 4) = v2 + 1;
  }
  if ( v3 >= 0 && sub_46B6D0(v3, (unsigned __int8)v3) || v3 == 95 || v3 == 36 )
  {
    while ( 1 )
    {
      v4 = **(_BYTE **)(this + 4);
      if ( (v4 < 0 || !sub_46B640(v4, (unsigned __int8)v4)) && v4 != 95 && v4 != 36 )
        break;
      ++*(_DWORD *)(this + 4);
    }
  }
  v5 = *(_BYTE **)(this + 4);
  *(_BYTE *)(this + 280) = *v5;
  if ( *v5 )
  {
    *v5 = 0;
    v6 = *(char **)(this + 4);
    do
    {
      do
      {
        *(_DWORD *)(this + 4) = ++v6;
        v7 = *v6;
      }
      while ( *v6 == 32 );
    }
    while ( v7 == 9 || v7 == 10 || v7 == 13 || v7 == 11 || v7 == 12 );
  }
  return v2;
}
