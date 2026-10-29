/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4604C0
// Address: 0x00000000004604C0

//----- (00000000004604C0) ----------------------------------------------------
void *__fastcall sub_4604C0(
        __int64 a1,
        char **a2,
        signed int a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  const char *v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int128 v27; // [rsp+10h] [rbp-48h]
  int v28; // [rsp+20h] [rbp-38h]
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  sub_45BD90(a2, a3);
  if ( a3 <= 0 )
  {
    v24 = s1;
    if ( *(_QWORD *)(a4 + 8) )
      v24 = *(const char **)a4;
    return sub_45BFB0(a2, v24);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 440);
    ptr = nullptr;
    v25 = 0x800000028LL;
    v28 = -1;
    v27 = 0;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 552LL))(v16, &v25);
    sub_46CF80(a2, (__int64)&v25);
    if ( *(_BYTE *)(a1 + 184) )
      sub_410EA0(
        (int)"RPC: append_start_or_attach idaregs.nregs %zu\n",
        *(_QWORD *)(*(_QWORD *)(a1 + 440) + 680LL),
        v17,
        v18,
        v19,
        v20,
        (__m128)0LL,
        a6,
        a7,
        a8,
        v21,
        v22,
        a11,
        a12,
        v25);
    sub_46D000(a2, *(_QWORD *)(a1 + 440) + 672LL);
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      j__free(ptr);
    }
    return (void *)(v29 - __readfsqword(0x28u));
  }
}
// 4605A7: variable 'v17' is possibly undefined
// 4605A7: variable 'v18' is possibly undefined
// 4605A7: variable 'v19' is possibly undefined
// 4605A7: variable 'v20' is possibly undefined
// 4605A7: variable 'v21' is possibly undefined
// 4605A7: variable 'v22' is possibly undefined
// 46D000: using guessed type __int64 __fastcall sub_46D000(_QWORD, _QWORD);
