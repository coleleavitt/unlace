/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62464
// Address: 0x0000000000062464

//----- (0000000000062464) ----------------------------------------------------
__int64 __fastcall sub_62464(_QWORD *a1, int a2)
{
  char *v4; // x1
  unsigned __int16 v5; // w0
  bool v6; // cc
  char v7; // w8
  char v8; // w9
  char v9; // w1
  int v11; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1[6] )
    v4 = (char *)a1[5];
  else
    v4 = &byte_F154B;
  v5 = sub_62274(a1, v4, &v11);
  switch ( v11 )
  {
    case 3:
      v6 = a2 <= 0;
      v7 = -35;
      v8 = -37;
      break;
    case 2:
      v6 = a2 <= 0;
      v7 = -58;
      v8 = -62;
      break;
    case 1:
      v6 = a2 <= 0;
      v7 = -60;
      v8 = -64;
      break;
    default:
      return set_qerrno(0x3Au);
  }
  if ( v6 )
    v9 = v7;
  else
    v9 = v8;
  sub_5ECDC((__int64)a1, v9, v5);
  return 0;
}
// F154B: using guessed type char byte_F154B;
