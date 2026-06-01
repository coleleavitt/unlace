/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73704
// Address: 0x0000000000073704

//----- (0000000000073704) ----------------------------------------------------
__int64 __fastcall sub_73704(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // x27
  char v9; // w22
  char v10; // w20
  unsigned int qerrno; // w21
  __int64 v12; // x8
  __int64 v13; // x8
  unsigned int v14; // w0
  __int64 v16; // [xsp+38h] [xbp-68h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = a1[7];
  v9 = set_interr_throws(1);
  v10 = sub_778F4(a1, a2, a3, a4);
  set_interr_throws(v9 & 1);
  qerrno = get_qerrno();
  while ( a1[7] > (unsigned __int64)(int)v7 )
  {
    if ( (sub_74984((__int64)a1) & 1) == 0 )
    {
      if ( under_debugger )
        __break(1u);
      interr(508);
      break;
    }
  }
  v12 = a1[13];
  if ( v12 )
    v13 = v12 + 32;
  else
    v13 = 0;
  if ( (v10 & 1) != 0 )
    v14 = 0;
  else
    v14 = qerrno;
  a1[16] = v13;
  set_qerrno(v14);
  return v10 & 1;
}
// 73780: conditional instruction was optimized away because x22.8==0
// 778F4: using guessed type __int64 __fastcall sub_778F4(_QWORD, _QWORD, _QWORD, _QWORD);
// 168DF0: using guessed type char under_debugger;
