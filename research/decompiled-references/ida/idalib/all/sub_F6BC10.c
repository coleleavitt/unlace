__int64 __fastcall sub_F6BC10(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r9
  _BOOL8 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  _BOOL8 v17; // r8
  __m128 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  _BOOL8 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  char v25; // cl
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128 v29; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-10h] BYREF

  while ( 2 )
  {
    v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( a2 & 7 | (a2 >> 3) & 1 )
    {
LABEL_3:
      v4 = 1;
      v5 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        v4 = byte_2400320[*(unsigned __int8 *)(*v5 + 16LL)];
      v6 = a3 != 0;
      v7 = v4 * (v6 + (a3 - v6) / v4);
      switch ( *(_BYTE *)(v3 + 16) )
      {
        case 0:
        case 1:
          goto LABEL_11;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x1B:
        case 0x21:
          v7 += 16LL;
          goto LABEL_11;
        case 7:
        case 0xA:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x1C:
        case 0x1D:
        case 0x1F:
        case 0x20:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x27:
        case 0x29:
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
          v30 = 0;
          break;
        case 8:
          v7 += 8LL;
          goto LABEL_30;
        case 9:
          ++v7;
          goto LABEL_11;
        case 0xB:
        case 0x26:
        case 0x2A:
        case 0x2B:
        case 0x2C:
          v7 += 4LL;
          goto LABEL_11;
        case 0x10:
          v30 = v4 * (v6 + (a3 - v6) / v4);
          break;
        case 0x18:
          if ( (unsigned __int8)(*(_WORD *)(v3 + 18) >> 3) != 6 || *(_QWORD *)(v3 + 32) )
            v7 += 16LL;
LABEL_30:
          v9 = *(_QWORD *)(v3 + 40);
          v10 = 1;
          v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_14;
          goto LABEL_12;
        case 0x19:
          v7 += 16LL;
          goto LABEL_33;
        case 0x1A:
          v7 += 8
              * ((8 * *(unsigned __int16 *)(v3 + 22) + 15 + 8 * (unsigned int)((*(_BYTE *)(v3 + 19) & 0x1E) != 0)) >> 3)
              + 8;
          goto LABEL_33;
        case 0x1E:
          v7 += 4LL;
LABEL_33:
          v9 = *(_QWORD *)(v3 + 24);
          v10 = 1;
          v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_14;
          goto LABEL_12;
        case 0x28:
          v7 += 8LL;
LABEL_11:
          v9 = *(_QWORD *)(v3 + 32);
          v10 = 1;
          v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
LABEL_12:
            if ( !(v9 & 7 | (v9 >> 3) & 1) )
              v10 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)v11 + 16LL)];
          }
LABEL_14:
          sub_F6BC10(a1, v9, v10 * ((v7 - (v7 != 0)) / v10 + (v7 != 0)));
          v30 = v12;
          break;
        case 0x3B:
          v23 = 1;
          if ( (*v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            v23 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          sub_F6C1C0(a1, *v5, v23 * ((v7 - (v7 != 0)) / v23 + (v7 != 0)));
          v30 = v24;
          break;
        default:
          BUG();
      }
      v29 = _mm_loadh_ps((const double *)&v30);
    }
    else
    {
      switch ( *(_BYTE *)(v3 + 16) )
      {
        case 0:
          a2 = *(_QWORD *)(a2 + 32);
          v20 = 1;
          if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !(a2 & 7 | (a2 >> 3) & 1) )
            v20 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          v19 = a3;
          v22 = a3 != 0;
          goto LABEL_27;
        case 1:
          v14 = *(_QWORD *)(a2 + 32);
          v15 = 1;
          if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !(v14 & 7 | (v14 >> 3) & 1) )
            v15 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          v13 = a3;
          v17 = a3 != 0;
          goto LABEL_21;
        case 2:
        case 3:
        case 4:
        case 6:
          v13 = a3 + 16;
          goto LABEL_17;
        case 5:
          return sub_F6C150();
        case 7:
        case 0xA:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x1C:
        case 0x1D:
        case 0x1F:
        case 0x20:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x27:
        case 0x29:
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
          v29 = 0u;
          return 0;
        case 8:
          v19 = a3 + 8;
          goto LABEL_56;
        case 9:
          v19 = a3 + 1;
          goto LABEL_23;
        case 0xB:
        case 0x26:
        case 0x2A:
          v19 = a3 + 4;
          goto LABEL_23;
        case 0x10:
          v29.m128_u64[0] = a3;
          v29 = _mm_loadh_ps((const double *)v29.m128_u64);
          return v29.m128_u64[0];
        case 0x18:
          v28 = 16;
          if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
            v28 = 16LL * (*(_QWORD *)(a2 + 32) != 0);
          v19 = a3 + v28;
LABEL_56:
          a2 = *(_QWORD *)(a2 + 40);
          v20 = 1;
          v21 = a2 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_26;
          goto LABEL_24;
        case 0x19:
        case 0x1A:
          v25 = *(_BYTE *)(a2 + 16);
          if ( v25 == 26 )
          {
            v26 = ((*(_BYTE *)(a2 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_47:
            v27 = 8 * ((v26 + 8 * (unsigned int)*(unsigned __int16 *)(a2 + 22)) >> 3) + 8;
            goto LABEL_48;
          }
          v27 = 16;
          if ( v25 != 25 )
          {
            v26 = 15;
            goto LABEL_47;
          }
LABEL_48:
          v14 = *(_QWORD *)(a2 + 24);
          v13 = a3 + v27;
          v15 = 1;
          v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
LABEL_18:
            if ( !(v14 & 7 | (v14 >> 3) & 1) )
              v15 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)v16 + 16LL)];
          }
LABEL_20:
          v17 = v13 != 0;
LABEL_21:
          v18.m128_u64[0] = sub_F6BC10(a1, v14, v15 * ((v13 - v17) / v15 + v17));
          v29 = v18;
          break;
        case 0x1B:
        case 0x21:
          v19 = a3 + 16;
          goto LABEL_23;
        case 0x1E:
          a2 = *(_QWORD *)(a2 + 24);
          v19 = a3 + 4;
          v20 = 1;
          v21 = a2 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_26;
          goto LABEL_24;
        case 0x28:
          v19 = a3 + 8;
LABEL_23:
          a2 = *(_QWORD *)(a2 + 32);
          v20 = 1;
          v21 = a2 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
LABEL_24:
            if ( !(a2 & 7 | (a2 >> 3) & 1) )
              v20 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL)];
          }
LABEL_26:
          v22 = v19 != 0;
LABEL_27:
          a3 = v20 * ((v19 - v22) / v20 + v22);
          continue;
        case 0x2B:
        case 0x2C:
          v13 = a3 + 4;
LABEL_17:
          v14 = *(_QWORD *)(a2 + 32);
          v15 = 1;
          v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_18;
          goto LABEL_20;
        case 0x3B:
          goto LABEL_3;
      }
    }
    return v29.m128_u64[0];
  }
}
