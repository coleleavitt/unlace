/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030F5C
// Address: 0x0000000100030F5C

//----- (0000000100030F5C) ----------------------------------------------------
void __fastcall sub_100030F5C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _QWORD *v4; // x20
  __int64 v5; // x21
  _QWORD *v6; // x0
  __int64 v7; // x22
  _QWORD *v8; // x23
  _QWORD *v9; // x24
  void *v10; // x0

  v2 = a1[2];
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, nullptr, a2, 0x20u);
    v5 = a1[2];
    a1[2] = v2;
    v6 = (_QWORD *)*a1;
    v7 = a1[1];
    if ( v7 - 1 >= 0 )
    {
      v8 = v6 + 2;
      v9 = v4;
      do
      {
        *(_DWORD *)v9 = *((_DWORD *)v8 - 4);
        v9[1] = *(v8 - 1);
        *(v8 - 1) = 0;
        v9[2] = *v8;
        *v8 = 0;
        v9[3] = v8[1];
        v8[1] = 0;
        v10 = (void *)*(v8 - 1);
        if ( v10 )
        {
          *v8 = 0;
          qfree(v10);
          *(v8 - 1) = 0;
          v8[1] = 0;
        }
        v9 += 4;
        --v7;
        v8 += 4;
      }
      while ( v7 > 0 );
      v6 = (_QWORD *)*a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
