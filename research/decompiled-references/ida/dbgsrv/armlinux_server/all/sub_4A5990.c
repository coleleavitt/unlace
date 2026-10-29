/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5990
// Address: 0x00000000004A5990

//----- (00000000004A5990) ----------------------------------------------------
__int64 __fastcall sub_4A5990(__int64 a1)
{
  _BYTE *v1; // x1
  int v3; // w0
  unsigned int v4; // w1
  int v5; // w0
  __int64 v6; // x7
  _BYTE *v7; // x0

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 95 )
    return 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  if ( v1[1] == 95 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 2;
    v5 = sub_4A5320((unsigned __int8 **)(a1 + 24));
    if ( v5 < 0 )
      return 0;
    if ( v5 > 9 )
    {
      v7 = *(_BYTE **)(v6 + 24);
      v4 = 0;
      if ( *v7 == 95 )
      {
        v4 = 1;
        *(_QWORD *)(v6 + 24) = v7 + 1;
      }
      return v4;
    }
  }
  else
  {
    v3 = sub_4A5320((unsigned __int8 **)(a1 + 24));
    v4 = 0;
    if ( v3 < 0 )
      return v4;
  }
  return 1;
}
// 4A5A14: variable 'v6' is possibly undefined
