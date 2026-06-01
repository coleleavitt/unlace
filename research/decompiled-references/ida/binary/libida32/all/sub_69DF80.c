__int64 __fastcall sub_69DF80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // r12
  char tinfo_property; // al
  int tinfo_tid; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a3;
  v12[1] = __readfsqword(0x28u);
  v12[0] = 0;
  v5 = *(_QWORD **)(qword_2CA1698 + 1480);
  v12[0] = get_tinfo_property(v4, 289);
  tinfo_property = get_tinfo_property(v12[0], 2);
  if ( (tinfo_property & 0xF) != 0xD || (tinfo_property & 0x3F) == 0x3D )
  {
    switch ( *(_QWORD *)a1 & 0xFLL )
    {
      case 0LL:
      case 1LL:
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
        goto LABEL_4;
      case 8LL:
        *(_BYTE *)(a2 + 4) = 0;
        tinfo_tid = sub_69AA70(v5, v5[1], *(_DWORD *)(a1 + 12));
        goto LABEL_8;
      case 9LL:
        *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        goto LABEL_4;
      case 0xALL:
        *(_DWORD *)a2 = *(_DWORD *)(a1 + 8);
        goto LABEL_4;
      case 0xBLL:
        *(_DWORD *)a2 = 1;
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(a1 + 8);
        v11 = sub_69AA70(v5, v5[1], *(_DWORD *)(a1 + 12));
        *(_DWORD *)(a2 + 4) = v11;
        LOBYTE(a1) = v11 != -1;
        break;
      case 0xCLL:
        v9 = *(__int16 *)(a1 + 10);
        v10 = *(__int16 *)(a1 + 8);
        *(_QWORD *)(a2 + 4) = -1;
        *(_QWORD *)(a2 + 10) = -1;
        *(_DWORD *)a2 = v10 | (v9 << 16);
LABEL_4:
        LODWORD(a1) = 1;
        break;
      default:
        if ( !under_debugger )
          interr(2922);
        BUG();
    }
  }
  else
  {
    tinfo_tid = get_tinfo_tid(v12, 0);
LABEL_8:
    *(_DWORD *)a2 = tinfo_tid;
    LOBYTE(a1) = tinfo_tid != -1;
  }
  clear_tinfo_t(v12);
  return (unsigned int)a1;
}

