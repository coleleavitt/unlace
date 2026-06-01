/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25112
// Address: 0x00025112

//----- (00025112) --------------------------------------------------------
void __fastcall sub_25112(int a1, _DWORD *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_25112(a1, *a2);
    sub_25112(a1, a2[1]);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
