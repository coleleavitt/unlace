/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25098
// Address: 0x00025098

//----- (00025098) --------------------------------------------------------
void __fastcall sub_25098(int a1, _DWORD *a2)
{
  void *v4; // r0

  if ( a2 )
  {
    sub_25098(a1, *a2);
    sub_25098(a1, a2[1]);
    v4 = (void *)a2[13];
    if ( v4 )
    {
      a2[14] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
