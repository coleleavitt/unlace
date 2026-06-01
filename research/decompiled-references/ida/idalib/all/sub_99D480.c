__int64 __fastcall sub_99D480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
        v8 = (unsigned __int16 *)sub_BFB9F0(a2);
        a4 = v10;
        a3 = v9;
        v6 = *v8;
        a2 = (__int64)v8;
        LOWORD(v6) = v6 & 0x1FF;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2320LL) + 64LL) && (((_WORD)v6 + 351) & 0x1FFu) <= 0x4B )
      {
        return sub_9A5BB0(a1);
      }
      else
      {
        switch ( v6 )
        {
          case 1LL:
            return sub_99DC60(a1, a2);
          case 2LL:
            return sub_99F0D0(a1, a2);
          case 4LL:
            return sub_9A33A0(a1, a2);
          case 5LL:
            return sub_99E920(a1, a2);
          case 10LL:
            return sub_99E850(a1, a2);
          case 17LL:
            return sub_9A3710(a1, a2);
          case 26LL:
          case 238LL:
            goto LABEL_10;
          case 33LL:
            return sub_9A2FF0(a1, a2);
          case 46LL:
            return sub_9A3A60(a1, a2);
          case 48LL:
            return sub_9A2500(a1, a2);
          case 51LL:
            return sub_9A3B30(a1, a2);
          case 53LL:
            return sub_9A5A80(a1, a2);
          case 54LL:
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 328) + 71LL) )
              goto LABEL_12;
LABEL_10:
            result = *(_QWORD *)(a1 + 16);
            break;
          case 60LL:
            return sub_9A1960(a1, a2, a3, (unsigned __int8)a4);
          case 61LL:
            return sub_9A1D70(a1, *(_QWORD *)(a2 + 16), 0);
          case 72LL:
          case 73LL:
            return sub_9A34B0(a1, a2);
          case 77LL:
            return sub_9A1470(a1, a2);
          case 79LL:
            return sub_9A3CE0(a1, a2);
          case 86LL:
            return sub_9A1CA0(a1, a2);
          case 89LL:
          case 90LL:
          case 91LL:
          case 92LL:
            return sub_9A4DA0(a1, a2);
          case 96LL:
            return sub_9A2E10(a1, a2);
          case 97LL:
            return sub_9A2480(a1, a2);
          case 106LL:
            return sub_9A1AF0(a1, a2);
          case 110LL:
            return sub_9A2910(a1, a2);
          case 113LL:
            return sub_9A25F0(a1, a2);
          case 114LL:
            return sub_9A2AF0(a1, a2);
          case 116LL:
            return sub_9A19C0(a1, a2);
          case 117LL:
            return sub_9A57A0(a1, a2);
          case 118LL:
            return sub_9A58B0(a1, a2);
          case 125LL:
            return sub_9A32A0(a1, a2);
          case 127LL:
            return sub_99CE40(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 128LL:
          case 129LL:
            return sub_9A1650(a1, a2);
          case 130LL:
            return sub_9A2270(a1, a2);
          case 131LL:
            return sub_99E250(a1, a2);
          case 132LL:
            return sub_9A0520(a1, a2);
          case 133LL:
            return sub_9A0D10(a1, a2);
          case 135LL:
            return sub_99EB00(a1, a2);
          case 136LL:
            return sub_99B510(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 137LL:
            return sub_99E770(a1, *(_QWORD *)(a2 + 16), 0);
          case 138LL:
            return sub_99E9F0(a1, a2);
          case 139LL:
          case 247LL:
            return sub_9A3580(a1, a2);
          case 154LL:
            return sub_9A3840(a1, a2);
          case 155LL:
            a2 = *(_QWORD *)(a2 + 16);
            a4 = 0;
            a3 = 1;
            continue;
          case 156LL:
            return sub_99EDE0(a1, a2);
          case 157LL:
            return sub_9A2570(a1, a2);
          case 158LL:
            return sub_99EFC0(a1, a2);
          case 160LL:
            return sub_99ECD0(a1, a2);
          case 240LL:
            return sub_99F440(a1, a2);
          case 241LL:
            return sub_99F4E0(a1, a2);
          case 242LL:
            return sub_99B3C0(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 243LL:
            return sub_99FA30(a1, a2);
          case 244LL:
            return sub_9A0160(a1, a2);
          case 245LL:
            return sub_9A45A0(a1, a2);
          case 248LL:
            return sub_99ABD0(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 249LL:
            return sub_99E770(a1, a2, (unsigned __int8)a4);
          case 251LL:
            return sub_9A0B50(a1, a2);
          case 252LL:
            return sub_9A05A0(a1, a2);
          case 253LL:
            return sub_9A0A00(a1, a2);
          case 254LL:
            return sub_99AB30(a1, a2, a3, a4, (unsigned __int16)v6, a6);
          case 256LL:
            return sub_9A2F10(a1, a2);
          default:
LABEL_12:
            result = sub_9A23B0(a1, a2);
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
