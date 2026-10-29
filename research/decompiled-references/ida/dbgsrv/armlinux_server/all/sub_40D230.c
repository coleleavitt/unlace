/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D230
// Address: 0x000000000040D230

//----- (000000000040D230) ----------------------------------------------------
void __fastcall sub_40D230(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x22
  char *v4; // x20
  _QWORD *v5; // x24
  __int64 v6; // x23
  __int64 v7; // x27
  __int64 i; // x21
  char *v9; // x0
  char *v10; // x20
  __int64 v11; // x26
  __int64 j; // x19
  char *v13; // x2
  void *v14; // x0
  void *v15; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_40D230(a1, v2[3]);
      v4 = (char *)v2[5];
      v5 = (_QWORD *)v2[2];
      if ( v4 )
      {
        v6 = v2[6];
        if ( v6 )
        {
          v7 = 0;
          for ( i = 0; i != v6; ++i )
          {
            v9 = *(char **)&v4[v7];
            v10 = &v4[v7];
            if ( v9 )
            {
              v11 = *((_QWORD *)v10 + 1);
              if ( v11 )
              {
                for ( j = 0; j != v11; ++j )
                {
                  v13 = &v9[32 * j];
                  if ( *(int *)v13 >= -1 )
                  {
                    v14 = *((void **)v13 + 1);
                    if ( v14 )
                    {
                      *((_QWORD *)v13 + 2) = 0;
                      j__free(v14);
                    }
                  }
                  v9 = *(char **)v10;
                }
              }
              *((_QWORD *)v10 + 1) = 0;
              j__free(v9);
            }
            v7 += 48;
            v4 = (char *)v2[5];
          }
        }
        v2[6] = 0;
        j__free(v4);
      }
      v15 = v2;
      v2 = v5;
      j__free_0(v15);
    }
    while ( v5 );
  }
}
