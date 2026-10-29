/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019C10
// Address: 0x0000000100019C10

//----- (0000000100019C10) ----------------------------------------------------
bool __fastcall sub_100019C10(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // x20
  void *v10; // x21
  __int64 v11; // x23
  __int64 v12; // x22
  void *v13; // x0
  void *v14; // x0
  void *v16; // [xsp+10h] [xbp-450h] BYREF
  __int64 v17; // [xsp+18h] [xbp-448h]
  __int64 v18; // [xsp+20h] [xbp-440h]
  char v19[1024]; // [xsp+28h] [xbp-438h] BYREF

  v8 = *(_QWORD *)(a1 + 192);
  if ( v8 >= 2 )
  {
    qmakepath(v19, 1024, *(const char **)(a1 + 184), a4, a5, a6, a7, a8, a3);
    sub_10001856C(v19, &v16);
    v10 = v16;
    v11 = v17;
    v12 = v18;
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v13 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v13);
      v14 = v16;
      *(_QWORD *)a2 = v10;
      *(_QWORD *)(a2 + 8) = v11;
      *(_QWORD *)(a2 + 16) = v12;
      if ( v14 )
      {
        v17 = 0;
        qfree(v14);
      }
    }
    else
    {
      *(_QWORD *)a2 = v10;
      *(_QWORD *)(a2 + 8) = v11;
      *(_QWORD *)(a2 + 16) = v12;
    }
  }
  return v8 > 1;
}
