/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412AC0
// Address: 0x0000000000412AC0

//----- (0000000000412AC0) ----------------------------------------------------
__int64 __fastcall sub_412AC0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        const td_thrhandle_t *a11)
{
  td_err_e v12; // eax
  td_err_e v13; // edi
  __int64 result; // rax
  const char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rdx
  td_thr_events_t v22[3]; // [rsp+0h] [rbp-18h] BYREF

  v22[1] = (td_thr_events_t)__readfsqword(0x28u);
  v22[0] = (td_thr_events_t)416LL;
  v12 = td_thr_set_event(a11, v22);
  if ( v12 )
  {
    v21 = sub_40D5E0(v12);
    sub_410DF0("%s: %s\n", "td_thr_set_event", v21);
  }
  v13 = td_thr_event_enable(a11, 1);
  result = 1;
  if ( v13 )
  {
    v15 = sub_40D5E0(v13);
    sub_410EA0(
      (int)"%s: %s\n",
      (__int64)"td_thr_event_enable",
      (__int64)v15,
      v16,
      v17,
      v18,
      a1,
      a2,
      a3,
      a4,
      v19,
      v20,
      a7,
      a8,
      v22[0].event_bits[0]);
    return 0;
  }
  return result;
}
// 412B38: variable 'v16' is possibly undefined
// 412B38: variable 'v17' is possibly undefined
// 412B38: variable 'v18' is possibly undefined
// 412B38: variable 'v19' is possibly undefined
// 412B38: variable 'v20' is possibly undefined
