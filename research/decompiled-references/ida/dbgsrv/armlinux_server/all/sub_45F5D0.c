/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F5D0
// Address: 0x000000000045F5D0

//----- (000000000045F5D0) ----------------------------------------------------
void __fastcall sub_45F5D0(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v4; // x20
  void *v5; // x0
  void *v6; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_45F5D0(a1, *(_QWORD *)(v2 + 24));
      v4 = *(_QWORD *)(v2 + 16);
      if ( *(int *)(v2 + 40) >= -1 )
      {
        v5 = *(void **)(v2 + 48);
        if ( v5 )
        {
          *(_QWORD *)(v2 + 56) = 0;
          j__free(v5);
        }
      }
      v6 = (void *)v2;
      v2 = v4;
      j__free_0(v6);
    }
    while ( v4 );
  }
}
