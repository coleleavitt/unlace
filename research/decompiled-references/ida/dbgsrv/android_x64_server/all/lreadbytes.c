/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lreadbytes
// Address: 0x00000000000BEA50

//----- (00000000000BEA50) ----------------------------------------------------
__int64 __fastcall lreadbytes(__int64 a1, void *a2, signed __int64 a3, char a4)
{
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
      v6 = qfread(*(FILE **)(a1 + 8), a2, a3);
    else
      v6 = sub_BE3E0(a1, a2, a3);
    v7 = v6;
  }
  else
  {
    v7 = -1;
  }
  result = (unsigned int)-(v7 != a3);
  if ( v7 == a3 )
  {
    if ( a4 )
    {
      memrev((char *)a2, a3);
      return 0;
    }
  }
  return result;
}
