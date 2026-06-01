/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E590
// Address: 0x000000014002E590

//----- (000000014002E590) ----------------------------------------------------
void __fastcall sub_14002E590(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  void *v8; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 32 * a2;
    v6 = v4 - a2;
    do
    {
      v7 = (_QWORD *)(v5 + *a1);
      v8 = (void *)v7[1];
      if ( v8 )
      {
        v7[2] = 0;
        j_free(v8);
        v7[1] = 0;
        v7[3] = 0;
      }
      v5 += 32;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
