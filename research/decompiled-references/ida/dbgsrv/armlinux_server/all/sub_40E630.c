/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E630
// Address: 0x000000000040E630

//----- (000000000040E630) ----------------------------------------------------
void __fastcall sub_40E630(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v4; // x20
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_40E630(a1, *(_QWORD *)(v2 + 24));
      v4 = *(_QWORD *)(v2 + 16);
      v5 = *(void **)(v2 + 176);
      if ( v5 )
      {
        *(_QWORD *)(v2 + 184) = 0;
        j__free(v5);
      }
      v6 = *(void **)(v2 + 152);
      if ( v6 )
      {
        *(_QWORD *)(v2 + 160) = 0;
        j__free(v6);
      }
      sub_40D410(v2 + 104, *(_QWORD **)(v2 + 120));
      v7 = *(void **)(v2 + 80);
      if ( v7 )
      {
        *(_QWORD *)(v2 + 88) = 0;
        j__free(v7);
      }
      v8 = *(void **)(v2 + 56);
      if ( v8 )
      {
        *(_QWORD *)(v2 + 64) = 0;
        j__free(v8);
      }
      v9 = (void *)v2;
      v2 = v4;
      j__free_0(v9);
    }
    while ( v4 );
  }
}
