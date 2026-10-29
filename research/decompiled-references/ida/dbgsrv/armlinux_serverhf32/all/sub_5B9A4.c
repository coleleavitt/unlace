/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B9A4
// Address: 0x0005B9A4

//----- (0005B9A4) --------------------------------------------------------
int __fastcall sub_5B9A4(int a1, int a2, int a3, _DWORD *a4, int a5, __int64 *a6)
{
  int v9; // r1
  __int64 v10; // kr00_8
  int v11; // r0
  int *v12; // r3
  int v13; // r2
  int v14; // r4
  int v16; // r0
  char *v17; // r8
  const void **v18; // r9
  const char *v19; // r4
  void **v20; // r0
  void **v21; // r9
  int v22; // r4
  unsigned int v23; // r2
  unsigned int v24; // r3
  size_t v25; // r0
  int v26; // r1
  char *v27; // r0
  size_t v28; // r2

  v9 = *(unsigned __int16 *)(a1 + 4);
  v10 = *a6;
  v11 = *(_DWORD *)a6 + 4 * *((_DWORD *)a6 + 1);
  if ( v11 == *(_DWORD *)a6 )
  {
LABEL_6:
    v14 = -1;
    sub_1700C((int)"Bad DWARF section index: %uh.\n", v9);
    return v14;
  }
  if ( v9 != *(_DWORD *)v10 )
  {
    v12 = (int *)(v10 + 4);
    while ( v11 != (_DWORD)v10 )
    {
      v13 = *v12++;
      if ( v9 == v13 )
        goto LABEL_8;
    }
    goto LABEL_6;
  }
LABEL_8:
  v16 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a4 + 8))(*a4);
  v17 = *(char **)(v16 + 4);
  v18 = (const void **)v16;
  if ( v17 )
  {
    v27 = (char *)sub_77E84(*(_DWORD *)(v16 + 4));
    v28 = (size_t)v17;
    v19 = v27;
    v17 = v27;
    memcpy(v27, *v18, v28);
  }
  else
  {
    v19 = (const char *)&dword_8DA5C;
  }
  v20 = (void **)sub_74920((int)v19, 0);
  v21 = v20;
  if ( !v20 )
  {
    sub_1700C((int)"Invalid file path: %s.\n", v19);
    v14 = -1;
    goto LABEL_17;
  }
  v22 = a4[13] + 104 * *(unsigned __int16 *)(a1 + 4);
  sub_74C30((int)v20, *(_QWORD *)(v22 + 32), 0);
  v23 = *(_DWORD *)(v22 + 8);
  v24 = *(_DWORD *)(a2 + 4);
  if ( v23 > v24 )
  {
    sub_5B7EC(a2, v23);
    goto LABEL_22;
  }
  if ( v23 < v24 )
  {
    *(_DWORD *)(a2 + 4) = v23;
LABEL_22:
    v23 = *(_DWORD *)(v22 + 8);
  }
  v25 = sub_74A28((int)v21, *(void **)a2, v23);
  v26 = *(_DWORD *)(v22 + 8);
  if ( v26 == v25 )
  {
    v14 = 0;
  }
  else
  {
    sub_1700C((int)"Cannot read %u bytes (got %zu).\n", v26, v25);
    v14 = -1;
  }
  sub_749E8(v21);
LABEL_17:
  if ( !v17 )
    return v14;
  sub_77E08(v17);
  return v14;
}
// 8DA5C: using guessed type int dword_8DA5C;
