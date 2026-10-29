/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066858
// Address: 0x0000000100066858

//----- (0000000100066858) ----------------------------------------------------
__int64 __fastcall sub_100066858(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x16
  __int64 v9; // x19
  __int64 v10; // x24
  int v11; // w25
  __int64 v12; // x26
  __int64 v13; // x0
  __int64 *v14; // x0
  __int64 v15; // x23
  __int64 v16; // x0
  _BYTE v18[128]; // [xsp+8h] [xbp-D8h] BYREF

  v8 = **a1;
  if ( a3 )
  {
    if ( !(*(__int64 (**)(void))(v8 + 32))() )
      return 0;
  }
  else if ( !(*(__int64 (**)(void))(v8 + 40))() )
  {
    return 0;
  }
  v9 = ((__int64 (*)(void))(*a1)[18])();
  if ( !v9 )
    return v9;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 48))(*a1, v9, 1459617792);
  if ( ((unsigned int (__fastcall *)(__int64, const char *))(*a1)[19])(
         v9,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_26:
    ((void (__fastcall *)(__int64))(*a1)[15])(v9);
    return 0;
  }
  if ( (debug & 0x100000) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 72))(*a1, v9);
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 80))(*a1, v10);
    sub_100000B44();
    if ( v11 >= 1 )
    {
      v12 = 0;
      do
      {
        v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 88))(*a1, v10, v12);
        ((void (__fastcall *)(__int64, _BYTE *, __int64))(*a1)[12])(v13, v18, 128);
        sub_100000B44();
        v12 = (unsigned int)(v12 + 1);
      }
      while ( v11 != (_DWORD)v12 );
    }
    ((void (__fastcall *)(__int64, void (__fastcall *)(__int64, __int16, __int64)))(*a1)[20])(v9, sub_100066C24);
  }
  v14 = *a1;
  if ( !a3 )
  {
    v16 = ((__int64 (__fastcall *)(__int64))v14[16])(v9);
    if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[41])(v16, a2) != 1 && (debug & 0x100000) != 0 )
      sub_100012E04();
    return v9;
  }
  if ( *((_DWORD *)v14 + 92) <= 0x10001FFu )
  {
    v15 = ((__int64 (__fastcall *)(__int64))v14[8])(415);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 56))(*a1, v9, v15);
    ((void (__fastcall *)(__int64))(*a1)[7])(v15);
    if ( (debug & 0x100000) == 0 )
      goto LABEL_21;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v14 + 64))(v14, v9, 1);
  if ( (debug & 0x100000) != 0 )
LABEL_20:
    sub_100012E04();
LABEL_21:
  if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[22])(v9, a3) != 1 )
    goto LABEL_26;
  if ( (debug & 0x100000) != 0 )
    sub_100012E04();
  if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64))(*a1)[21])(v9, a4, 1) != 1
    || ((unsigned int (__fastcall *)(__int64))(*a1)[13])(v9) != 1 )
  {
    goto LABEL_26;
  }
  return v9;
}
// 1000A5908: using guessed type int debug;
