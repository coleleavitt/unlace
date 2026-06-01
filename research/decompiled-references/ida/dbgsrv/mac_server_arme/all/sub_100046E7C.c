/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046E7C
// Address: 0x0000000100046E7C

//----- (0000000100046E7C) ----------------------------------------------------
void __fastcall sub_100046E7C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x23
  __int64 v6; // x24
  char *v7; // x0
  __int64 v8; // x25
  __int64 v9; // x26
  char *v10; // x8
  void *v11; // x0
  char *v12; // x27

  v4 = a1[1];
  if ( v4 > a2 )
  {
    v5 = a2;
    do
    {
      v6 = *a1 + 56 * v5;
      v7 = *(char **)v6;
      if ( *(_QWORD *)v6 )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v8 )
        {
          v9 = 0;
          do
          {
            v10 = *(char **)v6;
            v11 = *(void **)(*(_QWORD *)v6 + v9);
            if ( v11 )
            {
              v12 = &v10[v9];
              *(_QWORD *)&v10[v9 + 8] = 0;
              qfree(v11);
              *(_QWORD *)v12 = 0;
              *((_QWORD *)v12 + 2) = 0;
            }
            v9 += 24;
            --v8;
          }
          while ( v8 );
          v7 = *(char **)v6;
        }
        *(_QWORD *)(v6 + 8) = 0;
        qfree(v7);
        *(_QWORD *)v6 = 0;
        *(_QWORD *)(v6 + 16) = 0;
      }
      ++v5;
    }
    while ( v5 != v4 );
  }
  a1[1] = a2;
}
