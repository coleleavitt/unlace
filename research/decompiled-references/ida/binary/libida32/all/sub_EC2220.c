__int64 __fastcall sub_EC2220(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  char *v13; // rax
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __int64 v22; // rax
  char *v23; // rax
  __m128i v24; // xmm4
  __m128i v25; // xmm5
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-28h] BYREF
  __m128i v40; // [rsp+10h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v3 <= 0x26 && (v4 = 0x4001000001LL, _bittest64(&v4, v3)) )
  {
LABEL_7:
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
  else
  {
    switch ( *(_DWORD *)(a2 + 64) )
    {
      case 1:
      case 0x15:
      case 0x27:
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 0:
            goto LABEL_21;
          case 2:
            goto LABEL_18;
          case 4:
          case 0x10:
            v16 = a3[2333];
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = v16;
            v17 = "wchar_t";
            goto LABEL_28;
          case 0xE:
          case 0xF:
            *(_DWORD *)a1 = 6;
            *(_QWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0;
            *(_DWORD *)(a1 + 28) = 0;
            *(_BYTE *)(a1 + 24) = 1;
            break;
          default:
            goto LABEL_7;
        }
        return a1;
      case 2:
      case 3:
      case 4:
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 0:
            v19 = a3[2340];
            goto LABEL_31;
          case 1:
            goto LABEL_21;
          case 2:
            v32 = a3[2339];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v32;
            goto LABEL_38;
          case 3:
          case 0xA:
          case 0xB:
          case 0xE:
          case 0xF:
          case 0x10:
            goto LABEL_7;
          case 4:
            v31 = a3[2341];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v31;
            goto LABEL_25;
          case 5:
          case 6:
            v19 = a3[2342];
            goto LABEL_31;
          case 7:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FF20(a3);
            v13 = "intmax_t";
            goto LABEL_24;
          case 8:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FF40(a3);
            v40.m128i_i64[0] = (__int64)"ssize_t";
            goto LABEL_32;
          case 9:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FFE0(a3);
            v23 = "ptrdiff_t";
            goto LABEL_37;
          case 0xC:
            v30 = a3[2342];
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = v30;
            v23 = "__int64";
            goto LABEL_37;
          case 0xD:
            goto LABEL_29;
        }
      case 5:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 0:
            v29 = a3[2346];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v29;
            goto LABEL_17;
          case 1:
            v19 = a3[2344];
            goto LABEL_31;
          case 2:
            v28 = a3[2345];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v28;
            goto LABEL_38;
          case 3:
          case 0xA:
          case 0xB:
          case 0xE:
          case 0xF:
          case 0x10:
            goto LABEL_7;
          case 4:
            v27 = a3[2347];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v27;
            goto LABEL_25;
          case 5:
          case 6:
            v26 = a3[2348];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v26;
            goto LABEL_17;
          case 7:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FEB0(a3);
            v23 = "uintmax_t";
            goto LABEL_37;
          case 8:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FFA0(a3);
            v13 = "size_t";
            goto LABEL_24;
          case 9:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A40000(a3);
            v17 = "unsigned ptrdiff_t";
            goto LABEL_28;
          case 0xC:
            v22 = a3[2348];
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = v22;
            v40.m128i_i64[0] = (__int64)"unsigned __int64";
            goto LABEL_32;
          case 0xD:
            v19 = a3[2348];
            goto LABEL_31;
          default:
            BUG();
        }
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        v5 = *(_DWORD *)(a2 + 8);
        if ( v5 == 4 )
        {
          v19 = a3[2351];
LABEL_31:
          v39.m128i_i64[1] = v19;
          v39.m128i_i32[0] = 2;
          v40.m128i_i64[0] = 0;
LABEL_32:
          v40.m128i_i8[8] = 0;
          v20 = _mm_load_si128(&v39);
          v40.m128i_i32[3] = 0;
          v21 = _mm_load_si128(&v40);
          *(__m128i *)a1 = v20;
          *(__m128i *)(a1 + 16) = v21;
          *(_BYTE *)(a1 + 24) = 1;
        }
        else if ( v5 == 13 )
        {
          v38 = a3[2352];
          v39.m128i_i32[0] = 2;
          v40.m128i_i64[0] = 0;
          v39.m128i_i64[1] = v38;
LABEL_38:
          v40.m128i_i8[8] = 0;
          v24 = _mm_load_si128(&v39);
          v40.m128i_i32[3] = 0;
          v25 = _mm_load_si128(&v40);
          *(__m128i *)a1 = v24;
          *(__m128i *)(a1 + 16) = v25;
          *(_BYTE *)(a1 + 24) = 1;
        }
        else
        {
          if ( v5 )
            goto LABEL_7;
          v7 = a3[2350];
          v39.m128i_i32[0] = 2;
          v40.m128i_i64[0] = 0;
          v39.m128i_i64[1] = v7;
LABEL_17:
          v40.m128i_i8[8] = 0;
          v8 = _mm_load_si128(&v39);
          v40.m128i_i32[3] = 0;
          v9 = _mm_load_si128(&v40);
          *(__m128i *)a1 = v8;
          *(__m128i *)(a1 + 16) = v9;
          *(_BYTE *)(a1 + 24) = 1;
        }
        break;
      case 0x16:
        *(_DWORD *)a1 = 4;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        *(_BYTE *)(a1 + 24) = 1;
        return a1;
      case 0x17:
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 0:
            v37 = a3[2340];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v37;
            goto LABEL_38;
          case 1:
            v36 = a3[2338];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v36;
            goto LABEL_25;
          case 2:
            v35 = a3[2339];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v35;
            goto LABEL_17;
          case 3:
          case 0xA:
          case 0xB:
          case 0xE:
          case 0xF:
          case 0x10:
            goto LABEL_7;
          case 4:
            v34 = a3[2341];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v34;
            goto LABEL_38;
          case 5:
          case 6:
LABEL_29:
            v18 = a3[2342];
            v39.m128i_i32[0] = 2;
            v40.m128i_i64[0] = 0;
            v39.m128i_i64[1] = v18;
            goto LABEL_25;
          case 7:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FF20(a3);
            v17 = "intmax_t";
LABEL_28:
            v40.m128i_i64[0] = (__int64)v17;
            goto LABEL_17;
          case 8:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FF40(a3);
            v23 = "ssize_t";
LABEL_37:
            v40.m128i_i64[0] = (__int64)v23;
            goto LABEL_38;
          case 9:
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = sub_A3FFE0(a3);
            v13 = "ptrdiff_t";
            goto LABEL_24;
          case 0xC:
            v33 = a3[2342];
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = v33;
            v40.m128i_i64[0] = (__int64)"__int64";
            goto LABEL_32;
          default:
            goto LABEL_15;
        }
      case 0x19:
      case 0x1A:
        switch ( *(_DWORD *)(a2 + 8) )
        {
          case 0:
          case 0x10:
            v12 = a3[2333];
            v39.m128i_i32[0] = 2;
            v39.m128i_i64[1] = v12;
            v13 = "wchar_t";
LABEL_24:
            v40.m128i_i64[0] = (__int64)v13;
LABEL_25:
            v40.m128i_i8[8] = 0;
            v14 = _mm_load_si128(&v39);
            v40.m128i_i32[3] = 0;
            v15 = _mm_load_si128(&v40);
            *(__m128i *)a1 = v14;
            *(__m128i *)(a1 + 16) = v15;
            *(_BYTE *)(a1 + 24) = 1;
            break;
          case 2:
LABEL_18:
            v10 = a3[2181];
            if ( *(_DWORD *)(v10 + 260) != 15 )
              goto LABEL_7;
            v11 = *(_DWORD *)(v10 + 264);
            if ( v11 - 27 > 1 && v11 > 1 )
              goto LABEL_7;
LABEL_21:
            *(_DWORD *)a1 = 5;
            *(_QWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0;
            *(_DWORD *)(a1 + 28) = 0;
            *(_BYTE *)(a1 + 24) = 1;
            break;
          case 0xE:
          case 0xF:
            *(_DWORD *)a1 = 7;
            *(_QWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = "wchar_t *";
            *(_DWORD *)(a1 + 28) = 0;
            *(_BYTE *)(a1 + 24) = 1;
            break;
          default:
            goto LABEL_7;
        }
        return a1;
      default:
LABEL_15:
        *(_DWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        return a1;
    }
  }
  return a1;
}

