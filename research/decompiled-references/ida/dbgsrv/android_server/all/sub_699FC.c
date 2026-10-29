/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_699FC
// Address: 0x00000000000699FC

//----- (00000000000699FC) ----------------------------------------------------
__int64 __fastcall sub_699FC(_QWORD *a1, char *s2)
{
  __int64 v4; // x21
  __int64 v5; // x8
  const char *v6; // x0

  if ( s2 )
  {
    v4 = a1[1] - 1LL;
    while ( (v4 & 0x8000000000000000LL) == 0 )
    {
      v5 = *(_QWORD *)(*a1 + 8 * v4);
      if ( *(_QWORD *)(v5 + 8) )
        v6 = *(const char **)v5;
      else
        v6 = &byte_F154B;
      --v4;
      if ( !strcmp(v6, s2) )
        return v4 + 1;
    }
  }
  return -1;
}
// F154B: using guessed type char byte_F154B;
