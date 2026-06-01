/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460410
// Address: 0x0000000000460410

//----- (0000000000460410) ----------------------------------------------------
__int64 __fastcall sub_460410(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rdi
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  char v28; // [rsp+0h] [rbp-38h]

  v14 = sub_47FD50(a3, a3[1]);
  v15 = sub_47FD50(a3, a3[1]);
  v16 = a3[1];
  v17 = a3;
  v18 = 1;
  v19 = v15;
  v20 = sub_47FD50(v17, v16);
  if ( !(unsigned __int8)sub_4600F0(a1, v14, a4, a5, a6, a7, v21, v22, a10, a11) )
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
            *(_QWORD *)(a1 + 440),
            v14,
            v19,
            v20,
            a2);
  if ( *(_BYTE *)(a1 + 184) )
    sub_410EA0(
      (int)"attach_process(pid=%d, evid=%d) => %d\n",
      v14,
      v19,
      v18,
      v23,
      v24,
      a4,
      a5,
      a6,
      a7,
      v25,
      v26,
      a10,
      a11,
      v28);
  return v18;
}
// 46045F: variable 'v21' is possibly undefined
// 46045F: variable 'v22' is possibly undefined
// 4604B1: variable 'v23' is possibly undefined
// 4604B1: variable 'v24' is possibly undefined
// 4604B1: variable 'v25' is possibly undefined
// 4604B1: variable 'v26' is possibly undefined
// 4604B1: variable 'v28' is possibly undefined
