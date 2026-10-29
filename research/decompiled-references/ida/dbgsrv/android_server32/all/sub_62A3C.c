/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62A3C
// Address: 0x00062A3C

//----- (00062A3C) --------------------------------------------------------
void __fastcall sub_62A3C(int a1, _DWORD *a2)
{
  void *v4; // r0
  void *v5; // r0

  if ( a2 )
  {
    sub_62A3C(a1, *a2);
    sub_62A3C(a1, a2[1]);
    v4 = (void *)a2[7];
    if ( v4 )
    {
      a2[8] = 0;
      qfree(v4);
      a2[9] = 0;
      a2[7] = 0;
    }
    v5 = (void *)a2[4];
    if ( v5 )
    {
      a2[5] = 0;
      qfree(v5);
    }
    operator delete(a2);
  }
}
