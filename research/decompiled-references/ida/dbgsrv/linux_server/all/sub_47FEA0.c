/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FEA0
// Address: 0x000000000047FEA0

//----- (000000000047FEA0) ----------------------------------------------------
_BYTE *__fastcall sub_47FEA0(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  size_t v12; // rbp
  _BYTE *v13; // rax
  unsigned __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  _BYTE *result; // rax
  char v23; // [rsp+0h] [rbp-28h]

  v12 = (unsigned int)sub_47FD50(a1, a2);
  v13 = (_BYTE *)*a1;
  v14 = *a1 + v12;
  if ( a2 < v14 || v14 < (unsigned __int64)v13 || a3 && (!v12 || !*v13) )
    return nullptr;
  v15 = sub_4813B0(v12 + 1);
  if ( !v15 )
    sub_437D10((int)"unpack_ds", a2, v16, v17, v18, v19, a4, a5, a6, a7, v20, v21, a10, a11, v23);
  result = memcpy(v15, (const void *)*a1, v12);
  result[v12] = 0;
  *a1 = v14;
  return result;
}
// 47FF27: variable 'v16' is possibly undefined
// 47FF27: variable 'v17' is possibly undefined
// 47FF27: variable 'v18' is possibly undefined
// 47FF27: variable 'v19' is possibly undefined
// 47FF27: variable 'v20' is possibly undefined
// 47FF27: variable 'v21' is possibly undefined
// 47FF27: variable 'v23' is possibly undefined
