/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F5AC
// Address: 0x000000010000F5AC

//----- (000000010000F5AC) ----------------------------------------------------
bool __fastcall sub_10000F5AC(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x23
  unsigned __int64 v5; // x24
  int v6; // w0
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x28
  unsigned __int64 v10; // x21
  __int64 v12; // x8
  int8x16_t v13; // q0
  __int64 (__fastcall *v14)(__int64, int8x16_t *, unsigned __int64, unsigned __int64); // x8
  __int64 v15; // x8
  int8x16_t v16; // q0
  int8x16_t v17; // q2
  int8x16_t v18; // q0
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  int8x16_t v21; // q0
  int8x16_t v22; // q0
  int8x16_t v23; // q0
  int8x16_t v24; // q1
  int8x16_t v25; // q3
  __int64 v26; // x8
  int8x16_t v27; // q0
  int8x16_t v28; // q0
  int8x16_t v29; // q1
  int8x16_t v30; // q2
  int8x16_t v31; // q0
  __int64 v32; // x8
  unsigned __int64 v33; // x8
  unsigned __int64 v34; // x9
  int8x16_t v35; // q0
  int8x16_t v36; // q0
  __int64 v37; // x8
  int8x16_t v38; // q0
  int8x16_t v39; // q1
  __int64 v40; // x8
  __int64 v41; // x8
  int8x16_t v42; // q0
  unsigned __int64 v44; // [xsp+8h] [xbp-B8h] BYREF
  int8x16_t v45; // [xsp+10h] [xbp-B0h] BYREF
  int8x16_t v46; // [xsp+20h] [xbp-A0h]
  int8x16_t v47; // [xsp+30h] [xbp-90h]
  int8x16_t v48; // [xsp+40h] [xbp-80h]
  int8x16_t v49; // [xsp+50h] [xbp-70h]

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
    v44 = v8;
    v9 = HIDWORD(v8);
    if ( *(_BYTE *)(a1 + 160) == 1 )
    {
      LODWORD(v9) = bswap32(HIDWORD(v8));
      v44 = __PAIR64__(v9, bswap32(v8));
    }
    v10 = v7 + (unsigned int)v9;
    if ( v10 > v5 || v7 >= v10 )
      break;
    v6 = (**(__int64 (__fastcall ***)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64))a2)(
           a2,
           &v44,
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
      if ( (int)v44 > -2147483596 )
      {
        switch ( (int)v44 )
        {
          case 1:
            v6 = sub_10001014C(v7, v7 + (unsigned int)v9, a2, *(unsigned __int8 *)(a1 + 160));
            goto LABEL_3;
          case 2:
            if ( (unsigned int)v9 <= 0x17 )
            {
              v45 = 0u;
              v46.i64[0] = 0;
            }
            else
            {
              v31 = *(int8x16_t *)v7;
              v46.i64[0] = *(_QWORD *)(v7 + 16);
              v45 = v31;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              *(int8x8_t *)v46.i8 = vrev32_s8(*(int8x8_t *)v46.i8);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 16LL);
            goto LABEL_197;
          case 3:
            if ( (unsigned int)v9 <= 0xF )
              v45 = 0u;
            else
              v45 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45 = vrev32q_s8(v45);
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 24LL);
            goto LABEL_197;
          case 4:
          case 5:
            if ( (unsigned int)v9 <= 7 )
            {
              LODWORD(v20) = 0;
              LODWORD(v19) = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v19 = *(_QWORD *)v7;
              v45.i64[0] = v19;
              v20 = HIDWORD(v19);
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45.i64[0] = _byteswap_uint64(__PAIR64__(v19, v20));
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 32LL);
            goto LABEL_197;
          case 6:
          case 7:
            if ( (unsigned int)v9 <= 0x13 )
            {
              v45 = 0u;
              v46.i32[0] = 0;
            }
            else
            {
              v21 = *(int8x16_t *)v7;
              v46.i32[0] = *(_DWORD *)(v7 + 16);
              v45 = v21;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              v46.i32[0] = bswap32(v46.u32[0]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 40LL);
            goto LABEL_197;
          case 8:
            if ( (unsigned int)v9 <= 7 )
            {
              LODWORD(v34) = 0;
              LODWORD(v33) = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v33 = *(_QWORD *)v7;
              v45.i64[0] = v33;
              v34 = HIDWORD(v33);
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45.i64[0] = _byteswap_uint64(__PAIR64__(v33, v34));
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 48LL);
            goto LABEL_197;
          case 9:
            if ( (unsigned int)v9 <= 0xF )
              v45 = 0u;
            else
              v45 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45 = vrev32q_s8(v45);
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 56LL);
            goto LABEL_197;
          case 10:
          case 24:
          case 28:
          case 31:
          case 35:
          case 40:
          case 45:
          case 46:
          case 49:
            goto LABEL_61;
          case 11:
            if ( (unsigned int)v9 <= 0x4F )
            {
              v48 = 0u;
              v49 = 0u;
              v46 = 0u;
              v47 = 0u;
              v45 = 0u;
            }
            else
            {
              v45 = *(int8x16_t *)v7;
              v23 = *(int8x16_t *)(v7 + 16);
              v24 = *(int8x16_t *)(v7 + 32);
              v25 = *(int8x16_t *)(v7 + 64);
              v48 = *(int8x16_t *)(v7 + 48);
              v49 = v25;
              v46 = v23;
              v47 = v24;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              v46 = vrev32q_s8(v46);
              v47 = vrev32q_s8(v47);
              v48 = vrev32q_s8(v48);
              v49 = vrev32q_s8(v49);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 64LL);
            goto LABEL_197;
          case 12:
          case 13:
          case 32:
            goto LABEL_40;
          case 14:
          case 15:
          case 39:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v15 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v15;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 80LL);
            goto LABEL_197;
          case 16:
            if ( (unsigned int)v9 <= 0x13 )
            {
              v45 = 0u;
              v46.i32[0] = 0;
            }
            else
            {
              v35 = *(int8x16_t *)v7;
              v46.i32[0] = *(_DWORD *)(v7 + 16);
              v45 = v35;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              v46.i32[0] = bswap32(v46.u32[0]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 88LL);
            goto LABEL_197;
          case 17:
            if ( (unsigned int)v9 <= 0x27 )
            {
              v47.i64[0] = 0;
              v38 = 0u;
              v46 = 0u;
            }
            else
            {
              v38 = *(int8x16_t *)v7;
              v39 = *(int8x16_t *)(v7 + 16);
              v47.i64[0] = *(_QWORD *)(v7 + 32);
              v46 = v39;
            }
            v45 = v38;
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              v46 = vrev32q_s8(v46);
              *(int8x8_t *)v47.i8 = vrev32_s8(*(int8x8_t *)v47.i8);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 96LL);
            goto LABEL_197;
          case 18:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v32 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v32;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 104LL);
            goto LABEL_197;
          case 19:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v26 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v26;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 112LL);
            goto LABEL_197;
          case 20:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v40 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v40;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 120LL);
            goto LABEL_197;
          case 21:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v37 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v37;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 128LL);
            goto LABEL_197;
          case 22:
            if ( (unsigned int)v9 <= 0xF )
              v45 = 0u;
            else
              v45 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45 = vrev32q_s8(v45);
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 136LL);
            goto LABEL_197;
          case 23:
            if ( (unsigned int)v9 <= 0xB )
            {
              v45.i32[2] = 0;
              v45.i64[0] = 0;
            }
            else
            {
              v41 = *(_QWORD *)v7;
              v45.i32[2] = *(_DWORD *)(v7 + 8);
              v45.i64[0] = v41;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i32[2] = bswap32(v45.u32[2]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 144LL);
            goto LABEL_197;
          case 25:
            v6 = sub_1000103D0(v7, (int8x16_t *)(v7 + (unsigned int)v9), a2, *(unsigned __int8 *)(a1 + 160));
            goto LABEL_3;
          case 26:
            if ( (unsigned int)v9 <= 0x47 )
            {
              v49.i64[0] = 0;
              v47 = 0u;
              v48 = 0u;
              v45 = 0u;
              v46 = 0u;
            }
            else
            {
              v45 = *(int8x16_t *)v7;
              v28 = *(int8x16_t *)(v7 + 16);
              v29 = *(int8x16_t *)(v7 + 32);
              v30 = *(int8x16_t *)(v7 + 48);
              v49.i64[0] = *(_QWORD *)(v7 + 64);
              v47 = v29;
              v48 = v30;
              v46 = v28;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i64[1] = swap64(v45.i64[1]);
              v46.i64[0] = swap64(v46.i64[0]);
              v46.i64[1] = swap64(v46.i64[1]);
              v47.i64[0] = swap64(v47.i64[0]);
              v47.i64[1] = swap64(v47.i64[1]);
              v48.i64[0] = swap64(v48.i64[0]);
              v48.i64[1] = swap64(v48.i64[1]);
              v49.i64[0] = swap64(v49.i64[0]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 152LL);
            goto LABEL_197;
          case 27:
            if ( (unsigned int)v9 <= 0x17 )
            {
              v45 = 0u;
              v46.i64[0] = 0;
            }
            else
            {
              v36 = *(int8x16_t *)v7;
              v46.i64[0] = *(_QWORD *)(v7 + 16);
              v45 = v36;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 160LL);
            goto LABEL_197;
          case 29:
          case 30:
          case 38:
          case 41:
          case 43:
            goto LABEL_28;
          case 33:
            if ( (unsigned int)v9 <= 0x13 )
            {
              v45 = 0u;
              v46.i32[0] = 0;
            }
            else
            {
              v42 = *(int8x16_t *)v7;
              v46.i32[0] = *(_DWORD *)(v7 + 16);
              v45 = v42;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              v46.i32[0] = bswap32(v46.u32[0]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 184LL);
            goto LABEL_197;
          case 34:
            goto LABEL_38;
          case 36:
          case 37:
          case 47:
          case 48:
            if ( (unsigned int)v9 <= 0xF )
              v45 = 0u;
            else
              v45 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
              v45 = vrev32q_s8(v45);
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 208LL);
            goto LABEL_197;
          case 42:
            if ( (unsigned int)v9 <= 0xF )
              v45 = 0u;
            else
              v45 = *(int8x16_t *)v7;
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i64[1] = swap64(v45.i64[1]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 232LL);
            goto LABEL_197;
          case 44:
            if ( (unsigned int)v9 <= 0x17 )
            {
              v45 = 0u;
              v46.i64[0] = 0;
            }
            else
            {
              v27 = *(int8x16_t *)v7;
              v46.i64[0] = *(_QWORD *)(v7 + 16);
              v45 = v27;
            }
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              v45 = vrev32q_s8(v45);
              *(int8x8_t *)v46.i8 = vrev32_s8(*(int8x8_t *)v46.i8);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 192LL);
            goto LABEL_197;
          case 50:
            v6 = sub_10000F408(v7, (unsigned __int64 *)(v7 + (unsigned int)v9), a2, *(unsigned __int8 *)(a1 + 160));
            goto LABEL_3;
          default:
            if ( (_DWORD)v44 != -2147483595 )
              goto LABEL_61;
            if ( (unsigned int)v9 <= 0x1F )
            {
              v22 = 0u;
              v46 = 0u;
            }
            else
            {
              v22 = *(int8x16_t *)v7;
              v46 = *(int8x16_t *)(v7 + 16);
            }
            v45 = v22;
            if ( *(_BYTE *)(a1 + 160) == 1 )
            {
              *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
              v45.i64[1] = swap64(v45.i64[1]);
              v46.i64[0] = swap64(v45.i64[1]);
              v46.u64[1] = (unsigned __int64)vrev32_s8((int8x8_t)v46.u64[1]);
            }
            v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 248LL);
            goto LABEL_197;
        }
      }
      if ( (int)v44 > -2147483614 )
      {
        if ( (unsigned int)(v44 + 2147483597) < 2 )
        {
LABEL_28:
          if ( (unsigned int)v9 <= 0xF )
            v45 = 0u;
          else
            v45 = *(int8x16_t *)v7;
          if ( *(_BYTE *)(a1 + 160) == 1 )
            v45 = vrev32q_s8(v45);
          v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 176LL);
          goto LABEL_197;
        }
        if ( (_DWORD)v44 == -2147483613 )
          goto LABEL_40;
        if ( (_DWORD)v44 == -2147483608 )
        {
          if ( (unsigned int)v9 <= 0x17 )
          {
            v45 = 0u;
            v46.i64[0] = 0;
          }
          else
          {
            v13 = *(int8x16_t *)v7;
            v46.i64[0] = *(_QWORD *)(v7 + 16);
            v45 = v13;
          }
          if ( *(_BYTE *)(a1 + 160) == 1 )
          {
            *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
            v45.i64[1] = swap64(v45.i64[1]);
            v46.i64[0] = swap64(v46.i64[0]);
          }
          v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 240LL);
          goto LABEL_197;
        }
      }
      else if ( (int)v44 > -2147483618 )
      {
        if ( (_DWORD)v44 == -2147483617 )
        {
LABEL_40:
          if ( (unsigned int)v9 <= 0x17 )
          {
            v45 = 0u;
            v46.i64[0] = 0;
          }
          else
          {
            v18 = *(int8x16_t *)v7;
            v46.i64[0] = *(_QWORD *)(v7 + 16);
            v45 = v18;
          }
          if ( *(_BYTE *)(a1 + 160) == 1 )
          {
            v45 = vrev32q_s8(v45);
            *(int8x8_t *)v46.i8 = vrev32_s8(*(int8x8_t *)v46.i8);
          }
          v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 72LL);
LABEL_197:
          v6 = v14(a2, &v45, v7, v7 + (unsigned int)v9);
          goto LABEL_3;
        }
        if ( (_DWORD)v44 == -2147483614 )
        {
LABEL_38:
          if ( (unsigned int)v9 <= 0x2F )
          {
            v16 = 0u;
            v46 = 0u;
            v47 = 0u;
          }
          else
          {
            v16 = *(int8x16_t *)v7;
            v17 = *(int8x16_t *)(v7 + 32);
            v46 = *(int8x16_t *)(v7 + 16);
            v47 = v17;
          }
          v45 = v16;
          if ( *(_BYTE *)(a1 + 160) == 1 )
          {
            v45 = vrev32q_s8(v45);
            v46 = vrev32q_s8(v46);
            v47 = vrev32q_s8(v47);
          }
          v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 200LL);
          goto LABEL_197;
        }
      }
      else
      {
        if ( (_DWORD)v44 == -2147483624 )
          goto LABEL_40;
        if ( (_DWORD)v44 == -2147483620 )
        {
          if ( (unsigned int)v9 <= 0xB )
          {
            v45.i32[2] = 0;
            v45.i64[0] = 0;
          }
          else
          {
            v12 = *(_QWORD *)v7;
            v45.i32[2] = *(_DWORD *)(v7 + 8);
            v45.i64[0] = v12;
          }
          if ( *(_BYTE *)(a1 + 160) == 1 )
          {
            *(int8x8_t *)v45.i8 = vrev32_s8(*(int8x8_t *)v45.i8);
            v45.i32[2] = bswap32(v45.u32[2]);
          }
          v14 = *(__int64 (__fastcall **)(__int64, int8x16_t *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 168LL);
          goto LABEL_197;
        }
      }
LABEL_61:
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64, unsigned __int64))(*(_QWORD *)a2 + 8LL))(
             a2,
             &v44,
             v7,
             v7 + (unsigned int)v9);
    }
LABEL_3:
    ++v4;
    if ( v6 )
      return v6 != 0;
  }
  sub_100000AA0();
  return 0;
}
