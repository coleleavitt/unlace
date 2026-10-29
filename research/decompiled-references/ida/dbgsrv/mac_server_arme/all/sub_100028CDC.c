/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028CDC
// Address: 0x0000000100028CDC

//----- (0000000100028CDC) ----------------------------------------------------
__int64 __fastcall sub_100028CDC(_QWORD *a1)
{
  __int64 v2; // x9
  int v3; // w8
  __int64 v4; // x8
  __int64 v5; // x22
  size_t v6; // x21
  void *v7; // x20
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x19
  void *v11; // x0

  sub_100028DB8((__int64)a1, 2);
  v2 = a1[41];
  v3 = *(unsigned __int16 *)(a1[40] + 2 * v2 - 2);
  if ( v2 )
    a1[41] = v2 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8LL * a1[44] - 8) + 24LL) = v3;
  v4 = a1[21];
  v5 = a1[20] + 24 * v4;
  v6 = *(_QWORD *)(v5 - 16);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(v5 - 16));
    memcpy(v7, *(const void **)(v5 - 24), v6);
    v4 = a1[21];
    if ( !v4 )
      goto LABEL_9;
  }
  else
  {
    v7 = nullptr;
    if ( !v4 )
      goto LABEL_9;
  }
  v8 = a1[20];
  v9 = v4 - 1;
  a1[21] = v9;
  v10 = v8 + 24 * v9;
  v11 = *(void **)v10;
  if ( *(_QWORD *)v10 )
  {
    *(_QWORD *)(v10 + 8) = 0;
    qfree(v11);
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 16) = 0;
  }
LABEL_9:
  if ( v7 )
    qfree(v7);
  return 0;
}
