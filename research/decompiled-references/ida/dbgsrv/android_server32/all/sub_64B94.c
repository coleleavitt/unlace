/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64B94
// Address: 0x00064B94

//----- (00064B94) --------------------------------------------------------
int __fastcall sub_64B94(int a1)
{
  void **v2; // r6
  int v3; // r0
  int v4; // r7
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  *(_DWORD *)(a1 + 252) = 0;
  sub_1B470((int *)(a1 + 196), 0);
  sub_1B7F4((int *)(a1 + 20), 0);
  if ( *(_DWORD *)(a1 + 36) )
  {
    v2 = *(void ***)(a1 + 44);
    v3 = *(_DWORD *)(a1 + 48);
    if ( 4 * v3 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = *v2++;
        qfree(v5);
        v4 -= 4;
      }
      while ( v4 );
      v2 = *(void ***)(a1 + 44);
    }
    if ( v2 )
    {
      *(_DWORD *)(a1 + 48) = 0;
      qfree(v2);
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 44) = 0;
    }
    v6 = *(void **)(a1 + 32);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 36) = 0;
      qfree(v6);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  v7 = *(void **)(a1 + 184);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 188) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 184) = 0;
    *(_DWORD *)(a1 + 192) = 0;
  }
  sub_1B4E4(a1 + 172, *(_DWORD **)(a1 + 176));
  *(_DWORD *)(a1 + 172) = a1 + 176;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  sub_1B430(a1 + 260, *(_DWORD **)(a1 + 264));
  *(_DWORD *)(a1 + 260) = a1 + 264;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 389) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 300))(a1);
}
