/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455008
// Address: 0x0000000000455008

//----- (0000000000455008) ----------------------------------------------------
__int64 __fastcall sub_455008(__int64 a1, int a2)
{
  FILE *v3; // x0
  __int64 result; // x0

  if ( a2 )
    sub_454820(a1, 0, 0);
  while ( *(_QWORD *)(a1 + 272) )
    sub_450440(a1);
  j__free(*(void **)(a1 + 296));
  *(_QWORD *)(a1 + 296) = 0;
  v3 = *(FILE **)(a1 + 288);
  if ( v3 )
    sub_4906A0(v3);
  result = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  for ( *(_DWORD *)(a1 + 304) = -1; result; result = *(_QWORD *)(a1 + 64) )
    sub_450E98(a1);
  return result;
}
