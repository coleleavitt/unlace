/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2F50
// Address: 0x00000000000A2F50

//----- (00000000000A2F50) ----------------------------------------------------
__int64 __fastcall sub_A2F50(__int64 a1, char *s1, _DWORD *a3)
{
  unsigned __int64 v3; // x23
  __int64 v4; // x22
  unsigned __int64 v7; // x19

  v3 = *(_QWORD *)(a1 + 552);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 544);
    v7 = 0;
    while ( strcasecmp(s1, *(const char **)v4) )
    {
      ++v7;
      v4 += 32;
      if ( v7 >= v3 )
        goto LABEL_5;
    }
    if ( a3 )
      *a3 = *(unsigned __int8 *)(v4 + 12);
  }
  else
  {
LABEL_5:
    LODWORD(v7) = -1;
  }
  return (unsigned int)v7;
}
