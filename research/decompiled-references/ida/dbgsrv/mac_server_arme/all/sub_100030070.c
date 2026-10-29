/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030070
// Address: 0x0000000100030070

//----- (0000000100030070) ----------------------------------------------------
void __fastcall sub_100030070(__int64 a1)
{
  __int64 v2; // x8
  __int64 *v3; // x20
  __int64 v4; // x21
  void *v5; // x0

  v3 = *(__int64 **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
  {
    v4 = 8 * v2;
    do
    {
      if ( *v3 )
      {
        v5 = (void *)sub_100030DA8(*v3);
        operator delete(v5);
      }
      ++v3;
      v4 -= 8;
    }
    while ( v4 );
    v3 = *(__int64 **)a1;
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_10002FB10(a1);
  sub_100032880(a1 + 64);
  sub_100040904(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  destroy_lexer(*(_QWORD **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
