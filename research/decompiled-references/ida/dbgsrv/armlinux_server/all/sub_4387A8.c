/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4387A8
// Address: 0x00000000004387A8

//----- (00000000004387A8) ----------------------------------------------------
__int64 __fastcall sub_4387A8(_QWORD *a1)
{
  unsigned int v2; // w22
  __int64 v3; // x0
  int v4; // w1
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x19
  size_t v8; // x23
  void *v9; // x24
  __int64 v10; // x0
  __int64 v11; // x1
  void *v12; // x0
  __int64 v14; // x0
  __int64 v15; // x0

  v2 = sub_438590((__int64)a1, 2);
  if ( !v2 )
  {
    v3 = a1[41];
    v4 = *(unsigned __int16 *)(a1[40] + 2 * v3 - 2);
    if ( v3 )
      a1[41] = v3 - 1;
    *(_DWORD *)(*(_QWORD *)(a1[43] + 8LL * a1[44] - 8) + 24LL) = v4;
  }
  v6 = a1[20];
  v5 = a1[21];
  v7 = 24 * v5 - 24;
  v8 = *(_QWORD *)(v6 + v7 + 8);
  if ( v8 )
  {
    v9 = sub_491248(*(_QWORD *)(v6 + v7 + 8));
    memcpy(v9, *(const void **)(v6 + v7), v8);
    v14 = a1[21];
    if ( v14 )
    {
      v15 = v14 - 1;
      a1[21] = v15;
      v11 = a1[20] + 24 * v15;
      v12 = *(void **)v11;
      if ( *(_QWORD *)v11 )
      {
LABEL_8:
        *(_QWORD *)(v11 + 8) = 0;
        j__free(v12);
      }
    }
  }
  else
  {
    v9 = nullptr;
    if ( !v5 )
      return v2;
    v10 = v5 - 1;
    a1[21] = v10;
    v11 = v6 + 24 * v10;
    v12 = *(void **)v11;
    if ( *(_QWORD *)v11 )
      goto LABEL_8;
  }
  if ( v9 )
    j__free(v9);
  return v2;
}
