__int64 __fastcall sub_184B950(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        __m128 a7,
        _DWORD *a8,
        int a9)
{
  int v12; // ebp
  int v13; // ebx
  unsigned __int16 v14; // ax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  __int64 *v22; // rax
  __int64 *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned int *v29; // rax
  __int64 *v30; // rbp
  __int64 v31; // r10
  __int64 *v32; // r15
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 *v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 *v40; // rsi
  unsigned int v41; // ecx
  __int64 v42; // rsi
  __int64 *v43; // rax
  __int64 *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 *v47; // rax
  __int64 *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 *v53; // rdx
  unsigned __int64 v54; // rax
  __m128i v55; // rax
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  bool v63; // si
  _QWORD *v64; // [rsp+0h] [rbp-138h]
  __int64 v66; // [rsp+8h] [rbp-130h]
  __int64 v68; // [rsp+8h] [rbp-130h]
  __int64 v69; // [rsp+8h] [rbp-130h]
  __int64 v70; // [rsp+8h] [rbp-130h]
  __int64 v71; // [rsp+28h] [rbp-110h]
  bool v72; // [rsp+3Fh] [rbp-F9h] BYREF
  __int64 v73; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+48h] [rbp-F0h] BYREF
  __m128i si128; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+60h] [rbp-D8h]
  __m128 v77; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-B8h]
  __int64 *v79; // [rsp+88h] [rbp-B0h]
  __int64 v80; // [rsp+90h] [rbp-A8h]

  v12 = (int)a6;
  v13 = (int)a5;
  v14 = *(_WORD *)a3 & 0x1FF;
  if ( v14 > 0xF4u )
  {
    if ( v14 == 252 )
      goto LABEL_108;
    if ( v14 > 0xFCu )
    {
      if ( v14 == 254 )
      {
LABEL_91:
        v42 = (unsigned int)*a5;
        if ( !(_DWORD)v42 )
          *a5 = sub_EEB7E0(a3, v42, *(double *)a7.m128_u64);
        sub_EE9E50(&v77, a3);
        v43 = (__int64 *)v77.m128_u64[0];
        si128 = _mm_load_si128((const __m128i *)&v77);
        v44 = v79;
        v45 = si128.m128i_i64[1];
        v69 = v80;
        v76 = v78;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v44 == v43 )
            {
LABEL_101:
              if ( v69 == v45 )
                return 1;
            }
LABEL_95:
            if ( (v45 & 3) != 0 )
            {
              v46 = *(_QWORD *)sub_EF2B30((__int64)&si128);
              if ( !v46 )
                goto LABEL_98;
            }
            else
            {
              v46 = *v43;
              if ( !*v43 )
                goto LABEL_104;
            }
            v26 = sub_184B950(a1, a2, v46, a4, v13, v12, (__int64)a8, a9);
            if ( !(_BYTE)v26 )
              return v26;
LABEL_98:
            v45 = si128.m128i_i64[1];
            if ( (si128.m128i_i8[8] & 3) != 0 )
              break;
            v43 = (__int64 *)si128.m128i_i64[0];
LABEL_104:
            si128.m128i_i64[0] = (__int64)++v43;
          }
          if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            sub_EF2960((__int64)&si128);
            v45 = si128.m128i_i64[1];
            v43 = (__int64 *)si128.m128i_i64[0];
            if ( v44 == (__int64 *)si128.m128i_i64[0] )
              goto LABEL_101;
            goto LABEL_95;
          }
          sub_EF2750((unsigned __int64 *)&si128, 1);
          v45 = si128.m128i_i64[1];
          v43 = (__int64 *)si128.m128i_i64[0];
        }
      }
      if ( v14 < 0xFEu )
      {
        v16 = *(_QWORD *)(a3 + 24);
        return (unsigned int)sub_184B950(a1, a2, v16, a4, v13, v12, (__int64)a8, a9);
      }
      if ( v14 > 0x100u )
        goto LABEL_69;
      goto LABEL_56;
    }
    if ( v14 == 248 )
      goto LABEL_108;
    if ( v14 > 0xF8u )
    {
      if ( v14 == 249 )
      {
        v18 = (unsigned int)*a5;
        if ( !(_DWORD)v18 )
          *a5 = sub_EEB7E0(a3, v18, *(double *)a7.m128_u64);
        v19 = a3 + 8LL * *(unsigned int *)(a3 + 4) + 16;
        v20 = (_QWORD *)(a3 + 16);
        v64 = (_QWORD *)v19;
        if ( v20 == (_QWORD *)v19 )
          return 1;
        v21 = v20;
        while ( (unsigned __int8)sub_184B950(a1, a2, *v21, a4, v13, v12, (__int64)a8, a9) )
        {
          if ( v64 == ++v21 )
            return 1;
        }
        return 0;
      }
      if ( v14 != 251 )
        goto LABEL_69;
LABEL_56:
      if ( !*a6 )
        *a6 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
      sub_EE9E50(&v77, a3);
      v76 = v78;
      v34 = (__int64 *)v77.m128_u64[0];
      v68 = v80;
      v35 = v79;
      si128 = _mm_load_si128((const __m128i *)&v77);
      v36 = si128.m128i_i64[1];
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v35 == v34 )
          {
LABEL_66:
            if ( v68 == v36 )
              return 1;
          }
LABEL_60:
          if ( (v36 & 3) != 0 )
          {
            v37 = *(_QWORD *)sub_EF2B30((__int64)&si128);
            if ( !v37 )
              goto LABEL_63;
          }
          else
          {
            v37 = *v34;
            if ( !*v34 )
              goto LABEL_83;
          }
          v26 = sub_184B950(a1, a2, v37, a4, v13, v12, (__int64)a8, a9);
          if ( !(_BYTE)v26 )
            return v26;
LABEL_63:
          v36 = si128.m128i_i64[1];
          if ( (si128.m128i_i8[8] & 3) != 0 )
            break;
          v34 = (__int64 *)si128.m128i_i64[0];
LABEL_83:
          si128.m128i_i64[0] = (__int64)++v34;
        }
        if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          sub_EF2960((__int64)&si128);
          v36 = si128.m128i_i64[1];
          v34 = (__int64 *)si128.m128i_i64[0];
          if ( v35 == (__int64 *)si128.m128i_i64[0] )
            goto LABEL_66;
          goto LABEL_60;
        }
        sub_EF2750((unsigned __int64 *)&si128, 1);
        v36 = si128.m128i_i64[1];
        v34 = (__int64 *)si128.m128i_i64[0];
      }
    }
    if ( v14 != 245 )
      goto LABEL_69;
    v28 = *(_QWORD *)(a3 + 8);
    if ( (v28 & 1) != 0 )
    {
      v29 = (unsigned int *)(v28 & 0xFFFFFFFFFFFFFFFELL);
      v30 = (__int64 *)(v29 + 2);
      v31 = (__int64)&v29[2 * *v29 + 2];
    }
    else
    {
      v31 = a3 + 16;
      v30 = (__int64 *)(a3 + 8);
      if ( !v28 )
        return 1;
    }
    if ( v30 == (__int64 *)v31 )
      return 1;
    v32 = (__int64 *)v31;
    while ( 1 )
    {
      v33 = *v30;
      switch ( (*(_BYTE *)(*v30 + 28) + 119) & 0x7F )
      {
        case 0:
        case 0x13:
        case 0x17:
        case 0x18:
        case 0x22:
        case 0x2C:
        case 0x2F:
        case 0x36:
        case 0x47:
        case 0x48:
          goto LABEL_78;
        case 0x19:
        case 0x44:
          if ( !*a5 )
            *a5 = *(_DWORD *)(a3 + 16);
          goto LABEL_78;
        case 0x1F:
        case 0x25:
          v38 = sub_B8C330(*v30);
          if ( !(unsigned int)sub_B74100(v33, v38) )
            goto LABEL_75;
          if ( (*(_BYTE *)(v33 + 96) & 7) != 2
            && ((*(_BYTE *)(v33 + 96) & 7) != 0 || ((*(_BYTE *)(v33 + 96) >> 3) & 3) != 2)
            || sub_A5EB90(v33) )
          {
            goto LABEL_150;
          }
          if ( a9 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) == 0 )
              return 0;
            v62 = *(unsigned int *)(v33 + 24);
            v63 = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
LABEL_163:
            v77.m128_i8[0] = v63;
            sub_1837780(a1, a9, v62, *(_QWORD *)(v33 + 48), 6751, (__int64)&v77);
            goto LABEL_152;
          }
          sub_168BB30((__int64)&v77, (__int64 *)(a1 + 8), *(_DWORD *)(v33 + 24), 0x14u, 0);
          si128.m128i_i8[0] = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          v71 = sub_1588420((__int64)&v77, (unsigned __int8 *)&si128);
          LOBYTE(v74) = (unsigned int)sub_B73370(v33) == 2;
          sub_1588420(v71, (unsigned __int8 *)&v74);
          sub_15F7200(&v77);
LABEL_150:
          v62 = *(unsigned int *)(v33 + 24);
          v63 = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0 )
            goto LABEL_163;
          v77.m128_i8[0] = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          if ( (unsigned __int8)sub_1837780(a1, a9, v62, *(_QWORD *)(v33 + 48), 3480, (__int64)&v77) )
            return 0;
LABEL_152:
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
            || sub_B735C0(v33)
            || (*(_BYTE *)(v33 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(v33 + 97) & 8) != 0 )
          {
LABEL_75:
            if ( a9 )
            {
LABEL_123:
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 )
                return 0;
              goto LABEL_78;
            }
            v39 = *(_DWORD *)(v33 + 24);
            v40 = (__int64 *)(a1 + 8);
            v41 = 7;
          }
          else
          {
            if ( a9 )
            {
              if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
                return 0;
              goto LABEL_78;
            }
            v39 = *(_DWORD *)(v33 + 24);
            v40 = (__int64 *)(a1 + 8);
            v41 = 13;
          }
LABEL_77:
          sub_168BB30((__int64)&v77, v40, v39, v41, 0);
          si128.m128i_i8[0] = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          sub_1588420((__int64)&v77, (unsigned __int8 *)&si128);
          sub_15F7200(&v77);
LABEL_78:
          if ( v32 == ++v30 )
            return 1;
          break;
        case 0x32:
        case 0x35:
          if ( (*(_BYTE *)(v33 + 74) & 1) == 0 )
            goto LABEL_78;
          if ( a9 )
            goto LABEL_123;
          v40 = (__int64 *)(a1 + 8);
          v41 = 6;
          v39 = *(_DWORD *)(a3 + 16);
          goto LABEL_77;
        case 0x37:
        case 0x38:
          v51 = *(_QWORD *)(v33 + 80);
          v52 = v51 >> 2;
          v53 = (unsigned __int64 *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v51 & 4) != 0 )
            v54 = v53[1];
          else
            v54 = *v53;
          if ( (*(_BYTE *)(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) == 0 )
            goto LABEL_78;
          if ( a9 )
            return 0;
          if ( (v52 & 1) != 0 )
            v53 = (unsigned __int64 *)*v53;
          v55.m128i_i64[0] = *v53;
          v55.m128i_i64[1] = (__int64)(v53 + 1);
          si128 = v55;
          v56 = sub_F6CCB0(si128.m128i_i64, a7);
          sub_168B9F0((__int64)&v77, (__int64 *)(a1 + 8), v56, 0xDA5u, 0);
          v74 = sub_183A8D0(si128.m128i_i64, a7);
          v57 = sub_1587DB0((__int64)&v77, &v74);
          v73 = si128.m128i_i64[0];
          v58 = sub_162B6D0(v57, &v73);
          v72 = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          sub_1588420(v58, (unsigned __int8 *)&v72);
          sub_15F7200(&v77);
          return 0;
        default:
          if ( a9 )
            return 0;
          sub_168B9F0((__int64)&v77, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 16), 0xD93u, 0);
          si128.m128i_i8[0] = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
          v61 = sub_1588420((__int64)&v77, (unsigned __int8 *)&si128);
          LOBYTE(v74) = (*(_BYTE *)(a2 + 84) & 3) == 2;
          sub_1588420(v61, (unsigned __int8 *)&v74);
          sub_15F7200(&v77);
          return 0;
      }
    }
  }
  if ( v14 >= 0xF3u )
  {
LABEL_108:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) == 0 )
    {
LABEL_70:
      if ( !a9 )
      {
        v59 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&v77, (__int64 *)(a1 + 8), v59, 0xD93u, 0);
        LOBYTE(v74) = (*(_BYTE *)(a2 + 28) & 0x7F) == 38;
        v60 = sub_1588420((__int64)&v77, (unsigned __int8 *)&v74);
        si128.m128i_i8[0] = (*(_BYTE *)(a2 + 84) & 3) == 2;
        sub_1588420(v60, (unsigned __int8 *)&si128);
        sub_15F7200(&v77);
        return 0;
      }
      return 0;
    }
    if ( !*a5 )
      *a5 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
    sub_EE9E50(&v77, a3);
    v47 = (__int64 *)v77.m128_u64[0];
    si128 = _mm_load_si128((const __m128i *)&v77);
    v48 = v79;
    v49 = si128.m128i_i64[1];
    v70 = v80;
    v76 = v78;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v48 == v47 )
        {
LABEL_119:
          if ( v70 == v49 )
            return 1;
        }
LABEL_113:
        if ( (v49 & 3) != 0 )
        {
          v50 = *(_QWORD *)sub_EF2B30((__int64)&si128);
          if ( !v50 )
            goto LABEL_116;
        }
        else
        {
          v50 = *v47;
          if ( !*v47 )
            goto LABEL_142;
        }
        v26 = sub_184B950(a1, a2, v50, a4, v13, v12, (__int64)a8, a9);
        if ( !(_BYTE)v26 )
          return v26;
LABEL_116:
        v49 = si128.m128i_i64[1];
        if ( (si128.m128i_i8[8] & 3) != 0 )
          break;
        v47 = (__int64 *)si128.m128i_i64[0];
LABEL_142:
        si128.m128i_i64[0] = (__int64)++v47;
      }
      if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        sub_EF2960((__int64)&si128);
        v49 = si128.m128i_i64[1];
        v47 = (__int64 *)si128.m128i_i64[0];
        if ( v48 == (__int64 *)si128.m128i_i64[0] )
          goto LABEL_119;
        goto LABEL_113;
      }
      sub_EF2750((unsigned __int64 *)&si128, 1);
      v49 = si128.m128i_i64[1];
      v47 = (__int64 *)si128.m128i_i64[0];
    }
  }
  if ( v14 <= 0x85u )
  {
    if ( v14 < 0x83u )
    {
      if ( v14 == 2 )
      {
LABEL_27:
        if ( !*a8 )
          *a8 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
        sub_EE9E50(&v77, a3);
        v22 = (__int64 *)v77.m128_u64[0];
        si128 = _mm_load_si128((const __m128i *)&v77);
        v23 = v79;
        v24 = si128.m128i_i64[1];
        v66 = v80;
        v76 = v78;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v23 == v22 )
            {
LABEL_37:
              if ( v66 == v24 )
                return 1;
            }
LABEL_31:
            if ( (v24 & 3) != 0 )
            {
              v25 = *(_QWORD *)sub_EF2B30((__int64)&si128);
              if ( !v25 )
                goto LABEL_34;
            }
            else
            {
              v25 = *v22;
              if ( !*v22 )
                goto LABEL_81;
            }
            v26 = sub_184B950(a1, a2, v25, a4, v13, v12, (__int64)a8, a9);
            if ( !(_BYTE)v26 )
              return v26;
LABEL_34:
            v24 = si128.m128i_i64[1];
            if ( (si128.m128i_i8[8] & 3) != 0 )
              break;
            v22 = (__int64 *)si128.m128i_i64[0];
LABEL_81:
            si128.m128i_i64[0] = (__int64)++v22;
          }
          if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            sub_EF2960((__int64)&si128);
            v24 = si128.m128i_i64[1];
            v22 = (__int64 *)si128.m128i_i64[0];
            if ( v23 == (__int64 *)si128.m128i_i64[0] )
              goto LABEL_37;
            goto LABEL_31;
          }
          sub_EF2750((unsigned __int64 *)&si128, 1);
          v24 = si128.m128i_i64[1];
          v22 = (__int64 *)si128.m128i_i64[0];
        }
      }
      if ( v14 == 130 )
      {
        v16 = *(_QWORD *)(a3 + 8);
        return (unsigned int)sub_184B950(a1, a2, v16, a4, v13, v12, (__int64)a8, a9);
      }
      if ( v14 != 1 )
        goto LABEL_69;
      goto LABEL_108;
    }
    goto LABEL_91;
  }
  v15 = 1;
  if ( v14 != 238 )
  {
    if ( v14 <= 0xEEu )
    {
      if ( v14 == 139 )
      {
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x26 )
        {
          v27 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
          sub_14C6D60(a4, v27);
          return 1;
        }
        goto LABEL_135;
      }
    }
    else
    {
      if ( v14 == 241 )
      {
        if ( !*a5 )
          *a5 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
        if ( (unsigned __int8)sub_184B950(
                                a1,
                                a2,
                                *(_QWORD *)(a3
                                          + 8LL
                                          * (((*(_QWORD *)a3 & 0x2000) != 0)
                                           + (unsigned int)((*(_QWORD *)a3 & 0x4000) != 0)
                                           + 1)
                                          + 16),
                                a4,
                                v13,
                                v12,
                                (__int64)a8,
                                a9) )
        {
          if ( (*(_QWORD *)a3 & 0x1000LL) != 0 )
          {
            v16 = *(_QWORD *)(a3
                            + 8LL
                            * (((*(_QWORD *)a3 & 0x4000) != 0) + (unsigned int)((*(_QWORD *)a3 & 0x2000) != 0) + 2)
                            + 16);
            if ( v16 )
              return (unsigned int)sub_184B950(a1, a2, v16, a4, v13, v12, (__int64)a8, a9);
          }
          return 1;
        }
        return 0;
      }
      if ( v14 == 242 )
        goto LABEL_27;
    }
LABEL_69:
    if ( ((v14 + 509) & 0x1FFu) > 0x7E )
      goto LABEL_70;
LABEL_135:
    if ( !*a5 )
      *a5 = sub_EEB7E0(a3, a2, *(double *)a7.m128_u64);
    return 1;
  }
  return v15;
}
