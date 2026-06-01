/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4878F8
// Address: 0x00000000004878F8

//----- (00000000004878F8) ----------------------------------------------------
__int64 __fastcall sub_4878F8(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int16 v3; // w5
  unsigned __int16 *v4; // x4
  _WORD *v5; // x3
  __int16 v6; // w0
  unsigned __int16 *v7; // x2
  int v8; // t1
  __int64 result; // x0
  unsigned int v10; // t1

  v3 = a1[1];
  v4 = a1 + 10;
  v5 = (_WORD *)(a2 + 12);
  v6 = v3 | 0x8000;
  v8 = *a1;
  v7 = a1 + 3;
  if ( !v8 )
    v6 = v3;
  *(_WORD *)(a2 + 14) = v6;
  do
  {
    v10 = *v7++;
    result = v10;
    *v5-- = v10;
  }
  while ( v4 != v7 );
  return result;
}
