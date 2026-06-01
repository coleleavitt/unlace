__int64 __fastcall sub_1B2FFC0(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v3; // dx
  unsigned __int64 v4; // kr00_8
  __int64 v5; // rdi
  unsigned __int64 v6; // kr10_8
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 *v21; // r12

  v2 = a1;
  while ( 2 )
  {
    v3 = *(_WORD *)a2 & 0x1FF;
    if ( v3 > 0x75u )
    {
      if ( v3 <= 0x77u )
      {
        v4 = a1;
        v5 = v2;
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
          case 0x20:
LABEL_13:
            result = sub_1B2FEC0(v5, a2);
            break;
          default:
            a1 = v4;
            goto LABEL_9;
        }
        return result;
      }
LABEL_9:
      switch ( v3 )
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
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Du:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
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
        case 0x4Eu:
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x59u:
        case 0x5Au:
        case 0x5Cu:
        case 0x5Du:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x70u:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
          goto LABEL_11;
        case 4u:
          v7 = v2;
          goto LABEL_8;
        case 0x1Au:
          a2 = *(_QWORD *)(a2 + 16);
          if ( a2 )
            continue;
          goto LABEL_11;
        case 0x2Cu:
          v12 = *(_QWORD *)(v2 + 16);
          v13 = *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 24) + 32);
          v14 = *(unsigned int *)(v12 + 12);
          v15 = *(unsigned int *)(v12 + 8);
          v16 = a2 & 0xFFFFFFFFFFFFFFFDLL | (2LL * *(unsigned __int8 *)(v2 + 24));
          if ( v15 >= v14 && v14 < v15 + 1 )
          {
            sub_2237220(*(_QWORD *)(v2 + 16), v12 + 16, v15 + 1, 16);
            v15 = *(unsigned int *)(v12 + 8);
          }
          v17 = (unsigned __int64 *)(*(_QWORD *)v12 + 16 * v15);
          a1 = v13;
          *v17 = v16;
          v17[1] = 0;
          ++*(_DWORD *)(v12 + 8);
          a2 = sub_BFBAE0(v13);
          continue;
        case 0x2Eu:
          return sub_1B30E70(v2);
        case 0x47u:
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 28LL) & 0x7Fu) - 40 > 6 )
          {
LABEL_11:
            sub_1B2FD60((unsigned int *)v2);
            return 0;
          }
          else
          {
            *(_QWORD *)(v2 + 32) = a2;
            v18 = *(_QWORD *)(v2 + 16);
            v19 = *(_QWORD *)(a2 + 16);
            v20 = a2 & 0xFFFFFFFFFFFFFFFDLL | (2LL * *(unsigned __int8 *)(v2 + 24));
            if ( *(_DWORD *)(v18 + 12) <= *(_DWORD *)(v18 + 8) )
            {
              if ( v19 )
                v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
              sub_1AF6AE0(v18, v20, v19);
              return 1;
            }
            else
            {
              v21 = (unsigned __int64 *)(*(_QWORD *)v18 + 16LL * *(unsigned int *)(v18 + 8));
              *v21 = v20;
              if ( v19 )
                v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
              v21[1] = v19;
              ++*(_DWORD *)(v18 + 8);
              return 1;
            }
          }
        case 0x5Bu:
          goto LABEL_15;
        case 0x62u:
          *(_QWORD *)(v2 + 32) = a2;
LABEL_15:
          v9 = *(_QWORD *)(v2 + 16);
          v10 = (2LL * *(unsigned __int8 *)(v2 + 24)) | a2 & 0xFFFFFFFFFFFFFFFDLL;
          if ( *(_DWORD *)(v9 + 12) <= *(_DWORD *)(v9 + 8) )
          {
            sub_1AF6AE0(v9, v10, 0);
          }
          else
          {
            v11 = (unsigned __int64 *)(*(_QWORD *)v9 + 16LL * *(unsigned int *)(v9 + 8));
            *v11 = v10;
            v11[1] = 0;
            ++*(_DWORD *)(v9 + 8);
          }
          result = 1;
          break;
        case 0x76u:
        case 0x77u:
          v5 = v2;
          goto LABEL_13;
        default:
          goto LABEL_9;
      }
      return result;
    }
    break;
  }
  if ( v3 != 4 )
    goto LABEL_9;
  v6 = a1;
  v7 = v2;
  switch ( *(_BYTE *)(a2 + 2) >> 3 )
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
LABEL_8:
      result = sub_1B30DB0(v7);
      break;
    default:
      a1 = v6;
      goto LABEL_9;
  }
  return result;
}
