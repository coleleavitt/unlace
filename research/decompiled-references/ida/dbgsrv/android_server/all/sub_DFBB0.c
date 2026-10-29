/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFBB0
// Address: 0x00000000000DFBB0

//----- (00000000000DFBB0) ----------------------------------------------------
__int64 __fastcall sub_DFBB0(__int64 a1)
{
  char v1; // w8
  __int64 v3; // x0
  int v4; // w8

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 32) = 1;
    v4 = *(unsigned __int8 *)(v3 + 9);
    if ( v4 == 2 )
      v1 = (**(__int64 (__fastcall ***)(__int64))v3)(v3);
    else
      v1 = v4 == 0;
    *(_BYTE *)(a1 + 32) = 0;
  }
  return v1 & 1;
}
