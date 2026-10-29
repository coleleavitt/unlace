/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D690
// Address: 0x000000000041D690

//----- (000000000041D690) ----------------------------------------------------
__int64 __fastcall sub_41D690(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  td_err_e v11; // eax
  td_err_e v12; // eax
  td_err_e v13; // eax
  td_err_e v14; // eax
  const td_thragent_t *v15; // rdi
  td_err_e v16; // eax
  double v17; // xmm4_8
  double v18; // xmm5_8
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  const char *v23; // rax
  const char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  const char *v30; // rdx
  const char *v31; // rdx
  const char *v32; // rdx
  td_thrhandle_t v33; // [rsp+0h] [rbp-38h] BYREF
  td_thr_events_t event; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 952) )
    return 1;
  if ( !byte_4C8020 )
    return 0;
  sub_4563D0(a1, "DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 1340));
  *(_DWORD *)(a1 + 948) = *(_DWORD *)(a1 + 1340);
  v11 = td_ta_new((struct ps_prochandle *)(a1 + 948), (td_thragent_t **)(a1 + 952));
  if ( v11 )
  {
    v23 = sub_40D5E0(v11);
    sub_4563D0(a1, "DBG: td_ta_new: %s\n", v23);
    *(_QWORD *)(a1 + 952) = 0;
    return 0;
  }
  else
  {
    v12 = td_ta_map_lwp2thr(*(const td_thragent_t **)(a1 + 952), *(_DWORD *)(a1 + 1340), &v33);
    if ( v12 == TD_OK )
    {
      v13 = td_thr_event_enable(&v33, 8);
      if ( v13 )
      {
        v30 = sub_40D5E0(v13);
        sub_410DF0("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v30);
      }
      v14 = td_thr_event_enable(&v33, 9);
      if ( v14 )
      {
        v32 = sub_40D5E0(v14);
        sub_410DF0("%s: %s\n", "td_thr_event_enable(TD_DEATH)", v32);
      }
      v15 = *(const td_thragent_t **)(a1 + 952);
      event = (td_thr_events_t)384LL;
      v16 = td_ta_set_event(v15, &event);
      if ( v16 )
      {
        v31 = sub_40D5E0(v16);
        sub_410DF0("%s: %s\n", "td_ta_set_event", v31);
      }
      sub_41D5B0(a1, TD_CREATE, (const char **)(a1 + 960), a2, a3, a4, a5, v17, v18, a8, a9);
      sub_41D5B0(a1, TD_DEATH, (const char **)(a1 + 976), a2, a3, a4, a5, v19, v20, a8, a9);
      sub_4563D0(
        a1,
        "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n",
        *(double *)a2.m128_u64,
        *(double *)a3.m128_u64);
      sub_41CC00(a1, *(double *)a2.m128_u64, a3, a4, a5, v21, v22, a8, a9);
      return 1;
    }
    v24 = sub_40D5E0(v12);
    sub_410EA0(
      (int)"%s: %s\n",
      (__int64)"td_ta_map_lwp2thr",
      (__int64)v24,
      v25,
      v26,
      v27,
      a2,
      a3,
      a4,
      a5,
      v28,
      v29,
      a8,
      a9,
      (char)v33.th_ta_p);
    return 0;
  }
}
// 41D796: variable 'v17' is possibly undefined
// 41D796: variable 'v18' is possibly undefined
// 41D7AA: variable 'v19' is possibly undefined
// 41D7AA: variable 'v20' is possibly undefined
// 41D7D1: variable 'v21' is possibly undefined
// 41D7D1: variable 'v22' is possibly undefined
// 41D82A: variable 'v25' is possibly undefined
// 41D82A: variable 'v26' is possibly undefined
// 41D82A: variable 'v27' is possibly undefined
// 41D82A: variable 'v28' is possibly undefined
// 41D82A: variable 'v29' is possibly undefined
// 4C8020: using guessed type char byte_4C8020;
