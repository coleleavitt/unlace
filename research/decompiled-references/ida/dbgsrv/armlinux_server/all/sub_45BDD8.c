/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BDD8
// Address: 0x000000000045BDD8

//----- (000000000045BDD8) ----------------------------------------------------
__int64 __fastcall sub_45BDD8(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x22
  unsigned __int64 v5; // x21
  __int64 result; // x0
  const void *v7; // x24
  void *v8; // x0

  v3 = a1 + 272;
  v4 = a2 + 8;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 272);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 276);
  if ( a2 + 8 == a1 + 280 )
    goto LABEL_4;
  v5 = *(_QWORD *)(a1 + 288);
  if ( v5 <= 1 )
  {
    *(_QWORD *)(a2 + 16) = 0;
LABEL_4:
    result = *(unsigned int *)(a1 + 304);
    *(_DWORD *)(a2 + 32) = result;
    return result;
  }
  v7 = *(const void **)(a1 + 280);
  v8 = *(void **)(a2 + 8);
  if ( v5 > *(_QWORD *)(a2 + 24) )
  {
    v8 = sub_491288(v4, *(void **)(a2 + 8), v5, 1u);
    *(_QWORD *)(a2 + 8) = v8;
  }
  *(_QWORD *)(v4 + 8) = v5;
  memmove(v8, v7, v5 - 1);
  *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5 - 1) = 0;
  result = *(unsigned int *)(v3 + 32);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
