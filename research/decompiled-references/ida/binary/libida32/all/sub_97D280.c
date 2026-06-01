unsigned __int64 *__fastcall sub_97D280(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  unsigned __int64 *result; // rax
  unsigned __int16 *v8; // rax
  unsigned int v9; // [rsp+8h] [rbp-10h]
  unsigned int v10; // [rsp+Ch] [rbp-Ch]

  if ( a2 )
  {
    v6 = *(_WORD *)a2 & 0x1FF;
    if ( (((_WORD)v6 + 509) & 0x1FFu) <= 0x7E )
    {
      v10 = a4;
      v9 = a3;
      v8 = (unsigned __int16 *)sub_BD7CB0(a2);
      a4 = v10;
      a3 = v9;
      v6 = *v8;
      a2 = v8;
      LOWORD(v6) = v6 & 0x1FF;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 2320) + 64LL) && (((_WORD)v6 + 351) & 0x1FFu) <= 0x4B )
    {
      return (unsigned __int64 *)sub_981E70(a1);
    }
    else
    {
      switch ( v6 )
      {
        case 1LL:
          return sub_979F20((__int64)a1, a2);
        case 2LL:
          return (unsigned __int64 *)sub_97B390((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 4LL:
          return (unsigned __int64 *)sub_97F660(a1, a2);
        case 5LL:
          return (unsigned __int64 *)sub_97ABE0(a1, (unsigned __int64)a2, a3);
        case 10LL:
          return (unsigned __int64 *)sub_97AB10(a1, (__int64)a2, a3);
        case 17LL:
          return (unsigned __int64 *)sub_97F9D0(a1, a2);
        case 26LL:
        case 238LL:
          goto LABEL_10;
        case 33LL:
          return (unsigned __int64 *)sub_97F2B0(a1, a2);
        case 46LL:
          return (unsigned __int64 *)sub_97FD20(a1, a2);
        case 48LL:
          return (unsigned __int64 *)sub_97E7C0(a1, a2);
        case 51LL:
          return (unsigned __int64 *)sub_97FDF0(a1, a2);
        case 53LL:
          return (unsigned __int64 *)sub_981D40(a1, a2);
        case 54LL:
          if ( !*(_BYTE *)(a1[20].m128i_i64[1] + 71) )
            goto LABEL_12;
LABEL_10:
          result = (unsigned __int64 *)a1[1].m128i_i64[0];
          break;
        case 60LL:
          return (unsigned __int64 *)sub_97DC20(a1, a2, a3, (unsigned __int8)a4);
        case 61LL:
          return (unsigned __int64 *)sub_97E030(a1, a2[2], 0);
        case 72LL:
        case 73LL:
          return (unsigned __int64 *)sub_97F770(a1, a2);
        case 77LL:
          return (unsigned __int64 *)sub_97D730(a1, a2);
        case 79LL:
          return (unsigned __int64 *)sub_97FFA0(a1, a2);
        case 86LL:
          return (unsigned __int64 *)sub_97DF60(a1, a2);
        case 89LL:
        case 90LL:
        case 91LL:
        case 92LL:
          return (unsigned __int64 *)sub_981060(a1, a2);
        case 96LL:
          return (unsigned __int64 *)sub_97F0D0(a1, a2);
        case 97LL:
          return (unsigned __int64 *)sub_97E740(a1, a2);
        case 106LL:
          return (unsigned __int64 *)sub_97DDB0(a1, a2);
        case 110LL:
          return (unsigned __int64 *)sub_97EBD0(a1, a2);
        case 113LL:
          return (unsigned __int64 *)sub_97E8B0(a1, a2);
        case 114LL:
          return (unsigned __int64 *)sub_97EDB0(a1, a2);
        case 116LL:
          return (unsigned __int64 *)sub_97DC80(a1, a2);
        case 117LL:
          return (unsigned __int64 *)sub_981A60(a1, a2);
        case 118LL:
          return (unsigned __int64 *)sub_981B70(a1, a2);
        case 125LL:
          return (unsigned __int64 *)sub_97F560(a1, a2);
        case 127LL:
          return (unsigned __int64 *)sub_979100((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 128LL:
        case 129LL:
          return (unsigned __int64 *)sub_97D910(a1, a2);
        case 130LL:
          return (unsigned __int64 *)sub_97E530(a1, a2);
        case 131LL:
          return sub_97A510(a1, (__int64)a2);
        case 132LL:
          return (unsigned __int64 *)sub_97C7E0((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 133LL:
          return (unsigned __int64 *)sub_97CFD0((__int64)a1, a2, a3, a4, (unsigned __int16)v6, a6);
        case 135LL:
          return (unsigned __int64 *)sub_97ADC0(a1, (__int64)a2);
        case 136LL:
          return (unsigned __int64 *)sub_9777D0((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 137LL:
          return (unsigned __int64 *)sub_97AA30((__int64)a1, a2[2], 0);
        case 138LL:
          return (unsigned __int64 *)sub_97ACB0(a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 139LL:
        case 247LL:
          return (unsigned __int64 *)sub_97F840(a1, a2);
        case 154LL:
          return (unsigned __int64 *)sub_97FB00(a1, a2);
        case 155LL:
          return (unsigned __int64 *)sub_979740((__int64)a1, a2[2], 1, 0, (unsigned __int16)v6, a6);
        case 156LL:
          return (unsigned __int64 *)sub_97B0A0(a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 157LL:
          return (unsigned __int64 *)sub_97E830(a1, a2);
        case 158LL:
          return (unsigned __int64 *)sub_97B280((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 160LL:
          return (unsigned __int64 *)sub_97AF90(a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 240LL:
          return (unsigned __int64 *)sub_97B700((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 241LL:
          return (unsigned __int64 *)sub_97B7A0(a1, (unsigned __int64)a2);
        case 242LL:
          return (unsigned __int64 *)sub_977680((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 243LL:
          return sub_97BCF0((__int64)a1, (unsigned __int64)a2);
        case 244LL:
          return (unsigned __int64 *)sub_97C420((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 245LL:
          return (unsigned __int64 *)sub_980860(a1, a2);
        case 248LL:
          return (unsigned __int64 *)sub_976E90((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 249LL:
          return (unsigned __int64 *)sub_97AA30((__int64)a1, (__int64)a2, a4);
        case 251LL:
          return (unsigned __int64 *)sub_97CE10((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 252LL:
          return (unsigned __int64 *)sub_97C860((__int64)a1, (__int64)a2);
        case 253LL:
          return (unsigned __int64 *)sub_97CCC0((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 254LL:
          return (unsigned __int64 *)sub_976DF0((__int64)a1, (__int64)a2, a3, a4, (unsigned __int16)v6, a6);
        case 256LL:
          return (unsigned __int64 *)sub_97F1D0(a1, a2);
        default:
LABEL_12:
          result = (unsigned __int64 *)sub_97E670(a1, a2);
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

