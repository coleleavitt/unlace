/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B470
// Address: 0x000000000047B470

//----- (000000000047B470) ----------------------------------------------------
__int64 __fastcall sub_47B470(char *a1, _QWORD *a2)
{
  FILE *v2; // x19
  __int64 v3; // x7
  __int64 v4; // x4
  __int64 v5; // x5
  unsigned int v6; // w20
  _QWORD v8[4]; // [xsp+20h] [xbp-20h] BYREF

  v2 = (FILE *)qword_5223C0;
  if ( !qword_5223C0 )
    v2 = stdout;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v8[0] = *a2;
  v8[1] = v3;
  v8[2] = v4;
  v8[3] = v5;
  v6 = sub_49B600((__int64)v2, a1, v8);
  fflush(v2);
  return v6;
}
// 5223C0: using guessed type __int64 qword_5223C0;
