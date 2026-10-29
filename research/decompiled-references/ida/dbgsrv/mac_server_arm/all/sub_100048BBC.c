/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048BBC
// Address: 0x0000000100048BBC

//----- (0000000100048BBC) ----------------------------------------------------
void __fastcall sub_100048BBC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // x20
  size_t v7; // x22
  char *v8; // x8
  int v9; // w0
  __int64 v10; // x9
  bool v11; // cf
  unsigned __int64 v12; // x9
  const char *v13; // x21
  size_t v14; // x0
  void *v15; // x0
  unsigned __int64 v16; // x8
  void *v17; // [xsp+0h] [xbp-50h] BYREF
  __int64 v18; // [xsp+8h] [xbp-48h]
  unsigned __int64 v19; // [xsp+10h] [xbp-40h]

  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v17 = qvector_reserve(&v17, nullptr, 9u, 1u);
  v18 = 9;
  *(_QWORD *)v17 = *a2;
  *((_BYTE *)v17 + 8) = 0;
  v6 = v17;
  v7 = v18;
  v8 = &byte_10009CAEC;
  if ( v18 )
    v8 = (char *)v17;
  if ( *v8 == 47 )
  {
    v9 = atoi((const char *)v17 + 1);
    if ( v9 >= 1 )
    {
      v10 = a3[1];
      v11 = v10 != 0;
      v12 = v10 - 1;
      if ( !v11 )
        v12 = 0;
      if ( v12 > (unsigned int)v9 )
      {
        v13 = (const char *)(*a3 + (unsigned int)v9);
        if ( v13 )
        {
          v14 = strlen(v13);
          v7 = v14;
          if ( v14 )
          {
            if ( v19 < v14 + 1 )
            {
              v6 = qvector_reserve(&v17, v6, v14 + 1, 1u);
              v17 = v6;
            }
            v18 = v7 + 1;
            memmove(v6, v13, v7);
            *((_BYTE *)v17 + v7) = 0;
            v6 = v17;
            v7 = v18;
          }
        }
        else
        {
          v7 = 0;
        }
      }
    }
  }
  v15 = *(void **)a1;
  v16 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v19;
  v17 = v15;
  v19 = v16;
  if ( v15 )
  {
    v18 = 0;
    qfree(v15);
  }
}
// 10009CAEC: using guessed type char byte_10009CAEC;
