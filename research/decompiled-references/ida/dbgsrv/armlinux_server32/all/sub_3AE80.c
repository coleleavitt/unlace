/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AE80
// Address: 0x0003AE80

//----- (0003AE80) --------------------------------------------------------
int __fastcall sub_3AE80(int a1)
{
  __int64 v1; // kr00_8
  int v2; // r2

  v1 = *(_QWORD *)(a1 + 168);
  v2 = *(_DWORD *)(v1 + 4 * (HIDWORD(v1) + 0x3FFFFFFF));
  if ( HIDWORD(v1) )
    *(_DWORD *)(a1 + 172) = HIDWORD(v1) - 1;
  return sub_3ADE0(a1, 172, v2);
}
