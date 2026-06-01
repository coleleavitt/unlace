/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001518
// Address: 0x0000000100001518

//----- (0000000100001518) ----------------------------------------------------
void __fastcall sub_100001518(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _QWORD *v4; // x20
  __int64 v5; // x21
  _QWORD *v6; // x0
  __int64 v7; // x22
  _QWORD *v8; // x23
  _QWORD *v9; // x24
  void *v10; // x0
  void *v11; // x0

  v2 = a1[2];
  if ( v2 < a2 )
  {
    v4 = qvector_reserve(a1, nullptr, a2, 0x40u);
    v5 = a1[2];
    a1[2] = v2;
    v6 = (_QWORD *)*a1;
    v7 = a1[1];
    if ( v7 - 1 >= 0 )
    {
      v8 = v6 + 7;
      v9 = v4;
      do
      {
        *(_DWORD *)v9 = *((_DWORD *)v8 - 14);
        v9[1] = *(v8 - 6);
        *(v8 - 6) = 0;
        v9[2] = *(v8 - 5);
        *(v8 - 5) = 0;
        v9[3] = *(v8 - 4);
        *(v8 - 4) = 0;
        *((_DWORD *)v9 + 8) = *((_DWORD *)v8 - 6);
        v9[5] = *(v8 - 2);
        *(v8 - 2) = 0;
        v9[6] = *(v8 - 1);
        *(v8 - 1) = 0;
        v9[7] = *v8;
        *v8 = 0;
        v10 = (void *)*(v8 - 2);
        if ( v10 )
        {
          *(v8 - 1) = 0;
          qfree(v10);
          *(v8 - 2) = 0;
          *v8 = 0;
        }
        v11 = (void *)*(v8 - 6);
        if ( v11 )
        {
          *(v8 - 5) = 0;
          qfree(v11);
          *(v8 - 6) = 0;
          *(v8 - 4) = 0;
        }
        v9 += 8;
        --v7;
        v8 += 8;
      }
      while ( v7 > 0 );
      v6 = (_QWORD *)*a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
