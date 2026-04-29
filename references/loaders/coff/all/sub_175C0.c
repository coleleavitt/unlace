__int64 __fastcall sub_175C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int16 v5; // dx
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  __int64 v11; // r13
  __int64 v12; // r13

  v4 = a1[1];
  if ( *(_WORD *)(v4 + 149) == 0x8000 )
  {
    *(_WORD *)(v4 + 149) = find_custom_fixup("PAGE");
    v7 = a1[1];
    *(_WORD *)(v7 + 151) = find_custom_fixup("HI12");
    v8 = a1[1];
    *(_WORD *)(v8 + 153) = find_custom_fixup("PAGEOFF");
    v9 = a1[1];
    *(_WORD *)(v9 + 155) = find_custom_fixup("LO21");
    v10 = a1[1];
    *(_WORD *)(v10 + 157) = find_custom_fixup("BRANCH14");
    v11 = a1[1];
    *(_WORD *)(v11 + 159) = find_custom_fixup("BRANCH19");
    v12 = a1[1];
    *(_WORD *)(v12 + 161) = find_custom_fixup("BRANCH26");
  }
  switch ( *(_WORD *)(a3 + 12) )
  {
    case 0:
      goto LABEL_6;
    case 1:
      *(_WORD *)a2 = 4;
      *(_DWORD *)(a2 + 4) = 0;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5],
        31,
        0,
        *((unsigned __int8 *)a1 + 64));
      goto LABEL_6;
    case 2:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        1,
        1);
      goto LABEL_6;
    case 3:
      sub_17490(a1, a2, *(_WORD *)(a1[1] + 161LL));
      goto LABEL_6;
    case 4:
      v5 = *(_WORD *)(a1[1] + 149LL);
      goto LABEL_5;
    case 5:
      v5 = *(_WORD *)(a1[1] + 155LL);
      goto LABEL_5;
    case 6:
    case 7:
    case 9:
    case 0xB:
      v5 = *(_WORD *)(a1[1] + 153LL);
      goto LABEL_5;
    case 0xA:
      v5 = *(_WORD *)(a1[1] + 151LL);
LABEL_5:
      sub_17490(a1, a2, v5);
      goto LABEL_6;
    case 0xC:
      *(_WORD *)a2 = 4;
      *(_DWORD *)(a2 + 4) = 0;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[7],
        31,
        0,
        1);
      goto LABEL_6;
    case 0xE:
      *(_WORD *)a2 = 4;
      *(_DWORD *)(a2 + 4) = 0;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5],
        63,
        0,
        *((unsigned __int8 *)a1 + 64));
      goto LABEL_6;
    case 0xF:
      sub_17490(a1, a2, *(_WORD *)(a1[1] + 159LL));
      goto LABEL_6;
    case 0x10:
      sub_17490(a1, a2, *(_WORD *)(a1[1] + 157LL));
LABEL_6:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      result = 0;
      break;
  }
  return result;
}
