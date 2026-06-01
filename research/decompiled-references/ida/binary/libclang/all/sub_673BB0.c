__int64 __fastcall sub_673BB0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7)
{
  __int64 *v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rax
  const __m128i *v15; // rbp
  _QWORD *v16; // r14
  __m128i v17; // xmm0
  __int64 v18; // rdx
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  _BOOL8 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  _QWORD *v31; // rax
  unsigned int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // r13
  unsigned int v35; // eax
  _QWORD **v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // rax
  const __m128i *v39; // rbp
  _QWORD *v40; // r14
  __m128i v41; // xmm0
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned int v44; // eax
  _BOOL8 v45; // rsi
  __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rbx
  unsigned int v52; // eax
  char v53; // dl
  int v54; // edx
  __int64 v55; // rax
  char *v56; // rbx
  unsigned int v57; // eax
  char v58; // al
  int v59; // edx
  __int64 v60; // r13
  unsigned int v61; // eax
  unsigned int v62; // eax
  int v63; // r13d
  __int64 v64; // rsi
  unsigned __int64 v65; // rbx
  unsigned int v66; // eax
  _BOOL8 v67; // rsi
  __int64 v68; // rcx
  unsigned __int64 v69; // rbx
  __int64 v70; // rbx
  unsigned __int16 v71; // ax
  unsigned __int64 v72; // rbx
  __int16 v73; // si
  _BOOL8 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rsi
  unsigned __int64 v78; // r13
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  __m128i v81; // [rsp+10h] [rbp-58h] BYREF
  __int64 v82; // [rsp+20h] [rbp-48h]
  __int64 v83; // [rsp+28h] [rbp-40h]

  while ( 1 )
  {
    if ( !a2 )
      goto LABEL_14;
    v7 = a1;
    v8 = a2;
    v9 = (_QWORD *)a3;
    v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = a2 & 7;
    if ( (a2 & 7) == 0 )
    {
      v12 = (a2 >> 3) & 1;
      if ( ((a2 >> 3) & 1) == 0 )
        break;
    }
LABEL_5:
    v13 = sub_B1AFD0(v10 & 0xFFFFFFFFFFFFFFF0LL);
    a2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    a3 = v13 * ((v9 != nullptr) + ((unsigned __int64)v9 - (v9 != nullptr)) / v13);
LABEL_6:
    a1 = v7;
  }
  switch ( *(_BYTE *)(v10 + 16) )
  {
    case 0:
    case 1:
    case 0xC:
      goto LABEL_30;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v26 = a3 + 16;
      v27 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
      if ( !(unsigned __int8)sub_673BB0(v7, *(_QWORD *)(a2 + 32), v27 * ((v26 != 0) + (v26 - (v26 != 0)) / v27)) )
        return (unsigned int)v12;
      v28 = v9[1];
      return sub_672CC0(v7, v28, a4, a5, a6, a7);
    case 7:
      v20 = a3 + 12;
      goto LABEL_17;
    case 8:
      v43 = a3 + 8;
      v44 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
      v45 = v43 != 0;
      v46 = v44;
      v47 = (v43 - v45) / v44;
      v25 = *(_QWORD *)(v8 + 40);
      a3 = v46 * (v45 + v47);
      goto LABEL_18;
    case 9:
      v20 = a3 + 1;
      goto LABEL_17;
    case 0xB:
    case 0x21:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
      v20 = a3 + 4;
      goto LABEL_17;
    case 0xE:
    case 0x38:
    case 0x39:
      goto LABEL_25;
    case 0xF:
    case 0x32:
      v28 = *(_QWORD *)(a2 + 24);
      return sub_672CC0(v7, v28, a4, a5, a6, a7);
    case 0x10:
      if ( !(unsigned __int8)sub_673340(v7, *(_QWORD *)(a2 + 24), a4, a5, a6, a7) )
        return (unsigned int)v12;
      if ( !*(_QWORD *)(a2 + 32) )
        goto LABEL_14;
      return sub_677500(v7, v9[1]);
    case 0x11:
      if ( !(unsigned __int8)sub_673A50(v7, *(_QWORD *)(a2 + 40), a4, a5, a6, a7) )
        return (unsigned int)v12;
      v30 = *(_QWORD *)(a2 + 24);
      return sub_673340(v7, v30, a4, a5, a6, a7);
    case 0x12:
      if ( !(unsigned __int8)sub_672CC0(v7, *(_QWORD *)(a2 + 32), a4, a5, a6, a7) )
        return (unsigned int)v12;
      goto LABEL_60;
    case 0x13:
      v28 = sub_B07330(a2);
      return sub_672CC0(v7, v28, a4, a5, a6, a7);
    case 0x14:
      return sub_674510(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
    case 0x15:
      v48 = *(_QWORD *)(a2 + 32);
      if ( v48 && !(unsigned __int8)sub_672CC0(v7, v48, a4, a5, a6, a7) )
        return (unsigned int)v12;
LABEL_60:
      v30 = *(_QWORD *)(v8 + 40);
      return sub_673340(v7, v30, a4, a5, a6, a7);
    case 0x16:
      if ( *(_QWORD *)(a3 + 8)
        && *(_QWORD *)(a2 + 32)
        && !(unsigned __int8)sub_674510(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8)) )
      {
        return (unsigned int)v12;
      }
      v14 = *(unsigned int *)(a2 + 20);
      if ( !(_DWORD)v14 )
        goto LABEL_14;
      v15 = (const __m128i *)(a2 + 48);
      v16 = &v9[v14];
      while ( 1 )
      {
        v17 = _mm_loadu_si128(v15);
        v18 = v15[1].m128i_i64[0];
        v83 = v9[4];
        v82 = v18;
        v81 = v17;
        if ( !(unsigned __int8)sub_674590(v7, &v81) )
          return (unsigned int)v12;
        ++v9;
        v15 = (const __m128i *)((char *)v15 + 24);
        if ( v9 == v16 )
          goto LABEL_14;
      }
    case 0x17:
      v29 = *(_QWORD *)(a2 + 40);
      if ( !v29 )
        goto LABEL_25;
      goto LABEL_24;
    case 0x18:
      v49 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
      {
        if ( !v49 )
          goto LABEL_112;
      }
      else if ( !v49 )
      {
        v50 = 2;
        goto LABEL_67;
      }
      if ( !(unsigned __int8)sub_674510(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8)) )
        return (unsigned int)v12;
      v50 = 2;
      if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
LABEL_112:
        v50 = 2LL * (*(_QWORD *)(a2 + 32) != 0);
LABEL_67:
      v51 = &v9[v50];
      v52 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
      a3 = v52 * ((v51 != nullptr) + ((unsigned __int64)v51 - (v51 != nullptr)) / v52);
      v25 = *(_QWORD *)(a2 + 40);
      goto LABEL_18;
    case 0x19:
      v53 = *(_BYTE *)(a2 + 16);
      if ( v53 == 26 )
      {
        v54 = 8 * ((*(_WORD *)(a2 + 22) & 0x3C0) != 0) + 15;
LABEL_70:
        v55 = 8 * ((v54 + ((*(_DWORD *)(a2 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
        goto LABEL_71;
      }
      v55 = 16;
      if ( v53 != 25 )
      {
        v54 = 15;
        goto LABEL_70;
      }
LABEL_71:
      v56 = (char *)v9 + v55;
      v57 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
      a3 = v57 * ((v56 != nullptr) + (unsigned __int64)&v56[-(v56 != nullptr)] / v57);
      v25 = *(_QWORD *)(a2 + 24);
LABEL_18:
      a2 = v25;
      goto LABEL_6;
    case 0x1A:
      v58 = *(_BYTE *)(a2 + 16);
      if ( v58 == 26 )
      {
        v59 = 8 * ((*(_WORD *)(a2 + 22) & 0x3C0) != 0) + 15;
LABEL_74:
        v60 = 8 * ((v59 + ((*(_DWORD *)(a2 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
        goto LABEL_75;
      }
      v60 = 16;
      if ( v58 != 25 )
      {
        v59 = 15;
        goto LABEL_74;
      }
LABEL_75:
      v61 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
      if ( !(unsigned __int8)sub_673BB0(
                               v7,
                               *(_QWORD *)(a2 + 24),
                               v61
                             * (((_QWORD *)((char *)v9 + v60) != nullptr)
                              + ((unsigned __int64)v9 + v60 - ((_QWORD *)((char *)v9 + v60) != nullptr)) / v61)) )
        return (unsigned int)v12;
      v62 = *(_DWORD *)(a2 + 20);
      if ( *(_BYTE *)(a2 + 16) != 25 )
      {
        v63 = (unsigned __int16)(v62 >> 6);
        if ( (unsigned __int16)(v62 >> 6) )
        {
          do
          {
            v64 = v9[v11 + 2];
            if ( v64 )
            {
              if ( !(unsigned __int8)sub_66D270(v7, v64, a4, a5, a6, a7) )
                return (unsigned int)v12;
            }
            else if ( (unsigned int)v11 < (unsigned __int16)(*(_DWORD *)(v8 + 20) >> 6)
                   && !(unsigned __int8)sub_673340(v7, *(_QWORD *)(v8 + 8 * v11 + 48), a4, a5, a6, a7) )
            {
              return (unsigned int)v12;
            }
            ++v11;
          }
          while ( v63 != (_DWORD)v11 );
          v62 = *(_DWORD *)(v8 + 20);
        }
      }
      v70 = v8 + 4LL * ((*(_BYTE *)(v8 + 23) & 0x10) != 0) + 8LL * (unsigned __int16)(v62 >> 6) + 48 + 7;
      v71 = *(_WORD *)(v8 + 22);
      v72 = v70 & 0xFFFFFFFFFFFFFFF8LL;
      v73 = (v71 >> 6) & 0xF;
      if ( (*(_BYTE *)(v8 + 23) & 8) != 0 )
      {
        v74 = (*(_BYTE *)(v72 + 1) & 4) != 0;
        v75 = v74 + 1;
        if ( (_BYTE)v73 == 2 )
          v75 += *(_WORD *)v72 & 0x3FF;
        v76 = 8 * v75;
        v77 = 8 * v74 + 8;
        v78 = v72 + v76;
        v72 += v77;
        if ( v77 != v76 )
        {
LABEL_98:
          while ( (unsigned __int8)sub_673340(v7, *(_QWORD *)v72, a4, a5, a6, a7) )
          {
            v72 += 8LL;
            if ( v78 == v72 )
            {
              v71 = *(_WORD *)(v8 + 22);
              goto LABEL_101;
            }
          }
          return (unsigned int)v12;
        }
      }
      else if ( (_BYTE)v73 == 2 )
      {
        v80 = 8LL * (*(_WORD *)v72 & 0x3FF);
        v78 = v72 + v80;
        if ( v80 )
          goto LABEL_98;
        goto LABEL_14;
      }
LABEL_101:
      if ( ((v71 >> 6) & 0xFu) - 6 > 2 )
        goto LABEL_14;
      v79 = (v8
           + 4LL * ((*(_BYTE *)(v8 + 23) & 0x10) != 0)
           + 8LL * (unsigned __int16)(*(_DWORD *)(v8 + 20) >> 6)
           + 48
           + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v8 + 23) & 8) != 0 )
        LOBYTE(v12) = (*(_BYTE *)(v79 + 1) & 4) != 0;
      v28 = *(_QWORD *)(v79 + 8 * (((*(_BYTE *)(v8 + 23) & 8) != 0) + (unsigned __int64)(unsigned __int8)v12));
      if ( !v28 )
      {
LABEL_14:
        LODWORD(v12) = 1;
        return (unsigned int)v12;
      }
      return sub_672CC0(v7, v28, a4, a5, a6, a7);
    case 0x1B:
      v20 = a3 + 16;
      goto LABEL_17;
    case 0x1D:
      v65 = a3 + 4;
      v66 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
      v67 = v65 != 0;
      v68 = v66;
      v69 = (v65 - v67) / v66;
      v25 = *(_QWORD *)(v8 + 24);
      a3 = v68 * (v67 + v69);
      goto LABEL_18;
    case 0x1E:
    case 0x1F:
      if ( !(unsigned __int8)sub_672CC0(v7, *(_QWORD *)(a3 + 16), a4, a5, a6, a7) )
        return (unsigned int)v12;
      v29 = v9[3];
LABEL_24:
      if ( !(unsigned __int8)sub_672CC0(v7, v29, a4, a5, a6, a7) )
        return (unsigned int)v12;
LABEL_25:
      v30 = *(_QWORD *)(v8 + 32);
      return sub_673340(v7, v30, a4, a5, a6, a7);
    case 0x20:
      v31 = *(_QWORD **)(a3 + 8);
      if ( v31 )
      {
        if ( !(unsigned __int8)sub_673BB0(v7, *v31, v31 + 1) )
          return (unsigned int)v12;
      }
      else if ( !(unsigned __int8)sub_673340(v7, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL, a4, a5, a6, a7) )
      {
        return (unsigned int)v12;
      }
      v9 += 2;
LABEL_30:
      v32 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
      a3 = v32 * ((v9 != nullptr) + ((unsigned __int64)v9 - (v9 != nullptr)) / v32);
      v25 = *(_QWORD *)(a2 + 32);
      goto LABEL_18;
    case 0x22:
      if ( a2 != *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF0LL) )
      {
        v34 = 8 * ((4 * ((*(_BYTE *)(a2 + 19) >> 2) + 2 * ((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
        v35 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
        if ( !(unsigned __int8)sub_673BB0(
                                 v7,
                                 *(_QWORD *)(a2 + 24),
                                 v35
                               * (((_QWORD *)((char *)v9 + v34) != nullptr)
                                + ((unsigned __int64)v9 + v34 - ((_QWORD *)((char *)v9 + v34) != nullptr)) / v35)) )
          return (unsigned int)v12;
      }
      if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) == 0 )
        goto LABEL_14;
      v36 = (_QWORD **)(v9 + 3);
      v37 = (__int64)&v9[((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu) + 3];
      while ( (unsigned __int8)sub_673BB0(v7, **v36, *v36 + 1) )
      {
        if ( ++v36 == (_QWORD **)v37 )
          goto LABEL_14;
      }
      return (unsigned int)v12;
    case 0x26:
      if ( !(unsigned __int8)sub_673340(v7, *(_QWORD *)(a2 + 40), a4, a5, a6, a7) )
        return (unsigned int)v12;
      v28 = *(_QWORD *)(a2 + 48);
      return sub_672CC0(v7, v28, a4, a5, a6, a7);
    case 0x27:
      v20 = a3 + 8;
LABEL_17:
      v21 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
      v22 = v20 != 0;
      v23 = v21;
      v24 = (v20 - v22) / v21;
      v25 = *(_QWORD *)(v8 + 32);
      a3 = v23 * (v22 + v24);
      goto LABEL_18;
    case 0x2C:
      sub_B150D0(&v81, a2);
      LODWORD(v12) = sub_673AC0(v7, (__int64)&v81, a4, a5, a6, a7);
      return (unsigned int)v12;
    case 0x2D:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v30 = *(_QWORD *)(a2 + 48);
      else
        v30 = *(_QWORD *)(a2 + 8);
      return sub_673340(v7, v30, a4, a5, a6, a7);
    case 0x30:
      if ( !(unsigned __int8)sub_673A50(v7, *(_QWORD *)(a2 + 32), a4, a5, a6, a7) )
        return (unsigned int)v12;
      v38 = *(unsigned int *)(a2 + 20);
      if ( !(_DWORD)v38 )
        goto LABEL_14;
      v39 = (const __m128i *)(a2 + 48);
      v40 = &v9[v38];
      while ( 1 )
      {
        v41 = _mm_loadu_si128(v39);
        v42 = v39[1].m128i_i64[0];
        v83 = v9[2];
        v82 = v42;
        v81 = v41;
        if ( !(unsigned __int8)sub_674590(v7, &v81) )
          return (unsigned int)v12;
        ++v9;
        v39 = (const __m128i *)((char *)v39 + 24);
        if ( v9 == v40 )
          goto LABEL_14;
      }
    case 0x33:
    case 0x35:
      v33 = *(__int64 **)(a3 + 16);
      v25 = *v33;
      a3 = (unsigned __int64)(v33 + 1);
      goto LABEL_18;
    case 0x3A:
      goto LABEL_5;
    default:
      goto LABEL_14;
  }
}

