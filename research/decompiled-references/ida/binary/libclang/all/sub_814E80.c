char __fastcall sub_814E80(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  char v5; // cl
  _QWORD *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rax
  __m128i v30; // [rsp+0h] [rbp-78h] BYREF
  __int64 v31; // [rsp+10h] [rbp-68h]
  __m128i v32; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h]

  while ( 1 )
  {
    LOWORD(v4) = *(_WORD *)a2 & 0x1FF;
    if ( (unsigned __int16)v4 <= 0x76u )
      break;
    if ( (unsigned __int16)v4 <= 0x78u )
    {
      switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
      {
        case 0:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 1:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 2:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 3:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 4:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 5:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 6:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 7:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 8:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 9:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xA:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xB:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xC:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xD:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xE:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0xF:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x10:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x11:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x12:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x13:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x14:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x15:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x16:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x17:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x18:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x19:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1A:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1B:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1C:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1D:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1E:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x1F:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        case 0x20:
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
          break;
        default:
          goto LABEL_7;
      }
      return v4;
    }
LABEL_7:
    switch ( (__int16)v4 )
    {
      case 0:
      case 1:
      case 2:
      case 4:
        LOBYTE(v4) = sub_817440(a1, a2);
        return v4;
      case 3:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 5:
      case 28:
      case 66:
      case 72:
      case 95:
      case 106:
      case 118:
        return v4;
      case 6:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 7:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 8:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 9:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 10:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 11:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 12:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 13:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 14:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 15:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 16:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 17:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 18:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 19:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 20:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 21:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 22:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 23:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 24:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 25:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 26:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 27:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 29:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 30:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 31:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 32:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 33:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 34:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 35:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 36:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 37:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 38:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 39:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 40:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 41:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 42:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 43:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 44:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 45:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 46:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 47:
        a2 = *(_QWORD *)(a2 + 16);
        continue;
      case 48:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 49:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 50:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 51:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 52:
        v6 = (_QWORD *)(a2 + 32);
        v4 = 8LL * *(unsigned __int16 *)(a2 + 4);
        v7 = a2 + v4 + 32;
        if ( v4 )
        {
          do
          {
            if ( *v6 )
              LOBYTE(v4) = sub_814E80(a1, *v6);
            ++v6;
          }
          while ( (_QWORD *)v7 != v6 );
        }
        return v4;
      case 53:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 54:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 55:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 56:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 57:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 58:
        LODWORD(v4) = ~*(_DWORD *)(a2 + 16);
        if ( (v4 & 0x3FFF8000) == 0 )
          return v4;
        a2 = *(_QWORD *)(a2
                       + 8LL
                       * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                       + 32);
        break;
      case 59:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 60:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 61:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 62:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 63:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 64:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 65:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 67:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 68:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 69:
        sub_AC4830(&v32);
        v12 = _mm_load_si128(&v32);
        v31 = v33;
        v30 = v12;
        v13 = (unsigned __int64 *)v12.m128i_i64[0];
        if ( (v12.m128i_i8[8] & 3) != 0 )
          v13 = (unsigned __int64 *)sub_ACE280(&v30, a2, v8, v9, v10, v11);
        a2 = *v13;
        continue;
      case 70:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 71:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 73:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 74:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 75:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 76:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 77:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 78:
        LODWORD(v4) = **(_DWORD **)(a2 + 16);
        if ( (v4 & 0x20000) != 0 )
          return v4;
        if ( *(_BYTE *)(a2 + 48) )
          a2 = *(_QWORD *)(a2 + 24);
        else
          a2 = *(_QWORD *)(a2 + 32);
        break;
      case 79:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 80:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 81:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 82:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 83:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 84:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 85:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 86:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 87:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 88:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 89:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 90:
        v4 = sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)));
        v14 = v4;
        if ( !v4
          || (LODWORD(v4) = (*(_BYTE *)(v4 + 28) & 0x7F) - 32, (unsigned int)v4 > 5)
          || (v15 = *(_QWORD *)a1, LODWORD(v4) = sub_77F000(v14, 0), !(_DWORD)v4)
          || (v16 = sub_C63970(*(_QWORD *)(v15 + 17360), (unsigned int)v4),
              (v4 = (__int64)strchr(*(const char **)(v16 + 24), 117)) == 0) )
        {
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
        }
        return v4;
      case 91:
        v4 = sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)));
        v17 = v4;
        if ( !v4
          || (LODWORD(v4) = (*(_BYTE *)(v4 + 28) & 0x7F) - 32, (unsigned int)v4 > 5)
          || (v18 = *(_QWORD *)a1, LODWORD(v4) = sub_77F000(v17, 0), !(_DWORD)v4)
          || (v19 = sub_C63970(*(_QWORD *)(v18 + 17360), (unsigned int)v4),
              (v4 = (__int64)strchr(*(const char **)(v19 + 24), 117)) == 0) )
        {
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
        }
        return v4;
      case 92:
        v4 = sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)));
        v20 = v4;
        if ( !v4
          || (LODWORD(v4) = (*(_BYTE *)(v4 + 28) & 0x7F) - 32, (unsigned int)v4 > 5)
          || (v21 = *(_QWORD *)a1, LODWORD(v4) = sub_77F000(v20, 0), !(_DWORD)v4)
          || (v22 = sub_C63970(*(_QWORD *)(v21 + 17360), (unsigned int)v4),
              (v4 = (__int64)strchr(*(const char **)(v22 + 24), 117)) == 0) )
        {
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
        }
        return v4;
      case 93:
        v4 = sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)));
        v23 = v4;
        if ( !v4
          || (LODWORD(v4) = (*(_BYTE *)(v4 + 28) & 0x7F) - 32, (unsigned int)v4 > 5)
          || (v24 = *(_QWORD *)a1, LODWORD(v4) = sub_77F000(v23, 0), !(_DWORD)v4)
          || (v25 = sub_C63970(*(_QWORD *)(v24 + 17360), (unsigned int)v4),
              (v4 = (__int64)strchr(*(const char **)(v25 + 24), 117)) == 0) )
        {
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
        }
        return v4;
      case 94:
        v4 = sub_80F4C0(*(_QWORD *)(a2 + *(unsigned __int8 *)(a2 + 3)));
        v26 = v4;
        if ( !v4
          || (LODWORD(v4) = (*(_BYTE *)(v4 + 28) & 0x7F) - 32, (unsigned int)v4 > 5)
          || (v27 = *(_QWORD *)a1, LODWORD(v4) = sub_77F000(v26, 0), !(_DWORD)v4)
          || (v28 = sub_C63970(*(_QWORD *)(v27 + 17360), (unsigned int)v4),
              (v4 = (__int64)strchr(*(const char **)(v28 + 24), 117)) == 0) )
        {
          if ( !*(_BYTE *)(a1 + 9) )
          {
            LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
            if ( (_BYTE)v4 )
              *(_BYTE *)(a1 + 9) = 1;
          }
        }
        return v4;
      case 96:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 97:
        LOBYTE(v4) = sub_8C13F0(a2);
        if ( !(_BYTE)v4 )
          return v4;
        a2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        break;
      case 98:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 99:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 100:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 101:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 102:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 103:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 104:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 105:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 107:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 108:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 109:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 110:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 111:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 112:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 113:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 114:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 115:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 116:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 117:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 119:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      case 120:
        if ( !*(_BYTE *)(a1 + 9) )
          goto LABEL_401;
        return v4;
      default:
        goto LABEL_7;
    }
  }
  if ( (_WORD)v4 != 4 )
    goto LABEL_7;
  v5 = *(_BYTE *)(a1 + 9);
  LOBYTE(v4) = *(_BYTE *)(a2 + 2) >> 3;
  if ( *(_BYTE *)(a2 + 2) > 0x6Fu )
  {
    if ( !v5 )
LABEL_401:
      LOBYTE(v4) = sub_814E60(a1, (unsigned __int16 *)a2);
  }
  else
  {
    switch ( (char)v4 )
    {
      case 0:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 1:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 2:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 3:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 4:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 5:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 6:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 7:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 8:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 9:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 10:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 11:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 12:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
      case 13:
        if ( !v5 )
        {
          LOBYTE(v4) = sub_8146E0((unsigned __int16 *)a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
          if ( (_BYTE)v4 )
            *(_BYTE *)(a1 + 9) = 1;
        }
        break;
    }
  }
  return v4;
}

