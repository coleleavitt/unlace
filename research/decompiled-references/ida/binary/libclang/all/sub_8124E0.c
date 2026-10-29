__int64 __fastcall sub_8124E0(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  unsigned __int16 v11; // ax
  unsigned int *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  char v17; // al
  __int64 v18; // rax
  unsigned int *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-50h]
  __m128 v22; // [rsp+10h] [rbp-48h] BYREF
  char v23[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-20h]

  while ( 1 )
  {
    switch ( (*(_WORD *)a1 + 509) & 0x1FF )
    {
      case 0:
        return *(unsigned int *)(a1 + 32);
      case 1:
        return *(unsigned int *)(a1 + 4);
      case 2:
        return *(unsigned int *)(a1 + 24);
      case 3:
        return *(unsigned int *)(a1 + 16);
      case 4:
        return *(unsigned int *)(a1 + 16);
      case 5:
        return *(unsigned int *)(a1 + 36);
      case 6:
        return *(unsigned int *)(a1 + 4);
      case 7:
        return *(unsigned int *)(a1 + 20);
      case 8:
        return *(unsigned int *)(a1 + 24);
      case 9:
        return *(unsigned int *)(a1 + 16);
      case 0xA:
        return *(unsigned int *)(a1 + 16);
      case 0xB:
        return *(unsigned int *)(a1 + 16);
      case 0xC:
        return *(unsigned int *)(a1 + 16);
      case 0xD:
        return *(unsigned int *)(a1 + 4);
      case 0xE:
        return *(unsigned int *)(a1 + 16);
      case 0xF:
      case 0x22:
      case 0x2D:
      case 0x2F:
        goto LABEL_5;
      case 0x10:
        return *(unsigned int *)(a1 + 4);
      case 0x11:
        return *(unsigned int *)(a1 + 16);
      case 0x12:
        return *(unsigned int *)(a1 + 16);
      case 0x13:
      case 0x14:
      case 0x1A:
      case 0x72:
      case 0x7E:
      case 0x7F:
        return sub_AC6DA0(*(_QWORD *)(a1 + 24));
      case 0x15:
        return *(unsigned int *)(a1 + 24);
      case 0x16:
        v22 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 40));
        if ( v22.m128_u64[0] )
          return sub_A7BB10(&v22);
        else
          return *(unsigned int *)(a1 + 24);
      case 0x17:
        return *(unsigned int *)(a1 + 16);
      case 0x18:
        if ( *(_QWORD *)(a1 + 16) )
          return ((__int64 (*)(void))sub_8124E0)();
        else
          return *(unsigned int *)(a1 + 4);
      case 0x19:
        return *(unsigned int *)(a1 + 16);
      case 0x1B:
        return *(unsigned int *)(a1 + 24);
      case 0x1C:
        return *(unsigned int *)(a1 + 24);
      case 0x1D:
        return *(unsigned int *)(a1 + 24);
      case 0x1E:
        v14 = *(_QWORD *)(a1 + 40);
        if ( (v14 & 6) != 0 )
          return *(unsigned int *)(a1 + 36);
        else
          return sub_AC6DA0(v14 & 0xFFFFFFFFFFFFFFF8LL);
      case 0x1F:
        return *(unsigned int *)(a1 + 32);
      case 0x20:
        if ( (*(_BYTE *)(a1 + 40) & 2) != 0 )
          return *(unsigned int *)(a1 + 32);
        else
          return sub_AC6DA0(*(_QWORD *)(a1 + 24));
      case 0x21:
        return *(unsigned int *)(a1 + 24);
      case 0x23:
        return *(unsigned int *)(a1 + 24);
      case 0x24:
      case 0x28:
        return *(unsigned int *)(a1 + 20);
      case 0x25:
        return *(unsigned int *)(a1 + 32);
      case 0x26:
        return *(unsigned int *)(a1 + 20);
      case 0x27:
        return *(unsigned int *)(a1 + 32);
      case 0x29:
        return *(unsigned int *)(a1 + 16);
      case 0x2A:
        return *(unsigned int *)(a1 + 16);
      case 0x2B:
      case 0x34:
      case 0x7C:
        return 0;
      case 0x2C:
        return *(unsigned int *)(a1 + 40);
      case 0x2E:
        v7 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v7 = *(_QWORD *)(v7 + 40);
        return sub_AC6DA0(v7);
      case 0x30:
        v8 = *(_QWORD *)(a1 + 16);
        if ( !v8 || !(unsigned __int8)sub_8123C0(*(_QWORD *)(a1 + 16)) )
          return sub_AC6DA0(v8);
        if ( *(_QWORD *)(a1 + 40) )
          return sub_A7BB10(a1 + 40);
        else
          return *(unsigned int *)(a1 + 32);
      case 0x31:
        return *(unsigned int *)(a1 + 16);
      case 0x32:
        return *(unsigned int *)(a1 + 28);
      case 0x33:
        for ( i = *(_QWORD *)(a1 + 48); (i & 4) != 0; i = *(_QWORD *)(v4 + 48) )
        {
          v4 = i & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v4 )
            break;
          a1 = v4;
        }
        result = *(unsigned int *)(a1 + 40);
        if ( (_DWORD)result )
          return result;
        v5 = *(unsigned __int64 **)(a1 + 16);
        v6 = *(unsigned __int64 **)(a1 + 24);
        if ( v5 == v6 )
          return result;
        while ( 1 )
        {
          v7 = *v5;
          if ( *v5 )
            break;
          if ( v6 == ++v5 )
            return result;
        }
        return sub_AC6DA0(v7);
      case 0x35:
      case 0x36:
      case 0x3A:
      case 0x3B:
      case 0x3E:
      case 0x41:
      case 0x4D:
      case 0x61:
      case 0x64:
        return sub_AC6DA0(*(_QWORD *)(a1 + 16));
      case 0x37:
        return *(unsigned int *)(a1 + 4);
      case 0x38:
        return *(unsigned int *)(a1 + 16);
      case 0x39:
        return *(unsigned int *)(a1 + 24);
      case 0x3C:
        return *(unsigned int *)(a1 + 28);
      case 0x3D:
        return *(unsigned int *)(a1 + 28);
      case 0x3F:
        return *(unsigned int *)(a1 + 20);
      case 0x40:
        return *(unsigned int *)(a1 + 16);
      case 0x42:
        v10 = *(_DWORD **)(a1 + 24);
        if ( *v10 )
          return (unsigned int)v10[3];
        v11 = *(_WORD *)(a1 + 20) >> 1;
        if ( !v11 )
          return (unsigned int)v10[3];
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          v12 = v10 + 4;
          v13 = (__int64)&v10[6 * v11 + 4];
          do
          {
            result = *v12;
            if ( (_DWORD)result )
              return result;
            v12 += 6;
          }
          while ( v12 != (unsigned int *)v13 );
          return (unsigned int)v10[3];
        }
        v19 = v10 + 5;
        v20 = (__int64)&v10[6 * v11 + 5];
        while ( 1 )
        {
          result = *v19;
          if ( (_DWORD)result )
            break;
          v19 += 6;
          if ( v19 == (unsigned int *)v20 )
            return (unsigned int)v10[3];
        }
        return result;
      case 0x43:
        return sub_A7BB10(a1 + 16);
      case 0x44:
        return *(unsigned int *)(a1 + 16);
      case 0x45:
        if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
          return *(unsigned int *)(a1 + 4);
        v22 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 32));
        return sub_A7BB10(&v22);
      case 0x46:
      case 0x47:
        return *(unsigned int *)(a1 + 16);
      case 0x48:
        return *(unsigned int *)(a1 + 32);
      case 0x49:
        return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 32LL);
      case 0x4A:
        v7 = *(_QWORD *)(a1 + 32);
        result = 0;
        if ( v7 )
        {
          result = *(unsigned int *)(a1 + 16);
          if ( !(_DWORD)result )
            return sub_AC6DA0(v7);
        }
        return result;
      case 0x4B:
        return *(unsigned int *)(a1 + 40);
      case 0x4C:
        return *(unsigned int *)(a1 + 20);
      case 0x4E:
        return *(unsigned int *)(a1 + 32);
      case 0x4F:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
        return *(unsigned int *)(a1 + 32);
      case 0x54:
        return sub_8C4080(a1);
      case 0x55:
        return *(unsigned int *)(a1 + 32);
      case 0x56:
        return *(unsigned int *)(a1 + 32);
      case 0x57:
      case 0x5B:
        return sub_80F570(a1);
      case 0x58:
        if ( (unsigned int)sub_8C4250(a1) == 1 )
          return *(unsigned int *)(a1 + 20);
        else
          return sub_AC6DA0(*(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a1 + 3)));
      case 0x59:
        if ( (*(_BYTE *)(a1 + 4) & 0x3Fu) - 5 > 0x23 || (((*(_BYTE *)(a1 + 4) & 0x3F) + 27) & 0x3Fu) <= 1 )
          return *(unsigned int *)(a1 + 24);
        else
          return *(unsigned int *)(a1 + 20);
      case 0x5A:
        result = sub_8124E0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3)));
        if ( !(_DWORD)result )
          return sub_80F570(a1);
        return result;
      case 0x5C:
        return *(unsigned int *)(a1 + 32);
      case 0x5D:
        return sub_8C5F20(a1);
      case 0x5E:
      case 0x67:
        return *(unsigned int *)(a1 + 24);
      case 0x5F:
        return *(unsigned int *)(a1 + 4);
      case 0x60:
        return *(unsigned int *)(a1 + 4);
      case 0x62:
        return sub_8C18B0(a1);
      case 0x63:
        sub_8C11F0(v23, a1);
        a1 = v24;
        continue;
      case 0x65:
        return *(unsigned int *)(a1 + 28);
      case 0x66:
        return *(unsigned int *)(a1 + 4);
      case 0x68:
        return *(unsigned int *)(a1 + 40);
      case 0x69:
        return *(unsigned int *)(a1 + 24);
      case 0x6A:
        result = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)result )
        {
          v7 = *(_QWORD *)(a1 + 40);
          result = *(unsigned int *)(a1 + 20);
          if ( v7 )
          {
            if ( (*(_BYTE *)(v7 + 1) & 0x40) != 0 )
              return sub_AC6DA0(v7);
          }
        }
        return result;
      case 0x6B:
        if ( *(_QWORD *)(a1 + 16) && !(unsigned __int8)sub_8123C0(*(_QWORD *)(a1 + 16)) )
          return sub_AC6DA0(v8);
        if ( !*(_QWORD *)(a1 + 32) )
          return *(unsigned int *)(a1 + 56);
        v22 = _mm_loadh_ps((const double *)(a1 + 40));
        return sub_A7BB10(&v22);
      case 0x6C:
        return *(unsigned int *)(a1 + 4);
      case 0x6D:
        return *(unsigned int *)(a1 + 4);
      case 0x6E:
        return *(unsigned int *)(a1 + 4);
      case 0x6F:
        return sub_8C2C00(a1);
      case 0x70:
        return sub_8C4CA0(a1);
      case 0x71:
        return *(unsigned int *)(a1 + 4);
      case 0x73:
        return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
      case 0x74:
      case 0x75:
        return *(unsigned int *)(a1 + 4);
      case 0x76:
        return *(unsigned int *)(a1 + 76);
      case 0x77:
        return *(unsigned int *)(a1 + 24);
      case 0x78:
        return *(unsigned int *)(a1 + 40);
      case 0x79:
        v15 = *(_QWORD *)(a1 + 24);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        v17 = *(_BYTE *)(v16 + 16);
        switch ( v17 )
        {
          case 13:
            if ( (((*(_WORD *)(v16 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
              goto LABEL_5;
            break;
          case 46:
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            v18 = sub_B14A40(v16);
            if ( ((*(_BYTE *)(v18 + 74) & 1) != 0 || *(_QWORD *)(v18 + 128) > 7u)
              && *(char *)(sub_B14A40(v21) + 76) >= 0 )
            {
LABEL_5:
              a1 = *(_QWORD *)(a1 + 16);
              continue;
            }
            v15 = *(_QWORD *)(a1 + 24);
            break;
          case 10:
            goto LABEL_5;
        }
        a1 = v15;
        break;
      case 0x7A:
        a1 = *(_QWORD *)(a1 + 24);
        continue;
      case 0x7B:
        v9 = *(_QWORD *)(a1 + 16);
        v7 = *(_QWORD *)(v9 + 16);
        if ( v7 )
          return sub_AC6DA0(v7);
        return *(unsigned int *)(v9 + 4);
      case 0x7D:
        return *(unsigned int *)(a1 + 16);
    }
  }
}

