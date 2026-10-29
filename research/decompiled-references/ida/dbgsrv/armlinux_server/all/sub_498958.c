/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498958
// Address: 0x0000000000498958

//----- (0000000000498958) ----------------------------------------------------
__int64 __fastcall sub_498958(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // x19
  unsigned int v5; // w21
  unsigned __int8 v6; // w0

  v2 = *(unsigned __int64 **)a2;
  if ( !(16LL * *(_QWORD *)(a2 + 8)) )
    return 0;
  v5 = 0;
  do
  {
    v6 = sub_4975C8(a1, v2);
    v2 += 2;
    if ( v6 )
      v5 = v6;
  }
  while ( v2 != (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8)) );
  return v5;
}
