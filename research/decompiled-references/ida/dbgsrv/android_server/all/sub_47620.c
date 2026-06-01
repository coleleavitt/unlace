/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47620
// Address: 0x0000000000047620

//----- (0000000000047620) ----------------------------------------------------
void __fastcall sub_47620(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_47620(a1, *a2);
    sub_47620(a1, a2[1]);
    v4 = (void *)a2[9];
    if ( v4 )
    {
      a2[10] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
