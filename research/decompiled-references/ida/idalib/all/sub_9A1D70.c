unsigned __int64 *__fastcall sub_9A1D70(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int64 *result; // rax
  unsigned __int16 *v8; // rax
  unsigned int v9; // [rsp+Ch] [rbp-Ch]

  while ( 2 )
  {
    if ( a2 )
    {
      v6 = *(_WORD *)a2 & 0x1FF;
      if ( (((_WORD)v6 + 509) & 0x1FFu) <= 0x7E )
      {
        v9 = a3;
        v8 = (unsigned __int16 *)sub_BFB9F0(a2);
        a3 = v9;
        v6 = *v8;
        a2 = v8;
        LOWORD(v6) = v6 & 0x1FF;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 2320) + 64LL) && (((_WORD)v6 + 351) & 0x1FFu) <= 0x4B )
      {
        return (unsigned __int64 *)sub_9A5BB0(a1);
      }
      else
      {
        switch ( v6 )
        {
          case 1LL:
            return sub_99DC60((__int64)a1, a2);
          case 2LL:
            return (unsigned __int64 *)sub_99F0D0((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 4LL:
            return (unsigned __int64 *)sub_9A33A0(a1, a2);
          case 5LL:
            return (unsigned __int64 *)sub_99E920(a1, (unsigned __int64)a2, a3);
          case 10LL:
            return (unsigned __int64 *)sub_99E850(a1, (__int64)a2, a3);
          case 17LL:
            return (unsigned __int64 *)sub_9A3710(a1, a2);
          case 26LL:
          case 238LL:
            goto LABEL_10;
          case 33LL:
            return (unsigned __int64 *)sub_9A2FF0(a1, a2);
          case 46LL:
            return (unsigned __int64 *)sub_9A3A60(a1, a2);
          case 48LL:
            return (unsigned __int64 *)sub_9A2500(a1, a2);
          case 51LL:
            return (unsigned __int64 *)sub_9A3B30(a1, a2);
          case 53LL:
            return (unsigned __int64 *)sub_9A5A80(a1, a2);
          case 54LL:
            if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 71) )
              goto LABEL_12;
LABEL_10:
            result = (unsigned __int64 *)a1[1].m128i_i64[0];
            break;
          case 60LL:
            return sub_9A1960(a1, (__int64)a2, a3, 0, a5, a6);
          case 61LL:
            a2 = (_QWORD *)a2[2];
            a3 = 0;
            continue;
          case 72LL:
          case 73LL:
            return (unsigned __int64 *)sub_9A34B0(a1, a2);
          case 77LL:
            return (unsigned __int64 *)sub_9A1470(a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 79LL:
            return (unsigned __int64 *)sub_9A3CE0(a1, a2);
          case 86LL:
            return sub_9A1CA0(a1, (__int64)a2, a3);
          case 89LL:
          case 90LL:
          case 91LL:
          case 92LL:
            return (unsigned __int64 *)sub_9A4DA0(a1, a2);
          case 96LL:
            return (unsigned __int64 *)sub_9A2E10(a1, a2);
          case 97LL:
            return (unsigned __int64 *)sub_9A2480(a1, a2);
          case 106LL:
            return sub_9A1AF0(a1, (unsigned __int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 110LL:
            return (unsigned __int64 *)sub_9A2910(a1, a2);
          case 113LL:
            return (unsigned __int64 *)sub_9A25F0(a1, a2);
          case 114LL:
            return (unsigned __int64 *)sub_9A2AF0(a1, a2);
          case 116LL:
            return sub_9A19C0(a1, (__int64)a2, a3);
          case 117LL:
            return (unsigned __int64 *)sub_9A57A0(a1, a2);
          case 118LL:
            return (unsigned __int64 *)sub_9A58B0(a1, a2);
          case 125LL:
            return (unsigned __int64 *)sub_9A32A0(a1, a2);
          case 127LL:
            return (unsigned __int64 *)sub_99CE40((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 128LL:
          case 129LL:
            return (unsigned __int64 *)sub_9A1650(a1, (unsigned __int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 130LL:
            return (unsigned __int64 *)sub_9A2270(a1, a2);
          case 131LL:
            return sub_99E250(a1, (__int64)a2);
          case 132LL:
            return (unsigned __int64 *)sub_9A0520((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 133LL:
            return (unsigned __int64 *)sub_9A0D10((__int64)a1, a2, a3, (unsigned __int16)v6, a5, a6);
          case 135LL:
            return (unsigned __int64 *)sub_99EB00(a1, (__int64)a2);
          case 136LL:
            return (unsigned __int64 *)sub_99B510((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 137LL:
            a2 = (_QWORD *)a2[2];
            goto LABEL_14;
          case 138LL:
            return (unsigned __int64 *)sub_99E9F0(a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 139LL:
          case 247LL:
            return (unsigned __int64 *)sub_9A3580(a1, a2);
          case 154LL:
            return (unsigned __int64 *)sub_9A3840(a1, a2);
          case 155LL:
            return (unsigned __int64 *)sub_99D480((__int64)a1, a2[2], 1, 0, a5, a6);
          case 156LL:
            return (unsigned __int64 *)sub_99EDE0(a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 157LL:
            return (unsigned __int64 *)sub_9A2570(a1, a2);
          case 158LL:
            return (unsigned __int64 *)sub_99EFC0((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 160LL:
            return (unsigned __int64 *)sub_99ECD0(a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 240LL:
            return (unsigned __int64 *)sub_99F440((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 241LL:
            return (unsigned __int64 *)sub_99F4E0(a1, (unsigned __int64)a2);
          case 242LL:
            return (unsigned __int64 *)sub_99B3C0((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 243LL:
            return sub_99FA30((__int64)a1, (unsigned __int64)a2);
          case 244LL:
            return (unsigned __int64 *)sub_9A0160((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 245LL:
            return (unsigned __int64 *)sub_9A45A0(a1, a2);
          case 248LL:
            return (unsigned __int64 *)sub_99ABD0((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
          case 249LL:
LABEL_14:
            result = (unsigned __int64 *)sub_99E770((__int64)a1, (__int64)a2, 0);
            break;
          case 251LL:
            result = (unsigned __int64 *)sub_9A0B50((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
            break;
          case 252LL:
            result = (unsigned __int64 *)sub_9A05A0((__int64)a1, (__int64)a2);
            break;
          case 253LL:
            result = (unsigned __int64 *)sub_9A0A00((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
            break;
          case 254LL:
            result = (unsigned __int64 *)sub_99AB30((__int64)a1, (__int64)a2, a3, (unsigned __int16)v6, a5, a6);
            break;
          case 256LL:
            result = (unsigned __int64 *)sub_9A2F10(a1, a2);
            break;
          default:
LABEL_12:
            result = (unsigned __int64 *)sub_9A23B0(a1, a2);
            break;
        }
      }
    }
    else
    {
      a1[20].m128i_i8[0] = 1;
      return nullptr;
    }
    return result;
  }
}
