/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D044
// Address: 0x000000010003D044

//----- (000000010003D044) ----------------------------------------------------
void __fastcall sub_10003D044(__int64 a1, unsigned __int8 *a2)
{
  int v4; // w8
  void *v5; // x0

  if ( a2 )
  {
    sub_10003D044(a1, *(_QWORD **)a2);
    sub_10003D044(a1, *((_QWORD **)a2 + 1));
    v4 = a2[40];
    if ( v4 == 5 )
    {
      sub_100031978(*((_QWORD *)a2 + 6), a2 + 40);
    }
    else if ( v4 == 7 )
    {
      v5 = *((void **)a2 + 6);
      if ( v5 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v5);
      }
    }
    operator delete(a2);
  }
}
