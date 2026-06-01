/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DD94
// Address: 0x0003DD94

//----- (0003DD94) --------------------------------------------------------
void __fastcall sub_3DD94(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r6

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v3 = 24 * *(_DWORD *)(v2 - 4);
    v4 = v2 + v3;
    if ( v2 != v2 + v3 )
    {
      while ( 1 )
      {
        sub_455C8((unsigned __int8 *)(v4 - 24));
        v2 = *(_DWORD *)(a1 + 12);
        if ( v2 == v4 - 24 )
          break;
        v4 -= 24;
      }
    }
    sub_81220((void *)(v2 - 8));
  }
  sub_77E08(*(void **)a1);
  sub_77E08(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
}
