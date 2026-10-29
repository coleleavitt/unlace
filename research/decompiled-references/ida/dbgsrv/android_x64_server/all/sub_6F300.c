/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F300
// Address: 0x000000000006F300

//----- (000000000006F300) ----------------------------------------------------
void __fastcall sub_6F300(__int64 a1, char *a2, double a3, __m128 a4)
{
  void *v4; // rdi

  if ( a2 )
  {
    sub_6F300(a1, *(_QWORD **)a2);
    sub_6F300(a1, *((_QWORD **)a2 + 1));
    free_idcv(a2 + 56, a3, a4);
    v4 = *((void **)a2 + 4);
    if ( v4 )
    {
      *((_QWORD *)a2 + 5) = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
