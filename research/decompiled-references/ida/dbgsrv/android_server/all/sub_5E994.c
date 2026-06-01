/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E994
// Address: 0x000000000005E994

//----- (000000000005E994) ----------------------------------------------------
void __fastcall sub_5E994(__int64 a1)
{
  pthread_mutex_t *v2; // x0
  __int16 v3; // w1
  __int64 v4; // x8
  __int64 v5; // x8

  sub_5E8FC(a1 + 112, 0);
  sub_5E8FC(a1 + 136, 0);
  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 || !*(_QWORD *)(v4 + 8) )
  {
LABEL_11:
    v5 = *(_QWORD *)(a1 + 192);
    if ( !v5 )
    {
LABEL_14:
      *(_QWORD *)(a1 + 200) = 0;
      *(_DWORD *)(a1 + 208) = -1;
      *(_QWORD *)(a1 + 416) = 0;
      return;
    }
    if ( *(_DWORD *)(v5 + 136) == -1 )
    {
      *(_DWORD *)(v5 + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_14;
    }
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(485);
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 168) )
  {
LABEL_17:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(262);
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 232) )
  {
LABEL_19:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(263);
    goto LABEL_21;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
LABEL_21:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(264);
    goto LABEL_23;
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
LABEL_23:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(265);
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
LABEL_25:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(266);
    goto LABEL_27;
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
LABEL_27:
    if ( under_debugger )
      goto LABEL_33;
    v2 = interr(267);
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(a1 + 352) )
  {
    if ( *(_QWORD *)(a1 + 376) )
      goto LABEL_31;
    goto LABEL_11;
  }
LABEL_29:
  if ( !under_debugger )
  {
    v2 = interr(268);
LABEL_31:
    if ( !under_debugger )
      v2 = interr(269);
  }
LABEL_33:
  __break(1u);
  sub_5EB14((__int64)v2, v3);
}
// 5EB11: variable 'v2' is possibly undefined
// 5EB11: variable 'v3' is possibly undefined
// 168DF0: using guessed type char under_debugger;
