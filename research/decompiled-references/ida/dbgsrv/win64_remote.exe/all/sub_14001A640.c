/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A640
// Address: 0x000000014001A640

//----- (000000014001A640) ----------------------------------------------------
void __fastcall sub_14001A640(_QWORD *a1, unsigned __int64 a2)
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
    v5 = 56 * a2;
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
      v5 += 56;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
