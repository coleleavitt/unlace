__int64 __fastcall sub_639270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v7; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __m128i v11; // xmm0
  unsigned int v12; // r14d
  __int64 v13; // rsi
  char *v14; // rax
  _BYTE *v15; // r8
  __int64 v16; // rcx
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int32 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+18h] [rbp-A0h] BYREF
  __m128i v24; // [rsp+20h] [rbp-98h] BYREF
  __m128i v25; // [rsp+30h] [rbp-88h] BYREF
  __m128i v26; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v27[6]; // [rsp+50h] [rbp-68h] BYREF

  while ( 2 )
  {
    switch ( *(_WORD *)a2 & 0x1FF )
    {
      case 1:
        v7 = 207;
        goto LABEL_3;
      case 2:
        v7 = 201;
        goto LABEL_3;
      case 3:
      case 7:
      case 0xC:
      case 0xE:
      case 0xF:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x1A:
      case 0x1C:
      case 0x1D:
      case 0x25:
      case 0x27:
      case 0x28:
      case 0x2B:
      case 0x2E:
      case 0x30:
      case 0x31:
      case 0x37:
      case 0x39:
      case 0x3D:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x47:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4E:
      case 0x50:
      case 0x5F:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x6D:
      case 0x70:
      case 0x71:
      case 0x75:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7E:
      case 0x7F:
      case 0x82:
        v7 = 100;
        goto LABEL_3;
      case 4:
        v7 = 112;
        goto LABEL_3;
      case 5:
      case 0x6A:
        v7 = 136;
        goto LABEL_3;
      case 6:
      case 8:
      case 9:
      case 0x19:
      case 0x3C:
      case 0x46:
        v7 = 101;
        goto LABEL_3;
      case 0xA:
        v7 = 109;
        goto LABEL_3;
      case 0xB:
        v7 = 121;
        goto LABEL_3;
      case 0xD:
        v7 = 143;
        goto LABEL_3;
      case 0x10:
        v7 = 154;
        goto LABEL_3;
      case 0x12:
      case 0x3E:
        a2 = *(_QWORD *)(a2 + 16);
        continue;
      case 0x15:
        v7 = 111;
        goto LABEL_3;
      case 0x16:
        v7 = 156;
        goto LABEL_3;
      case 0x17:
        v7 = 142;
        goto LABEL_3;
      case 0x18:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x2F:
      case 0x33:
      case 0x67:
      case 0x6E:
        v7 = 102;
        goto LABEL_3;
      case 0x1B:
        if ( *(_QWORD *)(a2 + 16) )
        {
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        }
        v7 = 100;
LABEL_3:
        *(_DWORD *)a1 = v7;
        *(_DWORD *)(a1 + 4) = 0;
        *(_QWORD *)(a1 + 8) = a3;
        *(_QWORD *)(a1 + 16) = a2;
        *(_QWORD *)(a1 + 24) = a4;
        return a1;
      case 0x1E:
        v7 = 137;
        goto LABEL_3;
      case 0x1F:
        v7 = 139;
        goto LABEL_3;
      case 0x20:
        v7 = 140;
        goto LABEL_3;
      case 0x22:
        if ( (_DWORD)a5 && HIDWORD(a5) && (_DWORD)a5 == HIDWORD(a5) )
        {
          v12 = -1;
          v22 = a5;
          v26.m128i_i64[1] = 0x1000000000LL;
          v26.m128i_i64[0] = (__int64)v27;
          sub_8C8F60(a2, &v26);
          v24.m128i_i32[0] = v22;
          v13 = v26.m128i_i64[0] + 4LL * v26.m128i_u32[2];
          v14 = (char *)sub_638D30(v26.m128i_i64[0], v13, v24.m128i_i32);
          v16 = a4;
          if ( (char *)v13 != v14 )
            v12 = (v14 - v15) >> 2;
          if ( v15 != (_BYTE *)v27 )
          {
            free(v15);
            v16 = a4;
          }
          v24.m128i_i64[0] = 104;
          v24.m128i_i64[1] = a3;
          v17 = _mm_load_si128(&v24);
          v25.m128i_i64[0] = a2;
          v25.m128i_i64[1] = v16;
          v18 = _mm_load_si128(&v25);
          v26 = v17;
          v27[0] = v18;
          *(__m128i *)a1 = v17;
          *(__m128i *)(a1 + 16) = v18;
          if ( v12 != -1 )
          {
            if ( ((*(_WORD *)a2 + 509) & 0x1FFu) > 0x7F )
              BUG();
            if ( (*(_BYTE *)(a2 + 27) & 4) == 0 )
            {
              v23 = sub_8C9100(a2);
              v20 = (v23 & 3) == 1 ? 1 : sub_C87220(&v23, v13, v19);
              if ( v12 < v20 )
              {
LABEL_179:
                *(_DWORD *)(a1 + 4) = v12;
                return a1;
              }
            }
          }
        }
        else
        {
          v24.m128i_i64[0] = 104;
          v24.m128i_i64[1] = a3;
          v11 = _mm_load_si128(&v24);
          v25.m128i_i64[0] = a2;
          v25.m128i_i64[1] = a4;
          *(__m128i *)a1 = v11;
          *(__m128i *)(a1 + 16) = _mm_load_si128(&v25);
        }
        v12 = -1;
        goto LABEL_179;
      case 0x26:
        v7 = 138;
        goto LABEL_3;
      case 0x29:
        v7 = 145;
        goto LABEL_3;
      case 0x2A:
        v7 = 148;
        goto LABEL_3;
      case 0x2C:
        v7 = 151;
        goto LABEL_3;
      case 0x2D:
        v7 = 150;
        goto LABEL_3;
      case 0x32:
      case 0x7C:
        v7 = 113;
        goto LABEL_3;
      case 0x34:
        v7 = 144;
        goto LABEL_3;
      case 0x35:
        v7 = 106;
        goto LABEL_3;
      case 0x36:
        v7 = 119;
        goto LABEL_3;
      case 0x38:
        v7 = 108;
        goto LABEL_3;
      case 0x3A:
        v7 = 122;
        goto LABEL_3;
      case 0x3B:
        v7 = 123;
        goto LABEL_3;
      case 0x3F:
        v7 = 107;
        goto LABEL_3;
      case 0x40:
        v7 = 149;
        goto LABEL_3;
      case 0x48:
        v9 = *(_QWORD *)(a2 + 16);
        if ( v9 )
        {
          v7 = 101;
          if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x2B )
          {
            v10 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
              v10 = *(_QWORD *)v10;
            v7 = 101;
            if ( (*(_BYTE *)(v10 + 8) & 0x7F) == 0x10 )
            {
              v7 = 146;
              if ( v9 != *(_QWORD *)(v10 + 72) )
                v7 = 101;
            }
          }
        }
        else
        {
          v7 = 101;
        }
        goto LABEL_3;
      case 0x4C:
        v7 = 153;
        goto LABEL_3;
      case 0x4D:
        v7 = 118;
        goto LABEL_3;
      case 0x4F:
        v7 = 110;
        goto LABEL_3;
      case 0x51:
        v7 = 141;
        goto LABEL_3;
      case 0x52:
        v7 = 124;
        goto LABEL_3;
      case 0x53:
        v7 = 126;
        goto LABEL_3;
      case 0x54:
        v7 = 125;
        goto LABEL_3;
      case 0x55:
        v7 = 127;
        goto LABEL_3;
      case 0x56:
        v7 = 152;
        goto LABEL_3;
      case 0x57:
        v7 = 128;
        goto LABEL_3;
      case 0x58:
        v7 = 117;
        goto LABEL_3;
      case 0x59:
        v7 = 280;
        goto LABEL_3;
      case 0x5A:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x60:
      case 0x6C:
      case 0x72:
      case 0x73:
        v7 = 103;
        goto LABEL_3;
      case 0x61:
        v7 = 129;
        goto LABEL_3;
      case 0x62:
        v7 = 133;
        goto LABEL_3;
      case 0x63:
        v7 = 132;
        goto LABEL_3;
      case 0x68:
        v7 = 155;
        goto LABEL_3;
      case 0x69:
        v7 = 131;
        goto LABEL_3;
      case 0x6B:
        v7 = 134;
        goto LABEL_3;
      case 0x6F:
        v7 = 135;
        goto LABEL_3;
      case 0x74:
        v7 = 130;
        goto LABEL_3;
      case 0x76:
        v7 = 105;
        goto LABEL_3;
      case 0x77:
        v7 = 114;
        goto LABEL_3;
      case 0x78:
        v7 = 115;
        goto LABEL_3;
      case 0x7D:
        v7 = 147;
        goto LABEL_3;
      case 0x80:
        v7 = 120;
        goto LABEL_3;
      case 0x81:
        v7 = 116;
        goto LABEL_3;
      case 0x83:
      case 0x87:
      case 0xED:
      case 0xF4:
      case 0xF5:
      case 0xF8:
        v7 = 200;
        goto LABEL_3;
      case 0x84:
        v7 = 206;
        goto LABEL_3;
      case 0x85:
        v7 = 204;
        goto LABEL_3;
      case 0x86:
        v7 = 203;
        goto LABEL_3;
      case 0x88:
        v7 = 226;
        goto LABEL_3;
      case 0x89:
        v7 = 247;
        goto LABEL_3;
      case 0x8A:
        v7 = 228;
        goto LABEL_3;
      case 0x8B:
        v7 = 227;
        goto LABEL_3;
      case 0x8C:
        v7 = 214;
        goto LABEL_3;
      case 0x8D:
        v7 = 327;
        goto LABEL_3;
      case 0x8E:
        v7 = 331;
        goto LABEL_3;
      case 0x8F:
        v7 = 329;
        goto LABEL_3;
      case 0x90:
        v7 = 330;
        goto LABEL_3;
      case 0x91:
        v7 = 328;
        goto LABEL_3;
      case 0x92:
        v7 = 325;
        goto LABEL_3;
      case 0x93:
        v7 = 324;
        goto LABEL_3;
      case 0x94:
        v7 = 321;
        goto LABEL_3;
      case 0x95:
        v7 = 326;
        goto LABEL_3;
      case 0x96:
        v7 = 323;
        goto LABEL_3;
      case 0x97:
        v7 = 320;
        goto LABEL_3;
      case 0x98:
        v7 = 322;
        goto LABEL_3;
      case 0x99:
        v7 = 222;
        goto LABEL_3;
      case 0x9A:
        v7 = 221;
        goto LABEL_3;
      case 0x9B:
        v7 = 216;
        goto LABEL_3;
      case 0x9C:
        v7 = 219;
        goto LABEL_3;
      case 0x9D:
        v7 = 220;
        goto LABEL_3;
      case 0x9E:
        v7 = 218;
        goto LABEL_3;
      case 0x9F:
        v7 = 217;
        goto LABEL_3;
      case 0xA0:
        v7 = 253;
        goto LABEL_3;
      case 0xA1:
        v7 = 243;
        goto LABEL_3;
      case 0xA2:
        v7 = 245;
        goto LABEL_3;
      case 0xA3:
        v7 = 254;
        goto LABEL_3;
      case 0xA4:
        v7 = 240;
        goto LABEL_3;
      case 0xA5:
        v7 = 265;
        goto LABEL_3;
      case 0xA6:
        v7 = 275;
        goto LABEL_3;
      case 0xA7:
        v7 = 264;
        goto LABEL_3;
      case 0xA8:
        v7 = 263;
        goto LABEL_3;
      case 0xA9:
        v7 = 262;
        goto LABEL_3;
      case 0xAA:
        v7 = 261;
        goto LABEL_3;
      case 0xAB:
        v7 = 252;
        goto LABEL_3;
      case 0xAC:
        v7 = 257;
        goto LABEL_3;
      case 0xAD:
        v7 = 237;
        goto LABEL_3;
      case 0xAE:
        v7 = 235;
        goto LABEL_3;
      case 0xAF:
        v7 = 236;
        goto LABEL_3;
      case 0xB0:
        v7 = 306;
        goto LABEL_3;
      case 0xB1:
        v7 = 287;
        goto LABEL_3;
      case 0xB2:
        v7 = 239;
        goto LABEL_3;
      case 0xB3:
        v7 = 285;
        goto LABEL_3;
      case 0xB4:
        v7 = 300;
        goto LABEL_3;
      case 0xB5:
        v7 = 232;
        goto LABEL_3;
      case 0xB6:
        v7 = 248;
        goto LABEL_3;
      case 0xB7:
        v7 = 294;
        goto LABEL_3;
      case 0xB8:
        v7 = 241;
        goto LABEL_3;
      case 0xB9:
        v7 = 292;
        goto LABEL_3;
      case 0xBA:
        v7 = 293;
        goto LABEL_3;
      case 0xBB:
      case 0xBD:
        v7 = 288;
        goto LABEL_3;
      case 0xBC:
        v7 = 307;
        goto LABEL_3;
      case 0xBE:
        v7 = 296;
        goto LABEL_3;
      case 0xBF:
        v7 = 272;
        goto LABEL_3;
      case 0xC0:
        v7 = 273;
        goto LABEL_3;
      case 0xC1:
        v7 = 274;
        goto LABEL_3;
      case 0xC2:
        v7 = 271;
        goto LABEL_3;
      case 0xC3:
        v7 = 259;
        goto LABEL_3;
      case 0xC4:
        v7 = 258;
        goto LABEL_3;
      case 0xC5:
        v7 = 297;
        goto LABEL_3;
      case 0xC6:
        v7 = 279;
        goto LABEL_3;
      case 0xC7:
        v7 = 278;
        goto LABEL_3;
      case 0xC8:
        v7 = 277;
        goto LABEL_3;
      case 0xC9:
        v7 = 276;
        goto LABEL_3;
      case 0xCA:
        v7 = 270;
        goto LABEL_3;
      case 0xCB:
        v7 = 299;
        goto LABEL_3;
      case 0xCC:
        v7 = 269;
        goto LABEL_3;
      case 0xCD:
        v7 = 233;
        goto LABEL_3;
      case 0xCE:
        v7 = 284;
        goto LABEL_3;
      case 0xCF:
        v7 = 282;
        goto LABEL_3;
      case 0xD0:
        v7 = 304;
        goto LABEL_3;
      case 0xD1:
        v7 = 303;
        goto LABEL_3;
      case 0xD2:
        v7 = 298;
        goto LABEL_3;
      case 0xD3:
        v7 = 251;
        goto LABEL_3;
      case 0xD4:
        v7 = 238;
        goto LABEL_3;
      case 0xD5:
        v7 = 283;
        goto LABEL_3;
      case 0xD6:
        v7 = 281;
        goto LABEL_3;
      case 0xD7:
        v7 = 302;
        goto LABEL_3;
      case 0xD8:
        v7 = 301;
        goto LABEL_3;
      case 0xD9:
        v7 = 295;
        goto LABEL_3;
      case 0xDA:
        v7 = 250;
        goto LABEL_3;
      case 0xDB:
        v7 = 234;
        goto LABEL_3;
      case 0xDC:
        v7 = 268;
        goto LABEL_3;
      case 0xDD:
        v7 = 267;
        goto LABEL_3;
      case 0xDE:
        v7 = 266;
        goto LABEL_3;
      case 0xDF:
        v7 = 260;
        goto LABEL_3;
      case 0xE0:
        v7 = 290;
        goto LABEL_3;
      case 0xE1:
        v7 = 246;
        goto LABEL_3;
      case 0xE2:
        v7 = 305;
        goto LABEL_3;
      case 0xE3:
        v7 = 291;
        goto LABEL_3;
      case 0xE4:
        v7 = 286;
        goto LABEL_3;
      case 0xE5:
        v7 = 242;
        goto LABEL_3;
      case 0xE6:
        v7 = 255;
        goto LABEL_3;
      case 0xE7:
        v7 = 256;
        goto LABEL_3;
      case 0xE8:
        v7 = 244;
        goto LABEL_3;
      case 0xE9:
        v7 = 249;
        goto LABEL_3;
      case 0xEA:
        v7 = 309;
        goto LABEL_3;
      case 0xEB:
        v7 = 289;
        goto LABEL_3;
      case 0xEC:
        v7 = 230;
        goto LABEL_3;
      case 0xEE:
        v7 = 211;
        goto LABEL_3;
      case 0xEF:
        v7 = 205;
        goto LABEL_3;
      case 0xF0:
        v7 = 210;
        goto LABEL_3;
      case 0xF1:
        v7 = 209;
        goto LABEL_3;
      case 0xF2:
        v7 = 208;
        goto LABEL_3;
      case 0xF3:
        v7 = 231;
        goto LABEL_3;
      case 0xF6:
        v7 = 212;
        goto LABEL_3;
      case 0xF7:
        v7 = 202;
        goto LABEL_3;
      case 0xF9:
        v7 = 224;
        goto LABEL_3;
      case 0xFA:
        v7 = 225;
        goto LABEL_3;
      case 0xFB:
        v7 = 223;
        goto LABEL_3;
      case 0xFC:
        v7 = 213;
        goto LABEL_3;
      case 0xFD:
        v7 = 229;
        goto LABEL_3;
      case 0xFE:
        v7 = 215;
        goto LABEL_3;
      default:
        v7 = 72;
        goto LABEL_3;
    }
  }
}

