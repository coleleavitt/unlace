/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468780
// Address: 0x0000000000468780

//----- (0000000000468780) ----------------------------------------------------
__int64 __fastcall sub_468780(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  __int64 v13; // x0
  size_t v14; // x23
  const void **v15; // x24
  const char *v16; // x19
  char *v17; // x24
  void **v18; // x0
  void **v19; // x23
  __int64 v20; // x19
  size_t v21; // x2
  size_t v22; // x0
  unsigned int v23; // w19
  char *v24; // x0
  const void *v25; // x1

  v9 = *(_DWORD **)a6;
  v10 = *(unsigned __int16 *)(a1 + 8);
  v11 = *(_QWORD *)a6 + 4LL * *(_QWORD *)(a6 + 8);
  if ( v11 == *(_QWORD *)a6 )
  {
LABEL_6:
    sub_40A690((int)"Bad DWARF section index: %uh.\n", v10);
    return 0xFFFFFFFFLL;
  }
  while ( (_DWORD)v10 != *v9 )
  {
    if ( (_DWORD *)v11 == ++v9 )
      goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  v14 = *(_QWORD *)(v13 + 8);
  v15 = (const void **)v13;
  if ( v14 )
  {
    v24 = (char *)sub_491248(*(_QWORD *)(v13 + 8));
    v25 = *v15;
    v16 = v24;
    v17 = v24;
    memcpy(v24, v25, v14);
  }
  else
  {
    v16 = (const char *)&qword_4B2D48;
    v17 = nullptr;
  }
  v18 = (void **)sub_48BF60(v16, 0);
  v19 = v18;
  if ( v18 )
  {
    v20 = a4[13] + 120LL * *(unsigned __int16 *)(a1 + 8);
    sub_48C428((__int64)v18, *(_QWORD *)(v20 + 48), 0);
    v21 = *(unsigned int *)(v20 + 8);
    v22 = *(_QWORD *)(a2 + 8);
    if ( v21 > v22 )
    {
      sub_4684E8(a2, *(unsigned int *)(v20 + 8));
      v21 = *(unsigned int *)(v20 + 8);
    }
    else if ( v21 < v22 )
    {
      *(_QWORD *)(a2 + 8) = v21;
      v21 = *(unsigned int *)(v20 + 8);
    }
    if ( sub_48C160((__int64)v19, *(void **)a2, v21) == *(_DWORD *)(v20 + 8) )
    {
      v23 = 0;
    }
    else
    {
      sub_40A690((int)"Cannot read %u bytes (got %zu).\n");
      v23 = -1;
    }
    sub_48C0F8(v19);
  }
  else
  {
    sub_40A690((int)"Invalid file path: %s.\n", v16);
    v23 = -1;
  }
  if ( v17 )
    j__free(v17);
  return v23;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
