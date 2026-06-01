/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EC57C
// Address: 0x00000000000EC57C

//----- (00000000000EC57C) ----------------------------------------------------
__int64 __fastcall sub_EC57C(__int64 a1)
{
  unsigned __int8 *v1; // x0
  int v2; // w8

  v1 = *(unsigned __int8 **)(a1 + 16);
  v2 = v1[11];
  if ( v2 == 2 )
    return (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v1 + 16LL))(v1);
  else
    return v2 == 0;
}
