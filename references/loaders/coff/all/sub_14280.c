__int64 __fastcall sub_14280(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 result; // rax

  *(_DWORD *)(a2 + 4) = 4;
  *(_WORD *)a2 = 0;
  v3 = *(_WORD *)(a3 + 12);
  switch ( v3 )
  {
    case 0u:
    case 0xDu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
      goto LABEL_3;
    case 2u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        0,
        1);
      goto LABEL_3;
    case 6u:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7] - a1[6],
        25,
        1,
        1);
      goto LABEL_3;
    case 8u:
      *(_DWORD *)(a2 + 4) = 7;
      *(_WORD *)a2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        15,
        1,
        1);
LABEL_3:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))*a1)(a1, v3, a3);
      result = 0;
      break;
  }
  return result;
}
