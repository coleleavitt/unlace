/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044F04
// Address: 0x0000000100044F04

//----- (0000000100044F04) ----------------------------------------------------
void __fastcall sub_100044F04(__int64 a1)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  void *v6; // x0
  _QWORD *v7; // x22

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(a1 + 24);
        v6 = *(void **)(v5 + v4);
        if ( v6 )
        {
          v7 = (_QWORD *)(v5 + v4);
          *(_QWORD *)(v5 + v4 + 8) = 0;
          qfree(v6);
          *v7 = 0;
          v7[2] = 0;
        }
        v4 += 32;
        --v3;
      }
      while ( v3 );
      v2 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  if ( *(char *)(a1 + 23) < 0 )
    operator delete(*(void **)a1);
}
