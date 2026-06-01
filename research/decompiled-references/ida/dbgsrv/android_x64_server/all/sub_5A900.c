/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A900
// Address: 0x000000000005A900

//----- (000000000005A900) ----------------------------------------------------
__int64 __fastcall sub_5A900(__int64 a1, __int64 a2, signed __int64 a3, unsigned int a4)
{
  __int64 v4; // rax

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a3 > 1879047929 )
  {
    if ( (unsigned __int64)(a3 - 1879047930) >= 3 && a3 != 0x7FFFFFFF && a3 != 2147483645 )
      return a1;
LABEL_8:
    sub_57CE0(a2, a1, (__int64 *)(a2 + 352), a4);
    return a1;
  }
  if ( (unsigned __int64)a3 <= 0x1D )
  {
    v4 = 536920066;
    if ( _bittest64(&v4, a3) )
      goto LABEL_8;
  }
  return a1;
}
