__int64 __fastcall sub_37050(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // cl
  int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rbp
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  __int64 *v20; // rax
  int v21; // r9d
  const char *v22; // rsi
  int v23; // r8d
  __int64 v24; // r12
  int v25; // ebp
  __int64 *v26; // rax
  int v27; // r8d
  int v28; // r9d
  const char *v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // r14
  int v32; // r13d
  int v33; // eax
  __int64 v34; // rax
  char v35; // bp
  unsigned __int64 v36; // r14
  int v37; // eax
  unsigned __int64 v38; // r12
  unsigned int v39; // ebp
  __int64 v40; // r15
  bool v41; // cc
  _DWORD *v42; // rsi
  _QWORD *v43; // rbp
  _DWORD *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r12
  __int64 v47; // rbp
  _QWORD *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rdi
  char v51; // al
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rbp
  _QWORD *v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rbp
  _QWORD *v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r12
  __int64 v66; // rbp
  _QWORD *v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rdi
  int v70; // r13d
  __int64 *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // [rsp+10h] [rbp-78h] BYREF
  __int128 v75; // [rsp+18h] [rbp-70h]
  __int128 v76; // [rsp+28h] [rbp-60h]
  __int64 v77; // [rsp+38h] [rbp-50h]
  int v78; // [rsp+40h] [rbp-48h]
  unsigned __int64 v79; // [rsp+48h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned __int8)result > 2u )
    return result;
  v2 = *(_BYTE *)(a1 + 144);
  switch ( v2 )
  {
    case 2u:
      v17 = *(unsigned int *)(a1 + 136);
      if ( v17 == getinf(60) )
      {
        v74 = 0;
        sub_348C0(a1, &v74);
        v74 = 0x9DC47843DF5B889ALL;
        sub_349E0(a1, &v74);
        create_tinfo(a1 + 8, 8, 7, 0);
        return 3;
      }
      v15 = *(_DWORD *)(a1 + 136);
      if ( v15 == 4 )
      {
        v74 = 0x1F7827E7195B7CF5LL;
        sub_349E0(a1, &v74);
        create_tinfo(a1 + 8, 56, 7, 0);
        return 3;
      }
      if ( v15 <= 4 )
      {
        if ( v15 != 1 )
        {
          v18 = 0x15C64900EBEF5BDELL;
          if ( v15 == 2 )
          {
LABEL_36:
            v74 = v18;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 40, 7, 0);
            return 3;
          }
          goto LABEL_122;
        }
        v74 = 0x9B0BE78D85EA6C5LL;
        sub_349E0(a1, &v74);
        create_tinfo(a1 + 8, 24, 7, 0);
        return 3;
      }
      v18 = 0xC52CAC00C62062B0LL;
      if ( v15 == 8 )
        goto LABEL_36;
LABEL_122:
      if ( (debug & 0x400000) != 0 )
      {
        v70 = *(unsigned __int8 *)(a1 + 144);
        v19 = *(_QWORD *)(a1 + 152);
        v71 = sub_34340(a1);
        v22 = src;
        if ( v71[1] )
          v22 = (const char *)*v71;
        v23 = v70;
LABEL_41:
        sub_88B80(
          (unsigned int)"Warning basic type DIE %s unimplemented size %u for encoding %s (0x%x)\n",
          (_DWORD)v22,
          v15,
          v19,
          v23,
          v21);
      }
      return 5;
    case 3u:
      v15 = *(_DWORD *)(a1 + 136);
      v16 = v15 >> 1;
      if ( v15 > 0x21 )
      {
LABEL_37:
        if ( (debug & 0x400000) == 0 )
          return 5;
        v19 = *(_QWORD *)(a1 + 152);
        v20 = sub_34340(a1);
        v22 = src;
        if ( v20[1] )
          v22 = (const char *)*v20;
        v23 = 3;
        goto LABEL_41;
      }
      switch ( v16 )
      {
        case 0u:
        case 1u:
        case 3u:
        case 5u:
        case 6u:
        case 7u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
          goto LABEL_37;
        case 2u:
          v35 = 48;
          v74 = 0xD24236F6B3545A19LL;
          sub_349E0(a1, &v74);
          break;
        case 4u:
          v35 = 0;
          v74 = 0x2710C72CDC967BC7LL;
          sub_349E0(a1, &v74);
          break;
        case 8u:
          v35 = 16;
          v74 = 0x7F3B482732B4115DLL;
          sub_349E0(a1, &v74);
          break;
        case 0xCu:
        case 0x10u:
          v35 = 32;
          v74 = 0x3183B688AC2C4DEELL;
          sub_349E0(a1, &v74);
          break;
      }
      v74 = 0;
      v36 = 8 * v16;
      v77 = 0;
      v78 = 1;
      v75 = 0;
      v76 = 0;
      v37 = 8 * (unsigned __int8)getinf(66);
      v38 = v37;
      if ( v37 >= v36 || !v37 )
        v38 = v36;
      sub_33330(&v74, 2u);
      v39 = (unsigned __int8)v35 | 9;
      create_tinfo(v74 + 64, v39, 7, 0);
      *(_QWORD *)v74 = 0;
      v40 = v74;
      v41 = *(_QWORD *)(v74 + 32) <= 4u;
      v42 = *(_DWORD **)(v74 + 16);
      *(_QWORD *)(v74 + 8) = v38;
      if ( v41 )
      {
        v73 = qvector_reserve(v40 + 16, v42, 5, 1);
        *(_QWORD *)(v40 + 16) = v73;
        v42 = (_DWORD *)v73;
      }
      *(_QWORD *)(v40 + 24) = 5;
      *v42 = 1818322290;
      *(_BYTE *)(*(_QWORD *)(v40 + 16) + 4LL) = 0;
      create_tinfo(v74 + 208, v39, 7, 0);
      v43 = (_QWORD *)v74;
      v41 = *(_QWORD *)(v74 + 176) <= 4u;
      *(_QWORD *)(v74 + 144) = v36;
      v43[19] = v38;
      v44 = (_DWORD *)v43[20];
      if ( v41 )
      {
        v72 = qvector_reserve(v43 + 20, v44, 5, 1);
        v43[20] = v72;
        v44 = (_DWORD *)v72;
      }
      v43[21] = 5;
      *v44 = 1734438249;
      *(_BYTE *)(v43[20] + 4LL) = 0;
      *(_QWORD *)&v76 = *(unsigned int *)(a1 + 136);
      if ( (unsigned __int8)create_tinfo(a1 + 8, 13, 13, &v74) )
      {
        set_tinfo_property(a1 + 8, 2, 4);
        v45 = v74;
        if ( v74 )
        {
          v46 = v75;
          if ( (_QWORD)v75 )
          {
            v47 = 0;
            do
            {
              v48 = (_QWORD *)(v45 + 144 * v47);
              clear_tinfo_t(v48 + 8);
              v49 = v48[5];
              if ( v49 )
              {
                v48[6] = 0;
                qfree(v49);
              }
              v50 = v48[2];
              if ( v50 )
              {
                v48[3] = 0;
                qfree(v50);
              }
              ++v47;
              v45 = v74;
            }
            while ( v46 != v47 );
          }
          *(_QWORD *)&v75 = 0;
          qfree(v45);
        }
        return 3;
      }
      v64 = v74;
      if ( v74 )
      {
        v65 = v75;
        v66 = 0;
        if ( (_QWORD)v75 )
        {
          do
          {
            v67 = (_QWORD *)(144 * v66 + v64);
            clear_tinfo_t(v67 + 8);
            v68 = v67[5];
            if ( v68 )
            {
              v67[6] = 0;
              qfree(v68);
            }
            v69 = v67[2];
            if ( v69 )
            {
              v67[3] = 0;
              qfree(v69);
            }
            ++v66;
            v64 = v74;
          }
          while ( v65 != v66 );
        }
        *(_QWORD *)&v75 = 0;
        qfree(v64);
      }
      return 5;
    case 4u:
      v15 = *(_DWORD *)(a1 + 136);
      switch ( v15 )
      {
        case 2u:
          v74 = 0xA52D295098D2884CLL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 57, 7, 0);
          return 3;
        case 4u:
          v74 = 0xBE988BD496A502F6LL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 9, 7, 0);
          return 3;
        case 8u:
          v74 = 0x30DF4E9A929BD579LL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 25, 7, 0);
          return 3;
        case 0xAu:
        case 0xCu:
        case 0x10u:
          v31 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL);
          v32 = *(_DWORD *)(*(_QWORD *)(v31 + 128) + 2792LL);
          if ( !v32 )
            goto LABEL_58;
          if ( *(_QWORD *)(a1 + 48) )
          {
            v33 = strcmp(*(const char **)(a1 + 40), "long double");
            if ( v32 == 1 && !v33 )
            {
              v32 = 2;
LABEL_58:
              setinf(66, v15);
              *(_DWORD *)(*(_QWORD *)(v31 + 128) + 2792LL) = v32;
              v15 = *(_DWORD *)(a1 + 136);
            }
          }
          v34 = 0x73E28A9E7DA7DC90LL;
          if ( v15 != 10 )
          {
            v34 = 0x1C396B6108ED8B36LL;
            if ( v15 == 12 )
              v34 = 0x40202364C06BA0BDLL;
          }
          v74 = v34;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 41, 7, 0);
          break;
        default:
          if ( (debug & 0x400000) == 0 )
            return 5;
          v19 = *(_QWORD *)(a1 + 152);
          v30 = sub_34340(a1);
          v22 = src;
          if ( v30[1] )
            v22 = (const char *)*v30;
          v23 = 4;
          goto LABEL_41;
      }
      return 3;
    case 5u:
      v14 = *(unsigned int *)(a1 + 136);
      if ( v14 == getinf(59) )
      {
LABEL_46:
        v74 = 0xA83392F22AF7AED3LL;
        sub_349E0(a1, &v74);
        create_tinfo(a1 + 8, 7, 7, 0);
      }
      else
      {
        switch ( *(_DWORD *)(a1 + 136) )
        {
          case 1:
            v74 = 0x8BB263AD06800084LL;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 2, 7, 0);
            break;
          case 2:
            goto LABEL_51;
          case 4:
            goto LABEL_88;
          case 8:
            v74 = 0xE367B1FB5ECD295ELL;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 5, 7, 0);
            break;
          case 0x10:
            v74 = 0xEFBF83FA6FD754D1LL;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 6, 7, 0);
            break;
          default:
            goto LABEL_46;
        }
      }
      return 3;
    case 6u:
      v3 = *(_DWORD *)(a1 + 136);
      switch ( v3 )
      {
        case 2:
LABEL_51:
          v74 = 0x92DB68E861D86D67LL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 3, 7, 0);
          break;
        case 4:
LABEL_88:
          v74 = 0x110F2C99E79DB87DLL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 4, 7, 0);
          break;
        case 1:
          v74 = 0x82EEA2F2A689BB73LL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 50, 7, 0);
          break;
      }
      return 3;
    case 7u:
    case 0x10u:
      v4 = *(unsigned int *)(a1 + 136);
      if ( v4 == getinf(59) )
      {
LABEL_45:
        v74 = 0x12AE2A5F0B101235LL;
        sub_349E0(a1, &v74);
        create_tinfo(a1 + 8, 39, 7, 0);
      }
      else
      {
        switch ( *(_DWORD *)(a1 + 136) )
        {
          case 1:
            goto LABEL_25;
          case 2:
            goto LABEL_52;
          case 4:
            goto LABEL_87;
          case 8:
            v74 = 0x2DA668F13F882F3FLL;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 37, 7, 0);
            break;
          case 0x10:
            v74 = 0x3FACCB6B41DA2A08LL;
            sub_349E0(a1, &v74);
            create_tinfo(a1 + 8, 38, 7, 0);
            break;
          default:
            goto LABEL_45;
        }
      }
      return 3;
    case 8u:
      v13 = *(_DWORD *)(a1 + 136);
      switch ( v13 )
      {
        case 2:
LABEL_52:
          v74 = 0xFD1CF7FF901D4D8ALL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 35, 7, 0);
          break;
        case 4:
LABEL_87:
          v74 = 0xA7AB694B378567D0LL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 36, 7, 0);
          break;
        case 1:
LABEL_25:
          v74 = 0xD174F184DE022DEDLL;
          sub_349E0(a1, &v74);
          create_tinfo(a1 + 8, 34, 7, 0);
          break;
      }
      return 3;
    case 0xFu:
      v5 = *(_DWORD *)(a1 + 136);
      if ( v5 > 0x10 )
        v5 = 16;
      sub_345A0(a1, v5);
      v6 = *(unsigned int *)(a1 + 136);
      v74 = 0;
      v77 = 0;
      v78 = 1;
      v76 = v6;
      v75 = 0;
      if ( !(_DWORD)v6 || (v6 & 3) != 0 )
        return 5;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v12 = v7;
        if ( v9 < v10 + 1 )
        {
          v74 = qvector_reserve(&v74, v8, v10 + 1, 144);
          v8 = v74;
          v12 = v7;
          v10 = v75;
        }
        v11 = v8 + 144 * v10;
        *(_OWORD *)v11 = 0;
        *(_QWORD *)(v11 + 16) = 0;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 112) = 1;
        *(_DWORD *)(v11 + 120) = -1;
        *(_QWORD *)(v11 + 128) = 0;
        *(_BYTE *)(v11 + 136) = 0;
        *(_OWORD *)(v11 + 24) = 0;
        *(_OWORD *)(v11 + 48) = 0;
        *(_OWORD *)(v11 + 64) = 0;
        *(_QWORD *)&v75 = v75 + 1;
        *(_QWORD *)v11 = 32 * v7;
        *(_QWORD *)(v11 + 8) = 32;
        sub_20160((__int64 *)(v11 + 16), (__int64)"data_%d", v12);
        create_tinfo(v11 + 64, 36, 7, 0);
        if ( (unsigned int)++v7 >= *(_DWORD *)(a1 + 136) >> 2 )
          break;
        v9 = *((_QWORD *)&v75 + 1);
        v10 = v75;
        v8 = v74;
      }
      v51 = create_tinfo(a1 + 8, 13, 13, &v74);
      v52 = v74;
      v53 = v74;
      if ( v51 )
      {
        if ( v74 )
        {
          v54 = v75;
          v55 = 0;
          if ( (_QWORD)v75 )
          {
            do
            {
              v56 = (_QWORD *)(144 * v55 + v52);
              clear_tinfo_t(v56 + 8);
              v57 = v56[5];
              if ( v57 )
              {
                v56[6] = 0;
                qfree(v57);
              }
              v58 = v56[2];
              if ( v58 )
              {
                v56[3] = 0;
                qfree(v58);
              }
              ++v55;
              v52 = v74;
            }
            while ( v54 != v55 );
          }
          *(_QWORD *)&v75 = 0;
          qfree(v52);
        }
        return 3;
      }
      if ( v74 )
      {
        v59 = v75;
        if ( (_QWORD)v75 )
        {
          v60 = 0;
          do
          {
            v61 = (_QWORD *)(v53 + 144 * v60);
            clear_tinfo_t(v61 + 8);
            v62 = v61[5];
            if ( v62 )
            {
              v61[6] = 0;
              qfree(v62);
            }
            v63 = v61[2];
            if ( v63 )
            {
              v61[3] = 0;
              qfree(v63);
            }
            ++v60;
            v53 = v74;
          }
          while ( v59 != v60 );
        }
        *(_QWORD *)&v75 = 0;
        qfree(v53);
      }
      return 5;
    default:
      if ( (debug & 0x400000) != 0 )
      {
        v24 = *(_QWORD *)(a1 + 152);
        v25 = v2;
        v26 = sub_34340(a1);
        v29 = src;
        if ( v26[1] )
          v29 = (const char *)*v26;
        sub_88B80(
          (unsigned int)"Warning basic type DIE %s unimplemented encoding %s (0x%x)\n",
          (_DWORD)v29,
          v24,
          v25,
          v27,
          v28);
      }
      return 5;
  }
}
