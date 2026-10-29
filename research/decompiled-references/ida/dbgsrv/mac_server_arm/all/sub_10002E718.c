/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E718
// Address: 0x000000010002E718

//----- (000000010002E718) ----------------------------------------------------
void __fastcall sub_10002E718(__int64 a1)
{
  __int64 v1; // x9
  char **v3; // x0
  char **v4; // x23
  char **v5; // x22
  char *v6; // x24
  __int64 v7; // x8
  __int64 v8; // x8
  unsigned __int8 *v9; // x20
  __int64 v10; // x25
  char **v11; // x8

  v1 = *(_QWORD *)(a1 + 48);
  if ( qword_10009CA00 != v1 )
  {
    v3 = off_10009CA08;
    v4 = &off_10009CA08[5 * v1];
    v5 = &off_10009CA08[5 * qword_10009CA00];
    if ( v4 < v5 )
    {
      do
      {
        v6 = v4[3];
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 - 1);
          if ( v7 )
          {
            v8 = 32 * v7;
            v9 = (unsigned __int8 *)&v6[v8 - 32];
            v10 = -v8;
            do
            {
              free_idcv(v9);
              v9 -= 32;
              v10 += 32;
            }
            while ( v10 );
          }
          operator delete[](v6 - 16);
        }
        qfree(*v4);
        qfree(v4[2]);
        v4[4] = nullptr;
        *(_OWORD *)v4 = 0u;
        *((_OWORD *)v4 + 1) = 0u;
        v4 += 5;
      }
      while ( v4 < v5 );
      v3 = off_10009CA08;
    }
    qfree(v3);
    v11 = *(char ***)(a1 + 40);
    qword_10009CA00 = *(_QWORD *)(a1 + 48);
    off_10009CA08 = v11;
  }
}
// 10009CA00: using guessed type __int64 qword_10009CA00;
// 10009CA08: using guessed type char **off_10009CA08;
