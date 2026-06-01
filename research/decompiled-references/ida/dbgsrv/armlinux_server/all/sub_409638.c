/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409638
// Address: 0x0000000000409638

//----- (0000000000409638) ----------------------------------------------------
void __fastcall sub_409638(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  void *v4; // x0
  void *v5; // x0

  v2 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)a1 = qword_51D958;
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      j__free_0(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  memset(*(void **)(a1 + 40), 0, 8LL * *(_QWORD *)(a1 + 48));
  v4 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( v4 != (void *)(a1 + 88) )
    j__free_0(v4);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    j__free(v5);
  }
}
// 51D958: using guessed type __int64 qword_51D958[2];
