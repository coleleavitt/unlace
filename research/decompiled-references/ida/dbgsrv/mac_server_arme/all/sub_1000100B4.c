/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000100B4
// Address: 0x00000001000100B4

//----- (00000001000100B4) ----------------------------------------------------
bool __fastcall sub_1000100B4(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x23
  unsigned __int64 v5; // x24
  int v6; // w0
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x21
  __int64 v12; // x8
  int8x16_t v13; // q0
  __int64 v14; // x8
  int8x16_t v15; // q0
  int8x16_t v16; // q2
  int8x16_t v17; // q0
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x9
  int8x16_t v20; // q0
  int8x16_t v21; // q0
  int8x16_t v22; // q0
  int8x16_t v23; // q1
  int8x16_t v24; // q3
  __int64 v25; // x8
  int8x16_t v26; // q0
  int8x16_t v27; // q0
  int8x16_t v28; // q1
  int8x16_t v29; // q2
  int8x16_t v30; // q0
  __int64 v31; // x8
  unsigned __int64 v32; // x8
  unsigned __int64 v33; // x9
  int8x16_t v34; // q0
  int8x16_t v35; // q0
  __int64 v36; // x8
  int8x16_t v37; // q0
  int8x16_t v38; // q1
  __int64 v39; // x8
  __int64 v40; // x8
  int8x16_t v41; // q0
  unsigned __int64 v43; // [xsp+8h] [xbp-B8h] BYREF
  int8x16_t v44; // [xsp+10h] [xbp-B0h] BYREF
  int8x16_t v45; // [xsp+20h] [xbp-A0h]
  int8x16_t v46; // [xsp+30h] [xbp-90h]
  int8x16_t v47; // [xsp+40h] [xbp-80h]
  int8x16_t v48; // [xsp+50h] [xbp-70h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(a1 + 144);
  while ( 1 )
  {
    if ( v4 >= *(_QWORD *)(a1 + 208) )
    {
      v6 = 0;
      return v6 != 0;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8 * v4);
    v8 = *(_QWORD *)v7;
    v43 = v8;
    v9 = HIDWORD(v8);
    if ( *(_BYTE *)(a1 + 160) == 1 )
    {
      LODWORD(v9) = bswap32(HIDWORD(v8));
      v43 = __PAIR64__(v9, bswap32(v8));
    }
    v10 = v7 + (unsigned int)v9;
    if ( v10 > v5 || v7 >= v10 )
      break;
    v6 = (**(__int64 (__fastcall ***)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64))a2)(
           a2,
           &v43,
           v7,
           v7 + (unsigned int)v9);
    if ( v6 == 2 )
    {
      v6 = 0;
    }
    else
    {
      if ( v6 )
        return v6 != 0;
      if ( (int)v43 <= -2147483596 )
      {
        if ( (int)v43 > -2147483614 )
        {
          if ( (unsigned int)(v43 + 2147483597) < 2 )
          {
LABEL_29:
            if ( (unsigned int)v9 <= 0xF )
              v44 = 0u;
            else
              v44 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v44 = vrev32q_s8(v44);
            v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 176LL))(
                   a2,
                   &v44,
                   v7,
                   v7 + (unsigned int)v9);
            goto LABEL_3;
          }
          if ( (_DWORD)v43 == -2147483613 )
          {
LABEL_41:
            if ( (unsigned int)v9 <= 0x17 )
            {
              v44 = 0u;
              v45.i64[0] = 0;
            }
            else
            {
              v17 = *(int8x16_t *)v7;
              v45.i64[0] = *(_QWORD *)(v7 + 16);
              v44 = v17;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v44 = vrev32q_s8(v44);
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 72LL))(
                   a2,
                   &v44,
                   v7,
                   v7 + (unsigned int)v9);
            goto LABEL_3;
          }
          if ( (_DWORD)v43 == -2147483608 )
          {
            if ( (unsigned int)v9 <= 0x17 )
            {
              v44 = 0u;
              v45.i64[0] = 0;
            }
            else
            {
              v13 = *(int8x16_t *)v7;
              v45.i64[0] = *(_QWORD *)(v7 + 16);
              v44 = v13;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
              v44.i64[1] = swap64(v44.i64[1]);
              v45.i64[0] = swap64(v45.i64[0]);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 240LL))(
                   a2,
                   &v44,
                   v7,
                   v7 + (unsigned int)v9);
            goto LABEL_3;
          }
        }
        else if ( (int)v43 > -2147483618 )
        {
          if ( (_DWORD)v43 == -2147483617 )
            goto LABEL_41;
          if ( (_DWORD)v43 == -2147483614 )
          {
LABEL_39:
            if ( (unsigned int)v9 <= 0x2F )
            {
              v15 = 0u;
              v45 = 0u;
              v46 = 0u;
            }
            else
            {
              v15 = *(int8x16_t *)v7;
              v16 = *(int8x16_t *)(v7 + 32);
              v45 = *(int8x16_t *)(v7 + 16);
              v46 = v16;
            }
            v44 = v15;
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v44 = vrev32q_s8(v44);
              v45 = vrev32q_s8(v45);
              v46 = vrev32q_s8(v46);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 200LL))(
                   a2,
                   &v44,
                   v7,
                   v7 + (unsigned int)v9);
            goto LABEL_3;
          }
        }
        else
        {
          if ( (_DWORD)v43 == -2147483624 )
            goto LABEL_41;
          if ( (_DWORD)v43 == -2147483620 )
          {
            if ( (unsigned int)v9 <= 0xB )
            {
              v44.i32[2] = 0;
              v44.i64[0] = 0;
            }
            else
            {
              v12 = *(_QWORD *)v7;
              v44.i32[2] = *(_DWORD *)(v7 + 8);
              v44.i64[0] = v12;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
              v44.i32[2] = bswap32(v44.u32[2]);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 168LL))(
                   a2,
                   &v44,
                   v7,
                   v7 + (unsigned int)v9);
            goto LABEL_3;
          }
        }
      }
      else
      {
        if ( (unsigned int)(v43 - 1) <= 0x31 )
        {
          switch ( (int)v43 )
          {
            case 1:
              v6 = sub_100011224(v7, v7 + (unsigned int)v9, a2, *(unsigned __int8 *)(a1 + 160));
              break;
            case 2:
              if ( (unsigned int)v9 <= 0x17 )
              {
                v44 = 0u;
                v45.i64[0] = 0;
              }
              else
              {
                v30 = *(int8x16_t *)v7;
                v45.i64[0] = *(_QWORD *)(v7 + 16);
                v44 = v30;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 16LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 3:
              if ( (unsigned int)v9 <= 0xF )
                v44 = 0u;
              else
                v44 = *(int8x16_t *)v7;
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44 = vrev32q_s8(v44);
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 24LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 4:
            case 5:
              if ( (unsigned int)v9 <= 7 )
              {
                LODWORD(v19) = 0;
                LODWORD(v18) = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v18 = *(_QWORD *)v7;
                v44.i64[0] = v18;
                v19 = HIDWORD(v18);
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44.i64[0] = _byteswap_uint64(__PAIR64__(v18, v19));
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 32LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 6:
            case 7:
              if ( (unsigned int)v9 <= 0x13 )
              {
                v44 = 0u;
                v45.i32[0] = 0;
              }
              else
              {
                v20 = *(int8x16_t *)v7;
                v45.i32[0] = *(_DWORD *)(v7 + 16);
                v44 = v20;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                v45.i32[0] = bswap32(v45.u32[0]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 8:
              if ( (unsigned int)v9 <= 7 )
              {
                LODWORD(v33) = 0;
                LODWORD(v32) = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v32 = *(_QWORD *)v7;
                v44.i64[0] = v32;
                v33 = HIDWORD(v32);
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44.i64[0] = _byteswap_uint64(__PAIR64__(v32, v33));
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 48LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 9:
              if ( (unsigned int)v9 <= 0xF )
                v44 = 0u;
              else
                v44 = *(int8x16_t *)v7;
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44 = vrev32q_s8(v44);
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 56LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 10:
            case 24:
            case 28:
            case 31:
            case 35:
            case 40:
            case 45:
            case 46:
            case 49:
              goto LABEL_62;
            case 11:
              if ( (unsigned int)v9 <= 0x4F )
              {
                v47 = 0u;
                v48 = 0u;
                v45 = 0u;
                v46 = 0u;
                v44 = 0u;
              }
              else
              {
                v44 = *(int8x16_t *)v7;
                v22 = *(int8x16_t *)(v7 + 16);
                v23 = *(int8x16_t *)(v7 + 32);
                v24 = *(int8x16_t *)(v7 + 64);
                v47 = *(int8x16_t *)(v7 + 48);
                v48 = v24;
                v45 = v22;
                v46 = v23;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                v45 = vrev32q_s8(v45);
                v46 = vrev32q_s8(v46);
                v47 = vrev32q_s8(v47);
                v48 = vrev32q_s8(v48);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 64LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 12:
            case 13:
            case 32:
              goto LABEL_41;
            case 14:
            case 15:
            case 39:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v14 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v14;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 80LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 16:
              if ( (unsigned int)v9 <= 0x13 )
              {
                v44 = 0u;
                v45.i32[0] = 0;
              }
              else
              {
                v34 = *(int8x16_t *)v7;
                v45.i32[0] = *(_DWORD *)(v7 + 16);
                v44 = v34;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                v45.i32[0] = bswap32(v45.u32[0]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 88LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 17:
              if ( (unsigned int)v9 <= 0x27 )
              {
                v46.i64[0] = 0;
                v37 = 0u;
                v45 = 0u;
              }
              else
              {
                v37 = *(int8x16_t *)v7;
                v38 = *(int8x16_t *)(v7 + 16);
                v46.i64[0] = *(_QWORD *)(v7 + 32);
                v45 = v38;
              }
              v44 = v37;
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                v45 = vrev32q_s8(v45);
                *(int8x8_t *)v46.i8 = vrev32_s8(*(int8x8_t *)v46.i8);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 96LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 18:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v31 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v31;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 104LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 19:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v25 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v25;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 112LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 20:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v39 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v39;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 120LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 21:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v36 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v36;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 128LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 22:
              if ( (unsigned int)v9 <= 0xF )
                v44 = 0u;
              else
                v44 = *(int8x16_t *)v7;
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44 = vrev32q_s8(v44);
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 136LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 23:
              if ( (unsigned int)v9 <= 0xB )
              {
                v44.i32[2] = 0;
                v44.i64[0] = 0;
              }
              else
              {
                v40 = *(_QWORD *)v7;
                v44.i32[2] = *(_DWORD *)(v7 + 8);
                v44.i64[0] = v40;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i32[2] = bswap32(v44.u32[2]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 144LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 25:
              v6 = sub_1000114EC(v7, (int8x16_t *)(v7 + (unsigned int)v9), a2, *(unsigned __int8 *)(a1 + 160));
              break;
            case 26:
              if ( (unsigned int)v9 <= 0x47 )
              {
                v48.i64[0] = 0;
                v46 = 0u;
                v47 = 0u;
                v44 = 0u;
                v45 = 0u;
              }
              else
              {
                v44 = *(int8x16_t *)v7;
                v27 = *(int8x16_t *)(v7 + 16);
                v28 = *(int8x16_t *)(v7 + 32);
                v29 = *(int8x16_t *)(v7 + 48);
                v48.i64[0] = *(_QWORD *)(v7 + 64);
                v46 = v28;
                v47 = v29;
                v45 = v27;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i64[1] = swap64(v44.i64[1]);
                v45.i64[0] = swap64(v45.i64[0]);
                v45.i64[1] = swap64(v45.i64[1]);
                v46.i64[0] = swap64(v46.i64[0]);
                v46.i64[1] = swap64(v46.i64[1]);
                v47.i64[0] = swap64(v47.i64[0]);
                v47.i64[1] = swap64(v47.i64[1]);
                v48.i64[0] = swap64(v48.i64[0]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 152LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 27:
              if ( (unsigned int)v9 <= 0x17 )
              {
                v44 = 0u;
                v45.i64[0] = 0;
              }
              else
              {
                v35 = *(int8x16_t *)v7;
                v45.i64[0] = *(_QWORD *)(v7 + 16);
                v44 = v35;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 160LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 29:
            case 30:
            case 38:
            case 41:
            case 43:
              goto LABEL_29;
            case 33:
              if ( (unsigned int)v9 <= 0x13 )
              {
                v44 = 0u;
                v45.i32[0] = 0;
              }
              else
              {
                v41 = *(int8x16_t *)v7;
                v45.i32[0] = *(_DWORD *)(v7 + 16);
                v44 = v41;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                v45.i32[0] = bswap32(v45.u32[0]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 184LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 34:
              goto LABEL_39;
            case 36:
            case 37:
            case 47:
            case 48:
              if ( (unsigned int)v9 <= 0xF )
                v44 = 0u;
              else
                v44 = *(int8x16_t *)v7;
              if ( *(_BYTE *)(a1 + 160) == 1 )
                v44 = vrev32q_s8(v44);
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 208LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 42:
              if ( (unsigned int)v9 <= 0xF )
                v44 = 0u;
              else
                v44 = *(int8x16_t *)v7;
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
                v44.i64[1] = swap64(v44.i64[1]);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 232LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 44:
              if ( (unsigned int)v9 <= 0x17 )
              {
                v44 = 0u;
                v45.i64[0] = 0;
              }
              else
              {
                v26 = *(int8x16_t *)v7;
                v45.i64[0] = *(_QWORD *)(v7 + 16);
                v44 = v26;
              }
              if ( *(_BYTE *)(a1 + 160) == 1 )
              {
                v44 = vrev32q_s8(v44);
                *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              }
              v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 192LL))(
                     a2,
                     &v44,
                     v7,
                     v7 + (unsigned int)v9);
              break;
            case 50:
              v6 = sub_10000FEDC(v7, (unsigned __int64 *)(v7 + (unsigned int)v9), a2, *(unsigned __int8 *)(a1 + 160));
              break;
            default:
              goto LABEL_59;
          }
          goto LABEL_3;
        }
LABEL_59:
        if ( (_DWORD)v43 == -2147483595 )
        {
          if ( (unsigned int)v9 <= 0x1F )
          {
            v21 = 0u;
            v45 = 0u;
          }
          else
          {
            v21 = *(int8x16_t *)v7;
            v45 = *(int8x16_t *)(v7 + 16);
          }
          v44 = v21;
          if ( *(_BYTE *)(a1 + 160) == 1 )
          {
            *(int8x8_t *)v44.i8 = vrev32_s8(*(int8x8_t *)v44.i8);
            v44.i64[1] = swap64(v44.i64[1]);
            v45.i64[0] = swap64(v44.i64[1]);
            v45.u64[1] = (unsigned __int64)vrev32_s8((int8x8_t)v45.u64[1]);
          }
          v6 = (*(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 248LL))(
                 a2,
                 &v44,
                 v7,
                 v7 + (unsigned int)v9);
          goto LABEL_3;
        }
      }
LABEL_62:
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 8LL))(
             a2,
             &v43,
             v7,
             v7 + (unsigned int)v9);
    }
LABEL_3:
    ++v4;
    if ( v6 )
      return v6 != 0;
  }
  sub_100000B44();
  return 0;
}
