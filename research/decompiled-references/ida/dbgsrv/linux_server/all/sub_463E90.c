/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463E90
// Address: 0x0000000000463E90

//----- (0000000000463E90) ----------------------------------------------------
__int64 __fastcall sub_463E90(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  int v15; // r12d
  __int64 v16; // rsi
  size_t v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  unsigned int v23; // ebx
  const char *v24; // rdi
  _WORD v26[2]; // [rsp+0h] [rbp-1438h] BYREF
  int v27; // [rsp+4h] [rbp-1434h]
  _DWORD v28[1284]; // [rsp+8h] [rbp-1430h] BYREF
  unsigned __int64 v29; // [rsp+1418h] [rbp-20h]

  v14 = 0;
  v29 = __readfsqword(0x28u);
  v26[0] = 0;
  v27 = 0;
  memset(v28, 0, 5124);
  v15 = *(_DWORD *)(a1 + 1144);
  if ( !a2 )
    v14 = *(_QWORD *)(a1 + 1136);
  v16 = a1 + 8;
  *(double *)a3.m128_u64 = sub_410EA0(
                             (int)"Looking for GNU DWARF file at \"%s\"... ",
                             a1 + 8,
                             a1,
                             0,
                             a13,
                             a14,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7,
                             a8,
                             a9,
                             a10,
                             v26[0]);
  if ( sub_480B00((char *)(a1 + 8))
    && (v16 = a1 + 8,
        (unsigned __int8)sub_463E10(
                           (__int64)v26,
                           (const char *)(a1 + 8),
                           v15,
                           a3,
                           a4,
                           a5,
                           a6,
                           *(double *)v21.m128_u64,
                           *(double *)v22.m128_u64,
                           a9,
                           a10))
    && (!v14
     || (v17 = *(unsigned __int16 *)(v14 + 8), (_WORD)v17 == LOWORD(v28[0]))
     && (v16 = v14 + 10, !memcmp((char *)v28 + 2, (const void *)(v14 + 10), v17))) )
  {
    v23 = 1;
    v24 = "found!\n";
  }
  else
  {
    v23 = 0;
    v24 = "no.\n";
  }
  sub_410EA0((int)v24, v16, v17, v18, v19, v20, a3, a4, a5, a6, v21, v22, a9, a10, v26[0]);
  return v23;
}
// 463F19: variable 'v17' is possibly undefined
// 463F19: variable 'v18' is possibly undefined
// 463F19: variable 'v19' is possibly undefined
// 463F19: variable 'v20' is possibly undefined
// 463F19: variable 'v21' is possibly undefined
// 463F19: variable 'v22' is possibly undefined
