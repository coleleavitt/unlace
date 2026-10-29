/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92438
// Address: 0x00092438

//----- (00092438) --------------------------------------------------------
int __fastcall sub_92438(int a1)
{
  _DWORD **v2; // r5
  _DWORD *v3; // r6
  _DWORD *v4; // r0
  void *v5; // r0

  v2 = (_DWORD **)(a1 + 4464);
  v3 = (_DWORD *)(a1 + 368);
  while ( 1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    *v2 = (_DWORD *)*v4;
    if ( v3 != v4 )
      operator delete[](v4);
  }
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *v2 = v3;
  v5 = *(void **)(a1 + 332);
  if ( v5 != (void *)(a1 + 344) )
    free(v5);
  sub_92498((void **)(a1 + 288));
  sub_924B0((void **)(a1 + 148));
  sub_924B0((void **)(a1 + 8));
  return a1;
}
