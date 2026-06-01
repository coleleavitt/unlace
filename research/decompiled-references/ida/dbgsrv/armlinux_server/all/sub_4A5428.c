/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5428
// Address: 0x00000000004A5428

//----- (00000000004A5428) ----------------------------------------------------
__int64 __fastcall sub_4A5428(__int64 a1)
{
  unsigned __int8 *v1; // x1
  int v3; // w0
  __int64 result; // x0
  __int64 v5; // x7
  _BYTE *v6; // x1

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v1;
  if ( v3 == 95 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 1;
    return 0;
  }
  else if ( v3 == 110 )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    result = (unsigned int)sub_4A5320((unsigned __int8 **)(a1 + 24)) + 1;
    if ( (int)result >= 0 && (v6 = *(_BYTE **)(v5 + 24), *v6 == 95) )
      *(_QWORD *)(v5 + 24) = v6 + 1;
    else
      return 0xFFFFFFFFLL;
  }
  return result;
}
// 4A545C: variable 'v5' is possibly undefined
