__int64 __fastcall sub_13DE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = *(_WORD *)(a3 + 12);
  switch ( v3 )
  {
    case 0u:
      goto LABEL_4;
    case 1u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        15,
        0,
        1);
      goto LABEL_4;
    case 2u:
    case 0x13u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5] - 2LL - a1[4],
        15,
        1,
        1);
      goto LABEL_4;
    case 6u:
    case 0xBu:
    case 0xCu:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        0,
        1);
      goto LABEL_4;
    case 7u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v4 = a1[4];
      v5 = a1[7] - a1[6];
      goto LABEL_3;
    case 0x14u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      v4 = a1[4];
      v5 = a1[5] - 4LL - v4;
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*a1 + 8LL))(a1, v4, v5, 31, 1, 1);
LABEL_4:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))*a1)(a1, v3, a3);
      result = 0;
      break;
  }
  return result;
}

