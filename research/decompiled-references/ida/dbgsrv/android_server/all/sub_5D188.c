/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D188
// Address: 0x000000000005D188

//----- (000000000005D188) ----------------------------------------------------
__int64 __fastcall sub_5D188(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 *v4; // x20
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x23

  v2 = *(_QWORD *)(a1 + 16);
  v4 = (__int64 *)(a1 + 8);
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v2 != 1 )
    {
      v6 = *v4;
      v7 = 0;
      do
      {
        *(_BYTE *)(v6 + v7) = toupper(*(unsigned __int8 *)(v6 + v7));
        ++v7;
      }
      while ( v7 < v5 );
    }
  }
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = *v4;
  *(_QWORD *)(a2 + 16) = v4[1];
  *(_QWORD *)(a2 + 24) = v4[2];
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  return 0;
}
