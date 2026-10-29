/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419EC
// Address: 0x00000000000419EC

//----- (00000000000419EC) ----------------------------------------------------
__int64 __fastcall sub_419EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  const char *v3; // x0
  const char *v4; // x2
  __int64 (__fastcall **v6)(); // [xsp+0h] [xbp-40h] BYREF
  int v7; // [xsp+8h] [xbp-38h]
  __int64 v8; // [xsp+10h] [xbp-30h]
  _QWORD *v9; // [xsp+18h] [xbp-28h]
  __int64 v10; // [xsp+20h] [xbp-20h]
  __int64 v11; // [xsp+28h] [xbp-18h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a3 == -1 )
  {
    if ( a3[3] )
      v4 = (const char *)a3[2];
    else
      v4 = &byte_F154B;
    return sub_99D18(a1, "Can't import symbols from %s: no imagebase\n", v4);
  }
  else
  {
    v7 = 49;
    v6 = off_156620;
    v8 = a1;
    v9 = a3;
    v10 = a2;
    if ( a3[3] )
      v3 = (const char *)a3[2];
    else
      v3 = &byte_F154B;
    return sub_5991C(v3, &v6, 0);
  }
}
// F154B: using guessed type char byte_F154B;
// 156620: using guessed type __int64 (__fastcall *off_156620[4])();
