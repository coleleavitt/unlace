void __fastcall sub_1EA6B50(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rsi
  void *v13; // rdi
  void *v14; // rdx
  char *v15; // r15
  __int64 v16; // r9
  char *v17; // r13
  __int64 v18; // rsi
  unsigned int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  char *v23; // r8
  unsigned __int64 v24; // r12
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned int *v27; // rdx
  __int64 v28; // rdx
  unsigned int *v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // rax
  unsigned __int64 v34; // rdx
  __m128i v35; // rax
  __m128i v36; // rax
  char v37; // al
  int v38; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i *v42; // rdx
  __int64 v43; // r8
  char v44; // al
  int v45; // edx
  unsigned int *v46; // rax
  __m128i v47; // rax
  char v48; // al
  int v49; // eax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __m128i *v52; // rdx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __m128i v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rdx
  __m128i v60; // rax
  unsigned __int64 v61; // rdx
  __m128i v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rdi
  __int64 v65; // rdx
  __m128i v66; // rax
  __int64 v67; // rax
  unsigned int *v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  void *v77[2]; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v78; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD *v79; // [rsp+20h] [rbp-B8h]
  __int64 v80; // [rsp+28h] [rbp-B0h]
  void *ptr[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+40h] [rbp-98h]
  char *v83; // [rsp+50h] [rbp-88h] BYREF
  __int64 v84; // [rsp+58h] [rbp-80h]
  _BYTE v85[120]; // [rsp+60h] [rbp-78h] BYREF

  v7 = a3;
  v79 = a2;
  v8 = sub_F6C560(a3);
  v9 = v8;
  if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 8) )
  {
    v20 = operator new[](v8);
    v21 = *(_QWORD *)(a1 + 16);
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(char **)a1;
    v78.m128i_i64[0] = v20;
    v77[0] = v23;
    v24 = (_DWORD)v21 - (_DWORD)v22 + v9;
    memcpy((void *)(v20 + v24), &v23[v21], v22 - v21);
    v25 = v78.m128i_i64[0];
    if ( v77[0] && v77[0] != (void *)(a1 + 24) )
    {
      operator delete[](v77[0]);
      v25 = v78.m128i_i64[0];
    }
    v77[0] = (void *)v24;
    *(_QWORD *)a1 = v25;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)v77);
  }
  v84 = 0x400000000LL;
  v83 = v85;
  if ( a3 )
  {
    v10 = 4;
    v11 = 0;
    v77[0] = nullptr;
    while ( 1 )
    {
      v78.m128i_i64[0] = v7;
      *(__m128 *)v77 = _mm_loadh_ps((const double *)v77);
      if ( v11 + 1 > v10 )
      {
        sub_2237220(&v83, v85, v11 + 1, 16);
        v11 = (unsigned int)v84;
      }
      v12 = v77[1];
      v13 = v77[0];
      *(__m128i *)&v83[16 * v11] = _mm_load_si128((const __m128i *)v77);
      LODWORD(v84) = v84 + 1;
      v7 = sub_F6C7E0(v13, v12);
      v77[0] = v14;
      if ( !v7 )
        break;
      v11 = (unsigned int)v84;
      v10 = HIDWORD(v84);
    }
    v15 = v83;
    v16 = 16LL * (unsigned int)v84;
    v17 = &v83[v16];
    if ( v83 != &v83[v16] )
    {
      v77[0] = ptr;
      while ( 1 )
      {
        v18 = *((_QWORD *)v17 - 2);
        if ( (v18 & 0xF) == 0 )
          break;
LABEL_13:
        v17 -= 16;
        if ( v15 == v17 )
        {
          v17 = v83;
          goto LABEL_15;
        }
      }
      switch ( *(_BYTE *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
      {
        case 0:
        case 1:
        case 0xC:
          sub_1EA60B0(a1, v18);
          goto LABEL_13;
        case 2:
        case 3:
        case 5:
        case 6:
          sub_1EA6140((char **)a1, v18, 0x10u, 8);
          *(_DWORD *)v26 = a4;
          *(_DWORD *)(v26 + 4) = a4;
          *(_QWORD *)(v26 + 8) = 0;
          goto LABEL_13;
        case 4:
          v54 = sub_1EA6140((char **)a1, v18, 0x10u, 8);
          *(_QWORD *)(v55 + 8) = 0;
          *(_DWORD *)v55 = a4;
          *(_DWORD *)(v55 + 4) = a4;
          *(_QWORD *)(v55 + 8) = *(_QWORD *)(v54 + 40);
          goto LABEL_13;
        case 7:
        case 0x33:
          sub_1EA6140((char **)a1, v18, 0xCu, 4);
          *v29 = a4;
          v29[1] = a4;
          v29[2] = a4;
          goto LABEL_13;
        case 8:
          sub_1EA6140((char **)a1, v18, 8u, 8);
          *v53 = 0;
          goto LABEL_13;
        case 9:
          sub_1EA6140((char **)a1, v18, 1u, 1);
          goto LABEL_13;
        case 0xA:
        case 0xB:
        case 0xE:
        case 0x11:
        case 0x13:
        case 0x15:
        case 0x17:
        case 0x1C:
        case 0x1D:
        case 0x1E:
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
          sub_1EA6140((char **)a1, v18, 4u, 4);
          *v19 = a4;
          goto LABEL_13;
        case 0xD:
          v30 = 8;
          if ( (((*(_WORD *)(v18 + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
            v30 = ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v18 + 18) >> 3) + 74)) & 1) != 0 ? 12LL : 8LL;
          v31 = sub_1EA6140((char **)a1, v18, v30, 4);
          *(_DWORD *)v32 = a4;
          *(_DWORD *)(v32 + 4) = a4;
          if ( (((*(_WORD *)(v31 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
            && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v31 + 18) >> 3) + 74)) & 1) != 0 )
          {
            *(_WORD *)(v32 + 8) &= 0xF000u;
          }
          goto LABEL_13;
        case 0xF:
        case 0x24:
        case 0x28:
          sub_1EA6140((char **)a1, v18, 8u, 4);
          *v27 = a4;
          v27[1] = a4;
          goto LABEL_13;
        case 0x10:
          v56.m128i_i64[0] = sub_1EA6140((char **)a1, v18, 0x10u, 8);
          v78 = v56;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6E4E0((__int64)v77[0], v79, a4);
          goto LABEL_13;
        case 0x12:
          v57 = sub_1EA6140((char **)a1, v18, 0x18u, 8);
          *(_DWORD *)(v58 + 16) = a4;
          *(_DWORD *)(v58 + 8) = a4;
          *(_DWORD *)(v58 + 12) = a4;
          *(_QWORD *)v58 = *(_QWORD *)(v57 + 32);
          goto LABEL_13;
        case 0x14:
          v47.m128i_i64[0] = sub_1EA6140((char **)a1, v18, 0x18u, 8);
          v78 = v47;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D580((_DWORD **)v77[0], v79, a4);
          goto LABEL_13;
        case 0x16:
          v36.m128i_i64[0] = sub_1EA6140((char **)a1, v18, (unsigned int)(8 * *(_DWORD *)(v18 + 20) + 32), 8);
          v78 = v36;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D800((_DWORD **)v77[0], v79, a4);
          goto LABEL_13;
        case 0x18:
          v34 = 16;
          if ( (unsigned __int8)(*(_WORD *)(v18 + 18) >> 3) == 6 )
            v34 = 16LL * (*(_QWORD *)(v18 + 32) != 0);
          v35.m128i_i64[0] = sub_1EA6140((char **)a1, v18, v34, 8);
          v78 = v35;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D490((_QWORD *)v77[0], v79, a4);
          goto LABEL_13;
        case 0x19:
          v37 = *(_BYTE *)(v18 + 16);
          if ( v37 == 26 )
          {
            v38 = ((*(_BYTE *)(v18 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
          }
          else
          {
            v39 = 16;
            if ( v37 == 25 )
            {
LABEL_40:
              v40 = sub_1EA6140((char **)a1, v18, v39, 8);
              v78.m128i_i32[0] = a4;
              v41 = v40;
              v43 = (__int64)v42;
              *v42 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
              v44 = *(_BYTE *)(v40 + 16);
              if ( v44 != 25 )
                goto LABEL_41;
              goto LABEL_13;
            }
            v38 = 15;
          }
          v39 = 8 * ((v38 + 8 * (unsigned int)*(unsigned __int16 *)(v18 + 22)) >> 3) + 8;
          goto LABEL_40;
        case 0x1A:
          v48 = *(_BYTE *)(v18 + 16);
          if ( v48 == 26 )
          {
            v49 = ((*(_BYTE *)(v18 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
          }
          else
          {
            v50 = 16;
            if ( v48 == 25 )
            {
LABEL_50:
              v51 = sub_1EA6140((char **)a1, v18, v50, 8);
              v78.m128i_i32[0] = a4;
              v41 = v51;
              v43 = (__int64)v52;
              *v52 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a4), 0);
              v44 = *(_BYTE *)(v51 + 16);
              if ( v44 != 25 )
              {
LABEL_41:
                v45 = *(unsigned __int16 *)(v41 + 22);
                if ( *(_WORD *)(v41 + 22) )
                {
                  v80 = v41;
                  v78.m128i_i64[0] = v43;
                  memset((void *)(v43 + 16), 0, 8LL * (unsigned int)(v45 - 1) + 8);
                  v41 = v80;
                  v43 = v78.m128i_i64[0];
                  v44 = *(_BYTE *)(v80 + 16);
                }
                if ( v44 == 26 && (*(_BYTE *)(v41 + 19) & 0x1E) != 0 )
                {
                  v46 = (unsigned int *)(v43 + 8LL * *(unsigned __int16 *)(v41 + 22) + 16);
                  *v46 = a4;
                  v46[1] = a4;
                }
              }
              goto LABEL_13;
            }
            v49 = 15;
          }
          v50 = 8 * ((v49 + 8 * (unsigned int)*(unsigned __int16 *)(v18 + 22)) >> 3) + 8;
          goto LABEL_50;
        case 0x1B:
          sub_1EA6140((char **)a1, v18, 0x10u, 8);
          *v59 = 0;
          goto LABEL_13;
        case 0x1F:
        case 0x20:
          sub_1EA6140((char **)a1, v18, 0x20u, 8);
          *(_DWORD *)v28 = a4;
          *(_DWORD *)(v28 + 4) = a4;
          *(_DWORD *)(v28 + 8) = a4;
          *(_OWORD *)(v28 + 16) = 0;
          goto LABEL_13;
        case 0x21:
          v67 = sub_1EA6140((char **)a1, v18, 0x10u, 8);
          v69 = (__int64)v68;
          *v68 = a4;
          v70 = *(_QWORD *)(v67 + 40);
          if ( v70 )
          {
            v78.m128i_i64[0] = v69;
            *(_OWORD *)ptr = 0;
            v82 = 0;
            sub_E90890((__int64)v77[0], v79, v70, ((unsigned __int64)a4 << 32) | a4);
            sub_E911A0((__int64 *)v77[0], v79, v71, v72, v73, v74);
            v75 = HIDWORD(v82);
            *(_QWORD *)(v78.m128i_i64[0] + 8) = v76;
            if ( v75 )
              free(ptr[1]);
          }
          else
          {
            *(_QWORD *)(v69 + 8) = 0;
          }
          goto LABEL_13;
        case 0x23:
          v66.m128i_i64[0] = sub_1EA6140(
                               (char **)a1,
                               v18,
                               8
                             * ((4 * ((*(_BYTE *)(v18 + 19) >> 2) + 2 * ((*(_WORD *)(v18 + 18) >> 3) & 0x7Fu)) + 23) >> 3)
                             + 8,
                               8);
          v78 = v66;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D330((__int64 *)v77[0], v79, a4);
          goto LABEL_13;
        case 0x25:
          v61 = 4;
          if ( (*(_BYTE *)(v18 + 32) & 0x3F) != 0 )
            v61 = 4 * ((4 * (*(_BYTE *)(v18 + 32) & 0x3Fu) + 11) >> 2) + 4;
          v62.m128i_i64[0] = sub_1EA6140((char **)a1, v18, v61, 4);
          v78 = v62;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D2A0((__int64 *)v77[0], (__int64)v79, a4);
          goto LABEL_13;
        case 0x31:
          v63 = sub_1EA6140((char **)a1, v18, (unsigned int)(8 * *(_DWORD *)(v18 + 20) + 16), 8);
          v64 = v79;
          *(_DWORD *)v65 = a4;
          *(_DWORD *)(v65 + 8) = a4;
          *(_DWORD *)(v65 + 12) = a4;
          *(_DWORD *)(v65 + 4) = 0;
          sub_F6D630(v64, v63 + 48, *(_DWORD *)(v63 + 20), (_QWORD *)(v65 + 16), a4);
          goto LABEL_13;
        case 0x34:
          v60.m128i_i64[0] = sub_1EA6140((char **)a1, v18, 0x18u, 8);
          v78 = v60;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D410((_DWORD **)v77[0], v79, a4);
          goto LABEL_13;
        case 0x36:
          v33.m128i_i64[0] = sub_1EA6140((char **)a1, v18, 0x18u, 8);
          v78 = v33;
          *(__m128i *)ptr = _mm_load_si128(&v78);
          sub_F6D450((_DWORD **)v77[0], v79, a4);
          goto LABEL_13;
        default:
          goto LABEL_13;
      }
    }
LABEL_15:
    if ( v17 != v85 )
      free(v17);
  }
}
