/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4082D0
// Address: 0x00000000004082D0

//----- (00000000004082D0) ----------------------------------------------------
__int64 __fastcall sub_4082D0(__int64 a1, int a2, int a3)
{
  __int64 v3; // x2
  __int64 v4; // x0
  __int64 v5; // x4
  __int64 result; // x0
  __int64 v7; // x4

  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 1928);
  v4 = a1 + 1920;
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v5 = v4;
  do
  {
    while ( a2 <= *(_DWORD *)(v3 + 32) )
    {
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        goto LABEL_6;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v3 );
LABEL_6:
  if ( v4 == v5 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  if ( a2 >= *(_DWORD *)(v5 + 32) )
  {
    v7 = v5 + 40;
    if ( v7 )
    {
      result = 1;
      *(_BYTE *)(v7 + 16) = 1;
    }
  }
  return result;
}
