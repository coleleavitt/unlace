/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_519C4
// Address: 0x00000000000519C4

//----- (00000000000519C4) ----------------------------------------------------
__int64 __fastcall sub_519C4(__int64 result, __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(result + 617) )
  {
    if ( *(_BYTE *)(result + 616) || *(_WORD *)(result + 522) != 8 )
      *(_QWORD *)(a2 + 8) = *(unsigned int *)(a2 + 8) | (unsigned __int64)(unsigned int)a3;
    else
      *(_QWORD *)(a2 + 8) = a3 << 32;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = *(unsigned __int8 *)(a2 + 8) | ((unsigned __int64)(unsigned int)a3 << 8);
  }
  return result;
}
