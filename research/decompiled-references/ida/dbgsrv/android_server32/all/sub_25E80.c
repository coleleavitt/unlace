/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25E80
// Address: 0x00025E80

//----- (00025E80) --------------------------------------------------------
void __fastcall sub_25E80(int a1, _DWORD *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_25E80(a1, *a2);
    sub_25E80(a1, a2[1]);
    v4 = (void *)a2[5];
    if ( v4 )
    {
      a2[6] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
