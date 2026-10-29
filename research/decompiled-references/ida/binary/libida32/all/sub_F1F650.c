void __fastcall sub_F1F650(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v6; // ax
  bool v7; // zf
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __m128i *v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  const char *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  const char *v19; // rdi
  unsigned __int64 v20; // rdx
  char *v21; // rax
  __int64 (__fastcall *v22)(); // rsi
  __m128i si128; // xmm0

  v6 = *(_WORD *)a2 & 0x1FF;
  if ( v6 <= 0x75u )
  {
    if ( v6 == 4 )
    {
LABEL_6:
      sub_F09210(a1, a2);
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
        case 0x2Cu:
        case 0x2Du:
        case 0x2Fu:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x36u:
        case 0x37u:
        case 0x3Au:
        case 0x3Bu:
        case 0x43u:
        case 0x44u:
        case 0x46u:
        case 0x48u:
        case 0x4Cu:
        case 0x4Du:
        case 0x5Eu:
        case 0x60u:
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
          if ( (*(_QWORD *)a2 & 0x200LL) != 0 )
          {
            v12 = *(_QWORD *)(a1 + 1096);
            v13 = *(_QWORD **)(v12 + 32);
            if ( *(_QWORD *)(v12 + 24) - (_QWORD)v13 > 7u )
            {
              *v13 = 0x7261765F73616820LL;
              *(_QWORD *)(v12 + 32) += 8LL;
            }
            else
            {
              sub_22581D0(v12, " has_var", 8);
            }
          }
          return;
        case 2u:
          sub_F08320(a1, a2);
          return;
        case 4u:
          goto LABEL_6;
        case 5u:
          sub_F09300(a1, (const char *)a2);
          return;
        case 6u:
          sub_F09F80(a1, a2);
          return;
        case 9u:
          sub_F090A0(a1, a2);
          return;
        case 0xCu:
          sub_F05DA0(a1, *(_QWORD *)(a2 + 32));
          sub_F07020(a1, *(_QWORD *)(a2 + 32));
          return;
        case 0xEu:
          sub_F068D0(a1, **(_QWORD **)(a2 + 32));
          return;
        case 0xFu:
          v14 = (*(_DWORD *)a2 >> 14) & 8;
          if ( !v14 )
          {
            v15 = *(_QWORD *)a2;
            v16 = " satisfied";
            v17 = *(_QWORD *)(a1 + 1096);
            v18 = -1;
            if ( (v15 & 0x80000) == 0 )
              v16 = " unsatisfied";
            v19 = v16;
            do
            {
              if ( !v18 )
                break;
              v7 = *v19++ == (unsigned __int8)v14;
              --v18;
            }
            while ( !v7 );
            v20 = -v18 - 2;
            v21 = *(char **)(v17 + 32);
            if ( v20 <= *(_QWORD *)(v17 + 24) - (_QWORD)v21 )
            {
              qmemcpy(v21, v16, (unsigned int)v20);
              *(_QWORD *)(v17 + 32) += v20;
            }
            else
            {
              sub_22581D0(v17, v16, v20);
            }
          }
          return;
        case 0x12u:
          sub_F08B70(a1, a2);
          return;
        case 0x18u:
          sub_F08940(a1, a2);
          return;
        case 0x1Cu:
          sub_F0A7D0(a1, (_QWORD *)a2, a3, a4, a5);
          return;
        case 0x1Eu:
          sub_F0A4F0(a1, a2);
          return;
        case 0x1Fu:
          sub_F0A590(a1, a2);
          return;
        case 0x20u:
          sub_F0A5E0(a1, (_QWORD *)a2);
          return;
        case 0x21u:
          sub_F0A350(a1, a2);
          return;
        case 0x22u:
          sub_F08A40(a1, a2);
          return;
        case 0x25u:
          sub_F0A4E0(a1, a2);
          return;
        case 0x27u:
          sub_F0A480(a1, a2);
          return;
        case 0x28u:
          sub_F0A9C0(a1, a2);
          return;
        case 0x2Bu:
          sub_F28370();
          return;
        case 0x2Eu:
          sub_F1DDB0(a1, a2);
          return;
        case 0x30u:
          sub_F0A1F0(a1, a2);
          return;
        case 0x34u:
          sub_F08D10(a1, a2);
          return;
        case 0x35u:
          sub_F091B0(a1, a2);
          return;
        case 0x38u:
          v7 = *(_BYTE *)(a2 + 40) == 0;
          v8 = " inout";
          v9 = *(_QWORD *)(a1 + 1096);
          if ( v7 )
            v8 = " out";
          sub_971800(v9, v8);
          return;
        case 0x39u:
          if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          {
            v10 = *(_QWORD *)(a1 + 1096);
            v11 = *(__m128i **)(v10 + 32);
            if ( *(_QWORD *)(v10 + 24) - (_QWORD)v11 > 0x10u )
            {
              si128 = _mm_load_si128((const __m128i *)&xmmword_23850D0);
              v11[1].m128i_i8[0] = 116;
              *v11 = si128;
              *(_QWORD *)(v10 + 32) += 17LL;
            }
            else
            {
              sub_22581D0(v10, " result_dependent", 17);
            }
          }
          return;
        case 0x3Cu:
          sub_F1C7F0(a1, a2);
          return;
        case 0x3Du:
          if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
            sub_F15DA0(a1, a2, a3, a4, a5, a6);
          return;
        case 0x3Eu:
          sub_F08FC0(a1, a2);
          return;
        case 0x3Fu:
          sub_F08EA0(a1, a2);
          return;
        case 0x40u:
          sub_F09400(a1, a2);
          return;
        case 0x41u:
          sub_F0A140(a1, a2);
          return;
        case 0x42u:
          sub_F135A0(a1, (unsigned int *)a2);
          return;
        case 0x45u:
          v22 = *(__int64 (__fastcall **)())(a2 + 16);
          if ( v22 )
            sub_F1D820(a1, v22, a3, a4, a5, a6);
          return;
        case 0x47u:
          sub_F1DEA0(a1, a2);
          return;
        case 0x49u:
          if ( (*(_DWORD *)a2 & 0x80000) != 0 )
            sub_F02AE0(a1);
          return;
        case 0x4Au:
          if ( (*(_DWORD *)a2 & 0x80000) != 0 )
            sub_F074F0(a1, *(_QWORD *)(a2 + 40));
          return;
        case 0x4Bu:
          sub_F0AAA0(a1, a2);
          return;
        case 0x4Eu:
          sub_F08C40(a1, a2);
          return;
        case 0x4Fu:
          sub_F088F0(a1, (__int64 *)a2);
          return;
        case 0x50u:
        case 0x57u:
        case 0x58u:
          sub_F087F0(a1, a2);
          return;
        case 0x51u:
          sub_F09BE0(a1, (_QWORD *)a2);
          return;
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
          sub_F09830(a1, a2);
          return;
        case 0x56u:
          sub_F09AF0(a1, a2);
          return;
        case 0x59u:
        case 0x5Au:
        case 0x5Cu:
        case 0x5Du:
          sub_F08690(a1, a2);
          return;
        case 0x5Bu:
          sub_F08710(a1, a2);
          return;
        case 0x5Fu:
          sub_F09C30(a1, a2);
          return;
        case 0x62u:
          sub_F09A10(a1, (__int64 *)a2);
          return;
        case 0x6Au:
          sub_F09E20(a1, (__int64 *)a2);
          return;
        case 0x6Du:
          sub_F0A250(a1, (_QWORD *)a2);
          return;
        case 0x6Eu:
          sub_F09ED0(a1, (__int64 *)a2);
          return;
        case 0x6Fu:
          if ( (*(_QWORD *)a2 & 0x80000) != 0 )
            goto LABEL_32;
          return;
        case 0x70u:
          if ( (*(_QWORD *)a2 & 0x80000) != 0 )
LABEL_32:
            sub_F02A30(a1);
          break;
        case 0x71u:
        case 0x72u:
          sub_F09C80(a1, (__int64 *)a2);
          break;
        case 0x73u:
          sub_F09930(a1, (_QWORD *)a2);
          break;
        case 0x74u:
          sub_F09D70(a1, a2);
          break;
        case 0x76u:
          goto LABEL_7;
        case 0x77u:
          goto LABEL_9;
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
LABEL_7:
      sub_F094A0(a1, a2);
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
LABEL_9:
      sub_F09640(a1, a2);
      break;
    default:
      a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
      goto LABEL_4;
  }
}

