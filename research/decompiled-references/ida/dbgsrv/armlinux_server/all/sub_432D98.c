/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432D98
// Address: 0x0000000000432D98

//----- (0000000000432D98) ----------------------------------------------------
__int64 __fastcall sub_432D98(__int64 a1)
{
  __int64 v2; // x23
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x24
  unsigned __int64 v6; // x22
  _BYTE *v7; // x0
  __int64 v8; // x2
  size_t v9; // x19
  __int64 v10; // x20
  __int64 v11; // x0
  size_t v12; // x24
  __int64 v13; // x22
  _BYTE *v14; // x0

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = v4 + 1;
  }
  else
  {
    v4 = 1;
    v6 = 2;
    v5 = 0;
  }
  v7 = *(_BYTE **)v3;
  if ( v6 > *(_QWORD *)(v3 + 16) )
  {
    v7 = sub_491288(*(_QWORD *)(v2 + 16), *(void **)v3, v6, 1u);
    *(_QWORD *)v3 = v7;
  }
  *(_QWORD *)(v3 + 8) = v6;
  v7[v5] = 46;
  *(_BYTE *)(*(_QWORD *)v3 + v4) = 0;
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v8 != 1 )
    {
      v10 = *(_QWORD *)(v2 + 16);
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        v13 = v11 - 1;
        v12 = v9 + v11 - 1;
      }
      else
      {
        v12 = v8 - 1;
        v13 = 0;
      }
      v14 = *(_BYTE **)v10;
      if ( v12 + 1 > *(_QWORD *)(v10 + 16) )
      {
        v14 = sub_491288(v10, *(void **)v10, v12 + 1, 1u);
        *(_QWORD *)v10 = v14;
      }
      *(_QWORD *)(v10 + 8) = v12 + 1;
      v14[v12] = 0;
      memcpy((void *)(*(_QWORD *)v10 + v13), *(const void **)(a1 + 40), v9);
    }
  }
  return 0;
}
