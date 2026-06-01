__int64 __fastcall sub_EA8BB0(__int64 a1, _DWORD *a2, _QWORD *a3, char a4)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // eax
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  char *v34; // rax
  __m128i v35; // xmm6
  __m128i v36; // xmm7
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // eax
  _QWORD *v49; // [rsp+8h] [rbp-30h]
  _QWORD *v50; // [rsp+8h] [rbp-30h]
  __m128i v51; // [rsp+10h] [rbp-28h] BYREF
  __m128i v52; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2[16];
  if ( v4 == 1 )
  {
    v5 = a2[2];
    if ( v5 == 2 )
    {
      v9 = a3[2181];
      if ( *(_DWORD *)(v9 + 260) != 15 )
        goto LABEL_15;
      v10 = *(_DWORD *)(v9 + 264);
      if ( v10 - 27 > 1 && v10 > 1 )
        goto LABEL_15;
    }
    else
    {
      if ( v5 > 2 )
      {
        if ( v5 == 4 || v5 == 16 )
        {
          *(_DWORD *)a1 = 8;
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = "wint_t";
          *(_BYTE *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 28) = 0;
          return a1;
        }
        goto LABEL_15;
      }
      if ( v5 )
        goto LABEL_15;
    }
LABEL_10:
    v6 = a3[2340];
LABEL_11:
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    return a1;
  }
  if ( (unsigned int)(v4 - 2) <= 4 || (unsigned int)(v4 - 36) <= 1 )
  {
    switch ( a2[2] )
    {
      case 0:
      case 3:
        goto LABEL_10;
      case 1:
        *(_DWORD *)a1 = 5;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 2:
        v6 = a3[2339];
        goto LABEL_11;
      case 4:
        v6 = a3[2341];
        goto LABEL_11;
      case 5:
      case 6:
      case 0xD:
        v6 = a3[2342];
        goto LABEL_11;
      case 7:
        v16 = sub_A3FF20(a3);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = "intmax_t";
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 8:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FF40(a3);
        v17 = _mm_load_si128(&v51);
        v52.m128i_i64[0] = (__int64)"ssize_t";
        v52.m128i_i8[8] = 0;
        v52.m128i_i32[3] = 0;
        v18 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v17;
        *(__m128i *)(a1 + 16) = v18;
        *(_DWORD *)(a1 + 28) = 1;
        return a1;
      case 9:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FFE0(a3);
        v14 = _mm_load_si128(&v51);
        v52.m128i_i64[0] = (__int64)"ptrdiff_t";
        v52.m128i_i8[8] = 0;
        v52.m128i_i32[3] = 0;
        v15 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v14;
        *(__m128i *)(a1 + 16) = v15;
        *(_DWORD *)(a1 + 28) = 2;
        return a1;
      case 0xA:
        goto LABEL_32;
      case 0xB:
        v49 = a3;
        v11 = sub_2294160(a3[2181] + 216LL);
        a3 = v49;
        if ( v11 )
          goto LABEL_33;
LABEL_32:
        v12 = a3[2340];
        *(_DWORD *)a1 = 2;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v12;
        *(_QWORD *)(a1 + 16) = "__int32";
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 0xC:
LABEL_33:
        v13 = a3[2342];
        *(_DWORD *)a1 = 2;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)(a1 + 16) = "__int64";
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_15;
      default:
        v4 = a2[16];
        break;
    }
  }
  if ( (unsigned int)(v4 - 7) <= 5 )
  {
    switch ( a2[2] )
    {
      case 0:
      case 3:
        v6 = a3[2346];
        goto LABEL_11;
      case 1:
        v6 = a3[2344];
        goto LABEL_11;
      case 2:
        v6 = a3[2345];
        goto LABEL_11;
      case 4:
        v6 = a3[2347];
        goto LABEL_11;
      case 5:
      case 6:
      case 0xD:
        v6 = a3[2348];
        goto LABEL_11;
      case 7:
        v26 = sub_A3FEB0(a3);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v26;
        *(_QWORD *)(a1 + 16) = "uintmax_t";
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 8:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FFA0(a3);
        v24 = _mm_load_si128(&v51);
        v52.m128i_i64[0] = (__int64)"size_t";
        v52.m128i_i8[8] = 0;
        v52.m128i_i32[3] = 0;
        v25 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v24;
        *(__m128i *)(a1 + 16) = v25;
        *(_DWORD *)(a1 + 28) = 1;
        return a1;
      case 9:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A40000(a3);
        v22 = _mm_load_si128(&v51);
        v52.m128i_i64[0] = (__int64)"unsigned ptrdiff_t";
        v52.m128i_i8[8] = 0;
        v52.m128i_i32[3] = 0;
        v23 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v22;
        *(__m128i *)(a1 + 16) = v23;
        *(_DWORD *)(a1 + 28) = 2;
        return a1;
      case 0xA:
        goto LABEL_45;
      case 0xB:
        v50 = a3;
        v19 = sub_2294160(a3[2181] + 216LL);
        a3 = v50;
        if ( v19 )
          goto LABEL_46;
LABEL_45:
        v20 = a3[2346];
        *(_DWORD *)a1 = 2;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v20;
        *(_QWORD *)(a1 + 16) = "unsigned __int32";
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 0xC:
LABEL_46:
        v21 = a3[2348];
        *(_DWORD *)a1 = 2;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v21;
        *(_QWORD *)(a1 + 16) = "unsigned __int64";
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_15;
      default:
        break;
    }
  }
  if ( (unsigned int)(v4 - 13) <= 7 )
  {
    v8 = a2[2];
    if ( a2[21] == 3 )
    {
      if ( v8 == 13 )
      {
        v6 = a3[2352];
        goto LABEL_11;
      }
    }
    else
    {
      if ( v8 == 2 )
      {
        v6 = a3[2379];
        goto LABEL_11;
      }
      if ( v8 == 3 )
      {
        v6 = a3[2350];
        goto LABEL_11;
      }
    }
    v6 = a3[2351];
    goto LABEL_11;
  }
  if ( v4 == 23 )
  {
    switch ( a2[2] )
    {
      case 0:
        v43 = a3[2340];
        v51.m128i_i32[0] = 2;
        v52.m128i_i64[0] = 0;
        v51.m128i_i64[1] = v43;
        goto LABEL_85;
      case 1:
        v42 = a3[2338];
        v51.m128i_i32[0] = 2;
        v52.m128i_i64[0] = 0;
        v51.m128i_i64[1] = v42;
        goto LABEL_83;
      case 2:
        v41 = a3[2339];
        v51.m128i_i32[0] = 2;
        v52.m128i_i64[0] = 0;
        v51.m128i_i64[1] = v41;
        goto LABEL_85;
      case 4:
        v40 = a3[2341];
        v51.m128i_i32[0] = 2;
        v52.m128i_i64[0] = 0;
        v51.m128i_i64[1] = v40;
        goto LABEL_83;
      case 5:
      case 6:
        v39 = a3[2342];
        v51.m128i_i32[0] = 2;
        v52.m128i_i64[0] = 0;
        v51.m128i_i64[1] = v39;
        goto LABEL_85;
      case 7:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FF20(a3);
        v34 = "intmax_t";
        goto LABEL_82;
      case 8:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FF40(a3);
        v52.m128i_i64[0] = (__int64)"ssize_t";
LABEL_85:
        v52.m128i_i8[8] = 0;
        v37 = _mm_load_si128(&v51);
        v52.m128i_i32[3] = 0;
        v38 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v37;
        *(__m128i *)(a1 + 16) = v38;
        *(_BYTE *)(a1 + 24) = 1;
        return a1;
      case 9:
        v51.m128i_i32[0] = 2;
        v51.m128i_i64[1] = sub_A3FFE0(a3);
        v34 = "ptrdiff_t";
LABEL_82:
        v52.m128i_i64[0] = (__int64)v34;
LABEL_83:
        v52.m128i_i8[8] = 0;
        v35 = _mm_load_si128(&v51);
        v52.m128i_i32[3] = 0;
        v36 = _mm_load_si128(&v52);
        *(__m128i *)a1 = v35;
        *(__m128i *)(a1 + 16) = v36;
        *(_BYTE *)(a1 + 24) = 1;
        return a1;
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xE:
      case 0xF:
      case 0x10:
        goto LABEL_15;
      case 0xD:
LABEL_80:
        *(_DWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      default:
        break;
    }
  }
  if ( (unsigned int)(v4 - 29) > 3 || (*(_BYTE *)(a3[290] + 164LL) & 1) != 0 )
  {
    switch ( v4 )
    {
      case 21:
        v33 = a2[2];
        if ( v33 == 4 )
        {
          if ( a4 )
          {
LABEL_97:
            v46 = sub_A4C2D0((__int64)a3, a3[2345] | 1LL);
            *(_DWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v46;
            *(_QWORD *)(a1 + 16) = "const unichar *";
            *(_BYTE *)(a1 + 24) = 0;
            *(_DWORD *)(a1 + 28) = 0;
            return a1;
          }
        }
        else if ( v33 != 16 )
        {
LABEL_79:
          *(_DWORD *)a1 = 6;
          *(_QWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = 0;
          *(_BYTE *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 28) = 0;
          return a1;
        }
LABEL_76:
        *(_DWORD *)a1 = 7;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = "wchar_t *";
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 22:
      case 27:
        *(_DWORD *)a1 = 4;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 25:
        if ( a4 )
        {
          v30 = a3[2345];
          *(_DWORD *)a1 = 2;
          *(_BYTE *)(a1 + 24) = 0;
          *(_QWORD *)(a1 + 8) = v30;
          *(_QWORD *)(a1 + 16) = "unichar";
          *(_DWORD *)(a1 + 28) = 0;
          return a1;
        }
        v44 = a3[2181];
        if ( *(_DWORD *)(v44 + 260) == 15 )
        {
          v48 = *(_DWORD *)(v44 + 264);
          if ( (v48 - 27 <= 1 || v48 <= 1) && a2[2] == 2 )
            goto LABEL_10;
        }
        v45 = a3[2333];
        *(_DWORD *)a1 = 2;
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 8) = v45;
        *(_QWORD *)(a1 + 16) = "wchar_t";
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      case 26:
        if ( a4 )
          goto LABEL_97;
        v32 = a3[2181];
        if ( *(_DWORD *)(v32 + 260) == 15 )
        {
          v47 = *(_DWORD *)(v32 + 264);
          if ( (v47 - 27 <= 1 || v47 <= 1) && a2[2] == 2 )
            goto LABEL_79;
        }
        goto LABEL_76;
      case 29:
        v31 = a2[2];
        if ( v31 == 2 )
        {
          v6 = a3[2355];
        }
        else if ( v31 == 4 )
        {
          v6 = a3[2357];
        }
        else
        {
          if ( v31 )
            break;
          v6 = a3[2356];
        }
        goto LABEL_11;
      case 30:
        v29 = a2[2];
        if ( v29 == 2 )
        {
          v6 = a3[2358];
        }
        else if ( v29 == 4 )
        {
          v6 = a3[2360];
        }
        else
        {
          if ( v29 )
            break;
          v6 = a3[2359];
        }
        goto LABEL_11;
      case 31:
        v28 = a2[2];
        if ( v28 == 2 )
        {
          v6 = a3[2361];
        }
        else if ( v28 == 4 )
        {
          v6 = a3[2363];
        }
        else
        {
          if ( v28 )
            break;
          v6 = a3[2362];
        }
        goto LABEL_11;
      case 32:
        v27 = a2[2];
        if ( v27 == 2 )
        {
          v6 = a3[2364];
        }
        else if ( v27 == 4 )
        {
          v6 = a3[2366];
        }
        else
        {
          if ( v27 )
            break;
          v6 = a3[2365];
        }
        goto LABEL_11;
      case 33:
        *(_DWORD *)a1 = 3;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
      default:
        goto LABEL_80;
    }
  }
LABEL_15:
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return a1;
}

