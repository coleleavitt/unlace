/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EFC0
// Address: 0x000000000041EFC0

//----- (000000000041EFC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_41EFC0(
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
  __int64 v10; // r13
  td_err_e v11; // eax
  td_err_e info; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  double v23; // xmm4_8
  double v24; // xmm5_8
  const char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  const char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  td_event_msg_t v39; // [rsp+0h] [rbp-1E8h] BYREF
  td_thrinfo_t infop; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned __int64 v41; // [rsp+1A8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v10 = a1 + 1216;
  while ( 1 )
  {
    v11 = td_ta_event_getmsg(*(const td_thragent_t **)(a1 + 952), &v39);
    if ( v11 )
      break;
    info = td_thr_get_info(v39.th_p, &infop);
    if ( info )
    {
      v25 = sub_40D5E0(info);
      *(double *)a2.m128_u64 = sub_410EA0(
                                 (int)"%s: %s\n",
                                 (__int64)"td_thr_get_info",
                                 (__int64)v25,
                                 v26,
                                 v27,
                                 v28,
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 v29,
                                 v30,
                                 a8,
                                 a9,
                                 v39.event);
    }
    if ( v39.event == TD_CREATE )
    {
      v19 = *(_QWORD *)(a1 + 1224);
      if ( !v19 )
        goto LABEL_23;
      v20 = v10;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v19 + 16);
          v22 = *(_QWORD *)(v19 + 24);
          if ( infop.ti_lid <= *(_DWORD *)(v19 + 32) )
            break;
          v19 = *(_QWORD *)(v19 + 24);
          if ( !v22 )
            goto LABEL_13;
        }
        v20 = v19;
        v19 = *(_QWORD *)(v19 + 16);
      }
      while ( v21 );
LABEL_13:
      if ( v10 == v20 || infop.ti_lid < *(_DWORD *)(v20 + 32) )
      {
LABEL_23:
        if ( (unsigned __int8)sub_412AC0(
                                a2,
                                a3,
                                a4,
                                a5,
                                *(double *)v17.m128_u64,
                                *(double *)v18.m128_u64,
                                a8,
                                a9,
                                a1,
                                (__int64)&infop,
                                v39.th_p) )
          sub_41B7C0(a1, (unsigned int)infop.ti_lid, (__int64)infop.ti_startfunc, a2, a3, a4, a5, v23, v24, a8, a9);
      }
    }
    else if ( v39.event == TD_DEATH )
    {
      sub_41C480(a1, infop.ti_lid, 2, v14, v15, v16, a2, a3, a4, a5, v17, v18, a8, a9, 9);
    }
    else
    {
      *(double *)a2.m128_u64 = sub_410EA0(
                                 (int)"Spurious thread event %d.",
                                 (unsigned int)v39.event,
                                 v13,
                                 v14,
                                 v15,
                                 v16,
                                 a2,
                                 a3,
                                 a4,
                                 a5,
                                 v17,
                                 v18,
                                 a8,
                                 a9,
                                 v39.event);
    }
  }
  if ( v11 != TD_NOMSG )
  {
    v31 = sub_40D5E0(v11);
    sub_410EA0(
      (int)"Cannot get thread event message: %s\n",
      (__int64)v31,
      v32,
      v33,
      v34,
      v35,
      a2,
      a3,
      a4,
      a5,
      v36,
      v37,
      a8,
      a9,
      v39.event);
  }
  return v41 - __readfsqword(0x28u);
}
// 41F112: variable 'v26' is possibly undefined
// 41F112: variable 'v27' is possibly undefined
// 41F112: variable 'v28' is possibly undefined
// 41F112: variable 'v29' is possibly undefined
// 41F112: variable 'v30' is possibly undefined
// 41F04B: variable 'v13' is possibly undefined
// 41F04B: variable 'v14' is possibly undefined
// 41F04B: variable 'v15' is possibly undefined
// 41F04B: variable 'v16' is possibly undefined
// 41F04B: variable 'v17' is possibly undefined
// 41F04B: variable 'v18' is possibly undefined
// 41F0D5: variable 'v23' is possibly undefined
// 41F0D5: variable 'v24' is possibly undefined
// 41F138: variable 'v32' is possibly undefined
// 41F138: variable 'v33' is possibly undefined
// 41F138: variable 'v34' is possibly undefined
// 41F138: variable 'v35' is possibly undefined
// 41F138: variable 'v36' is possibly undefined
// 41F138: variable 'v37' is possibly undefined
