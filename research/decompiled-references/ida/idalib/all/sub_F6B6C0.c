unsigned __int64 __fastcall sub_F6B6C0(__int64 a1, unsigned int *a2, double a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  _BOOL8 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  char v29; // cl
  unsigned __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  unsigned int *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  char v39; // si
  __m128i v40; // rax
  unsigned int *v41; // [rsp+0h] [rbp-40h] BYREF
  __m128 v42; // [rsp+8h] [rbp-38h] BYREF
  __m128 si128; // [rsp+18h] [rbp-28h] BYREF

  if ( a1 & 7 | (a1 >> 3) & 1 )
    return 0;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
  {
    case 0:
    case 1:
    case 0x3B:
      return 0;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xD:
    case 0xF:
    case 0x1B:
    case 0x24:
    case 0x28:
      return *(_QWORD *)a2;
    case 7:
    case 0x1F:
    case 0x20:
    case 0x34:
    case 0x36:
      return ((unsigned __int64)a2[2] << 32) | *a2;
    case 8:
      v13 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 )
        goto LABEL_30;
      goto LABEL_32;
    case 9:
      v13 = *(_QWORD *)(a1 + 40);
      if ( v13 )
      {
LABEL_30:
        v4 = *(unsigned int *)(v13 + 24);
        v5 = *(unsigned int *)(v13 + 28);
      }
      else
      {
LABEL_32:
        v5 = 0;
        v4 = 0;
      }
      return (v5 << 32) | v4;
    case 0xA:
    case 0xB:
    case 0xE:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x1C:
    case 0x1D:
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x32:
    case 0x35:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
      v4 = *a2;
      v5 = v4;
      return (v5 << 32) | v4;
    case 0xC:
      v34 = *(_QWORD *)(a1 + 56);
      if ( v34 )
      {
        v35 = sub_EEC8C0(v34, (__int64)a2, a3);
        LODWORD(v11) = v35;
        v12 = HIDWORD(v35);
      }
      else
      {
        v12 = 0;
        LODWORD(v11) = 0;
      }
      goto LABEL_24;
    case 0x10:
      if ( *(_QWORD *)(a1 + 32) )
      {
        v14 = *((unsigned __int64 **)a2 + 1);
        LODWORD(v11) = 0;
        if ( v14 )
        {
          v15 = *v14;
          if ( *v14 )
          {
            v16 = v14[1];
            si128.m128_u64[0] = v15;
            si128.m128_u64[1] = v16;
            v17 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v17 )
            {
              si128.m128_u64[0] = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v18 = 0;
              while ( (*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v18 = 1;
                v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v18 )
                si128.m128_u64[0] = v17;
            }
            v41 = a2;
            LODWORD(v11) = sub_E90530((__int64 *)&si128);
          }
          else
          {
            LODWORD(v11) = *((_DWORD *)v14 + 4);
            if ( !(_DWORD)v11 )
              LODWORD(v11) = *((_DWORD *)v14 + 8);
          }
        }
      }
      else
      {
        LODWORD(v11) = *a2;
      }
      if ( ((*(_BYTE *)(a1 + 18) >> 3) & 3) == 1 )
        goto LABEL_38;
      v12 = *a2;
      goto LABEL_24;
    case 0x12:
      return ((unsigned __int64)a2[3] << 32) | a2[4];
    case 0x14:
      v6 = *a2;
      v7 = a2[4];
      if ( *a2 )
        return (v7 << 32) | v6;
      v40.m128i_i64[0] = *(_QWORD *)(a1 + 32);
      if ( !v40.m128i_i64[0] )
        return (v7 << 32) | v6;
      v40.m128i_i64[1] = *((_QWORD *)a2 + 1);
      si128 = (__m128)v40;
      v9 = *(_QWORD *)(v40.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_20;
      si128.m128_u64[0] = v9;
      v10 = 0;
      while ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v10 = 1;
        v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      goto LABEL_18;
    case 0x16:
      v6 = *a2;
      v7 = a2[7];
      if ( *a2 )
        return (v7 << 32) | v6;
      if ( *((_QWORD *)a2 + 1) && (v8 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v41 = *((unsigned int **)a2 + 1);
        si128 = _mm_loadh_ps((const double *)&v41);
        v9 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          si128.m128_u64[0] = v9;
          v10 = 0;
          while ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v10 = 1;
            v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
LABEL_18:
          if ( v10 )
            si128.m128_u64[0] = v9;
        }
LABEL_20:
        v6 = sub_E90530((__int64 *)&si128);
      }
      else
      {
        v6 = a2[5];
        if ( !v6 )
          v6 = a2[4];
      }
      return (v7 << 32) | v6;
    case 0x18:
      v30 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int8)(*(_WORD *)(a1 + 18) >> 3) != 6 )
      {
        v31 = *a2;
        if ( *a2 )
        {
          v32 = v31;
          if ( !v30 )
            return (v32 << 32) | v31;
          goto LABEL_68;
        }
LABEL_80:
        v36 = *((unsigned int **)a2 + 1);
        goto LABEL_81;
      }
      if ( v30 )
      {
        if ( *a2 )
        {
LABEL_68:
          v33 = *((_QWORD *)a2 + 1);
          v41 = a2;
          si128.m128_u64[0] = v30;
          si128.m128_u64[1] = v33;
          v32 = sub_E90530((__int64 *)&si128) >> 32;
          if ( (unsigned __int8)(*(_WORD *)(a1 + 18) >> 3) != 6 || *(_QWORD *)(a1 + 32) )
            v31 = *v41;
          else
            v31 = 0;
          return (v32 << 32) | v31;
        }
        goto LABEL_80;
      }
      v36 = nullptr;
LABEL_81:
      v41 = v36;
      v42 = _mm_loadh_ps((const double *)&v41);
      v37 = sub_E90530((__int64 *)&v42);
      v31 = 0;
      v32 = HIDWORD(v37);
      if ( v42.m128_u64[0] )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&v42);
        v38 = *(_QWORD *)(v42.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v38 )
        {
          v39 = 0;
          v41 = (unsigned int *)si128.m128_u64[1];
          si128 = _mm_loadh_ps((const double *)&v41);
          while ( (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v39 = 1;
            v38 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v39 )
            si128.m128_u64[0] = v38;
        }
        v31 = sub_E90530((__int64 *)&si128);
      }
      return (v32 << 32) | v31;
    case 0x19:
    case 0x1A:
      return ((unsigned __int64)a2[3] << 32) | *a2;
    case 0x1E:
      v19 = *(_QWORD *)(a1 + 24);
      v20 = (unsigned __int64)(a2 + 1);
      if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v21 = 1;
        if ( !(v19 & 7 | (v19 >> 3) & 1) )
          v21 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
        v22 = v20 != 0;
        v11 = (v20 - v22) % v21;
        v20 = v21 * (v22 + (v20 - v22) / v21);
        goto LABEL_55;
      }
      v12 = 0;
      v11 = 0;
      if ( v19 )
      {
LABEL_55:
        v23 = sub_F6B6C0(v19, v20, v11);
        LODWORD(v11) = v23;
        v12 = HIDWORD(v23);
      }
LABEL_24:
      result = (v12 << 32) | (unsigned int)v11;
      break;
    case 0x21:
      v24 = *a2;
      v25 = *(_QWORD *)(a1 + 40);
      v26 = *a2;
      if ( v25 )
      {
        v27 = *((_QWORD *)a2 + 1);
        si128.m128_u64[0] = *(_QWORD *)(a1 + 40);
        si128.m128_u64[1] = v27;
        v28 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v28 )
        {
          si128.m128_u64[0] = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v29 = 0;
          while ( (*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v29 = 1;
            v28 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v29 )
            si128.m128_u64[0] = v28;
        }
        v26 = sub_E90530((__int64 *)&si128);
      }
      return (v24 << 32) | v26;
    case 0x23:
      LODWORD(v11) = *a2;
      if ( !*a2 )
        LODWORD(v11) = a2[2];
      v12 = a2[3];
      if ( !(_DWORD)v12 )
LABEL_38:
        v12 = a2[1];
      goto LABEL_24;
    case 0x25:
      LODWORD(v11) = *a2;
      v12 = *a2;
      if ( (*(_BYTE *)(a1 + 32) & 0x3F) != 0 )
      {
        v12 = a2[2];
        if ( !(_DWORD)v12 )
          v12 = (unsigned int)v11;
      }
      goto LABEL_24;
    case 0x31:
      LODWORD(v11) = a2[1];
      v12 = a2[3];
      if ( !(_DWORD)v11 )
        goto LABEL_26;
      goto LABEL_24;
    case 0x33:
      v12 = a2[2];
      if ( (_DWORD)v12 )
      {
LABEL_26:
        LODWORD(v11) = *a2;
      }
      else
      {
        v12 = (unsigned __int64)sub_EEC8C0(*(_QWORD *)(a1 + 24), (__int64)a2, a3) >> 32;
        LODWORD(v11) = *a2;
      }
      goto LABEL_24;
  }
  return result;
}
