/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A500
// Address: 0x000000014001A500

//----- (000000014001A500) ----------------------------------------------------
void __fastcall sub_14001A500(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rcx
  void *v9; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 80 * a2;
    v6 = v4 - a2;
    do
    {
      v7 = *a1;
      v8 = *(void **)(v5 + *a1 + 40);
      if ( v8 )
      {
        *(_QWORD *)(v5 + v7 + 48) = 0;
        j_free(v8);
        *(_QWORD *)(v5 + v7 + 40) = 0;
        *(_QWORD *)(v5 + v7 + 56) = 0;
      }
      v9 = *(void **)(v5 + v7 + 16);
      if ( v9 )
      {
        *(_QWORD *)(v5 + v7 + 24) = 0;
        j_free(v9);
        *(_QWORD *)(v5 + v7 + 16) = 0;
        *(_QWORD *)(v5 + v7 + 32) = 0;
      }
      v5 += 80;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
