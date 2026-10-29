/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B4E4
// Address: 0x0001B4E4

//----- (0001B4E4) --------------------------------------------------------
void __fastcall sub_1B4E4(int a1, _DWORD *a2)
{
  void *v4; // r0
  void *v5; // r0

  if ( a2 )
  {
    sub_1B4E4(a1, *a2);
    sub_1B4E4(a1, a2[1]);
    v4 = (void *)a2[10];
    if ( v4 )
    {
      a2[11] = 0;
      qfree(v4);
      a2[12] = 0;
      a2[10] = 0;
    }
    v5 = (void *)a2[6];
    if ( v5 )
    {
      a2[7] = 0;
      qfree(v5);
    }
    operator delete(a2);
  }
}
