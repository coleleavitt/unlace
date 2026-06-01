__int64 __fastcall sub_6BEA30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // rbp
  char tinfo_property; // al
  unsigned __int64 tinfo_tid; // rax
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // rax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a3;
  v13[1] = __readfsqword(0x28u);
  v5 = a2;
  v13[0] = 0;
  v6 = *(_QWORD **)(qword_2CCB598 + 1672);
  v13[0] = get_tinfo_property(v4, 289);
  tinfo_property = get_tinfo_property(v13[0], 2);
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
        *(_BYTE *)(a2 + 8) = 0;
        tinfo_tid = sub_6BB440(v6, v6[1], *(_DWORD *)(a1 + 16));
        goto LABEL_8;
      case 9LL:
        *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(__m128i *)(a2 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 24));
        goto LABEL_4;
      case 0xALL:
        *(_DWORD *)a2 = *(_DWORD *)(a1 + 8);
        goto LABEL_4;
      case 0xBLL:
        *(_DWORD *)a2 = 1;
        *(_QWORD *)(a2 + 264) = *(_QWORD *)(a1 + 8);
        v12 = sub_6BB440(v6, v6[1], *(_DWORD *)(a1 + 16));
        *(_QWORD *)(a2 + 8) = v12;
        LOBYTE(v5) = v12 != -1;
        break;
      case 0xCLL:
        v10 = *(__int16 *)(a1 + 10);
        v11 = *(__int16 *)(a1 + 8);
        *(_QWORD *)(a2 + 4) = -1;
        *(_QWORD *)(a2 + 10) = -1;
        *(_DWORD *)a2 = v11 | (v10 << 16);
LABEL_4:
        v5 = 1;
        break;
      default:
        if ( !under_debugger )
          interr(2922);
        BUG();
    }
  }
  else
  {
    tinfo_tid = get_tinfo_tid(v13, 0);
LABEL_8:
    *(_QWORD *)a2 = tinfo_tid;
    LOBYTE(v5) = tinfo_tid != -1;
  }
  clear_tinfo_t(v13);
  return v5;
}
