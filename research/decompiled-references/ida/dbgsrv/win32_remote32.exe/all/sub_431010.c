/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431010
// Address: 0x00431010

//----- (00431010) --------------------------------------------------------
int __usercall sub_431010@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  void *v3; // edx

  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    sub_40FB70(a2, a1, v3, (*(_DWORD *)(a1 + 20) - (int)v3) >> 2);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  sub_430300(a1, a1 + 4, *(int **)(a1 + 4));
  return sub_4627F2(*(void **)(a1 + 4));
}
