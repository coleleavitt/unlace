/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovo
// Address: 0x00000000000B7B50

//----- (00000000000B7B50) ----------------------------------------------------
__int64 __fastcall emovo(_WORD *a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = a1[1] | 0x8000;
  if ( !*a1 )
    v2 = a1[1];
  a2[7] = v2;
  a2[6] = a1[3];
  a2[5] = a1[4];
  a2[4] = a1[5];
  a2[3] = a1[6];
  a2[2] = a1[7];
  a2[1] = a1[8];
  result = (unsigned __int16)a1[9];
  *a2 = result;
  return result;
}
