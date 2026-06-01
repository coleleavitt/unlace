/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451650
// Address: 0x0000000000451650

//----- (0000000000451650) ----------------------------------------------------
void __fastcall sub_451650(__int64 a1, int a2)
{
  FILE *v3; // rdi
  bool v4; // zf

  if ( a2 )
    sub_450E00(a1, 0, 0);
  while ( *(_QWORD *)(a1 + 272) )
    sub_448BF0(a1);
  j__free(*(void **)(a1 + 296));
  v3 = *(FILE **)(a1 + 288);
  *(_QWORD *)(a1 + 296) = 0;
  if ( v3 )
    sub_480D70(v3);
  v4 = *(_QWORD *)(a1 + 64) == 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  if ( !v4 )
  {
    do
      sub_4495F0(a1);
    while ( *(_QWORD *)(a1 + 64) );
  }
}
