/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065A60
// Address: 0x0000000100065A60

//----- (0000000100065A60) ----------------------------------------------------
void __fastcall sub_100065A60(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _QWORD *v4; // x20
  char *v5; // x21
  char *v6; // x0
  __int64 v7; // x22
  char *v8; // x23
  _QWORD *v9; // x24
  __int64 v10; // x8
  void *v11; // x0

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, nullptr, a2, 0x30u);
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
        *(_DWORD *)v9 = *((_DWORD *)v8 - 4);
        v9[1] = *((_QWORD *)v8 - 1);
        *((_QWORD *)v8 - 1) = 0;
        v9[2] = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0;
        v9[3] = *((_QWORD *)v8 + 1);
        *((_QWORD *)v8 + 1) = 0;
        v10 = *((_QWORD *)v8 + 2);
        *((_DWORD *)v9 + 10) = *((_DWORD *)v8 + 6);
        v9[4] = v10;
        v11 = *((void **)v8 - 1);
        if ( v11 )
        {
          *(_QWORD *)v8 = 0;
          qfree(v11);
          *((_QWORD *)v8 - 1) = 0;
          *((_QWORD *)v8 + 1) = 0;
        }
        v9 += 6;
        --v7;
        v8 += 48;
      }
      while ( v7 > 0 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = (char *)v4;
    a1[2] = v5;
  }
}
