/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000226DC
// Address: 0x00000001000226DC

//----- (00000001000226DC) ----------------------------------------------------
__int64 __fastcall sub_1000226DC(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x0
  __int64 v4; // x19
  int v5; // w0
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 <= v2 )
  {
    v6 = -1;
  }
  else
  {
    v3 = *(FILE **)(qword_1000A5920 + 8 * v2);
    if ( v3 )
    {
      v4 = a2;
      v5 = qfgetc(v3);
      if ( v5 == -1 )
        v6 = -1;
      else
        v6 = (unsigned __int8)v5;
      a2 = v4;
    }
    else
    {
      v6 = -1;
    }
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
