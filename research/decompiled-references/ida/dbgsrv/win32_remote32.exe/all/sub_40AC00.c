/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AC00
// Address: 0x0040AC00

//----- (0040AC00) --------------------------------------------------------
int __usercall sub_40AC00@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // ecx
  int v4; // edi
  void *v5; // eax
  void *v6; // eax

  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    do
    {
      sub_45B190(*(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * ((v3 + *(_DWORD *)(a1 + 12) - 1) & (*(_DWORD *)(a1 + 8) - 1))));
      v3 = *(_DWORD *)(a1 + 16) - 1;
      *(_DWORD *)(a1 + 16) = v3;
    }
    while ( v3 );
    *(_DWORD *)(a1 + 12) = 0;
  }
  if ( *(_DWORD *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    while ( v4 > 0 )
    {
      --v4;
      v5 = *(void **)(*(_DWORD *)(a1 + 4) + 4 * v4);
      if ( v5 )
        sub_4627F2(v5);
    }
    sub_40FB70(a2, v4, *(void **)(a1 + 4), *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v6 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  return sub_4627F2(v6);
}
