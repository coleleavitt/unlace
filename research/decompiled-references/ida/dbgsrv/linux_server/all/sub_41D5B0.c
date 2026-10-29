/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D5B0
// Address: 0x000000000041D5B0

//----- (000000000041D5B0) ----------------------------------------------------
__int64 __fastcall sub_41D5B0(
        __int64 a1,
        td_event_e a2,
        const char **a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const td_thragent_t *v12; // rdi
  td_err_e v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned int v17; // r13d
  const char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  td_notify_t v25; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v12 = *(const td_thragent_t **)(a1 + 952);
  v26 = __readfsqword(0x28u);
  v14 = td_ta_event_addr(v12, a2, &v25);
  if ( v14 )
  {
    v19 = sub_40D5E0(v14);
    sub_410EA0(
      (int)"%s: %s\n",
      (__int64)"td_ta_event_addr",
      (__int64)v19,
      v20,
      v21,
      v22,
      a4,
      a5,
      a6,
      a7,
      v23,
      v24,
      a10,
      a11,
      v25.type);
    return 0;
  }
  v17 = sub_41D540(a1, (__int64)a3, (__off64_t)v25.u.bptaddr, a4, a5, a6, a7, v15, v16, a10, a11);
  if ( !(_BYTE)v17 )
  {
    sub_411B10(a1, "%a: failed to add thread_db breakpoint\n", *(double *)a4.m128_u64);
    return 0;
  }
  sub_4563D0(a1, "%a: added BP for thread event %s\n", *(double *)a4.m128_u64, *a3);
  return v17;
}
// 41D5EE: variable 'v15' is possibly undefined
// 41D5EE: variable 'v16' is possibly undefined
// 41D662: variable 'v20' is possibly undefined
// 41D662: variable 'v21' is possibly undefined
// 41D662: variable 'v22' is possibly undefined
// 41D662: variable 'v23' is possibly undefined
// 41D662: variable 'v24' is possibly undefined
