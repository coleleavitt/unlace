/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062950
// Address: 0x08062950

//----- (08062950) --------------------------------------------------------
int __cdecl sub_8062950(int a1)
{
  int result; // eax
  td_err_e v2; // eax
  td_err_e v3; // eax
  td_err_e v4; // eax
  td_err_e v5; // eax
  td_err_e v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  int v11; // ecx
  td_thrhandle_t th; // [esp+18h] [ebp-24h] BYREF
  td_thr_events_t event; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v14; // [esp+2Ch] [ebp-10h]

  v14 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 528) )
    goto LABEL_2;
  if ( byte_811E5E0 )
  {
    sub_80A03F0(a1, "DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 724));
    *(_DWORD *)(a1 + 524) = *(_DWORD *)(a1 + 724);
    v2 = td_ta_new((struct ps_prochandle *)(a1 + 524), (td_thragent_t **)(a1 + 528));
    if ( v2 )
    {
      v7 = sub_8054990(v2);
      sub_80A03F0(a1, "DBG: td_ta_new: %s\n", v7);
      result = 0;
      *(_DWORD *)(a1 + 528) = 0;
    }
    else
    {
      v3 = td_ta_map_lwp2thr(*(const td_thragent_t **)(a1 + 528), *(_DWORD *)(a1 + 724), &th);
      if ( v3 == TD_OK )
      {
        v4 = td_thr_event_enable(&th, 8);
        if ( v4 )
        {
          v8 = sub_8054990(v4);
          if ( v14 == __readgsdword(0x14u) )
            sub_8058270("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v8, a1);
        }
        else
        {
          v5 = td_thr_event_enable(&th, 9);
          if ( v5 )
          {
            v10 = sub_8054990(v5);
            if ( v14 == __readgsdword(0x14u) )
              sub_8058270("%s: %s\n", "td_thr_event_enable(TD_DEATH)", v10, v11);
          }
          else
          {
            event.event_bits[0] = 384;
            event.event_bits[1] = 0;
            v6 = td_ta_set_event(*(const td_thragent_t **)(a1 + 528), &event);
            if ( v6 == TD_OK )
            {
              sub_8062860(a1, TD_CREATE, (_DWORD *)(a1 + 532));
              sub_8062860(a1, TD_DEATH, (_DWORD *)(a1 + 540));
              sub_80A03F0(
                a1,
                "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n",
                *(_DWORD *)(a1 + 532),
                *(_DWORD *)(a1 + 540));
              sub_8061E20(a1);
LABEL_2:
              result = 1;
              goto LABEL_3;
            }
            v9 = sub_8054990(v6);
            if ( v14 == __readgsdword(0x14u) )
              sub_8058270("%s: %s\n", "td_ta_set_event", v9, 0);
          }
        }
LABEL_15:
        sub_80D7AB0();
      }
      sub_8054990(v3);
      sub_8058290();
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
LABEL_3:
  if ( v14 != __readgsdword(0x14u) )
    goto LABEL_15;
  return result;
}
// 8062B8B: variable 'v11' is possibly undefined
// 811E5E0: using guessed type char byte_811E5E0;
