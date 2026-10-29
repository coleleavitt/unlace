/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438660
// Address: 0x00438660

//----- (00438660) --------------------------------------------------------
int __userpurge sub_438660@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, int a4, char *a5)
{
  const CHAR *v5; // eax
  int v7; // eax

  while ( *(_DWORD *)(a4 + 144) )
    sub_436060(a4, a1, a2);
  *(_DWORD *)(a4 + 116) = sub_433EF0;
  *(_DWORD *)(a4 + 120) = a4;
  *(_DWORD *)(a4 + 160) = 0;
  *(_BYTE *)(a4 + 176) = 0;
  *(_BYTE *)(a4 + 80) = 0;
  *(_DWORD *)(a4 + 188) = 0;
  *(_DWORD *)(a4 + 184) = 0;
  *(_DWORD *)(a4 + 180) = 0;
  if ( !a5 )
  {
    sub_45CC20(1);
    *sub_46B984() = 2;
  }
  sub_453A20(*(void **)(a4 + 156));
  v5 = (const CHAR *)sub_453A90(a5);
  *(_DWORD *)(a4 + 156) = v5;
  if ( !v5 )
    return sub_45C9E0();
  v7 = sub_45CE30(a1, a2, a3, v5);
  *(_DWORD *)(a4 + 152) = v7;
  if ( !v7 )
    return sub_45C9E0();
  if ( *(_BYTE *)(a4 + 320) )
    return sub_435120(a4, a1, 0, 0);
  return 0;
}
