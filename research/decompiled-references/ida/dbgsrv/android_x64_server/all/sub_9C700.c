/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C700
// Address: 0x000000000009C700

//----- (000000000009C700) ----------------------------------------------------
void __fastcall sub_9C700(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( a2 )
  {
    sub_9C700(a1, *a2);
    sub_9C700(a1, a2[1]);
    v2 = (void *)a2[7];
    if ( v2 )
    {
      a2[8] = 0;
      qfree(v2);
      a2[7] = 0;
      a2[9] = 0;
    }
    v3 = (void *)a2[4];
    if ( v3 )
    {
      a2[5] = 0;
      qfree(v3);
    }
    operator delete(a2);
  }
}
