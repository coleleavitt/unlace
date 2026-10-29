void __fastcall sub_F49F30(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // rcx
  __int64 *v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // eax
  __int8 v25; // al
  unsigned __int8 v26; // al
  unsigned int *v27; // rax
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __m128 v39; // xmm0
  char *v40; // rax
  unsigned __int64 v41; // rbx
  bool v42; // zf
  __m128 v43; // xmm0
  __int64 v44; // rax
  __int64 *v45; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v47; // [rsp+20h] [rbp-48h]

  v6 = a2;
  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (__int64 *)ptr;
  while ( 1 )
  {
    while ( (v6 & 0xF) == 0 )
    {
      switch ( *(_BYTE *)(v8 + 16) )
      {
        case 0:
        case 1:
        case 0xC:
          v6 = *(_QWORD *)(v6 + 32);
          v19 = 1;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v23 = (a3 != 0) + (a3 - (a3 != 0)) / v19;
          goto LABEL_25;
        case 2:
        case 3:
        case 5:
        case 6:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          goto LABEL_27;
        case 4:
          *(_QWORD *)(a3 + 8) = 0;
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          *(_QWORD *)(a3 + 8) = *(_QWORD *)(v6 + 40);
          goto LABEL_28;
        case 7:
          *(_DWORD *)a3 = a4;
          v19 = 1;
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)(a3 + 8) = a4;
          v6 = *(_QWORD *)(v6 + 32);
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v21 = a3 == -12;
          v22 = a3 + 12;
          goto LABEL_24;
        case 8:
          *(_QWORD *)a3 = 0;
          v6 = *(_QWORD *)(v6 + 40);
          v19 = 1;
          v38 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_65;
          goto LABEL_63;
        case 9:
          v6 = *(_QWORD *)(v6 + 32);
          v19 = 1;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v21 = a3 == -1;
          v22 = a3 + 1;
          goto LABEL_24;
        case 0xA:
        case 0xE:
        case 0x11:
        case 0x13:
        case 0x1C:
        case 0x1D:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x32:
        case 0x35:
        case 0x37:
        case 0x38:
          *(_DWORD *)a3 = a4;
          return;
        case 0xB:
        case 0x17:
        case 0x22:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x39:
        case 0x3A:
          *(_DWORD *)a3 = a4;
          v6 = *(_QWORD *)(v6 + 32);
          v19 = 1;
          v20 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_20;
          goto LABEL_22;
        case 0xD:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          if ( (((*(_WORD *)(v6 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
            && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v6 + 18) >> 3) + 74)) & 1) != 0 )
          {
            *(_WORD *)(a3 + 8) &= 0xF000u;
          }
          return;
        case 0xF:
        case 0x24:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          return;
        case 0x10:
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)a3 = a4;
          *(_QWORD *)(a3 + 8) = 0;
          if ( *(_QWORD *)(v6 + 32) )
            *(_QWORD *)(a3 + 8) = sub_F49BC0(a1, a4, (const __m128i *)v6);
          return;
        case 0x12:
          *(_DWORD *)(a3 + 16) = a4;
          v19 = 1;
          *(_DWORD *)(a3 + 8) = a4;
          *(_DWORD *)(a3 + 12) = a4;
          *(_QWORD *)a3 = *(_QWORD *)(v6 + 32);
          v6 = *(_QWORD *)(v6 + 40);
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v21 = a3 == -24;
          v22 = a3 + 24;
          goto LABEL_24;
        case 0x14:
          v45 = (__int64 *)a3;
          *(__m128 *)ptr = _mm_loadh_ps((const double *)&v45);
          sub_F49840((_DWORD **)ptr, a1, a4);
          return;
        case 0x15:
          *(_DWORD *)a3 = a4;
          v6 = *(_QWORD *)(v6 + 40);
          v19 = 1;
          v20 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_22;
          goto LABEL_20;
        case 0x16:
          v45 = (__int64 *)a3;
          *(__m128 *)ptr = _mm_loadh_ps((const double *)&v45);
          sub_F49AC0((_DWORD **)ptr, a1, a4);
          return;
        case 0x18:
          v45 = (__int64 *)a3;
          v39 = _mm_loadh_ps((const double *)&v45);
          v45 = v9;
          *(__m128 *)ptr = v39;
          sub_F49750(v9, a1, a4);
          v40 = (char *)ptr[1];
          v9 = v45;
          v6 = *((_QWORD *)ptr[0] + 5);
          if ( (unsigned __int8)(*((_WORD *)ptr[0] + 9) >> 3) != 6 || *((_QWORD *)ptr[0] + 4) )
            v40 = (char *)ptr[1] + 16;
          v41 = 1;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v41 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v42 = v40 == nullptr;
          goto LABEL_76;
        case 0x19:
          LODWORD(v45) = a4;
          *(__m128i *)a3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
          if ( *(_BYTE *)(v6 + 16) == 25 )
            goto LABEL_68;
          goto LABEL_43;
        case 0x1A:
          LODWORD(v45) = a4;
          *(__m128i *)a3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
          if ( *(_BYTE *)(v6 + 16) == 25 )
          {
LABEL_68:
            v28 = *(_QWORD *)(v6 + 24);
            v30 = 16;
          }
          else
          {
LABEL_43:
            v24 = *(unsigned __int16 *)(v6 + 22);
            if ( *(_WORD *)(v6 + 22) )
            {
              v45 = v9;
              memset((void *)(a3 + 16), 0, 8LL * (unsigned int)(v24 - 1) + 8);
              v9 = v45;
            }
            v25 = *(_BYTE *)(v6 + 16);
            if ( v25 == 26 )
            {
              v26 = *(_BYTE *)(v6 + 19);
              if ( (v26 & 0x1E) == 0 )
              {
                v28 = *(_QWORD *)(v6 + 24);
                goto LABEL_49;
              }
              v27 = (unsigned int *)(a3 + 8LL * *(unsigned __int16 *)(v6 + 22) + 16);
              *v27 = a4;
              v27[1] = a4;
              v25 = *(_BYTE *)(v6 + 16);
              v28 = *(_QWORD *)(v6 + 24);
              if ( v25 == 26 )
              {
                v26 = *(_BYTE *)(v6 + 19);
LABEL_49:
                v29 = ((v26 >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_50:
                v30 = 8 * ((v29 + 8 * (unsigned int)*(unsigned __int16 *)(v6 + 22)) >> 3) + 8;
                goto LABEL_51;
              }
            }
            else
            {
              v28 = *(_QWORD *)(v6 + 24);
            }
            if ( v25 != 25 )
            {
              v29 = 15;
              goto LABEL_50;
            }
            v30 = 16;
          }
LABEL_51:
          v31 = 1;
          if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v28 & 0xF) == 0 )
            v31 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v28 )
            return;
          v6 = v28;
          a3 = v31 * ((a3 + v30 != 0) + (a3 + v30 - (a3 + v30 != 0)) / v31);
          v8 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
          break;
        case 0x1B:
          *(_QWORD *)a3 = 0;
          goto LABEL_28;
        case 0x1E:
          *(_DWORD *)a3 = a4;
          v6 = *(_QWORD *)(v6 + 24);
          v19 = 1;
          v20 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
LABEL_20:
            if ( (v6 & 0xF) == 0 )
              v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)v20 + 16LL)];
          }
LABEL_22:
          if ( !v6 )
            return;
          v21 = a3 == -4;
          v22 = a3 + 4;
          goto LABEL_24;
        case 0x1F:
        case 0x20:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)(a3 + 8) = a4;
          *(_OWORD *)(a3 + 16) = 0;
          return;
        case 0x21:
          *(_DWORD *)a3 = a4;
          v32 = *(_QWORD *)(v6 + 40);
          if ( v32 )
          {
            *(_OWORD *)ptr = 0;
            v45 = v9;
            v47 = 0;
            sub_E6CB50((__int64)v9, a1, v32, ((unsigned __int64)a4 << 32) | a4);
            sub_E6D460(v45, a1, v33, v34, (__int64)v45, v35);
            v36 = HIDWORD(v47);
            v9 = v45;
            *(_QWORD *)(a3 + 8) = v37;
            if ( v36 )
            {
              free(ptr[1]);
              v9 = v45;
            }
          }
          else
          {
LABEL_27:
            *(_QWORD *)(a3 + 8) = 0;
          }
LABEL_28:
          v6 = *(_QWORD *)(v6 + 32);
          v19 = 1;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v21 = a3 == -16;
          v22 = a3 + 16;
          goto LABEL_24;
        case 0x23:
          v45 = (__int64 *)a3;
          v41 = 1;
          v43 = _mm_loadh_ps((const double *)&v45);
          v45 = v9;
          *(__m128 *)ptr = v43;
          sub_F495F0(v9, a1, a4);
          v9 = v45;
          v6 = *((_QWORD *)ptr[0] + 3);
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v6 & 0xF) == 0 )
            v41 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)ptr[0] + 3) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
          if ( !v6 )
            return;
          v44 = 8 * ((4 * ((*((_BYTE *)ptr[0] + 19) >> 2) + 2 * ((*((_WORD *)ptr[0] + 9) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
          v42 = (char *)ptr[1] + v44 == nullptr;
          v40 = (char *)ptr[1] + v44;
LABEL_76:
          a3 = (!v42 + (unsigned __int64)&v40[-!v42] / v41) * v41;
          v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
          continue;
        case 0x25:
          *(_DWORD *)a3 = a4;
          if ( (*(_BYTE *)(v6 + 32) & 0x3F) == 0 )
            return;
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)(a3 + 8) = a4;
          v12 = *(_BYTE *)(v6 + 32) & 0x3F;
          if ( (*(_BYTE *)(v6 + 32) & 0x3F) == 0 )
            return;
          v13 = a3 + 12;
          if ( v12 - 1 <= 2 )
          {
            v16 = 0;
          }
          else
          {
            LODWORD(v45) = a4;
            v14 = a3;
            v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
            do
            {
              *(__m128i *)(v14 + 12) = v15;
              v14 += 16LL;
            }
            while ( a3 + 16LL * (v12 >> 2) != v14 );
            v16 = v12 & 0xFFFFFFFC;
            if ( v12 == (v12 & 0xFFFFFFFC) )
              return;
          }
          *(_DWORD *)(v13 + 4LL * v16) = a4;
          v17 = v16 + 1;
          if ( v12 != (_DWORD)v17 )
          {
            v18 = v16 + 2;
            *(_DWORD *)(v13 + 4 * v17) = a4;
            if ( v12 != (_DWORD)v18 )
              *(_DWORD *)(v13 + 4 * v18) = a4;
          }
          return;
        case 0x28:
          *(_DWORD *)a3 = a4;
          v19 = 1;
          *(_DWORD *)(a3 + 4) = a4;
          v6 = *(_QWORD *)(v6 + 32);
          v38 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
LABEL_63:
            if ( (v6 & 0xF) == 0 )
              v19 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)v38 + 16LL)];
          }
LABEL_65:
          if ( !v6 )
            return;
          v21 = a3 == -8;
          v22 = a3 + 8;
LABEL_24:
          v23 = !v21 + (v22 - !v21) / v19;
LABEL_25:
          a3 = v19 * v23;
          v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
          continue;
        case 0x31:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = 0;
          *(_DWORD *)(a3 + 8) = a4;
          *(_DWORD *)(a3 + 12) = a4;
          sub_F498F0(a1, v6 + 48, *(_DWORD *)(v6 + 20), (_QWORD *)(a3 + 16), a4);
          return;
        case 0x33:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)(a3 + 8) = a4;
          return;
        case 0x34:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 4) = a4;
          *(_DWORD *)(a3 + 8) = a4;
          *(_QWORD *)(a3 + 16) = sub_A5DBD0(a1, *(_QWORD *)(v6 + 24), a4);
          return;
        case 0x36:
          *(_DWORD *)a3 = a4;
          *(_DWORD *)(a3 + 8) = a4;
          *(_DWORD *)(a3 + 4) = a4;
          *(_QWORD *)(a3 + 16) = sub_A5DBD0(a1, *(_QWORD *)(v6 + 32), a4);
          return;
        case 0x3B:
          goto LABEL_4;
        default:
          continue;
      }
    }
LABEL_4:
    v10 = 1;
    v11 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v10 = byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)v11 + 16LL)];
    if ( !v8 )
      break;
    v6 = v8;
    v8 = *(_QWORD *)v11;
    a3 = v10 * ((a3 != 0) + (a3 - (a3 != 0)) / v10);
  }
}

