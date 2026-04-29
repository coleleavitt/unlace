__int64 __fastcall sub_284A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int v8; // r14d
  unsigned int tinfo_size; // eax
  char tinfo_property; // al
  __int64 v11; // rax
  char v12; // al
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 1504);
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 2:
      if ( *(_QWORD *)(a3 + 32) == a4 )
        goto LABEL_12;
      goto LABEL_3;
    case 3:
    case 4:
    case 5:
      if ( *(_QWORD *)(a3 + 32) == a4 )
        goto LABEL_8;
      goto LABEL_3;
    case 6:
    case 7:
      if ( *(_QWORD *)(a3 + 32) != a4 )
        goto LABEL_3;
      v8 = 1;
      if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL), 2) & 0xF) == 0xA )
        goto LABEL_9;
LABEL_12:
      copy_tinfo_t(a1, *(_QWORD *)(a3 + 24) + 48LL);
      goto LABEL_6;
    case 9:
    case 0xA:
    case 0xB:
    case 0x20:
    case 0x21:
    case 0x22:
      if ( *(_QWORD *)(a3 + 24) == a4 )
        goto LABEL_3;
      v13[0] = 50;
      copy_tinfo_t(a1, v13);
      clear_tinfo_t(v13);
      goto LABEL_6;
    case 0x33:
      tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 48), 2);
      if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
      {
        sub_32C870(v13, v4, a3 + 48);
        copy_tinfo_t(a1, v13);
        clear_tinfo_t(v13);
      }
      else
      {
        copy_tinfo_t(a1, a4 + 48);
      }
      goto LABEL_6;
    case 0x39:
      if ( *(_QWORD *)(a3 + 24) == a4 )
        goto LABEL_3;
      v11 = sub_284720(a3, a4, nullptr);
      copy_tinfo_t(a1, v11 + 64);
      goto LABEL_6;
    case 0x3A:
      if ( *(_QWORD *)(a3 + 24) != a4 )
        goto LABEL_3;
      sub_32C870(v13, *(_QWORD *)(a2 + 1504), a3 + 48);
      copy_tinfo_t(a1, v13);
      clear_tinfo_t(v13);
      goto LABEL_6;
    case 0x4D:
      v12 = get_tinfo_property(*(_QWORD *)(a4 + 48), 2);
      if ( (v12 & 0x3E) != 0 && (v12 & 0xFu) <= 8 )
        goto LABEL_3;
LABEL_8:
      v8 = 2;
LABEL_9:
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(a4 + 48), 0);
      sub_32C760(v13, v4, tinfo_size, v8);
      copy_tinfo_t(a1, v13);
      clear_tinfo_t(v13);
      goto LABEL_6;
    case 0x50:
      if ( !*(_DWORD *)(a4 + 8) )
        goto LABEL_3;
      sub_36DC60(v13, a2, 0);
      copy_tinfo_t(a1, v13);
      clear_tinfo_t(v13);
LABEL_6:
      result = 1;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}
