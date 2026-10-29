/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061F0C
// Address: 0x0000000100061F0C

//----- (0000000100061F0C) ----------------------------------------------------
__int64 __fastcall sub_100061F0C(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // x0
  __int64 v9; // x9
  __int64 v10; // x19
  __int64 v11; // x24
  int v12; // w25
  __int64 v13; // x26
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x23
  __int64 v17; // x0
  _BYTE v19[128]; // [xsp+8h] [xbp-D8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = 32;
  if ( !a3 )
    v9 = 40;
  if ( !(*(__int64 (**)(void))(*v8 + v9))() )
    return 0;
  v10 = (*(__int64 (**)(void))(*a1 + 144LL))();
  if ( !v10 )
    return v10;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, v10, 1459617792);
  if ( (*(unsigned int (__fastcall **)(__int64, const char *))(*a1 + 152LL))(
         v10,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_25:
    (*(void (__fastcall **)(__int64))(*a1 + 120LL))(v10);
    return 0;
  }
  if ( (debug & 0x100000) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 72LL))(*a1, v10);
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 80LL))(*a1, v11);
    sub_100000AA0();
    if ( v12 >= 1 )
    {
      v13 = 0;
      do
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 88LL))(*a1, v11, v13);
        (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*a1 + 96LL))(v14, v19, 128);
        sub_100000AA0();
        v13 = (unsigned int)(v13 + 1);
      }
      while ( v12 != (_DWORD)v13 );
    }
    (*(void (__fastcall **)(__int64, void (__fastcall *)(__int64, __int16, __int64)))(*a1 + 160LL))(v10, sub_100062204);
  }
  v15 = *a1;
  if ( !a3 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(v15 + 128))(v10);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*a1 + 328LL))(v17, a2) != 1 && (debug & 0x100000) != 0 )
      sub_100011BD4();
    return v10;
  }
  if ( *(_DWORD *)(v15 + 368) <= 0x10001FFu )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(v15 + 64))(415);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v10, v16);
    (*(void (__fastcall **)(__int64))(*a1 + 56LL))(v16);
    if ( (debug & 0x100000) == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, v10, 1);
  if ( (debug & 0x100000) != 0 )
LABEL_19:
    sub_100011BD4();
LABEL_20:
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*a1 + 176LL))(v10, a3) != 1 )
    goto LABEL_25;
  if ( (debug & 0x100000) != 0 )
    sub_100011BD4();
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*a1 + 168LL))(v10, a4, 1) != 1
    || (*(unsigned int (__fastcall **)(__int64))(*a1 + 104LL))(v10) != 1 )
  {
    goto LABEL_25;
  }
  return v10;
}
// 10009D908: using guessed type int debug;
