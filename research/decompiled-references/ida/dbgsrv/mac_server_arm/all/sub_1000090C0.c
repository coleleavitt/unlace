/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000090C0
// Address: 0x00000001000090C0

//----- (00000001000090C0) ----------------------------------------------------
void __fastcall sub_1000090C0(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  __int64 v5; // x20
  __int64 v6; // x21

  if ( a2 )
  {
    sub_1000090C0(a1, *a2);
    sub_1000090C0(a1, a2[1]);
    v4 = (void *)a2[5];
    if ( v4 )
    {
      v5 = a2[6];
      if ( v5 )
      {
        v6 = 0;
        do
        {
          sub_100009150((char **)(a2[5] + v6));
          v6 += 48;
          --v5;
        }
        while ( v5 );
        v4 = (void *)a2[5];
      }
      a2[6] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}
