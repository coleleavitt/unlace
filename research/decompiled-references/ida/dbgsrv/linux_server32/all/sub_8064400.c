/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8064400
// Address: 0x08064400

//----- (08064400) --------------------------------------------------------
unsigned int __usercall sub_8064400@<eax>(int a1@<eax>)
{
  td_err_e v2; // eax
  td_err_e info; // eax
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int result; // eax
  _DWORD *v8; // [esp+0h] [ebp-188h]
  int v9; // [esp+8h] [ebp-180h]
  td_event_msg_t v10; // [esp+Ch] [ebp-17Ch] BYREF
  td_thrinfo_t infop; // [esp+18h] [ebp-170h] BYREF
  unsigned int v12; // [esp+168h] [ebp-20h]

  v12 = __readgsdword(0x14u);
  v9 = a1 + 660;
  while ( 1 )
  {
    v2 = td_ta_event_getmsg(*(const td_thragent_t **)(a1 + 528), &v10);
    if ( v2 )
      break;
    info = td_thr_get_info(v10.th_p, &infop);
    if ( info )
    {
      sub_8054990(info);
      sub_8058290();
    }
    if ( v10.event == TD_CREATE )
    {
      v4 = *(_DWORD **)(a1 + 664);
      if ( !v4 )
        goto LABEL_24;
      v8 = (_DWORD *)v9;
      do
      {
        while ( 1 )
        {
          v5 = v4[2];
          v6 = v4[3];
          if ( v4[4] >= infop.ti_lid )
            break;
          v4 = (_DWORD *)v4[3];
          if ( !v6 )
            goto LABEL_13;
        }
        v8 = v4;
        v4 = (_DWORD *)v4[2];
      }
      while ( v5 );
LABEL_13:
      if ( (_DWORD *)v9 == v8 || infop.ti_lid < v8[4] )
      {
LABEL_24:
        if ( (unsigned __int8)sub_8059D50(a1, (int)&infop, (td_thrhandle_t *)v10.th_p) )
          sub_80608E0(a1, infop.ti_lid, (int)infop.ti_startfunc);
      }
    }
    else if ( v10.event == TD_DEATH )
    {
      sub_8061680(a1, infop.ti_lid, 2);
    }
    else
    {
      sub_8058290();
    }
  }
  if ( v2 != TD_NOMSG )
  {
    sub_8054990(v2);
    sub_8058290();
  }
  result = v12 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
