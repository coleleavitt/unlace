/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4218F8
// Address: 0x00000000004218F8

//----- (00000000004218F8) ----------------------------------------------------
__int64 __fastcall sub_4218F8(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( !*(_BYTE *)(a1 + 616) && (result = *(unsigned __int16 *)(a1 + 522), (_DWORD)result == 8) )
    {
      *(_QWORD *)(a2 + 8) = (unsigned __int64)a3 << 32;
    }
    else
    {
      result = *(unsigned int *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = result | a3;
    }
  }
  else
  {
    result = *(unsigned __int8 *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = result + ((unsigned __int64)a3 << 8);
  }
  return result;
}
