__int64 __fastcall sub_EEB7E0(unsigned __int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char v7; // cl
  __m128 v8; // xmm1
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rdi
  char v12; // al
  __m128 v13; // xmm2
  unsigned __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdi
  _DWORD *v17; // rdi
  char v18; // al
  __m128i v19; // rax
  char v20; // cl
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // rax
  char v31; // cl
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // si
  __int64 v35; // [rsp+8h] [rbp-30h] BYREF
  __m128 v36; // [rsp+10h] [rbp-28h] BYREF

  switch ( *(_WORD *)a1 & 0x1FF )
  {
    case 0:
    case 0xEF:
    case 0xF7:
    case 0xF9:
    case 0xFB:
    case 0xFD:
    case 0xFF:
    case 0x100:
      return *(unsigned int *)(a1 + 8);
    case 1:
    case 2:
      return *(unsigned int *)(a1 + 4);
    case 3:
      return *(unsigned int *)(a1 + 32);
    case 4:
      if ( *(_BYTE *)(a1 + 2) <= 0xFu )
        return sub_EEB7E0(*(_QWORD *)(a1 + 16));
      return *(unsigned int *)(a1 + 4);
    case 5:
      return *(unsigned int *)(a1 + 24);
    case 6:
      return *(unsigned int *)(a1 + 16);
    case 7:
      return *(unsigned int *)(a1 + 36);
    case 8:
      return *(unsigned int *)(a1 + 4);
    case 9:
      return *(unsigned int *)(a1 + 20);
    case 0xA:
      return *(unsigned int *)(a1 + 24);
    case 0xB:
      return *(unsigned int *)(a1 + 16);
    case 0xC:
      return *(unsigned int *)(a1 + 16);
    case 0xD:
      return *(unsigned int *)(a1 + 16);
    case 0xE:
      return *(unsigned int *)(a1 + 16);
    case 0xF:
      return *(unsigned int *)(a1 + 4);
    case 0x10:
      return *(unsigned int *)(a1 + 16);
    case 0x11:
    case 0x23:
    case 0x24:
    case 0x2F:
    case 0x31:
    case 0x37:
    case 0x38:
    case 0x3C:
    case 0x3D:
    case 0x40:
    case 0x4F:
    case 0x63:
    case 0x66:
    case 0x76:
    case 0x77:
    case 0x7B:
      return sub_EEB7E0(*(_QWORD *)(a1 + 16));
    case 0x12:
      return *(unsigned int *)(a1 + 4);
    case 0x13:
      return *(unsigned int *)(a1 + 16);
    case 0x14:
      return *(unsigned int *)(a1 + 16);
    case 0x15:
    case 0x16:
    case 0x1C:
    case 0x74:
    case 0x7C:
    case 0x80:
    case 0x81:
      return sub_EEB7E0(*(_QWORD *)(a1 + 24));
    case 0x17:
      v18 = sub_C95850(a1);
      if ( !v18 )
        return sub_EEB7E0(*(_QWORD *)(a1 + 56));
      v32 = *(_QWORD *)(a1 + 40);
      if ( !v32 )
        return *(unsigned int *)(a1 + 24);
      v36 = *(__m128 *)(a1 + 40);
      v33 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v33 )
      {
        v36.m128_u64[0] = v33;
        v34 = 0;
        while ( (*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v34 = v18;
          v33 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v34 )
          v36.m128_u64[0] = v33;
      }
      return sub_E90530((__int64 *)&v36);
    case 0x18:
      v19.m128i_i64[0] = *(_QWORD *)(a1 + 40);
      if ( !v19.m128i_i64[0] )
        return *(unsigned int *)(a1 + 24);
      v19.m128i_i64[1] = *(_QWORD *)(a1 + 48);
      v36 = (__m128)v19;
      v19.m128i_i64[0] = *(_QWORD *)(v19.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19.m128i_i64[0] )
      {
        v36.m128_u64[0] = v19.m128i_i64[0];
        v20 = 0;
        while ( (*(_QWORD *)(v19.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v20 = 1;
          v19.m128i_i64[0] = *(_QWORD *)(v19.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v20 )
          v36.m128_u64[0] = v19.m128i_i64[0];
      }
      return sub_E90530((__int64 *)&v36);
    case 0x19:
      return *(unsigned int *)(a1 + 16);
    case 0x1A:
      v17 = *(_DWORD **)(a1 + 16);
      if ( v17 )
        return sub_EEB7E0(v17);
      return *(unsigned int *)(a1 + 4);
    case 0x1B:
      return *(unsigned int *)(a1 + 16);
    case 0x1D:
      return *(unsigned int *)(a1 + 24);
    case 0x1E:
      return *(unsigned int *)(a1 + 24);
    case 0x1F:
      return *(unsigned int *)(a1 + 24);
    case 0x20:
      v21 = *(_QWORD *)(a1 + 40);
      if ( (v21 & 6) != 0 )
        return *(unsigned int *)(a1 + 36);
      else
        return sub_EEB7E0(v21 & 0xFFFFFFFFFFFFFFF8LL);
    case 0x21:
      return *(unsigned int *)(a1 + 32);
    case 0x22:
      if ( (*(_BYTE *)(a1 + 40) & 2) != 0 )
        return *(unsigned int *)(a1 + 32);
      else
        return sub_EEB7E0(*(_QWORD *)(a1 + 24));
    case 0x25:
      return *(unsigned int *)(a1 + 24);
    case 0x26:
    case 0x2A:
      return *(unsigned int *)(a1 + 20);
    case 0x27:
      return *(unsigned int *)(a1 + 32);
    case 0x28:
      return *(unsigned int *)(a1 + 20);
    case 0x29:
      return *(unsigned int *)(a1 + 32);
    case 0x2B:
      return *(unsigned int *)(a1 + 16);
    case 0x2C:
      return *(unsigned int *)(a1 + 16);
    case 0x2D:
    case 0x36:
    case 0x70:
    case 0x7E:
      return 0;
    case 0x2E:
      return sub_BFE3C0(a1);
    case 0x30:
      v16 = *(_QWORD *)(a1 + 16);
      if ( (v16 & 4) != 0 )
        v17 = *(_DWORD **)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v17 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      return sub_EEB7E0(v17);
    case 0x32:
      v11 = *(_QWORD *)(a1 + 16);
      if ( !v11 )
        return sub_EEB7E0(*(_QWORD *)(a1 + 16));
      v12 = sub_BFE300(v11);
      if ( !v12 )
        return sub_EEB7E0(*(_QWORD *)(a1 + 16));
      if ( !*(_QWORD *)(a1 + 40) )
        return *(unsigned int *)(a1 + 32);
      v13 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 40));
      v36 = v13;
      if ( v13.m128_u64[0] )
      {
        v14 = *(_QWORD *)(v13.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v14 )
        {
          v35 = v36.m128_i64[1];
          v15 = 0;
          v36 = _mm_loadh_ps((const double *)&v35);
          while ( (*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v15 = v12;
            v14 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v15 )
            v36.m128_u64[0] = v14;
        }
      }
      return sub_E90530((__int64 *)&v36);
    case 0x33:
      return *(unsigned int *)(a1 + 16);
    case 0x34:
      return *(unsigned int *)(a1 + 28);
    case 0x35:
      return sub_BFB1C0(a1);
    case 0x39:
      return *(unsigned int *)(a1 + 4);
    case 0x3A:
      return *(unsigned int *)(a1 + 16);
    case 0x3B:
      return *(unsigned int *)(a1 + 24);
    case 0x3E:
      return *(unsigned int *)(a1 + 28);
    case 0x3F:
      return *(unsigned int *)(a1 + 28);
    case 0x41:
      return *(unsigned int *)(a1 + 16);
    case 0x42:
      return *(unsigned int *)(a1 + 16);
    case 0x43:
      return sub_C03420(a1);
    case 0x44:
      return sub_C009D0(a1);
    case 0x45:
      result = 0;
      if ( !*(_QWORD *)(a1 + 16) )
        return result;
      v8 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 16));
      v36 = v8;
      if ( v8.m128_u64[0] )
      {
        v9 = *(_QWORD *)(v8.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v10 = 0;
          v35 = v36.m128_i64[1];
          v36 = _mm_loadh_ps((const double *)&v35);
          while ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v10 = 1;
            v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v10 )
            v36.m128_u64[0] = v9;
        }
      }
      return sub_E90530((__int64 *)&v36);
    case 0x46:
      return *(unsigned int *)(a1 + 16);
    case 0x47:
      if ( (*(_QWORD *)a1 & 0x80000LL) == 0 )
        return *(unsigned int *)(a1 + 4);
      v5 = *(_QWORD *)(a1 + 32);
      if ( !v5 )
        return 0;
      v35 = *(_QWORD *)(a1 + 40);
      v36 = _mm_loadh_ps((const double *)&v35);
      v6 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v6 )
      {
        v36.m128_u64[0] = v6;
        v7 = 0;
        while ( (*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v7 = 1;
          v6 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v7 )
          v36.m128_u64[0] = v6;
      }
      return sub_E90530((__int64 *)&v36);
    case 0x48:
    case 0x49:
      return *(unsigned int *)(a1 + 16);
    case 0x4A:
      return *(unsigned int *)(a1 + 32);
    case 0x4B:
      v23 = *(_QWORD *)(a1 + 16);
      v24 = *(_QWORD *)v23;
      if ( !*(_QWORD *)v23 )
        return *(unsigned int *)(v23 + 32);
      v25 = *(_QWORD *)(v23 + 8);
      v36.m128_u64[0] = v24;
      v36.m128_u64[1] = v25;
      v26 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v26 )
      {
        v36.m128_u64[0] = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = 0;
        while ( (*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v27 = 1;
          v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v27 )
          v36.m128_u64[0] = v26;
      }
      return sub_E90530((__int64 *)&v36);
    case 0x4C:
      v17 = *(_DWORD **)(a1 + 32);
      result = 0;
      if ( v17 )
      {
        result = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)result )
          return sub_EEB7E0(v17);
      }
      return result;
    case 0x4D:
      return *(unsigned int *)(a1 + 40);
    case 0x4E:
      return *(unsigned int *)(a1 + 20);
    case 0x50:
      return *(unsigned int *)(a1 + 32);
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      return *(unsigned int *)(a1 + 32);
    case 0x56:
      return sub_C94B00(a1);
    case 0x57:
      return *(unsigned int *)(a1 + 32);
    case 0x58:
      return *(unsigned int *)(a1 + 32);
    case 0x59:
    case 0x5C:
    case 0x5D:
      return sub_BF6D70(a1);
    case 0x5A:
      if ( (unsigned int)sub_C94B50(a1, a2, a3) == 1 )
        return *(unsigned int *)(a1 + 20);
      else
        return sub_EEB7E0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32));
    case 0x5B:
      return *(unsigned int *)(a1 + 24);
    case 0x5E:
      return *(unsigned int *)(a1 + 32);
    case 0x5F:
      return sub_C95500(a1);
    case 0x60:
    case 0x69:
      return *(unsigned int *)(a1 + 24);
    case 0x61:
      return *(unsigned int *)(a1 + 4);
    case 0x62:
      return *(unsigned int *)(a1 + 4);
    case 0x64:
      return sub_C93F20(a1);
    case 0x65:
      sub_C93B20((__int64)&v36, a1);
      return sub_EEB7E0(v36.m128_u64[1]);
    case 0x67:
      return *(unsigned int *)(a1 + 28);
    case 0x68:
      return *(unsigned int *)(a1 + 4);
    case 0x6A:
      return *(unsigned int *)(a1 + 40);
    case 0x6B:
      return *(unsigned int *)(a1 + 24);
    case 0x6C:
      result = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)result )
        return result;
      v17 = *(_DWORD **)(a1 + 40);
      if ( v17 && (*v17 & 0x4000) != 0 )
        return sub_EEB7E0(v17);
      return *(unsigned int *)(a1 + 20);
    case 0x6D:
      v22 = *(_QWORD *)(a1 + 16);
      if ( v22 && !(unsigned __int8)sub_BFE300(v22) )
        return sub_EEB7E0(*(_QWORD *)(a1 + 16));
      v30.m128i_i64[0] = *(_QWORD *)(a1 + 32);
      if ( !v30.m128i_i64[0] )
        return *(unsigned int *)(a1 + 56);
      v30.m128i_i64[1] = *(_QWORD *)(a1 + 40);
      v36 = (__m128)v30;
      v30.m128i_i64[0] = *(_QWORD *)(v30.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v30.m128i_i64[0] )
      {
        v36.m128_u64[0] = v30.m128i_i64[0];
        v31 = 0;
        while ( (*(_QWORD *)(v30.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v31 = 1;
          v30.m128i_i64[0] = *(_QWORD *)(v30.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v31 )
          v36.m128_u64[0] = v30.m128i_i64[0];
      }
      return sub_E90530((__int64 *)&v36);
    case 0x6E:
      return *(unsigned int *)(a1 + 4);
    case 0x6F:
      return *(unsigned int *)(a1 + 4);
    case 0x71:
      return sub_C94450(a1);
    case 0x72:
      return sub_C94D80(a1);
    case 0x73:
      return *(unsigned int *)(a1 + 4);
    case 0x75:
      return sub_BFB2C0(a1);
    case 0x78:
      return *(unsigned int *)(a1 + 76);
    case 0x79:
      return *(unsigned int *)(a1 + 24);
    case 0x7A:
      return *(unsigned int *)(a1 + 32);
    case 0x7D:
      v29 = *(_QWORD *)(a1 + 16);
      v17 = *(_DWORD **)(v29 + 16);
      if ( v17 )
        return sub_EEB7E0(v17);
      else
        return *(unsigned int *)(v29 + 4);
    case 0x7F:
      return *(unsigned int *)(a1 + 16);
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x8B:
      return *(unsigned int *)(a1 + 4);
    case 0x86:
      return *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL);
    case 0x87:
    case 0x8C:
    case 0x8D:
    case 0x8E:
    case 0x8F:
    case 0x90:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xAE:
    case 0xAF:
    case 0xB0:
    case 0xB1:
    case 0xB2:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB8:
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
    case 0xBD:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC2:
    case 0xC3:
    case 0xC4:
    case 0xC5:
    case 0xC6:
    case 0xC7:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCD:
    case 0xCE:
    case 0xCF:
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
    case 0xD4:
    case 0xD5:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xD9:
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDD:
    case 0xDE:
    case 0xDF:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE3:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEB:
    case 0xEC:
      return *(unsigned int *)(a1 + 12);
    case 0x88:
    case 0x89:
    case 0x8A:
      return *(unsigned int *)(a1 + 8);
    case 0x9A:
      return *(unsigned int *)(a1 + 32);
    case 0x9B:
    case 0x9C:
    case 0x9D:
    case 0x9E:
    case 0x9F:
      return *(unsigned int *)(a1 + 8);
    case 0xA0:
      return *(unsigned int *)(a1 + 24);
    case 0xED:
      return sub_EEB7E0(*(_QWORD *)(a1 + 8));
    case 0xEE:
    case 0xF0:
    case 0xF1:
    case 0xF2:
    case 0xF3:
    case 0xF4:
    case 0xF8:
    case 0xFE:
      return *(unsigned int *)(a1 + 4);
    case 0xF5:
      return *(unsigned int *)(a1 + 16);
    case 0xF6:
      v28 = *(_QWORD *)(a1 + 16);
      if ( v28 )
        return *(unsigned int *)(v28 + 8);
      else
        return sub_B73090(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
    case 0xFA:
      return sub_EEB7E0(*(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 8) + 32));
    case 0xFC:
      return *(unsigned int *)(a1 + 72);
  }
}
