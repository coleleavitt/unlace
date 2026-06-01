__int64 __fastcall sub_172D0(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  void (__fastcall *v14)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, __int64); // r12
  __int64 v15; // rbp
  int dword; // eax

  *(_WORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 4;
  if ( *(_BYTE *)(a3 + 14) <= 0xFu )
    LOBYTE(a4) = 9;
  v7 = *(unsigned __int16 *)(a3 + 12);
  switch ( (__int16)v7 )
  {
    case 0:
    case 12:
    case 13:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = (unsigned __int8)a4;
      goto LABEL_6;
    case 1:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = (unsigned __int8)a4;
      v8 = *(unsigned __int8 *)(a3 + 14);
      v9 = -a1[7];
      goto LABEL_7;
    case 2:
    case 15:
    case 19:
      goto LABEL_8;
    case 3:
    case 5:
    case 6:
      a4 = (unsigned __int8)a4;
      goto LABEL_5;
    case 8:
    case 22:
    case 24:
    case 25:
    case 27:
      *(_WORD *)a2 = (unsigned __int8)a4;
      v11 = *(unsigned __int8 *)(a3 + 15);
      v12 = *(unsigned __int8 *)(a3 + 14);
      v13 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 48LL);
      v14 = *(void (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD, __int64))(*a1 + 8LL);
      v15 = a1[7];
      if ( v13 == sub_14A30 )
        dword = get_dword(a1[4]);
      else
        dword = v13((__int64)a1, a1[4]);
      v14(a1, a1[4], v15 - (dword & 0x3FFFFFC), v12, v11, 1);
      goto LABEL_8;
    case 10:
    case 26:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = (unsigned __int8)a4;
      v8 = *(unsigned __int8 *)(a3 + 14);
      v9 = a1[7] - a1[6];
      goto LABEL_7;
    case 48:
      a4 = 7;
      goto LABEL_5;
    case 49:
      a4 = 9;
LABEL_5:
      *(_WORD *)a2 = a4;
      *(_DWORD *)(a2 + 4) = 3;
LABEL_6:
      v8 = *(unsigned __int8 *)(a3 + 14);
      v9 = a1[7];
LABEL_7:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        v9,
        v8,
        *(unsigned __int8 *)(a3 + 15),
        1);
LABEL_8:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))*a1)(a1, v7, a3);
      result = 0;
      break;
  }
  return result;
}

