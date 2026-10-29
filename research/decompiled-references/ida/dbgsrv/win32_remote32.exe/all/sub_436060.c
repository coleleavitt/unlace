/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436060
// Address: 0x00436060

//----- (00436060) --------------------------------------------------------
char __usercall sub_436060@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // ecx
  int v5; // eax

  if ( !*(_DWORD *)(a1 + 144) )
    return 0;
  if ( *(_DWORD *)(a1 + 152) )
    sub_45CF00(a2, a3, *(_DWORD *)(a1 + 152));
  sub_453A20(*(void **)(a1 + 156));
  *(_DWORD *)(a1 + 156) = 0;
  v4 = *(_DWORD *)(a1 + 140) + 24 * *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v4 - 20);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(v4 - 8);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(v4 - 24);
  *(_BYTE *)(a1 + 80) = *(_BYTE *)(v4 - 4);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v4 - 16);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v4 - 12);
  v5 = *(_DWORD *)(a1 + 144);
  if ( v5 )
    *(_DWORD *)(a1 + 144) = v5 - 1;
  return 1;
}
