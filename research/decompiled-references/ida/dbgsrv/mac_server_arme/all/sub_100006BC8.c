/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006BC8
// Address: 0x0000000100006BC8

//----- (0000000100006BC8) ----------------------------------------------------
void __fastcall sub_100006BC8(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x8
  _QWORD *v4; // x0
  __int64 v5; // x1
  unsigned int v6; // w2
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2 = *(_QWORD *)(a1 + 536);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    sub_100001520(a1 + 544);
  }
  *(_QWORD *)(a1 + 536) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
    goto LABEL_11;
  v3 = *(_QWORD *)(a1 + 552);
  if ( !v3 )
    LODWORD(v3) = *(_DWORD *)(a1 + 648);
  if ( (int)v3 <= 0 )
  {
LABEL_11:
    if ( under_debugger == 1 )
      __break(1u);
    interr(30016);
    sub_100006CB0(v4, v5, v6);
  }
  else
  {
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    nullsub_21(1);
  }
}
// 100006C80: variable '_18' is possibly undefined
// 100006CAD: variable 'v4' is possibly undefined
// 100006CAD: variable 'v5' is possibly undefined
// 100006CAD: variable 'v6' is possibly undefined
// 10005D108: using guessed type __int64 __fastcall nullsub_21(_QWORD);
// 1000A590D: using guessed type char under_debugger;
