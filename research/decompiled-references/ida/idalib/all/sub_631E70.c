unsigned __int64 __fastcall sub_631E70(__int64 *a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // r9
  bool v11; // r13
  char v12; // r15
  bool v13; // r13
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int8 v19; // al
  char v20; // al
  __int64 view_options; // rcx
  const char *v22; // rsi
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v24; // [rsp+18h] [rbp-80h]
  __m128i si128; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h]
  char v28; // [rsp+4Ch] [rbp-4Ch]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a2 != 100 )
  {
    switch ( a2 )
    {
      case 2u:
        v19 = getinf_flag(2, 1);
        return enable_auto(v19);
      case 3u:
        v8 = getinf(3);
        if ( (((unsigned __int16)a3 ^ (unsigned __int16)v8) & 0x1006) == 0 )
          return v29 - __readfsqword(0x28u);
        v9 = (v8 >> 1) & 1;
        v10 = (a3 >> 2) & 1;
        v11 = (v8 & 2) == 0;
        if ( (v8 & 0x1000) != 0 )
        {
          if ( (v8 & 2) == 0 || (v8 & 4) != 0 )
          {
            sub_6306B0((__int64)a1, (__int64)&unk_2B34DE0, v8, v8 & 0xFFFFFFF9 | 2, 3);
            LOBYTE(v10) = (a3 & 4) != 0;
          }
          v12 = 1;
          v13 = 0;
          LOBYTE(v9) = 1;
        }
        else
        {
          v12 = v11 & (a3 >> 1);
          if ( v12 )
          {
            v13 = 0;
            LOBYTE(v9) = 0;
            sub_6306B0((__int64)a1, (__int64)&unk_2B34DE0, v8, v8 & 0xFFFFFFFB, 3);
            LOBYTE(v10) = (a3 & 4) != 0;
          }
          else
          {
            v13 = (v8 & 4) != 0 && v11;
            if ( v13 )
            {
              sub_6306B0((__int64)a1, (__int64)&unk_2B34DE0, v8, v8 | 2, 3);
              if ( (getinf(58) & 3) == 1 )
              {
                v16 = *a1;
                if ( !*(_BYTE *)(*a1 + 1516) )
                  return v29 - __readfsqword(0x28u);
                goto LABEL_37;
              }
              goto LABEL_25;
            }
            v13 = (v8 & 4) != 0;
            v12 = (v8 & 4) == 0;
            LOBYTE(v10) = v12 & ((a3 & 4) != 0);
          }
        }
        if ( (_BYTE)v10 )
        {
          v14 = *a1;
          v28 = 1;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A7900);
          v26 = 0xFFFFFFFFLL;
          v27 = 4;
          ptr = nullptr;
          v24 = 0;
          v12 = sub_510D10(v14, (__int64)&si128, (char **)&ptr);
          if ( !v12 )
          {
            sub_6306B0((__int64)a1, (__int64)&unk_2B34DE0, v8, a3, 3);
            v22 = haystack;
            if ( (_QWORD)v24 )
              v22 = (const char *)ptr;
            sub_378C70((__int64)&unk_22D5D2E, v22);
          }
          if ( ptr )
          {
            *(_QWORD *)&v24 = 0;
            qfree(ptr);
          }
          v13 = 0;
        }
        v15 = getinf(58) & 3;
        if ( (v15 == 1) != v13 || (v15 == 3) != (_BYTE)v9 && v12 )
LABEL_25:
          sub_609420(*(_QWORD **)(*a1 + 1672), 1);
        v16 = *a1;
        if ( !*(_BYTE *)(*a1 + 1516) )
          return v29 - __readfsqword(0x28u);
        if ( !v13 )
        {
          v17 = *(_QWORD *)(v16 + 1488);
          v18 = 4;
          goto LABEL_38;
        }
LABEL_37:
        v17 = *(_QWORD *)(v16 + 1496);
        v18 = 8;
LABEL_38:
        *(_QWORD *)(v16 + 1504) = v17;
        *(_DWORD *)(v16 + 1512) = v18;
        break;
      case 0x1Eu:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
        if ( a4 && (unsigned __int8)sub_3FB5F0() )
        {
          v20 = getinf_flag(2, 128);
          view_options = get_view_options(v20);
          switch ( a2 )
          {
            case 0x1Eu:
              *(_BYTE *)(view_options + 5) = *(_BYTE *)(*a1 + 824);
              break;
            case 0x28u:
              *(_BYTE *)(view_options + 8) = *(_BYTE *)(*a1 + 842);
              break;
            case 0x29u:
              *(_BYTE *)(view_options + 7) = *(_BYTE *)(*a1 + 843);
              break;
            case 0x2Au:
              *(_WORD *)(view_options + 10) = *(_WORD *)(*a1 + 844);
              break;
            case 0x2Eu:
              *(_BYTE *)(view_options + 9) = *(_BYTE *)(*a1 + 853);
              break;
            case 0x2Fu:
              *(_WORD *)(view_options + 12) = *(_WORD *)(*a1 + 854);
              break;
            case 0x30u:
              *(_BYTE *)(view_options + 14) = *(_BYTE *)(*a1 + 856);
              break;
            default:
              return v29 - __readfsqword(0x28u);
          }
        }
        return v29 - __readfsqword(0x28u);
      case 0x38u:
      case 0x3Au:
      case 0x62u:
      case 0x63u:
        v7 = getinf(99);
        if ( v7 == 176 || v7 == 256 )
          sub_6091E0(*a1);
        if ( a2 == 58 || a2 == 99 )
          sub_6511B0(*a1, 5, 0, 0, 0);
        return sub_39ADA0(0xBu, 0);
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
        if ( a3 == (unsigned __int8)getinf(a2) )
          return v29 - __readfsqword(0x28u);
        return sub_6511B0(*a1, 5, 0, 0, 0);
      case 0x55u:
        return mark_builtin_widgets(0x20000000, 0, 1);
      default:
        return v29 - __readfsqword(0x28u);
    }
  }
  return v29 - __readfsqword(0x28u);
}
