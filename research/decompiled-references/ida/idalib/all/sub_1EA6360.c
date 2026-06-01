void __fastcall sub_1EA6360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // rdi
  __int64 v11; // rdx
  char *v12; // rdi
  int v13; // r13d
  __int64 *v14; // rax
  __int64 v15; // rsi
  const __m128i *v16; // r15
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  char *v21; // r15
  __int64 v22; // r13
  __int64 v23; // rcx
  int v24; // ecx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  char v27; // al
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  void *v32; // rdx
  void *v33; // rdi
  int v34; // edx
  size_t v35; // rdx
  __m128i *v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rdx
  unsigned int v40; // ecx
  __m128i *v41; // rdx
  __int64 v42; // rax
  void *v43; // rdx
  __m128i *v44; // rdx
  unsigned __int64 v45; // rdx
  int v46; // eax
  _QWORD *v47; // rdx
  unsigned int v48; // eax
  unsigned __int64 v49; // rdi
  char *v50; // rdx
  char *v51; // r15
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  _QWORD *v63; // rdx
  unsigned int v64; // ecx
  int v65; // eax
  _BYTE *v66; // rdx
  unsigned __int64 v67; // rdi
  char *v68; // rdx
  char *v69; // r15
  unsigned int v70; // edx
  unsigned int v71; // eax
  __int64 v72; // rcx
  __m128 v73; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v76; // [rsp+28h] [rbp-80h]
  _BYTE v77[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a2;
  v73.m128_u64[0] = a3;
  v6 = sub_F6C560(a2);
  v7 = v6;
  if ( (unsigned __int64)v6 > *(_QWORD *)(a1 + 8) )
  {
    v18 = operator new[](v6);
    v19 = *(_QWORD *)(a1 + 16);
    v20 = *(_QWORD *)(a1 + 8);
    v21 = *(char **)a1;
    v74 = v18;
    v22 = (_DWORD)v19 - (_DWORD)v20 + v7;
    memcpy((void *)(v18 + v22), &v21[v19], v20 - v19);
    v23 = v74;
    if ( v21 && v21 != (char *)(a1 + 24) )
    {
      operator delete[](v21);
      v23 = v74;
    }
    v74 = v22;
    *(_QWORD *)a1 = v23;
    *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v74);
  }
  v76 = 0x400000000LL;
  ptr = v77;
  if ( a2 )
  {
    v8 = 4;
    v9 = 0;
    while ( 1 )
    {
      v74 = v5;
      v73 = _mm_loadh_ps((const double *)v73.m128_u64);
      if ( v9 + 1 > v8 )
      {
        sub_2237220(&ptr, v77, v9 + 1, 16);
        v9 = (unsigned int)v76;
      }
      v10 = (__m128i)v73;
      *((__m128i *)ptr + v9) = _mm_load_si128((const __m128i *)&v73);
      LODWORD(v76) = v76 + 1;
      v5 = sub_F6C7E0(v10.m128i_i64[0], v10.m128i_i64[1]);
      v73.m128_u64[0] = v11;
      if ( !v5 )
        break;
      v9 = (unsigned int)v76;
      v8 = HIDWORD(v76);
    }
    v12 = (char *)ptr;
    if ( (_DWORD)v76 )
    {
      v13 = v76 - 1;
      while ( 1 )
      {
        v14 = (__int64 *)&v12[16 * v13];
        v15 = *v14;
        if ( (*v14 & 0xF) == 0 )
          break;
LABEL_14:
        if ( --v13 == -1 )
          goto LABEL_15;
      }
      v16 = (const __m128i *)v14[1];
      switch ( *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
      {
        case 0:
        case 1:
        case 0xC:
          sub_1EA60B0(a1, v15);
          v12 = (char *)ptr;
          goto LABEL_14;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x10:
        case 0x1B:
        case 0x21:
          sub_1EA6140((char **)a1, v15, 0x10u, 8);
          *v44 = _mm_loadu_si128(v16);
          v12 = (char *)ptr;
          goto LABEL_14;
        case 7:
        case 0x33:
          sub_1EA6140((char **)a1, v15, 0xCu, 4);
          *(_QWORD *)v26 = v16->m128i_i64[0];
          *(_DWORD *)(v26 + 8) = v16->m128i_i32[2];
          v12 = (char *)ptr;
          goto LABEL_14;
        case 8:
          v24 = 8;
          goto LABEL_23;
        case 9:
          sub_1EA6140((char **)a1, v15, 1u, 1);
          *v66 = v16->m128i_i8[0];
          v12 = (char *)ptr;
          goto LABEL_14;
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
          sub_1EA6140((char **)a1, v15, 4u, 4);
          *v17 = v16->m128i_i32[0];
          goto LABEL_13;
        case 0xD:
          v45 = 8;
          if ( (((*(_WORD *)(v15 + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
            v45 = ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v15 + 18) >> 3) + 74)) & 1) != 0 ? 12LL : 8LL;
          v46 = (*(_WORD *)(sub_1EA6140((char **)a1, v15, v45, 4) + 18) >> 3) & 0x1FF;
          if ( (unsigned int)(v46 - 443) <= 4 || (unsigned int)(v46 - 451) <= 0x24 || v46 == 438 || v46 == 449 )
            v48 = 12;
          else
            v48 = 8;
          v49 = (unsigned __int64)(v47 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v47 = v16->m128i_i64[0];
          *(_QWORD *)((char *)v47 + v48 - 8) = *(__int64 *)((char *)&v16->m128i_i64[-1] + v48);
          v50 = (char *)v47 - v49;
          v51 = (char *)((char *)v16 - v50);
          v52 = ((_DWORD)v50 + v48) & 0xFFFFFFF8;
          if ( v52 >= 8 )
          {
            v53 = v52 & 0xFFFFFFF8;
            v54 = 0;
            do
            {
              v55 = v54;
              v54 += 8;
              *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
            }
            while ( v54 < v53 );
          }
          goto LABEL_13;
        case 0xF:
        case 0x24:
        case 0x28:
          v24 = 4;
LABEL_23:
          sub_1EA6140((char **)a1, v15, 8u, v24);
          *v25 = v16->m128i_i64[0];
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x12:
        case 0x14:
        case 0x34:
        case 0x36:
          sub_1EA6140((char **)a1, v15, 0x18u, 8);
          *v36 = _mm_loadu_si128(v16);
          v36[1].m128i_i64[0] = v16[1].m128i_i64[0];
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x16:
          v56 = sub_1EA6140((char **)a1, v15, (unsigned int)(8 * *(_DWORD *)(v15 + 20) + 32), 8);
          memcpy(v57, v16, (unsigned int)(8 * *(_DWORD *)(v56 + 20) + 32));
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x18:
          v37 = 16;
          if ( (unsigned __int8)(*(_WORD *)(v15 + 18) >> 3) == 6 )
            v37 = 16LL * (*(_QWORD *)(v15 + 32) != 0);
          v38 = sub_1EA6140((char **)a1, v15, v37, 8);
          v40 = 16;
          if ( (unsigned __int8)(*(_WORD *)(v38 + 18) >> 3) == 6 )
            v40 = 16 * (*(_QWORD *)(v38 + 32) != 0);
          if ( v40 >= 8 )
          {
            v67 = (unsigned __int64)(v39 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            *v39 = v16->m128i_i64[0];
            v39[v40 / 8 - 1] = v16[v40 / 0x10 - 1].m128i_i64[1];
            v68 = (char *)v39 - v67;
            v69 = (char *)((char *)v16 - v68);
            if ( ((v40 + (_DWORD)v68) & 0xFFFFFFF8) >= 8 )
            {
              v70 = (v40 + (_DWORD)v68) & 0xFFFFFFF8;
              v71 = 0;
              do
              {
                v72 = v71;
                v71 += 8;
                *(_QWORD *)(v67 + v72) = *(_QWORD *)&v69[v72];
              }
              while ( v71 < v70 );
            }
          }
          else if ( v40 )
          {
            *(_BYTE *)v39 = v16->m128i_i8[0];
          }
          goto LABEL_13;
        case 0x19:
        case 0x1A:
          v27 = *(_BYTE *)(v15 + 16);
          if ( v27 == 26 )
          {
            v28 = ((*(_BYTE *)(v15 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_28:
            v29 = 8 * ((v28 + 8 * (unsigned int)*(unsigned __int16 *)(v15 + 22)) >> 3) + 8;
            goto LABEL_29;
          }
          v29 = 16;
          if ( v27 != 25 )
          {
            v28 = 15;
            goto LABEL_28;
          }
LABEL_29:
          v30 = sub_1EA6140((char **)a1, v15, v29, 8);
          v31 = *(_BYTE *)(v30 + 16);
          v33 = v32;
          if ( v31 == 26 )
          {
            v34 = ((*(_BYTE *)(v30 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
          }
          else
          {
            v35 = 16;
            if ( v31 == 25 )
              goto LABEL_32;
            v34 = 15;
          }
          v35 = 8 * ((v34 + 8 * (unsigned int)*(unsigned __int16 *)(v30 + 22)) >> 3) + 8;
LABEL_32:
          memcpy(v33, v16, v35);
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x1F:
        case 0x20:
          sub_1EA6140((char **)a1, v15, 0x20u, 8);
          *v41 = _mm_loadu_si128(v16);
          v12 = (char *)ptr;
          v41[1] = _mm_loadu_si128(v16 + 1);
          goto LABEL_14;
        case 0x23:
          v58 = sub_1EA6140(
                  (char **)a1,
                  v15,
                  8 * ((4 * ((*(_BYTE *)(v15 + 19) >> 2) + 2 * ((*(_WORD *)(v15 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8,
                  8);
          LODWORD(v58) = (4 * ((*(_BYTE *)(v58 + 19) >> 2) + 2 * ((*(_WORD *)(v58 + 18) >> 3) & 0x7Fu)) + 23) >> 3;
          *v59 = v16->m128i_i64[0];
          v60 = (unsigned int)(8 * v58 + 8);
          *(_QWORD *)((char *)v59 + v60 - 8) = *(__int64 *)((char *)&v16->m128i_i64[-1] + v60);
          qmemcpy(
            (void *)((unsigned __int64)(v59 + 1) & 0xFFFFFFFFFFFFFFF8LL),
            (const void *)((char *)v16 - ((char *)v59 - ((unsigned __int64)(v59 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
            8LL * (((unsigned int)v59 - (((_DWORD)v59 + 8) & 0xFFFFFFF8) + (unsigned int)v60) >> 3));
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x25:
          v61 = 4;
          if ( (*(_BYTE *)(v15 + 32) & 0x3F) != 0 )
            v61 = 4 * ((4 * (*(_BYTE *)(v15 + 32) & 0x3Fu) + 11) >> 2) + 4;
          v62 = sub_1EA6140((char **)a1, v15, v61, 4);
          v64 = 4;
          v65 = *(_BYTE *)(v62 + 32) & 0x3F;
          if ( v65 )
            v64 = 4 * ((unsigned int)(4 * v65 + 11) >> 2) + 4;
          if ( v64 >= 8 )
          {
            *v63 = v16->m128i_i64[0];
            *(_QWORD *)((char *)v63 + v64 - 8) = *(__int64 *)((char *)&v16->m128i_i64[-1] + v64);
            qmemcpy(
              (void *)((unsigned __int64)(v63 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (const void *)((char *)v16 - ((char *)v63 - ((unsigned __int64)(v63 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
              8LL * ((v64 + (_DWORD)v63 - (((_DWORD)v63 + 8) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v64 & 4) != 0 )
          {
            *(_DWORD *)v63 = v16->m128i_i32[0];
            *(_DWORD *)((char *)v63 + v64 - 4) = *(__int32 *)((char *)&v16->m128i_i32[-1] + v64);
          }
          else if ( v64 )
          {
            *(_BYTE *)v63 = v16->m128i_i8[0];
            if ( (v64 & 2) != 0 )
              *(_WORD *)((char *)v63 + v64 - 2) = *(__int16 *)((char *)&v16->m128i_i16[-1] + v64);
          }
LABEL_13:
          v12 = (char *)ptr;
          goto LABEL_14;
        case 0x31:
          v42 = sub_1EA6140((char **)a1, v15, (unsigned int)(8 * *(_DWORD *)(v15 + 20) + 16), 8);
          v33 = v43;
          v35 = (unsigned int)(8 * *(_DWORD *)(v42 + 20) + 16);
          goto LABEL_32;
        default:
          goto LABEL_14;
      }
    }
LABEL_15:
    if ( v12 != v77 )
      free(v12);
  }
}
