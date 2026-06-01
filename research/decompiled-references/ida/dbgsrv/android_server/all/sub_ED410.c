/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ED410
// Address: 0x00000000000ED410

//----- (00000000000ED410) ----------------------------------------------------
__int64 __fastcall sub_ED410(__int64 a1)
{
  __int64 v1; // x0
  int v2; // w8

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(unsigned __int8 *)(v1 + 9);
  if ( v2 == 2 )
    return (**(__int64 (__fastcall ***)(__int64))v1)(v1);
  else
    return v2 == 0;
}
