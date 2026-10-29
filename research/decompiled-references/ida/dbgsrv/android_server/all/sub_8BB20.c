/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BB20
// Address: 0x000000000008BB20

//----- (000000000008BB20) ----------------------------------------------------
__int64 __fastcall sub_8BB20(__int64 a1)
{
  const char *v2; // x0
  _QWORD *v3; // x0
  int v4; // w8
  void *v5; // x19
  __int64 v6; // x20
  char v7; // w0
  _UNKNOWN **v9; // [xsp+8h] [xbp-2A8h] BYREF
  void *ptr; // [xsp+10h] [xbp-2A0h]
  __int64 v11; // [xsp+18h] [xbp-298h]
  __int64 v12; // [xsp+20h] [xbp-290h]
  __int64 v13; // [xsp+40h] [xbp-270h]
  __int64 v14; // [xsp+250h] [xbp-60h]
  __int64 v15; // [xsp+278h] [xbp-38h]
  int8x16x2_t v16; // 0:q0.32

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  else
    v2 = &byte_F154B;
  v3 = open_linput(v2, 0);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = v3;
  if ( v4 == 11 )
  {
    v9 = &off_15DF48;
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
    v7 = sub_8B428((__int64)&v9, (__int64)v3, 1, 1);
    v9 = &off_15DF48;
    if ( (v7 & 1) != 0 )
      v6 = v14;
    else
      v6 = 0;
    if ( ptr )
    {
      v11 = 0;
      qfree(ptr);
      ptr = nullptr;
      v12 = 0;
    }
  }
  else if ( v4 == 18 )
  {
    sub_4ECD4((__int64)&v9, (__int64)v3, 0, v16);
    sub_4B3A8((__int64)&v9, nullptr);
    if ( sub_4B3EC((__int64)&v9) && (sub_4B520(&v9) & 1) != 0 && (sub_50350((__int64)&v9) & 1) != 0 )
      v6 = v13;
    else
      v6 = 0;
    sub_4BE70(&v9);
  }
  else
  {
    v6 = 0;
  }
  close_linput(v5);
  return v6;
}
// 8BB88: variable 'v16' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
