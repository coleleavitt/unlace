/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add2
// Address: 0x00000000000C4620

//----- (00000000000C4620) ----------------------------------------------------
__int64 __fastcall rangeset_t_add2(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // x21
  char v5; // w22
  char v6; // w0

  if ( 16LL * *(_QWORD *)(a2 + 8) )
  {
    v2 = *(unsigned __int64 **)a2;
    v5 = 0;
    do
    {
      v6 = rangeset_t_add(a1, v2);
      v2 += 2;
      v5 |= v6;
    }
    while ( v2 != (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  }
  else
  {
    v5 = 0;
  }
  return v5 & 1;
}
