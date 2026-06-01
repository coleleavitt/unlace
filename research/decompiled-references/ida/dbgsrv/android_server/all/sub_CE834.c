/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CE834
// Address: 0x00000000000CE834

//----- (00000000000CE834) ----------------------------------------------------
__int64 __fastcall sub_CE834(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x23
  char *v7; // x0
  unsigned int v8; // w21
  unsigned int v9; // w8
  __int64 v10; // x9
  unsigned int v11; // w8
  size_t v12; // x22
  unsigned int v13; // w20
  char v14; // w8
  unsigned int v16; // w8
  unsigned int v17; // w10
  int v18; // w9

  v3 = *(_QWORD *)(a1 + 56);
  v7 = *(char **)(v3 + 72);
  if ( !v7 )
  {
    v8 = 1;
    v7 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(
                   *(_QWORD *)(a1 + 80),
                   (unsigned int)(1 << *(_DWORD *)(v3 + 56)),
                   1);
    *(_QWORD *)(v3 + 72) = v7;
    if ( !v7 )
      return v8;
  }
  v9 = *(_DWORD *)(v3 + 60);
  if ( v9 )
  {
    if ( v9 > a3 )
      goto LABEL_5;
LABEL_11:
    memcpy(v7, (const void *)(a2 - v9), v9);
    v8 = 0;
    *(_QWORD *)(v3 + 64) = *(unsigned int *)(v3 + 60);
    return v8;
  }
  v14 = *(_DWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 64) = 0;
  v9 = 1 << v14;
  *(_DWORD *)(v3 + 60) = v9;
  if ( v9 <= a3 )
    goto LABEL_11;
LABEL_5:
  v10 = *(unsigned int *)(v3 + 68);
  v11 = v9 - v10;
  if ( v11 <= a3 )
    v12 = v11;
  else
    v12 = a3;
  memcpy(&v7[v10], (const void *)(a2 - a3), v12);
  v13 = a3 - v12;
  if ( v13 )
  {
    memcpy(*(void **)(v3 + 72), (const void *)(a2 - v13), v13);
    v8 = 0;
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 60);
    *(_DWORD *)(v3 + 68) = v13;
  }
  else
  {
    v16 = *(_DWORD *)(v3 + 64);
    v17 = *(_DWORD *)(v3 + 60);
    v8 = 0;
    v18 = *(_DWORD *)(v3 + 68) + v12;
    if ( v18 == v17 )
      v18 = 0;
    *(_DWORD *)(v3 + 68) = v18;
    if ( v16 < v17 )
    {
      v8 = 0;
      *(_DWORD *)(v3 + 64) = v16 + v12;
    }
  }
  return v8;
}
