/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16810
// Address: 0x00016810

//----- (00016810) --------------------------------------------------------
int __fastcall sub_16810(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0
  void *v5; // r0

  v2 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)a1 = &dword_D2648[2];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_809EC(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*(void **)(a1 + 20), 0, 4 * *(_DWORD *)(a1 + 24));
  v4 = *(void **)(a1 + 20);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v4 != (void *)(a1 + 44) )
    sub_809EC(v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    sub_77F70(v5);
  }
  return a1;
}
// D2648: using guessed type int dword_D2648[4];
