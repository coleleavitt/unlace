__int64 __fastcall sub_18EEFD0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7)
{
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 v11; // kr10_1
  __int64 result; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // r12
  unsigned int v19; // eax
  bool v20; // r12
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v41[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v43[11]; // [rsp+30h] [rbp-98h] BYREF
  char v44; // [rsp+88h] [rbp-40h]
  unsigned int v45; // [rsp+90h] [rbp-38h]
  char v46; // [rsp+94h] [rbp-34h]

  v8 = *(_WORD *)a2 & 0x1FF;
  if ( v8 > 0x75u )
  {
    if ( v8 <= 0x77u )
    {
      v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
      v10 = *a1;
      switch ( (char)v9 )
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
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
          result = sub_18E4000(v10, a2, v9, a4, a5, a6);
          break;
        default:
          a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
          goto LABEL_4;
      }
      return result;
    }
    goto LABEL_4;
  }
  if ( v8 != 4 )
  {
LABEL_4:
    switch ( (v8 + 509) & 0x1FF )
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
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x61:
      case 0x62:
      case 0x63:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6D:
      case 0x6E:
      case 0x6F:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
      case 0x7D:
      case 0x7E:
        return sub_18E4000(*a1, a2, a3, a4, a5, a6);
      case 0x11:
        result = sub_18EEFD0(a1, *(_QWORD *)(a2 + 24));
        if ( result != 1 )
        {
          v14 = result & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(a2 + 24) = v14;
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(v14 + 8);
          *(_BYTE *)(a2 + 1) = *(_BYTE *)(v14 + 1) & 6 | *(_BYTE *)(a2 + 1) & 0xF9;
          return a2;
        }
        return result;
      case 0x1E:
        v15 = a1[1];
        v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)
                                 + 16LL);
        v17 = (unsigned int)(v16 - 25);
        if ( (unsigned __int8)(v16 - 25) > 1u && (unsigned __int8)(v16 - 2) > 4u )
        {
          if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
          {
            v39 = *(_QWORD *)(a2 + 16);
            if ( v39 )
              *(_QWORD *)(v39 + 80) = v15;
          }
          *(_QWORD *)(a2 + 8) = sub_C1BEF0((__int64)(a1 + 1), a2, v15, v17);
          *(_BYTE *)(a2 + 1) = (2 * (sub_18C0240(a1[1], a2) & 3)) | *(_BYTE *)(a2 + 1) & 0xF9;
          return sub_19A3E40(*a1, a2);
        }
        v18 = (__int64 *)(*a1 + 8);
        v19 = sub_C00A40(a2, a2, v15, v17, a5);
        sub_168B9F0((__int64)v41, v18, v19, 0xF13u, 0);
        v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 25 <= 1;
        if ( v44 )
        {
          sub_AE9DF0(v43, v20, 2u);
        }
        else
        {
          if ( !v46 )
          {
LABEL_20:
            sub_15F7200(v41);
            return 1;
          }
          v29 = sub_168B9E0(v41);
          v30 = v42;
          if ( v42 )
            v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
          v40 = v30;
          v31 = sub_1587BC0(v29, &v40, v25, v26, v27, v28);
          sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v45 + 8), v20, 2u);
        }
        if ( v44 )
        {
          sub_AE9DF0(v43, a1[1], 8u);
        }
        else if ( v46 )
        {
          v36 = sub_168B9E0(v41);
          v37 = v42;
          if ( v42 )
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
          v40 = v37;
          v38 = sub_1587BC0(v36, &v40, v32, v33, v34, v35);
          sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v45 + 8), a1[1], 8u);
        }
        goto LABEL_20;
      case 0x2B:
        return sub_18DF8C0(a1, a2, *(_QWORD *)(a2 + 24), a4, a5, a6, a7);
      case 0x44:
        return sub_18DF8C0(a1, a2, *(_QWORD *)(a2 + 16), a4, a5, a6, a7);
      case 0x4C:
        v21 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
        *(_QWORD *)(a2 + 8) = a1[1];
        if ( v21 == 12 )
        {
          v23 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v23 + 16) != 42 )
            v23 = sub_F63050(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
          a1[1] = *(_QWORD *)(v23 + 32);
          v24 = sub_18EEFD0(a1, *(_QWORD *)(a2 + 16));
          if ( v24 > 1 )
          {
            *(_QWORD *)(a2 + 16) = v24 & 0xFFFFFFFFFFFFFFFELL;
            return a2;
          }
        }
        else
        {
          a1[1] = sub_A73030(*(_QWORD *)(*a1 + 248), a1[1], 1u);
          v22 = sub_18EEFD0(a1, *(_QWORD *)(a2 + 16));
          if ( v22 > 1 )
          {
            *(_QWORD *)(a2 + 16) = v22 & 0xFFFFFFFFFFFFFFFELL;
            return a2;
          }
        }
        return 1;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return sub_18EFFC0(a1, a2);
    }
  }
  v11 = *(_BYTE *)(a2 + 2) >> 3;
  switch ( v11 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xDu:
      result = sub_18E4000(*a1, a2, v11, a4, a5, a6);
      break;
    case 4u:
      result = sub_18EFEA0();
      break;
    case 0xCu:
      result = sub_18EEFD0(a1, *(_QWORD *)(a2 + 16));
      if ( result != 1 )
      {
        v13 = result & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(a2 + 16) = v13;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v13 + 8);
        *(_BYTE *)(a2 + 1) = *(_BYTE *)(v13 + 1) & 6 | *(_BYTE *)(a2 + 1) & 0xF9;
        result = a2;
      }
      break;
    default:
      a3 = *(_BYTE *)(a2 + 2) >> 3;
      goto LABEL_4;
  }
  return result;
}
