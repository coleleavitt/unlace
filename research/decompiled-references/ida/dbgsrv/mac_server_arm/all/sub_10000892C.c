/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000892C
// Address: 0x000000010000892C

//----- (000000010000892C) ----------------------------------------------------
__int64 __fastcall sub_10000892C(__int64 a1, _QWORD *a2)
{
  group *v4; // x0
  group *v5; // x20
  int v6; // w0
  gid_t gr_gid; // w8
  __int64 v8; // x12
  unsigned __int64 v9; // x11
  gid_t v10; // w13
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v14; // x0
  gid_t v15[16]; // [xsp+8h] [xbp-58h] BYREF

  sub_1000056E8(a1);
  sub_10005CAB0(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  if ( !getuid() )
    return 1;
  if ( !sub_100005E70() )
    goto LABEL_13;
  v4 = getgrnam("_developer");
  if ( !v4 )
    goto LABEL_13;
  v5 = v4;
  v6 = getgroups(16, v15);
  if ( v6 <= 0 )
    goto LABEL_13;
  gr_gid = v5->gr_gid;
  if ( v15[0] != gr_gid )
  {
    v8 = 1;
    do
    {
      v9 = v8;
      if ( v6 == v8 )
        break;
      v10 = v15[v8++];
    }
    while ( v10 != gr_gid );
    if ( v9 >= (unsigned int)v6 )
      goto LABEL_13;
  }
  if ( !sub_100005F64(a1) )
LABEL_13:
    sub_100000AA0();
  v11 = *(_QWORD *)(a1 + 536);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    sub_100001404(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) != -1 && *(_DWORD *)(a1 + 656) != -1 )
  {
    v12 = *(_QWORD *)(a1 + 552);
    if ( !v12 )
      LODWORD(v12) = *(_DWORD *)(a1 + 648);
    if ( (int)v12 > 0 )
    {
      nullsub_21(1);
      return 1;
    }
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(30016);
  return sub_100008AC8(v14);
}
// 100008AC5: variable 'v14' is possibly undefined
// 1000598A0: using guessed type __int64 __fastcall nullsub_21(_QWORD);
// 10009D90D: using guessed type char under_debugger;
