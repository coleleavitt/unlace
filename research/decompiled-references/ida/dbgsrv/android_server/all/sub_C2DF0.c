/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C2DF0
// Address: 0x00000000000C2DF0

//----- (00000000000C2DF0) ----------------------------------------------------
__int64 __fastcall sub_C2DF0(__pid_t a1)
{
  int v2; // w0
  int v3; // w0
  __pid_t v4; // w1
  int v6; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = sub_C1968();
  v3 = sub_C10A4(v2, (int)&v6, a1);
  if ( (unsigned int)(v3 + 1) < 2 || (v6 & 0x7F) == 0 || (((_BYTE)v6 + 1) & 0x7E) != 0 )
    return 0;
  if ( !under_debugger )
    v3 = (unsigned int)interr(1150);
  __break(1u);
  return qwait_timed(v3, v4);
}
// C2E89: variable 'v4' is possibly undefined
// 168DF0: using guessed type char under_debugger;
