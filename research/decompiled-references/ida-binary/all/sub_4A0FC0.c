__int64 __fastcall sub_4A0FC0(
        __int64 a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _BYTE *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 (*v19)(); // rdx
  unsigned __int8 (*v20)(void); // rdx

  v11 = *(_BYTE **)(a1 + 2392);
  if ( v11[8] > 2u && (v11[10] & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 2376) == 2 )
    {
      v20 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 688LL);
      if ( (char *)v20 != (char *)sub_49AD30 )
      {
        if ( v20() && (*(_BYTE *)(a1 + 1784) & 2) != 0 )
          goto LABEL_3;
        v11 = *(_BYTE **)(a1 + 2392);
      }
    }
    v19 = *(__int64 (**)())(*(_QWORD *)v11 + 168LL);
    if ( (v11[12] & 4) != 0 )
    {
      if ( v19 != exc_chooser_t__::vfunc_21 )
        return ((__int64 (__fastcall *)(_BYTE *, unsigned __int64))v19)(v11, a2);
    }
    else if ( v19 != addon_chooser_t__::vfunc_21 )
    {
      return ((__int64 (__fastcall *)(_BYTE *, unsigned __int64))v19)(v11, a2);
    }
    return -1;
  }
LABEL_3:
  v12 = sub_4A0E20(a1, a3, a4, a5, a6, a7, a8, a9, a10);
  v13 = v12 + 8;
  v14 = *(_QWORD **)(v12 + 16);
  v15 = (_QWORD *)v13;
  if ( !v14 )
    return -1;
  do
  {
    while ( 1 )
    {
      v16 = v14[2];
      v17 = v14[3];
      if ( v14[4] < a2 )
        break;
      v15 = v14;
      v14 = (_QWORD *)v14[2];
      if ( !v16 )
        goto LABEL_8;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v17 );
LABEL_8:
  if ( v15 == (_QWORD *)v13 || a2 < v15[4] )
    return -1;
  return v15[5];
}
