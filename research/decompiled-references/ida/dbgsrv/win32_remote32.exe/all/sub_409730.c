/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409730
// Address: 0x00409730

//----- (00409730) --------------------------------------------------------
int __usercall sub_409730@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  void *v3; // ecx
  _DWORD **v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // esi

  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    sub_40FB70(a2, a1, v3, (*(_DWORD *)(a1 + 20) - (int)v3) >> 2);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v4 = *(_DWORD ***)(a1 + 4);
  *v4[1] = 0;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_DWORD *)*v5;
      sub_4627F2(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  return sub_4627F2(*(void **)(a1 + 4));
}
