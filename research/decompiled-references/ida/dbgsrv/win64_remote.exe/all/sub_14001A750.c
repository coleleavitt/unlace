/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A750
// Address: 0x000000014001A750

//----- (000000014001A750) ----------------------------------------------------
void __fastcall sub_14001A750(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rcx

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 24 * a2;
    v6 = v4 - a2;
    do
    {
      v7 = v5 + *a1;
      v8 = *(void **)v7;
      if ( *(_QWORD *)v7 )
      {
        *(_QWORD *)(v7 + 8) = 0;
        j_free(v8);
        *(_QWORD *)v7 = 0;
        *(_QWORD *)(v7 + 16) = 0;
      }
      v5 += 24;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
