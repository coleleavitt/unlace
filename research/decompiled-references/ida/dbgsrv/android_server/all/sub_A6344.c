/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6344
// Address: 0x00000000000A6344

//----- (00000000000A6344) ----------------------------------------------------
__int64 __fastcall sub_A6344(unsigned int a1, _BYTE *a2, char *a3, _OWORD *a4)
{
  __int128 v4; // q0
  __int128 v6; // q0
  _OWORD v7[2]; // [xsp+0h] [xbp-60h] BYREF
  _OWORD v8[2]; // [xsp+20h] [xbp-40h] BYREF
  __int64 v9; // [xsp+48h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 && !a2[68] )
  {
    v6 = a4[1];
    v8[0] = *a4;
    v8[1] = v6;
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, char *, _OWORD *))(*(_QWORD *)a2 + 32LL))(a2, a1, a3, v8);
  }
  else
  {
    v4 = a4[1];
    v7[0] = *a4;
    v7[1] = v4;
    return sub_A85A4(a1, a3, v7);
  }
}
