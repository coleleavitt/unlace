unsigned __int64 __fastcall sub_F48480(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __m128 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  _BOOL8 v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  _BOOL8 v13; // r8
  unsigned __int64 v14; // rcx
  __m128 v16; // [rsp+0h] [rbp-18h] BYREF

  while ( 2 )
  {
    switch ( *(_BYTE *)(a2 + 16) )
    {
      case 0:
        v10 = *(_QWORD *)(a2 + 32);
        v11 = 1;
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !(v10 & 7 | (v10 >> 3) & 1) )
          v11 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
        v9 = a3;
        v13 = a3 != 0;
        goto LABEL_15;
      case 1:
        v5 = *(_QWORD *)(a2 + 32);
        v6 = 1;
        if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !(v5 & 7 | (v5 >> 3) & 1) )
          v6 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
        v4 = a3;
        v8 = a3 != 0;
        goto LABEL_9;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        v4 = a3 + 16;
        goto LABEL_5;
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
        v16 = 0u;
        goto LABEL_3;
      case 8:
        v9 = a3 + 8;
        goto LABEL_26;
      case 9:
        v9 = a3 + 1;
        goto LABEL_11;
      case 0xB:
      case 0x26:
      case 0x2A:
        v9 = a3 + 4;
        goto LABEL_11;
      case 0x10:
        v16.m128_u64[0] = a3;
        v16 = _mm_loadh_ps((const double *)v16.m128_u64);
LABEL_3:
        v3.m128_u64[0] = v16.m128_u64[0];
        return v3.m128_u64[0];
      case 0x18:
        v9 = a3;
        if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 || *(_QWORD *)(a2 + 32) )
          v9 = a3 + 16;
LABEL_26:
        v10 = *(_QWORD *)(a2 + 40);
        v11 = 1;
        v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_14;
        goto LABEL_12;
      case 0x19:
        v4 = a3 + 16;
        goto LABEL_22;
      case 0x1A:
        v4 = a3
           + 8
           * ((8 * *(unsigned __int16 *)(a2 + 22) + 15 + 8 * (unsigned int)((*(_BYTE *)(a2 + 19) & 0x1E) != 0)) >> 3)
           + 8;
LABEL_22:
        v5 = *(_QWORD *)(a2 + 24);
        v6 = 1;
        v7 = v5 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_8;
        goto LABEL_6;
      case 0x1B:
      case 0x21:
        v9 = a3 + 16;
        goto LABEL_11;
      case 0x1E:
        v10 = *(_QWORD *)(a2 + 24);
        v9 = a3 + 4;
        v11 = 1;
        v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_14;
        goto LABEL_12;
      case 0x28:
        v9 = a3 + 8;
LABEL_11:
        v10 = *(_QWORD *)(a2 + 32);
        v11 = 1;
        v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
LABEL_12:
          if ( !(v10 & 7 | (v10 >> 3) & 1) )
            v11 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL)];
        }
LABEL_14:
        v13 = v9 != 0;
LABEL_15:
        v3.m128_u64[0] = sub_F47ED0(a1, v10, v11 * ((v9 - v13) / v11 + v13));
        break;
      case 0x2B:
      case 0x2C:
        v4 = a3 + 4;
LABEL_5:
        v5 = *(_QWORD *)(a2 + 32);
        v6 = 1;
        v7 = v5 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
LABEL_6:
          if ( !(v5 & 7 | (v5 >> 3) & 1) )
            v6 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL)];
        }
LABEL_8:
        v8 = v4 != 0;
LABEL_9:
        v3.m128_u64[0] = sub_F47ED0(a1, v5, v6 * ((v4 - v8) / v6 + v8));
        v16 = v3;
        break;
      case 0x3B:
        v14 = 1;
        a2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          v14 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
        a3 = v14 * ((a3 - (a3 != 0)) / v14 + (a3 != 0));
        continue;
    }
    return v3.m128_u64[0];
  }
}

