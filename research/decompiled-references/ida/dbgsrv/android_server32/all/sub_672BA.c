/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_672BA
// Address: 0x000672BA

//----- (000672BA) --------------------------------------------------------
void __fastcall sub_672BA(int a1, _DWORD *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_672BA(a1, *a2);
    sub_672BA(a1, a2[1]);
    if ( (int)a2[6] >= -1 )
    {
      v4 = (void *)a2[8];
      if ( v4 )
      {
        a2[9] = 0;
        qfree(v4);
      }
    }
    operator delete(a2);
  }
}
