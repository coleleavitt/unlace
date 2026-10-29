/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DF2C
// Address: 0x0003DF2C

//----- (0003DF2C) --------------------------------------------------------
void __fastcall sub_3DF2C(int a1)
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
        sub_45758((unsigned __int8 *)(v4 - 24));
        v2 = *(_DWORD *)(a1 + 12);
        if ( v2 == v4 - 24 )
          break;
        v4 -= 24;
      }
    }
    sub_809E8((void *)(v2 - 8));
  }
  sub_77F70(*(void **)a1);
  sub_77F70(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
}
