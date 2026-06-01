/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000309B8
// Address: 0x00000001000309B8

//----- (00000001000309B8) ----------------------------------------------------
void __fastcall sub_1000309B8(_QWORD *a1, unsigned __int64 a2)
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
    v4 = qvector_reserve(a1, nullptr, a2, 0x30u);
    v5 = a1[2];
    a1[2] = v2;
    v6 = (_QWORD *)*a1;
    v7 = a1[1];
    if ( v7 - 1 >= 0 )
    {
      v8 = v6 + 3;
      v9 = v4;
      do
      {
        *v9 = *(v8 - 3);
        *(v8 - 3) = 0;
        v9[1] = *(v8 - 2);
        *(v8 - 2) = 0;
        v9[2] = *(v8 - 1);
        *(v8 - 1) = 0;
        v9[3] = *v8;
        *v8 = 0;
        v9[4] = v8[1];
        v8[1] = 0;
        v9[5] = v8[2];
        v8[2] = 0;
        v10 = (void *)*v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10);
          *v8 = 0;
          v8[2] = 0;
        }
        v11 = (void *)*(v8 - 3);
        if ( v11 )
        {
          *(v8 - 2) = 0;
          qfree(v11);
          *(v8 - 3) = 0;
          *(v8 - 1) = 0;
        }
        v9 += 6;
        --v7;
        v8 += 6;
      }
      while ( v7 > 0 );
      v6 = (_QWORD *)*a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
