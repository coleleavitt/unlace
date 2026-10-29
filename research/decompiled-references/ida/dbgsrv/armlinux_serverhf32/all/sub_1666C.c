/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1666C
// Address: 0x0001666C

//----- (0001666C) --------------------------------------------------------
int __fastcall sub_1666C(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0
  void *v5; // r0

  v2 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)a1 = &dword_D1648[2];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_80648(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*(void **)(a1 + 20), 0, 4 * *(_DWORD *)(a1 + 24));
  v4 = *(void **)(a1 + 20);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v4 != (void *)(a1 + 44) )
    sub_80648(v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    sub_77E08(v5);
  }
  return a1;
}
// D1648: using guessed type int dword_D1648[4];
