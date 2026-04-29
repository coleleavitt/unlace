__int64 __fastcall sub_135350(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // rbp
  __int32 v12; // eax
  bool v13; // zf
  __int64 v14; // rbx
  __int32 v15; // ecx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  char v21; // al
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  void *v36; // r12
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rsi
  int v45; // eax
  char v46; // dl
  __int64 v47; // rcx
  char *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rdx
  int **v58; // rdi
  int v59; // edi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbp
  __int64 v67; // rax
  int v68; // r12d
  __int64 v69; // r14
  int v70; // eax
  int v71; // r13d
  char v72; // al
  int v73; // ecx
  char v74; // al
  size_t v75; // rbp
  _DWORD *v76; // rcx
  int v77; // eax
  __m128i v78; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v79; // [rsp+10h] [rbp-A8h]
  __int64 v80; // [rsp+18h] [rbp-A0h]
  __int64 v81; // [rsp+20h] [rbp-98h]
  __int64 v82; // [rsp+28h] [rbp-90h]
  int v83; // [rsp+30h] [rbp-88h]
  __int64 v84; // [rsp+38h] [rbp-80h] BYREF
  __int64 v85; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 *v86; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v87; // [rsp+50h] [rbp-68h] BYREF
  __int64 v88; // [rsp+58h] [rbp-60h] BYREF
  __int64 v89[11]; // [rsp+60h] [rbp-58h] BYREF

  v89[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 32);
  switch ( *(_DWORD *)v6 )
  {
    case 0xB:
      v45 = *(_DWORD *)(v6 + 68);
      v46 = *(_BYTE *)(v6 + 32);
      v47 = (unsigned int)(2 * v45);
      if ( (_DWORD)v47 != *(_DWORD *)(v6 + 36) )
      {
        if ( v46 != 4 )
          return 0;
        v48 = *(char **)(v6 + 40);
        v49 = *(unsigned int *)v48;
LABEL_56:
        if ( (_DWORD)v49 == 8 && v45 == *((_DWORD *)v48 + 9) )
        {
          *(_DWORD *)v6 = 24;
          sub_123A40((__int64)v89, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 32LL), v49, v47);
          sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v89);
          v50 = *(_QWORD *)(a1 + 32);
          v51 = 8 * *(_DWORD *)(v50 + 36) - 1;
          sub_120A10(v50 + 48, *(_QWORD *)(a1 + 40), v51, 1, *(_QWORD *)(v50 + 24), 0);
          v52 = *(_QWORD *)(a1 + 32);
          if ( *(_BYTE *)(v52 + 32) == 4 )
            sub_151C80(v52, (unsigned int)v51);
          sub_11CDA0((__int64)v89);
        }
        return 0;
      }
      if ( v46 != 4 )
        return 0;
      v48 = *(char **)(v6 + 40);
      v49 = *(unsigned int *)v48;
      if ( (_DWORD)v49 != 14 )
        goto LABEL_56;
      v65 = sub_11C8A0(*(_QWORD *)(v6 + 40), nullptr);
      v66 = v65;
      if ( v65 )
      {
        v67 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v65 + 8) + 16LL), *(unsigned int *)(v65 + 4), 0);
        if ( (v67 & (v67 - 1)) == 0 )
        {
          v68 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) - log2ceil();
          v69 = **(_QWORD **)(v66 + 8);
          if ( v48 + 48 != (char *)v66 )
            sub_11CA10(v48 + 32, v48 + 48);
          sub_120A10((__int64)(v48 + 48), *(_QWORD *)(a1 + 40), v68, 1, v69, 0);
          *(_DWORD *)v48 = 23;
          **(_DWORD **)(a1 + 32) = 10;
        }
      }
      return 0;
    case 0xE:
      if ( *(_DWORD *)(v6 + 36) > *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) )
        return 0;
      v53 = sub_11C8A0(*(_QWORD *)(a1 + 32), &v85);
      if ( !v53 )
        return 0;
      v54 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v53 + 8) + 16LL), *(unsigned int *)(v53 + 4), 0);
      if ( v54 <= 0x20 || (v54 & (v54 - 1)) != 0 )
        return 0;
      v55 = log2ceil();
      v56 = v55;
      if ( v55 > 0 )
      {
        v57 = *(_QWORD *)(a1 + 32);
        if ( v57 + 32 != v85 )
        {
          sub_11CA10((char *)(v57 + 32), (char *)(v57 + 48));
          v57 = *(_QWORD *)(a1 + 32);
        }
        sub_120A10(v57 + 48, *(_QWORD *)(a1 + 40), v56, 1, -1, 0);
        **(_DWORD **)(a1 + 32) = 22;
        return 0;
      }
      if ( !under_debugger )
        sub_383060(50434);
      goto LABEL_119;
    case 0x14:
    case 0x17:
    case 0x18:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_DWORD *)(v6 + 36);
      v86 = (unsigned __int8 *)(v6 + 32);
      v13 = *(_DWORD *)v6 == 20;
      v14 = *(_QWORD *)(v11 + 480);
      v78.m128i_i32[0] = v12;
      v79 = *(_QWORD *)(v14 + 112);
      if ( !v13 )
      {
        if ( !(unsigned __int8)sub_152630(v6, (char *)&v84 + 4) )
          goto LABEL_70;
        LODWORD(v81) = BYTE4(v84) & 7;
        if ( (v84 & 0x700000000LL) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v6 + 32) == 4 )
        {
          v76 = *(_DWORD **)(v6 + 40);
          if ( (unsigned int)(*v76 - 8) <= 1 )
            v78.m128i_i32[0] = v76[9];
        }
        LODWORD(v82) = SHIDWORD(v84) / -8;
        HIDWORD(v80) = v78.m128i_i32[0] - SHIDWORD(v84) / 8;
        if ( !sub_11CA80(SHIDWORD(v80)) )
          goto LABEL_70;
        v15 = v82;
        if ( *(_BYTE *)(v6 + 32) != 4 )
          goto LABEL_22;
        v16 = *(_QWORD *)(v6 + 40);
        v17 = *(_DWORD *)v16;
        if ( (unsigned int)(*(_DWORD *)v16 - 8) <= 1 )
        {
          HIDWORD(v84) = 0;
          v20 = HIDWORD(v80);
          v86 = (unsigned __int8 *)(v16 + 32);
        }
        else
        {
          if ( v17 == 22 )
          {
            v81 = *(_QWORD *)(v6 + 40);
            if ( !(unsigned __int8)sub_152630(v16, (char *)&v84 + 4) )
              goto LABEL_70;
            v15 = v82;
            v86 = (unsigned __int8 *)(v81 + 32);
          }
          else
          {
            if ( v17 != 14 )
              goto LABEL_70;
            LODWORD(v81) = v82;
            v18 = sub_11C8A0(v16, &v86);
            v15 = v82;
            if ( v18 )
            {
              v19 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL), *(unsigned int *)(v18 + 4), 0);
              v15 = v81;
              if ( (v19 & (v19 - 1)) == 0 )
              {
                v77 = log2ceil();
                v15 = v81;
                HIDWORD(v84) = v77;
              }
            }
          }
          if ( (v84 & 0x700000000LL) != 0 )
            goto LABEL_70;
          LODWORD(v81) = SHIDWORD(v84) / 8;
          v20 = HIDWORD(v80) + SHIDWORD(v84) / 8;
        }
        if ( v78.m128i_i32[0] >= v20 )
        {
LABEL_22:
          v78.m128i_i32[0] = v15;
          v21 = sub_11CC50(v86, v14);
          v22 = -(v81 + v78.m128i_i32[0]);
          if ( v21 )
            v22 = v81;
          LODWORD(v81) = v22;
          goto LABEL_25;
        }
LABEL_70:
        v58 = *(int ***)(a1 + 32);
        if ( *(_DWORD *)v58 == 20 )
        {
          if ( (unsigned __int8)sub_11E2C0(v58, &v87, &v88, 1) )
          {
            v59 = v87 + v88;
            if ( (int)v87 + (int)v88 < *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) )
            {
              LODWORD(v88) = v87 + v88;
              if ( sub_11CA80(v59) )
              {
                sub_123A40((__int64)v89, (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL), v60, v61);
                if ( (unsigned __int8)sub_1221A0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v88, 273, 1) )
                {
                  sub_12B6F0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 9, -1, 1);
                  sub_125180(*(_QWORD *)(a1 + 32) + 64LL, (unsigned __int8 *)v89);
                  v62 = *(_QWORD *)(a1 + 16);
                  v63 = *(_DWORD *)(v62 + 24);
                  BYTE1(v63) &= ~2u;
                  LOBYTE(v63) = v63 | 0x80;
                  *(_DWORD *)(v62 + 24) = v63;
                  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
                  if ( v64 )
                    *(_DWORD *)(v64 + 48) = 63;
                  *(_BYTE *)(a1 + 48) = 1;
                }
                sub_11CDA0((__int64)v89);
              }
            }
          }
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_11FD80((char *)(v6 + 48), v89, 0) )
        goto LABEL_70;
      if ( (v89[0] & (v89[0] + 1)) != 0 )
        goto LABEL_70;
      v70 = bitcount();
      HIDWORD(v84) = v70;
      LODWORD(v81) = v70 & 7;
      if ( (v70 & 7) != 0 )
        goto LABEL_70;
      v71 = v70 / 8;
      v13 = *(_BYTE *)(v6 + 32) == 4;
      HIDWORD(v80) = v70 / 8;
      if ( v13 && (unsigned int)(**(_DWORD **)(v6 + 40) - 23) <= 1 )
      {
        v82 = *(_QWORD *)(v6 + 40);
        if ( !(unsigned __int8)sub_152630(v82, (char *)&v84 + 4) || (v84 & 0x700000000LL) != 0 )
          goto LABEL_70;
        LODWORD(v81) = SHIDWORD(v84) / 8;
        if ( v71 > v78.m128i_i32[0] - SHIDWORD(v84) / 8 )
        {
          if ( *(_DWORD *)v82 == 24 )
            goto LABEL_70;
          HIDWORD(v80) = v78.m128i_i32[0] - SHIDWORD(v84) / 8;
        }
        v86 = (unsigned __int8 *)(v82 + 32);
      }
      v72 = sub_11CC50(v86, v14);
      v73 = v78.m128i_i32[0] - (v81 + HIDWORD(v80));
      if ( !v72 )
        v73 = v81;
      LODWORD(v81) = v73;
LABEL_25:
      if ( !sub_11CA80(SHIDWORD(v80)) )
        goto LABEL_70;
      v87 = 0;
      v88 = 0;
      if ( (unsigned __int8)sub_A8840(*(_QWORD *)(v11 + 64), (char *)v86, &v88, &v87, 0) )
        goto LABEL_33;
      v89[0] = 0;
      v89[1] = 0;
      if ( (*v86 & 0xFB) != 1 )
        goto LABEL_69;
      if ( !(unsigned __int8)sub_1C5030(v86, v89) )
      {
        if ( !under_debugger )
          sub_383060(51879);
LABEL_119:
        BUG();
      }
      v23 = sub_1F06C0(
              *(_QWORD *)(v11 + 64) + 432LL,
              v89,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL) + 80LL),
              0xFFFFFFFFLL);
      if ( v23 == -1 )
      {
LABEL_69:
        cleanup_argloc();
        clear_tinfo_t();
        goto LABEL_70;
      }
      v24 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 432LL) + 104LL * v23;
      copy_tinfo_t();
      v25 = *(_DWORD *)(v24 + 24);
      if ( (v25 & 0x100) != 0
        && (v25 & 2) != 0
        && !(unsigned __int8)sub_1C3F00(v24, v89, *((unsigned int *)v86 + 1), *(unsigned int *)(v24 + 88)) )
      {
        cleanup_argloc();
        goto LABEL_34;
      }
      cleanup_argloc();
LABEL_33:
      if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_108;
LABEL_34:
      sub_123A40((__int64)v89, v86, v26, v27);
      if ( !(unsigned __int8)sub_126F10((unsigned __int64)v89, v79, v81, v28)
        || HIDWORD(v80) != HIDWORD(v89[0]) && !(unsigned __int8)sub_1274C0((unsigned __int8 *)v89, v79, HIDWORD(v80), 0) )
      {
        sub_11CDA0((__int64)v89);
LABEL_108:
        clear_tinfo_t();
        goto LABEL_70;
      }
      sub_11CA10((char *)(v6 + 32), (char *)v89);
      sub_11CDA0(v6 + 48);
      v29 = 4;
      if ( *(_DWORD *)(v6 + 36) != *(_DWORD *)(v6 + 68) )
        v29 = (*(_DWORD *)v6 != 24) + 8;
      *(_DWORD *)v6 = v29;
      sub_11CDA0((__int64)v89);
      clear_tinfo_t();
      v30 = *(_QWORD *)(a1 + 16);
      v31 = *(_DWORD *)(v30 + 24);
      BYTE1(v31) &= ~2u;
      LOBYTE(v31) = v31 | 0x80;
      *(_DWORD *)(v30 + 24) = v31;
      v32 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
      if ( v32 )
        *(_DWORD *)(v32 + 48) = 63;
LABEL_5:
      *(_BYTE *)(a1 + 48) = 1;
      return 0;
    case 0x19:
      if ( !(unsigned __int8)sub_11FD80((char *)(v6 + 48), v89, 1u) || v89[0] != -1 )
        return 0;
      **(_DWORD **)(a1 + 32) = 32;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 16LL) = 0;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_DWORD *)(v8 + 24);
      BYTE1(v9) &= ~2u;
      LOBYTE(v9) = v9 | 0x80;
      *(_DWORD *)(v8 + 24) = v9;
      goto LABEL_5;
    case 0x35:
      if ( (unsigned __int8)sub_1C1900(
                              *(_QWORD *)(v6 + 56),
                              a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              v78.m128i_i32[0],
                              v78.m128i_i32[2],
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              (_DWORD)v86,
                              v87,
                              v88,
                              v89[0]) )
      {
        v35 = *(_QWORD *)(a1 + 16);
        v36 = nullptr;
        v37 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
        v38 = *(_QWORD *)(v37 + 32);
        v39 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
        if ( v38 )
        {
          v75 = 4 * v38;
          v78 = v39;
          v36 = (void *)qalloc_or_throw(4 * v38, a2, v33, v34);
          memcpy(v36, *(const void **)(v37 + 24), v75);
          v39 = _mm_load_si128(&v78);
        }
        v40 = *(_QWORD *)(v35 + 368);
        if ( v40 )
        {
          *(_QWORD *)(v35 + 376) = 0;
          v78 = v39;
          qfree(v40);
          v39 = _mm_load_si128(&v78);
        }
        *(_QWORD *)(v35 + 368) = v36;
        *(__m128i *)(v35 + 376) = v39;
      }
      return 0;
    case 0x36:
      v41 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v6 + 48) != 4 )
        goto LABEL_48;
      v74 = sub_1205A0(*(_BYTE **)(v6 + 56), v41, 0, a4, a5, a6);
      v6 = *(_QWORD *)(a1 + 32);
      if ( !v74 )
        goto LABEL_94;
      if ( (unsigned __int8)sub_155CD0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v6 + 48, 0) )
        goto LABEL_51;
      v6 = *(_QWORD *)(a1 + 32);
LABEL_94:
      v41 = *(_QWORD *)(a1 + 40);
LABEL_48:
      if ( *(_BYTE *)(v6 + 64) == 4
        && (unsigned __int8)sub_1205A0(*(_BYTE **)(v6 + 72), v41, 0, a4, a5, a6)
        && (unsigned __int8)sub_155CD0(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) + 64LL, 0) )
      {
LABEL_51:
        v42 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 48) = 1;
        v43 = *(_DWORD *)(v42 + 24);
        BYTE1(v43) &= ~2u;
        LOBYTE(v43) = v43 | 0x80;
        *(_DWORD *)(v42 + 24) = v43;
        v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v44 )
        {
          sub_167810(*(_QWORD *)(a1 + 16), v44, 6);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 4LL) |= 0x20000u;
        }
      }
      return 0;
    default:
      return 0;
  }
}
