/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39BD8
// Address: 0x0000000000039BD8

//----- (0000000000039BD8) ----------------------------------------------------
void __fastcall sub_39BD8(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void **v4; // x0
  unsigned __int64 v5; // x20
  __int64 v6; // x21
  unsigned __int64 v7; // x22
  void *v8; // x8
  void **v9; // x23
  void *v10; // x0
  void **v11; // x0
  unsigned __int64 v12; // x20
  __int64 v13; // x21
  unsigned __int64 v14; // x22
  void *v15; // x8
  void **v16; // x23

  v2 = a1[67];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = (void *)a1[68];
    if ( v3 )
    {
      a1[69] = 0;
      qfree(v3);
      a1[68] = 0;
      a1[70] = 0;
    }
    v4 = (void **)a1[71];
    if ( v4 )
    {
      v5 = a1[72];
      if ( v5 )
      {
        v6 = 0;
        v7 = 1;
        v8 = *v4;
        if ( *v4 )
          goto LABEL_9;
        while ( v7 < v5 )
        {
          v4 = (void **)a1[71];
          ++v7;
          v6 += 3;
          v8 = v4[v6];
          if ( v8 )
          {
LABEL_9:
            v9 = &v4[v6];
            v4[v6 + 1] = nullptr;
            qfree(v8);
            *v9 = nullptr;
            v9[2] = nullptr;
          }
        }
        v4 = (void **)a1[71];
      }
      a1[72] = 0;
      qfree(v4);
      a1[71] = 0;
      a1[73] = 0;
    }
    v10 = (void *)a1[74];
    if ( v10 )
    {
      a1[75] = 0;
      qfree(v10);
      a1[74] = 0;
      a1[76] = 0;
    }
    v11 = (void **)a1[77];
    if ( v11 )
    {
      v12 = a1[78];
      if ( v12 )
      {
        v13 = 0;
        v14 = 1;
        v15 = *v11;
        if ( *v11 )
          goto LABEL_20;
        while ( v14 < v12 )
        {
          v11 = (void **)a1[77];
          ++v14;
          v13 += 3;
          v15 = v11[v13];
          if ( v15 )
          {
LABEL_20:
            v16 = &v11[v13];
            v11[v13 + 1] = nullptr;
            qfree(v15);
            *v16 = nullptr;
            v16[2] = nullptr;
          }
        }
        v11 = (void **)a1[77];
      }
      a1[78] = 0;
      qfree(v11);
      a1[77] = 0;
      a1[79] = 0;
    }
  }
  a1[67] = 0;
}
