void __fastcall sub_E69890(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rsi
  size_t v6; // rax
  int v7; // eax
  size_t v8; // rax
  _QWORD v9[2]; // [rsp+48h] [rbp-58h] BYREF
  __int16 v10; // [rsp+58h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-40h]

  switch ( *(_BYTE *)(a2 + 16) )
  {
    case 0:
    case 1:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x1B:
    case 0x1C:
    case 0x1F:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x33:
    case 0x34:
      return;
    case 2:
    case 3:
      sub_E5A8A0(a1, a2);
      break;
    case 4:
    case 5:
    case 6:
      sub_E5A720(a1, a2);
      break;
    case 0x10:
      sub_E5ADE0(a1, a2);
      break;
    case 0x15:
      sub_E5A950(a1);
      break;
    case 0x18:
      sub_E68ED0(a1, a2);
      break;
    case 0x19:
      sub_E5A590(a1, a2);
      break;
    case 0x1A:
      sub_E64CF0(a1, a2);
      break;
    case 0x1D:
      sub_E691F0(a1, a2);
      break;
    case 0x1E:
      sub_E5B110(a1, a2);
      break;
    case 0x21:
      sub_E5B170(a1, a2, a3);
      break;
    case 0x24:
      sub_E69140(a1, a2, a3, a4, a5);
      break;
    case 0x26:
      v7 = *(_DWORD *)(a2 + 20);
      if ( v7 )
      {
        v10 = 3;
        v11 = (unsigned int)(v7 - 1);
        v8 = j__strlen("numExpansions");
        sub_222AB70(a1 + 1048, "numExpansions", v8);
        sub_222CAC0(a1 + 1048, &v10);
        sub_2229BF0(a1 + 1048);
        sub_222B2A0(&v10);
      }
      else
      {
        nullsub_1555();
      }
      break;
    case 0x2C:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        sub_E5A6C0(a1);
      break;
    case 0x2D:
      sub_E5AD80(a1, a2);
      break;
    case 0x2E:
      sub_E5ACB0(a1, a2);
      break;
    case 0x2F:
    case 0x30:
      sub_E69430(a1, a2, a3, a4, a5);
      break;
    case 0x31:
      sub_E5AEF0(a1, a2);
      break;
    case 0x32:
      sub_E692A0(a1, a2);
      break;
    case 0x35:
      sub_E69710(a1, a2);
      break;
    case 0x36:
      switch ( *(_DWORD *)(a2 + 48) )
      {
        case 0:
          v5 = "add_lvalue_reference";
          break;
        case 1:
          v5 = "add_pointer";
          break;
        case 2:
          v5 = "add_rvalue_reference";
          break;
        case 3:
          v5 = "decay";
          break;
        case 4:
          v5 = "make_signed";
          break;
        case 5:
          v5 = "make_unsigned";
          break;
        case 6:
          v5 = "remove_all_extents";
          break;
        case 7:
          v5 = "remove_const";
          break;
        case 8:
          v5 = "remove_cv";
          break;
        case 9:
          v5 = "remove_cvref";
          break;
        case 0xA:
          v5 = "remove_extent";
          break;
        case 0xB:
          v5 = "remove_pointer";
          break;
        case 0xC:
          v5 = "remove_reference_t";
          break;
        case 0xD:
          v5 = "remove_restrict";
          break;
        case 0xE:
          v5 = "remove_volatile";
          break;
        case 0xF:
          v5 = "underlying_type";
          break;
        default:
          JUMPOUT(0xE5ACA0);
      }
      sub_E598C0((__int64)&v10, v5);
      v6 = j__strlen("transformKind");
      v9[0] = &v10;
      v9[1] = a1 + 1048;
      sub_E585D0(a1 + 1048, (__int64)"transformKind", v6, (__int64)sub_E58580, v9);
      sub_222B2A0(&v10);
      break;
    case 0x37:
      sub_E694E0(a1, a2);
      break;
    case 0x38:
      sub_E69590(a1, a2);
      break;
    case 0x39:
    case 0x3A:
      sub_E5A9C0(a1, a2);
      break;
  }
}
