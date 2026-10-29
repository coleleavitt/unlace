/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036070
// Address: 0x0000000100036070

//----- (0000000100036070) ----------------------------------------------------
void __fastcall sub_100036070(__int64 a1, unsigned __int8 *a2)
{
  void *v2; // rdi

  if ( a2 )
  {
    sub_100036070(a1, *(_QWORD **)a2);
    sub_100036070(a1, *((_QWORD **)a2 + 1));
    free_idcv(a2 + 56);
    v2 = *((void **)a2 + 4);
    if ( v2 )
    {
      *((_QWORD *)a2 + 5) = 0;
      qfree(v2);
    }
    operator delete(a2);
  }
}
