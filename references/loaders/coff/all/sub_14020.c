__int64 __fastcall sub_14020(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // si
  __int64 v6; // rdx

  *(_DWORD *)(a2 + 4) = 4;
  *(_WORD *)a2 = 0;
  a1[5] += *(unsigned int *)(a3 + 18);
  a1[7] += *(unsigned int *)(a3 + 18);
  v4 = *(_WORD *)(a3 + 12);
  if ( v4 <= 0x14u )
  {
    if ( v4 > 0xEu )
    {
      switch ( *(_WORD *)(a3 + 12) )
      {
        case 0x10:
          goto LABEL_17;
        case 0x11:
          goto LABEL_15;
        case 0x12:
          *(_DWORD *)(a2 + 4) = 0;
          *(_WORD *)a2 = 13;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
            a1,
            a1[4],
            a1[5] - a1[4],
            7,
            1,
            1);
          break;
        case 0x13:
          *(_DWORD *)(a2 + 4) = 0;
          *(_WORD *)a2 = 1;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
            a1,
            a1[4],
            a1[5] - a1[4],
            15,
            1,
            1);
          break;
        case 0x14:
          *(_DWORD *)(a2 + 4) = 0;
          *(_WORD *)a2 = 4;
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
            a1,
            a1[4],
            a1[5] - a1[4],
            31,
            1,
            1);
          break;
        default:
          goto LABEL_20;
      }
      return 1;
    }
LABEL_7:
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    return 0;
  }
  if ( v4 > 0x48u )
  {
    if ( v4 == 76 )
    {
LABEL_15:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        0,
        1);
      return 1;
    }
    if ( v4 == 77 )
    {
LABEL_17:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        15,
        0,
        1);
      return 1;
    }
    if ( v4 != 74 )
      goto LABEL_7;
LABEL_20:
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 13;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 7, 0, 1);
    return 1;
  }
  if ( v4 <= 0x40u )
    goto LABEL_7;
  v6 = 1LL << ((unsigned __int8)v4 - 65);
  if ( (v6 & 0x4A) != 0 )
    goto LABEL_20;
  if ( (v6 & 0xA0) == 0 )
  {
    if ( (v6 & 5) == 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)a2 = 4;
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 23, 0, 1);
  return 1;
}
