/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004DFD0
// Address: 0x000000014004DFD0

//----- (000000014004DFD0) ----------------------------------------------------
void __fastcall sub_14004DFD0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rbx
  void *v8; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 120 * a2;
    v6 = v4 - a2;
    do
    {
      v7 = (_QWORD *)(v5 + *a1);
      v8 = (void *)v7[2];
      if ( v8 )
      {
        v7[3] = 0;
        j_free(v8);
        v7[2] = 0;
        v7[4] = 0;
      }
      v5 += 120;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
