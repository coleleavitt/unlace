/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423C4
// Address: 0x000423C4

//----- (000423C4) --------------------------------------------------------
void __fastcall sub_423C4(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r6
  void *v5; // r0

  v2 = *(int **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( 4 * v3 )
  {
    v4 = 4 * v3;
    do
    {
      if ( *v2 )
      {
        v5 = (void *)sub_42420(*v2);
        operator delete(v5);
      }
      v4 -= 4;
      ++v2;
    }
    while ( v4 );
    v2 = *(int **)a1;
  }
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  sub_41EFC(a1);
  sub_43A10(a1 + 40);
  sub_50078(*(void ***)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  destroy_lexer(*(_DWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = 0;
}
// 43A10: using guessed type int __fastcall sub_43A10(_DWORD);
