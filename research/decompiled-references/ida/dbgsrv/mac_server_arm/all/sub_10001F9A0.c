/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F9A0
// Address: 0x000000010001F9A0

//----- (000000010001F9A0) ----------------------------------------------------
__int64 __fastcall sub_10001F9A0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x22
  __int64 v7; // x23

  v4 = a1[2];
  if ( v4 )
    v5 = v4 - 1;
  else
    v5 = 0;
  if ( v4 >= 2 )
  {
    v6 = 0;
    v7 = a1[1];
    do
    {
      *(_BYTE *)(v7 + v6) = __tolower(*(unsigned __int8 *)(v7 + v6));
      ++v6;
    }
    while ( v6 < v5 );
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 8) = a1[1];
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}
