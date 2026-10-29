/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D7C0
// Address: 0x0004D7C0

//----- (0004D7C0) --------------------------------------------------------
void __fastcall sub_4D7C0(int a1, _DWORD *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_4D7C0(a1, *a2);
    sub_4D7C0(a1, a2[1]);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
