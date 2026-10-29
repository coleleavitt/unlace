/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003F3C8
// Address: 0x000000010003F3C8

//----- (000000010003F3C8) ----------------------------------------------------
void __fastcall sub_10003F3C8(__int64 *a1)
{
  __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x8
  char **v4; // x19
  char *v5; // x0
  char *v6; // x20
  __int64 v7; // x21
  char *v8; // x8
  void *v9; // x0
  char *v10; // x22

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *a1;
    v3 = v1 - 1;
    a1[1] = v3;
    v4 = (char **)(v2 + 56 * v3);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v4[1];
      if ( v6 )
      {
        v7 = 0;
        do
        {
          v8 = *v4;
          v9 = *(void **)&(*v4)[v7];
          if ( v9 )
          {
            v10 = &v8[v7];
            *(_QWORD *)&v8[v7 + 8] = 0;
            qfree(v9);
            *(_QWORD *)v10 = 0;
            *((_QWORD *)v10 + 2) = 0;
          }
          v7 += 24;
          --v6;
        }
        while ( v6 );
        v5 = *v4;
      }
      v4[1] = nullptr;
      qfree(v5);
      *v4 = nullptr;
      v4[2] = nullptr;
    }
  }
}
