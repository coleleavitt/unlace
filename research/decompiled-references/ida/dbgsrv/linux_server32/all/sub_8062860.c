/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062860
// Address: 0x08062860

//----- (08062860) --------------------------------------------------------
int __cdecl sub_8062860(int a1, td_event_e event, _DWORD *a3)
{
  td_err_e v3; // eax
  int v4; // edi
  const char *v5; // edx
  td_notify_t ptr; // [esp+0h] [ebp-28h] BYREF
  unsigned int v8; // [esp+8h] [ebp-20h]

  v8 = __readgsdword(0x14u);
  v3 = td_ta_event_addr(*(const td_thragent_t **)(a1 + 528), event, &ptr);
  if ( v3 )
  {
    v4 = 0;
    sub_8054990(v3);
    sub_8058290();
  }
  else
  {
    v4 = sub_80627F0(a1, (int)a3, ptr.u.syscallno);
    if ( (_BYTE)v4 )
    {
      v5 = "TD_DEATH";
      if ( event == TD_CREATE )
        v5 = "TD_CREATE";
      sub_80A03F0(a1, "%a: added BP for thread event %s\n", *a3, v5);
    }
    else
    {
      v4 = 0;
      sub_8058E20(a1, "%a: failed to add thread_db breakpoint\n", ptr.u.syscallno);
    }
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
