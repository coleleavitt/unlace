/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EC4C
// Address: 0x000000010002EC4C

//----- (000000010002EC4C) ----------------------------------------------------
void __fastcall sub_10002EC4C(__int64 a1)
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
        v5 = (void *)sub_10002F90C(*v3);
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
  sub_10002E718(a1);
  sub_1000311B8(a1 + 64);
  sub_10003E9E0(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  destroy_lexer(*(_QWORD **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
