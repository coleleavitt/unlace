void __fastcall sub_E6C980(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int16 v6; // ax
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  char v11; // [rsp+10h] [rbp-48h]

  v6 = *(_WORD *)a2 & 0x1FF;
  if ( v6 <= 0x75u )
  {
    if ( v6 == 4 )
    {
LABEL_10:
      sub_E5BD30(a1, a2);
      return;
    }
    goto LABEL_4;
  }
  if ( v6 > 0x77u )
  {
LABEL_4:
    while ( 2 )
    {
      switch ( v6 )
      {
        case 0u:
        case 3u:
        case 6u:
        case 7u:
        case 8u:
        case 0xAu:
        case 0xBu:
        case 0xDu:
        case 0x10u:
        case 0x11u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Du:
        case 0x23u:
        case 0x24u:
        case 0x26u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Fu:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Bu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x5Eu:
        case 0x61u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
        case 0x6Bu:
        case 0x6Cu:
        case 0x75u:
          return;
        case 1u:
          sub_E5CE00(a1, (__int64 *)a2);
          break;
        case 2u:
          sub_E5F350(a1, a2);
          break;
        case 4u:
          goto LABEL_10;
        case 5u:
          sub_E64330(a1, a2);
          break;
        case 9u:
          sub_E5C9D0(a1, a2);
          break;
        case 0xCu:
          sub_E5B230(a1, *(_QWORD *)(a2 + 32));
          break;
        case 0xEu:
          sub_E645D0(a1, a2);
          break;
        case 0xFu:
          if ( (*(_DWORD *)a2 & 0x20000) == 0 )
          {
            v8 = *(_QWORD *)a2;
            LOWORD(v9) = 1;
            LOBYTE(v10) = (v8 & 0x80000) != 0;
            sub_222AB70(a1 + 1048, "satisfied", 9);
            sub_222CAC0(a1 + 1048, &v9);
            sub_2229BF0(a1 + 1048);
            sub_222B2A0(&v9);
          }
          break;
        case 0x12u:
          sub_E5BCC0(a1, a2);
          break;
        case 0x18u:
          sub_E5BFA0(a1, (int *)a2);
          break;
        case 0x1Cu:
          sub_E686A0(a1, (_QWORD *)a2, a3, a4, a5);
          break;
        case 0x1Eu:
          sub_E5BAE0(a1, a2);
          break;
        case 0x1Fu:
          sub_E68C00(a1, a2);
          break;
        case 0x20u:
          sub_E688D0(a1, (_QWORD *)a2);
          break;
        case 0x21u:
          sub_E64680(a1, a2);
          break;
        case 0x22u:
          sub_E68580(a1, a2);
          break;
        case 0x25u:
          sub_E64B30(a1, a2);
          break;
        case 0x27u:
          sub_E5B970(a1, a2);
          break;
        case 0x28u:
          sub_E5BC40(a1, a2);
          break;
        case 0x2Eu:
          sub_E5F050(a1, (__int64 *)a2);
          break;
        case 0x30u:
          sub_E67780(a1, a2);
          break;
        case 0x34u:
          sub_E5C530(a1, a2);
          break;
        case 0x35u:
          sub_E67DB0(a1, a2);
          break;
        case 0x39u:
          sub_E5C0F0(a1, a2);
          break;
        case 0x3Cu:
          sub_E5C160(a1, a2);
          break;
        case 0x3Du:
          if ( (*(_WORD *)(a2 + 2) & 0x1E0) != 0 )
          {
            v7 = *(_QWORD *)(a2 + 8);
            sub_BF7B00((__int64)&v9, a2, a3, a4, a5, a6, v9, v10, v11);
            sub_E59ED0(a1, &v9, v7);
            if ( v9 > 1 )
              sub_A4F8E0((int *)&v9);
          }
          break;
        case 0x3Eu:
          sub_E5C780(a1, a2);
          break;
        case 0x3Fu:
          sub_E5C700(a1, a2);
          break;
        case 0x47u:
          sub_E68350(a1, (__int64 *)a2);
          break;
        case 0x4Eu:
          sub_E5C6A0(a1, a2);
          break;
        case 0x4Fu:
          sub_E6C900(a1, (__int64 *)a2);
          break;
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
          sub_E6C2A0(a1, a2);
          break;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          sub_E5BF30(a1, a2);
          break;
        case 0x5Fu:
          sub_E64090(a1, a2);
          break;
        case 0x60u:
          if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
            sub_E641A0(a1, a2, a3, a4, a5);
          break;
        case 0x62u:
          sub_E5BEC0(a1, (__int64 *)a2);
          break;
        case 0x6Au:
          sub_E680C0(a1, (__int64 *)a2);
          break;
        case 0x6Du:
          sub_E5C340(a1, (__int64 *)a2);
          break;
        case 0x6Eu:
          sub_E67F70(a1, (__int64 *)a2);
          break;
        case 0x6Fu:
          sub_E5C2D0(a1, (__int64 *)a2);
          break;
        case 0x70u:
          sub_E5C260(a1, (__int64 *)a2);
          break;
        case 0x71u:
        case 0x72u:
          sub_E63E20(a1, (__int64 *)a2);
          break;
        case 0x73u:
          sub_E5CB20(a1, (__int64 *)a2);
          break;
        case 0x74u:
          sub_E679E0(a1, a2);
          break;
        case 0x76u:
          goto LABEL_11;
        case 0x77u:
          goto LABEL_12;
        default:
          continue;
      }
      return;
    }
  }
  switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x20:
LABEL_11:
      sub_E5BE50(a1, a2);
      break;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
LABEL_12:
      sub_E64470(a1, a2);
      break;
    default:
      a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
      goto LABEL_4;
  }
}
