/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5118
// Address: 0x00000000004A5118

//----- (00000000004A5118) ----------------------------------------------------
__int64 __fastcall sub_4A5118(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // x3
  int v4; // w4
  int v6; // w5
  int v7; // w1

  v2 = *(unsigned __int8 **)(a1 + 24);
  v4 = *v2;
  if ( v4 != 82 && v4 != 79 )
    return a2;
  v6 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 24) = v2 + 1;
  if ( v4 == 82 )
  {
    v7 = 31;
    *(_DWORD *)(a1 + 80) = v6 + 2;
  }
  else
  {
    v7 = 32;
    *(_DWORD *)(a1 + 80) = v6 + 3;
  }
  return sub_4A5090(a1, v7, a2, 0);
}
