/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8059D50
// Address: 0x08059D50

//----- (08059D50) --------------------------------------------------------
int __cdecl sub_8059D50(int a1, int a2, td_thrhandle_t *th)
{
  td_err_e v3; // eax
  td_err_e v4; // eax
  int v5; // edx
  const char *v7; // eax
  td_thr_events_t event; // [esp+0h] [ebp-1Ch] BYREF
  unsigned int v9; // [esp+Ch] [ebp-10h]

  v9 = __readgsdword(0x14u);
  event.event_bits[0] = 416;
  event.event_bits[1] = 0;
  v3 = td_thr_set_event(th, &event);
  if ( v3 )
  {
    v7 = sub_8054990(v3);
    if ( v9 == __readgsdword(0x14u) )
      sub_8058270("%s: %s\n", "td_thr_set_event", v7, 0);
LABEL_8:
    sub_80D7AB0();
  }
  v4 = td_thr_event_enable(th, 1);
  v5 = 1;
  if ( v4 )
  {
    sub_8054990(v4);
    sub_8058290();
    v5 = 0;
  }
  if ( v9 != __readgsdword(0x14u) )
    goto LABEL_8;
  return v5;
}
