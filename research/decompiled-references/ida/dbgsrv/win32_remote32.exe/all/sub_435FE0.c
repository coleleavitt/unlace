/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435FE0
// Address: 0x00435FE0

//----- (00435FE0) --------------------------------------------------------
void __userpurge sub_435FE0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax

  if ( a4 )
    sub_435120(a1, a2, 0, 0);
  while ( *(_DWORD *)(a1 + 144) )
    sub_436060(a1, a2, a3);
  sub_453A20(*(void **)(a1 + 156));
  v5 = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 156) = 0;
  if ( v5 )
    sub_45CF00(a2, a3, v5);
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 160) = -1;
  *(_BYTE *)(a1 + 80) = 0;
  sub_4378A0((_DWORD *)a1);
}
