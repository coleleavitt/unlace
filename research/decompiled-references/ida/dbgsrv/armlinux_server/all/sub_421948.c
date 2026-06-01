/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421948
// Address: 0x0000000000421948

//----- (0000000000421948) ----------------------------------------------------
unsigned __int64 __fastcall sub_421948(unsigned __int64 result, __int64 a2, unsigned int a3)
{
  if ( *(_BYTE *)(result + 617) )
  {
    if ( !*(_BYTE *)(result + 616) && (result = *(unsigned __int16 *)(result + 522), (_DWORD)result == 8) )
      *(_DWORD *)(a2 + 12) = bswap32(a3);
    else
      *(_QWORD *)(a2 + 8) = a3;
  }
  else
  {
    result = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFF00LL;
    *(_QWORD *)(a2 + 8) = result + (unsigned __int8)a3;
  }
  return result;
}
