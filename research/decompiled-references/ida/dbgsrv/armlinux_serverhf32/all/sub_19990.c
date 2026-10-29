/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19990
// Address: 0x00019990

//----- (00019990) --------------------------------------------------------
void __fastcall sub_19990(int a1, int a2, int a3, _DWORD *a4)
{
  int v6; // r0
  void *v7; // r7
  int v8; // r5
  void *v9; // r8
  void *v10; // r0
  void *v11; // r7
  void *v12; // r8
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  int v16; // r0

  if ( !a3 )
    goto LABEL_13;
  if ( *(_DWORD *)(a1 + 972) )
  {
    sub_198D4((_DWORD *)a1, nullptr);
    v16 = sub_54390(a1);
    v7 = *(void **)(a1 + 908);
    v8 = v16;
    v9 = v7;
    if ( !v7 )
    {
LABEL_4:
      v10 = *(void **)v8;
      if ( !*(_DWORD *)v8 )
        goto LABEL_6;
      goto LABEL_5;
    }
  }
  else
  {
    v6 = sub_54390(a1);
    v7 = *(void **)(a1 + 908);
    v8 = v6;
    v9 = v7;
    if ( !v7 )
      goto LABEL_4;
  }
  v9 = sub_77E84(4 * (_DWORD)v7);
  memcpy(v9, *(const void **)(a1 + 904), 4 * (_DWORD)v7);
  v10 = *(void **)v8;
  if ( *(_DWORD *)v8 )
  {
LABEL_5:
    *(_DWORD *)(v8 + 4) = 0;
    sub_77E08(v10);
  }
LABEL_6:
  *(_DWORD *)v8 = v9;
  *(_DWORD *)(v8 + 4) = v7;
  *(_DWORD *)(v8 + 8) = v7;
  v11 = *(void **)(a1 + 920);
  v12 = v11;
  if ( v11 )
  {
    v12 = sub_77E84(4 * (_DWORD)v11);
    memcpy(v12, *(const void **)(a1 + 916), 4 * (_DWORD)v11);
    v13 = *(void **)(v8 + 12);
    if ( !v13 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v13 = *(void **)(v8 + 12);
  if ( v13 )
  {
LABEL_8:
    *(_DWORD *)(v8 + 16) = 0;
    sub_77E08(v13);
  }
LABEL_9:
  *(_DWORD *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v11;
  *(_DWORD *)(v8 + 20) = v11;
  v14 = *(void **)(a1 + 904);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 908) = 0;
    sub_77E08(v14);
    *(_DWORD *)(a1 + 904) = 0;
    *(_DWORD *)(a1 + 912) = 0;
  }
  v15 = *(void **)(a1 + 916);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 920) = 0;
    sub_77E08(v15);
    *(_DWORD *)(a1 + 916) = 0;
    *(_DWORD *)(a1 + 924) = 0;
  }
LABEL_13:
  if ( a4 )
    sub_1883C(a1, a4);
}
