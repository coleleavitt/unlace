/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002FA40
// Address: 0x000000010002FA40

//----- (000000010002FA40) ----------------------------------------------------
void __fastcall sub_10002FA40(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_10002FA40(a1, *(_QWORD **)a2);
    sub_10002FA40(a1, *((_QWORD **)a2 + 1));
    free_idcv(a2 + 56);
    v4 = *((void **)a2 + 4);
    if ( v4 )
    {
      *((_QWORD *)a2 + 5) = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
