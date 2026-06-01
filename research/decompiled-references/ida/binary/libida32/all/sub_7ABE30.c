__int64 __fastcall sub_7ABE30(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v14; // rax

  v6 = **a1;
  if ( a3 )
    v7 = (*(__int64 (**)(void))(v6 + 32))();
  else
    v7 = (*(__int64 (**)(void))(v6 + 40))();
  if ( !v7 )
    return 0;
  v8 = ((__int64 (*)(void))(*a1)[18])();
  v9 = v8;
  if ( !v8 )
    return 0;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 48))(*a1, v8, 1459617792);
  if ( ((unsigned int (__fastcall *)(__int64, const char *))(*a1)[19])(
         v9,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_17:
    ((void (__fastcall *)(__int64))(*a1)[15])(v9);
    return 0;
  }
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 72))(*a1, v9);
    (*(void (__fastcall **)(__int64 *, __int64))(**a1 + 80))(*a1, v10);
    sub_365330();
  }
  v11 = *a1;
  if ( a3 )
  {
    if ( *((_DWORD *)v11 + 92) > (unsigned int)&algn_10001FD[2] )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v11 + 64))(*a1, v9, 1);
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(__int64))v11[8])(415);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 56))(*a1, v9, v12);
      ((void (__fastcall *)(__int64))(*a1)[7])(v12);
    }
    if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      sub_383DA0();
    if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[22])(v9, a3) == 1 )
    {
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
        sub_383DA0();
      if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64))(*a1)[21])(v9, a4, 1) == 1
        && ((unsigned int (__fastcall *)(__int64))(*a1)[13])(v9) == 1 )
      {
        return v9;
      }
    }
    goto LABEL_17;
  }
  v14 = ((__int64 (__fastcall *)(__int64))v11[16])(v9);
  if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[41])(v14, a2) != 1 && (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_383DA0();
  return v9;
}

