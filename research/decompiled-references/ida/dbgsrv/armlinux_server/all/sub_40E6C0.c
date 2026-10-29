/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E6C0
// Address: 0x000000000040E6C0

//----- (000000000040E6C0) ----------------------------------------------------
void __fastcall sub_40E6C0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x19
  _QWORD *v4; // x20
  void *v5; // x0
  void *v6; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_40E6C0(a1, v2[3]);
      v4 = (_QWORD *)v2[2];
      v5 = (void *)v2[9];
      if ( v5 )
      {
        v2[10] = 0;
        j__free(v5);
      }
      v6 = v2;
      v2 = v4;
      j__free_0(v6);
    }
    while ( v4 );
  }
}
