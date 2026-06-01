__int64 __fastcall sub_979740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int16 *v8; // rax
  unsigned int v9; // [rsp+8h] [rbp-10h]
  unsigned int v10; // [rsp+Ch] [rbp-Ch]

  while ( 2 )
  {
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
        a2 = (__int64)v8;
        LOWORD(v6) = v6 & 0x1FF;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2320LL) + 64LL) && (((_WORD)v6 + 351) & 0x1FFu) <= 0x4B )
      {
        return sub_981E70(a1);
      }
      else
      {
        switch ( v6 )
        {
          case 1LL:
            return sub_979F20(a1, a2);
          case 2LL:
            return sub_97B390(a1, a2);
          case 4LL:
            return sub_97F660(a1, a2);
          case 5LL:
            return sub_97ABE0(a1, a2);
          case 10LL:
            return sub_97AB10(a1, a2);
          case 17LL:
            return sub_97F9D0(a1, a2);
          case 26LL:
          case 238LL:
            goto LABEL_10;
          case 33LL:
            return sub_97F2B0(a1, a2);
          case 46LL:
            return sub_97FD20(a1, a2);
          case 48LL:
            return sub_97E7C0(a1, a2);
          case 51LL:
            return sub_97FDF0(a1, a2);
          case 53LL:
            return sub_981D40(a1, a2);
          case 54LL:
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 328) + 71LL) )
              goto LABEL_12;
LABEL_10:
            result = *(_QWORD *)(a1 + 16);
            break;
          case 60LL:
            return sub_97DC20(a1, a2, a3, (unsigned __int8)a4);
          case 61LL:
            return sub_97E030(a1, *(_QWORD *)(a2 + 16), 0);
          case 72LL:
          case 73LL:
            return sub_97F770(a1, a2);
          case 77LL:
            return sub_97D730(a1, a2);
          case 79LL:
            return sub_97FFA0(a1, a2);
          case 86LL:
            return sub_97DF60(a1, a2);
          case 89LL:
          case 90LL:
          case 91LL:
          case 92LL:
            return sub_981060(a1, a2);
          case 96LL:
            return sub_97F0D0(a1, a2);
          case 97LL:
            return sub_97E740(a1, a2);
          case 106LL:
            return sub_97DDB0(a1, a2);
          case 110LL:
            return sub_97EBD0(a1, a2);
          case 113LL:
            return sub_97E8B0(a1, a2);
          case 114LL:
            return sub_97EDB0(a1, a2);
          case 116LL:
            return sub_97DC80(a1, a2);
          case 117LL:
            return sub_981A60(a1, a2);
          case 118LL:
            return sub_981B70(a1, a2);
          case 125LL:
            return sub_97F560(a1, a2);
          case 127LL:
            return sub_979100(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 128LL:
          case 129LL:
            return sub_97D910(a1, a2);
          case 130LL:
            return sub_97E530(a1, a2);
          case 131LL:
            return sub_97A510(a1, a2);
          case 132LL:
            return sub_97C7E0(a1, a2);
          case 133LL:
            return sub_97CFD0(a1, a2);
          case 135LL:
            return sub_97ADC0(a1, a2);
          case 136LL:
            return sub_9777D0(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 137LL:
            return sub_97AA30(a1, *(_QWORD *)(a2 + 16), 0);
          case 138LL:
            return sub_97ACB0(a1, a2);
          case 139LL:
          case 247LL:
            return sub_97F840(a1, a2);
          case 154LL:
            return sub_97FB00(a1, a2);
          case 155LL:
            a2 = *(_QWORD *)(a2 + 16);
            a4 = 0;
            a3 = 1;
            continue;
          case 156LL:
            return sub_97B0A0(a1, a2);
          case 157LL:
            return sub_97E830(a1, a2);
          case 158LL:
            return sub_97B280(a1, a2);
          case 160LL:
            return sub_97AF90(a1, a2);
          case 240LL:
            return sub_97B700(a1, a2);
          case 241LL:
            return sub_97B7A0(a1, a2);
          case 242LL:
            return sub_977680(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 243LL:
            return sub_97BCF0(a1, a2);
          case 244LL:
            return sub_97C420(a1, a2);
          case 245LL:
            return sub_980860(a1, a2);
          case 248LL:
            return sub_976E90(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 249LL:
            return sub_97AA30(a1, a2, (unsigned __int8)a4);
          case 251LL:
            return sub_97CE10(a1, a2);
          case 252LL:
            return sub_97C860(a1, a2);
          case 253LL:
            return sub_97CCC0(a1, a2);
          case 254LL:
            return sub_976DF0(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 256LL:
            return sub_97F1D0(a1, a2);
          default:
LABEL_12:
            result = sub_97E670(a1, a2);
            break;
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 320) = 1;
      return 0;
    }
    return result;
  }
}

