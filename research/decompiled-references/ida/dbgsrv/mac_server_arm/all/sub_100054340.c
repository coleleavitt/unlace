/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100054340
// Address: 0x0000000100054340

//----- (0000000100054340) ----------------------------------------------------
void __fastcall sub_100054340(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _QWORD *v4; // x20
  char *v5; // x21
  char *v6; // x0
  __int64 v7; // x22
  char *v8; // x23
  _QWORD *v9; // x24
  __int128 v10; // q0
  void *v11; // x0
  void *v12; // x0

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, nullptr, a2, 0x48u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v8 = v6 + 24;
      v9 = v4;
      do
      {
        *v9 = *((_QWORD *)v8 - 3);
        *((_QWORD *)v8 - 3) = 0;
        v9[1] = *((_QWORD *)v8 - 2);
        *((_QWORD *)v8 - 2) = 0;
        v9[2] = *((_QWORD *)v8 - 1);
        *((_QWORD *)v8 - 1) = 0;
        v9[3] = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0;
        v9[4] = *((_QWORD *)v8 + 1);
        *((_QWORD *)v8 + 1) = 0;
        v9[5] = *((_QWORD *)v8 + 2);
        *((_QWORD *)v8 + 2) = 0;
        v10 = *(_OWORD *)(v8 + 24);
        v9[8] = *((_QWORD *)v8 + 5);
        *((_OWORD *)v9 + 3) = v10;
        v11 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v11);
          *(_QWORD *)v8 = 0;
          *((_QWORD *)v8 + 2) = 0;
        }
        v12 = *((void **)v8 - 3);
        if ( v12 )
        {
          *((_QWORD *)v8 - 2) = 0;
          qfree(v12);
          *((_QWORD *)v8 - 3) = 0;
          *((_QWORD *)v8 - 1) = 0;
        }
        v9 += 9;
        --v7;
        v8 += 72;
      }
      while ( v7 > 0 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = (char *)v4;
    a1[2] = v5;
  }
}
