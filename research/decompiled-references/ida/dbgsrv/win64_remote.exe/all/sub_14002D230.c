/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D230
// Address: 0x000000014002D230

//----- (000000014002D230) ----------------------------------------------------
void __fastcall sub_14002D230(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    sub_14002E590((_QWORD *)(a1 + 88), 0);
    j_free(*(void **)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v3 = *(void **)(a1 + 112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        sub_140029390(v5 + *(_QWORD *)(a1 + 64));
        v5 += 32;
        --v4;
      }
      while ( v4 );
    }
    *(_QWORD *)(a1 + 72) = 0;
    j_free(*(void **)(a1 + 64));
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
}
