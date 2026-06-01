/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030CC8
// Address: 0x0000000100030CC8

//----- (0000000100030CC8) ----------------------------------------------------
void __fastcall sub_100030CC8(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _QWORD *v4; // x20
  char *v5; // x21
  char *v6; // x0
  __int64 v7; // x22
  char *v8; // x23
  _QWORD *v9; // x24
  void *v10; // x0

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, nullptr, a2, 0x20u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v8 = v6 + 16;
      v9 = v4;
      do
      {
        *v9 = *((_QWORD *)v8 - 2);
        *((_QWORD *)v8 - 2) = 0;
        v9[1] = *((_QWORD *)v8 - 1);
        *((_QWORD *)v8 - 1) = 0;
        v9[2] = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0;
        *((_DWORD *)v9 + 6) = *((_DWORD *)v8 + 2);
        v10 = *((void **)v8 - 2);
        if ( v10 )
        {
          *((_QWORD *)v8 - 1) = 0;
          qfree(v10);
          *((_QWORD *)v8 - 2) = 0;
          *(_QWORD *)v8 = 0;
        }
        v9 += 4;
        --v7;
        v8 += 32;
      }
      while ( v7 > 0 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = (char *)v4;
    a1[2] = v5;
  }
}
