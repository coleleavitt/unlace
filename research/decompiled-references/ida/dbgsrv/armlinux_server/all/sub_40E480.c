/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E480
// Address: 0x000000000040E480

//----- (000000000040E480) ----------------------------------------------------
void __fastcall sub_40E480(__int64 a1, __int64 a2, char a3, char **a4)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x20
  void *v9; // x23
  void *v10; // x0
  void *v11; // x23
  __int64 v12; // x22
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  __int64 v16; // x0

  if ( !a3 )
    goto LABEL_13;
  if ( *(_QWORD *)(a1 + 1856) )
  {
    sub_40E368((_QWORD *)a1, nullptr);
    v9 = nullptr;
    v16 = sub_45D728(a1);
    v7 = *(_QWORD *)(a1 + 1728);
    v8 = v16;
    if ( !v7 )
    {
LABEL_4:
      v10 = *(void **)v8;
      if ( !*(_QWORD *)v8 )
        goto LABEL_6;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = sub_45D728(a1);
    v7 = *(_QWORD *)(a1 + 1728);
    v8 = v6;
    v9 = nullptr;
    if ( !v7 )
      goto LABEL_4;
  }
  v9 = sub_491248(8 * v7);
  memcpy(v9, *(const void **)(a1 + 1720), 8 * v7);
  v10 = *(void **)v8;
  if ( *(_QWORD *)v8 )
  {
LABEL_5:
    *(_QWORD *)(v8 + 8) = 0;
    j__free(v10);
  }
LABEL_6:
  *(_QWORD *)v8 = v9;
  *(_QWORD *)(v8 + 8) = v7;
  v11 = nullptr;
  *(_QWORD *)(v8 + 16) = v7;
  v12 = *(_QWORD *)(a1 + 1752);
  if ( v12 )
  {
    v11 = sub_491248(8 * v12);
    memcpy(v11, *(const void **)(a1 + 1744), 8 * v12);
    v13 = *(void **)(v8 + 24);
    if ( !v13 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v13 = *(void **)(v8 + 24);
  if ( v13 )
  {
LABEL_8:
    *(_QWORD *)(v8 + 32) = 0;
    j__free(v13);
  }
LABEL_9:
  *(_QWORD *)(v8 + 24) = v11;
  *(_QWORD *)(v8 + 32) = v12;
  *(_QWORD *)(v8 + 40) = v12;
  v14 = *(void **)(a1 + 1720);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1728) = 0;
    j__free(v14);
    *(_QWORD *)(a1 + 1720) = 0;
    *(_QWORD *)(a1 + 1736) = 0;
  }
  v15 = *(void **)(a1 + 1744);
  if ( !v15 )
  {
    if ( a4 )
      goto LABEL_14;
    return;
  }
  *(_QWORD *)(a1 + 1752) = 0;
  j__free(v15);
  *(_QWORD *)(a1 + 1744) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
LABEL_13:
  if ( a4 )
LABEL_14:
    sub_40CF30(a1, a4);
}
// 40E480: could not find valid save-restore pair for x24
