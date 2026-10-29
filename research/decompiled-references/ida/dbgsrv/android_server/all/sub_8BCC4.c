/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BCC4
// Address: 0x000000000008BCC4

//----- (000000000008BCC4) ----------------------------------------------------
__int64 __fastcall sub_8BCC4(const char *a1)
{
  _QWORD *v2; // x0
  void *v3; // x21
  unsigned int v4; // w19
  _QWORD *v5; // x0
  void *v6; // x20
  _UNKNOWN **v8; // [xsp+78h] [xbp-2A8h] BYREF
  void *ptr; // [xsp+80h] [xbp-2A0h]
  __int64 v10; // [xsp+88h] [xbp-298h]
  __int64 v11; // [xsp+90h] [xbp-290h]
  __int64 v12; // [xsp+2E8h] [xbp-38h]
  int8x16x2_t v13; // 0:q0.32

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = open_linput(a1, 0);
  if ( v2 )
  {
    v3 = v2;
    sub_4ECD4((__int64)&v8, (__int64)v2, 0, v13);
    if ( sub_4B3EC((__int64)&v8) )
    {
      if ( (sub_4B520(&v8) & 1) != 0 )
        v4 = 18;
      else
        v4 = -1;
    }
    else
    {
      v4 = -1;
    }
    sub_4BE70(&v8);
    close_linput(v3);
  }
  else
  {
    v4 = -1;
  }
  v5 = open_linput(a1, 0);
  if ( v5 )
  {
    v6 = v5;
    v8 = &off_15DF48;
    ptr = nullptr;
    v10 = 0;
    v11 = 0;
    if ( (sub_8B428((__int64)&v8, (__int64)v5, 0, 1) & 1) != 0 )
      v4 = 11;
    v8 = &off_15DF48;
    if ( ptr )
    {
      v10 = 0;
      qfree(ptr);
      ptr = nullptr;
      v11 = 0;
    }
    close_linput(v6);
  }
  return v4;
}
// 8BD00: variable 'v13' is possibly undefined
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
