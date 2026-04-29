__int64 __fastcall sub_134D90(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
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
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rbx
  void *v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rsi
  int v40; // eax
  char v41; // dl
  char *v42; // rbx
  int v43; // edx
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rdx
  int **v52; // rdi
  int v53; // edi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // rdi
  int v60; // r12d
  __int64 v61; // r14
  int v62; // eax
  int v63; // r13d
  char v64; // al
  int v65; // ecx
  char v66; // al
  size_t v67; // rbp
  _DWORD *v68; // rcx
  int v69; // eax
  __m128i v70; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+10h] [rbp-A8h]
  __int64 v72; // [rsp+18h] [rbp-A0h]
  __int64 v73; // [rsp+20h] [rbp-98h]
  __int64 v74; // [rsp+28h] [rbp-90h]
  int v75; // [rsp+30h] [rbp-88h]
  __int64 v76; // [rsp+38h] [rbp-80h] BYREF
  __int64 v77; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 *v78; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+50h] [rbp-68h] BYREF
  __int64 v80; // [rsp+58h] [rbp-60h] BYREF
  __int64 v81[11]; // [rsp+60h] [rbp-58h] BYREF

  v81[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 32);
  switch ( *(_DWORD *)v6 )
  {
    case 0xB:
      v40 = *(_DWORD *)(v6 + 68);
      v41 = *(_BYTE *)(v6 + 32);
      if ( 2 * v40 != *(_DWORD *)(v6 + 36) )
      {
        if ( v41 != 4 )
          return 0;
        v42 = *(char **)(v6 + 40);
        v43 = *(_DWORD *)v42;
LABEL_56:
        if ( v43 == 8 && v40 == *((_DWORD *)v42 + 9) )
        {
          *(_DWORD *)v6 = 24;
          sub_123480((__int64)v81, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 32LL));
          sub_11C450((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v81);
          v44 = *(_QWORD *)(a1 + 32);
          v45 = 8 * *(_DWORD *)(v44 + 36) - 1;
          sub_120450(v44 + 48, *(_QWORD *)(a1 + 40), v45, 1, *(_QWORD *)(v44 + 24), 0);
          v46 = *(_QWORD *)(a1 + 32);
          if ( *(_BYTE *)(v46 + 32) == 4 )
            sub_1516C0(v46, (unsigned int)v45);
          sub_11C7E0((__int64)v81);
        }
        return 0;
      }
      if ( v41 != 4 )
        return 0;
      v42 = *(char **)(v6 + 40);
      v43 = *(_DWORD *)v42;
      if ( *(_DWORD *)v42 != 14 )
        goto LABEL_56;
      v57 = sub_11C2E0(*(_QWORD *)(v6 + 40), nullptr);
      v58 = v57;
      if ( v57 )
      {
        v59 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v57 + 8) + 16LL), *(unsigned int *)(v57 + 4), 0);
        if ( (v59 & (v59 - 1)) == 0 )
        {
          v60 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) - log2ceil(v59);
          v61 = **(_QWORD **)(v58 + 8);
          if ( v42 + 48 != (char *)v58 )
            sub_11C450(v42 + 32, v42 + 48);
          sub_120450((__int64)(v42 + 48), *(_QWORD *)(a1 + 40), v60, 1, v61, 0);
          *(_DWORD *)v42 = 23;
          **(_DWORD **)(a1 + 32) = 10;
        }
      }
      return 0;
    case 0xE:
      if ( *(_DWORD *)(v6 + 36) > *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) )
        return 0;
      v47 = sub_11C2E0(*(_QWORD *)(a1 + 32), &v77);
      if ( !v47 )
        return 0;
      v48 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v47 + 8) + 16LL), *(unsigned int *)(v47 + 4), 0);
      if ( v48 <= 0x20 || (v48 & (v48 - 1)) != 0 )
        return 0;
      v49 = log2ceil(v48);
      v50 = v49;
      if ( v49 > 0 )
      {
        v51 = *(_QWORD *)(a1 + 32);
        if ( v51 + 32 != v77 )
        {
          sub_11C450((char *)(v51 + 32), (char *)(v51 + 48));
          v51 = *(_QWORD *)(a1 + 32);
        }
        sub_120450(v51 + 48, *(_QWORD *)(a1 + 40), v50, 1, -1, 0);
        **(_DWORD **)(a1 + 32) = 22;
        return 0;
      }
      if ( !under_debugger )
        sub_3835A0(50434);
      goto LABEL_119;
    case 0x14:
    case 0x17:
    case 0x18:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_DWORD *)(v6 + 36);
      v78 = (unsigned __int8 *)(v6 + 32);
      v13 = *(_DWORD *)v6 == 20;
      v14 = *(_QWORD *)(v11 + 480);
      v70.m128i_i32[0] = v12;
      v71 = *(_QWORD *)(v14 + 112);
      if ( !v13 )
      {
        if ( !(unsigned __int8)sub_152070(v6, (char *)&v76 + 4) )
          goto LABEL_70;
        LODWORD(v73) = BYTE4(v76) & 7;
        if ( (v76 & 0x700000000LL) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v6 + 32) == 4 )
        {
          v68 = *(_DWORD **)(v6 + 40);
          if ( (unsigned int)(*v68 - 8) <= 1 )
            v70.m128i_i32[0] = v68[9];
        }
        LODWORD(v74) = SHIDWORD(v76) / -8;
        HIDWORD(v72) = v70.m128i_i32[0] - SHIDWORD(v76) / 8;
        if ( !sub_11C4C0(SHIDWORD(v72)) )
          goto LABEL_70;
        v15 = v74;
        if ( *(_BYTE *)(v6 + 32) != 4 )
          goto LABEL_22;
        v16 = *(_QWORD *)(v6 + 40);
        v17 = *(_DWORD *)v16;
        if ( (unsigned int)(*(_DWORD *)v16 - 8) <= 1 )
        {
          HIDWORD(v76) = 0;
          v20 = HIDWORD(v72);
          v78 = (unsigned __int8 *)(v16 + 32);
        }
        else
        {
          if ( v17 == 22 )
          {
            v73 = *(_QWORD *)(v6 + 40);
            if ( !(unsigned __int8)sub_152070(v16, (char *)&v76 + 4) )
              goto LABEL_70;
            v15 = v74;
            v78 = (unsigned __int8 *)(v73 + 32);
          }
          else
          {
            if ( v17 != 14 )
              goto LABEL_70;
            LODWORD(v73) = v74;
            v18 = sub_11C2E0(v16, &v78);
            v15 = v74;
            if ( v18 )
            {
              v19 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL), *(unsigned int *)(v18 + 4), 0);
              v15 = v73;
              if ( (v19 & (v19 - 1)) == 0 )
              {
                v69 = log2ceil(v19);
                v15 = v73;
                HIDWORD(v76) = v69;
              }
            }
          }
          if ( (v76 & 0x700000000LL) != 0 )
            goto LABEL_70;
          LODWORD(v73) = SHIDWORD(v76) / 8;
          v20 = HIDWORD(v72) + SHIDWORD(v76) / 8;
        }
        if ( v70.m128i_i32[0] >= v20 )
        {
LABEL_22:
          v70.m128i_i32[0] = v15;
          v21 = sub_11C690(v78, v14);
          v22 = -(v73 + v70.m128i_i32[0]);
          if ( v21 )
            v22 = v73;
          LODWORD(v73) = v22;
          goto LABEL_25;
        }
LABEL_70:
        v52 = *(int ***)(a1 + 32);
        if ( *(_DWORD *)v52 == 20 )
        {
          if ( (unsigned __int8)sub_11DD00(v52, &v79, &v80, 1) )
          {
            v53 = v79 + v80;
            if ( (int)v79 + (int)v80 < *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) )
            {
              LODWORD(v80) = v79 + v80;
              if ( sub_11C4C0(v53) )
              {
                sub_123480((__int64)v81, (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL));
                if ( (unsigned __int8)sub_121BE0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v80, 273, 1) )
                {
                  sub_12B130(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 9, -1, 1);
                  sub_124BC0(*(_QWORD *)(a1 + 32) + 64LL, (unsigned __int8 *)v81);
                  v54 = *(_QWORD *)(a1 + 16);
                  v55 = *(_DWORD *)(v54 + 24);
                  BYTE1(v55) &= ~2u;
                  LOBYTE(v55) = v55 | 0x80;
                  *(_DWORD *)(v54 + 24) = v55;
                  v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
                  if ( v56 )
                    *(_DWORD *)(v56 + 48) = 63;
                  *(_BYTE *)(a1 + 48) = 1;
                }
                sub_11C7E0((__int64)v81);
              }
            }
          }
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_11F7C0((char *)(v6 + 48), v81, 0) )
        goto LABEL_70;
      if ( (v81[0] & (v81[0] + 1)) != 0 )
        goto LABEL_70;
      v62 = bitcount();
      HIDWORD(v76) = v62;
      LODWORD(v73) = v62 & 7;
      if ( (v62 & 7) != 0 )
        goto LABEL_70;
      v63 = v62 / 8;
      v13 = *(_BYTE *)(v6 + 32) == 4;
      HIDWORD(v72) = v62 / 8;
      if ( v13 && (unsigned int)(**(_DWORD **)(v6 + 40) - 23) <= 1 )
      {
        v74 = *(_QWORD *)(v6 + 40);
        if ( !(unsigned __int8)sub_152070(v74, (char *)&v76 + 4) || (v76 & 0x700000000LL) != 0 )
          goto LABEL_70;
        LODWORD(v73) = SHIDWORD(v76) / 8;
        if ( v63 > v70.m128i_i32[0] - SHIDWORD(v76) / 8 )
        {
          if ( *(_DWORD *)v74 == 24 )
            goto LABEL_70;
          HIDWORD(v72) = v70.m128i_i32[0] - SHIDWORD(v76) / 8;
        }
        v78 = (unsigned __int8 *)(v74 + 32);
      }
      v64 = sub_11C690(v78, v14);
      v65 = v70.m128i_i32[0] - (v73 + HIDWORD(v72));
      if ( !v64 )
        v65 = v73;
      LODWORD(v73) = v65;
LABEL_25:
      if ( !sub_11C4C0(SHIDWORD(v72)) )
        goto LABEL_70;
      v79 = 0;
      v80 = 0;
      if ( (unsigned __int8)sub_A8280(*(_QWORD *)(v11 + 64), (char *)v78, &v80, &v79, 0) )
        goto LABEL_33;
      v81[0] = 0;
      v81[1] = 0;
      if ( (*v78 & 0xFB) != 1 )
        goto LABEL_69;
      if ( !(unsigned __int8)sub_1C4A70(v78, v81) )
      {
        if ( !under_debugger )
          sub_3835A0(51879);
LABEL_119:
        BUG();
      }
      v23 = sub_1F0A80(
              *(_QWORD *)(v11 + 64) + 432LL,
              v81,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL) + 80LL),
              0xFFFFFFFFLL);
      if ( v23 == -1 )
      {
LABEL_69:
        cleanup_argloc(v81);
        clear_tinfo_t(&v80);
        goto LABEL_70;
      }
      v24 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 432LL) + 104LL * v23;
      copy_tinfo_t(&v80, v24 + 80);
      v25 = *(_DWORD *)(v24 + 24);
      if ( (v25 & 0x100) != 0
        && (v25 & 2) != 0
        && !(unsigned __int8)sub_1C3940(v24, v81, *((unsigned int *)v78 + 1), *(unsigned int *)(v24 + 88)) )
      {
        cleanup_argloc(v81);
        goto LABEL_34;
      }
      cleanup_argloc(v81);
LABEL_33:
      if ( (get_tinfo_property(v80, 2) & 0x2F) != 0xD && (get_tinfo_property(v80, 2) & 0xF) != 0xB )
        goto LABEL_108;
LABEL_34:
      sub_123480((__int64)v81, v78);
      if ( !(unsigned __int8)sub_126950((unsigned __int64)v81, v71, v73)
        || HIDWORD(v72) != HIDWORD(v81[0])
        && !(unsigned __int8)sub_126F00((unsigned __int8 *)v81, v71, SHIDWORD(v72), 0) )
      {
        sub_11C7E0((__int64)v81);
LABEL_108:
        clear_tinfo_t(&v80);
        goto LABEL_70;
      }
      sub_11C450((char *)(v6 + 32), (char *)v81);
      sub_11C7E0(v6 + 48);
      v26 = 4;
      if ( *(_DWORD *)(v6 + 36) != *(_DWORD *)(v6 + 68) )
        v26 = (*(_DWORD *)v6 != 24) + 8;
      *(_DWORD *)v6 = v26;
      sub_11C7E0((__int64)v81);
      clear_tinfo_t(&v80);
      v27 = *(_QWORD *)(a1 + 16);
      v28 = *(_DWORD *)(v27 + 24);
      BYTE1(v28) &= ~2u;
      LOBYTE(v28) = v28 | 0x80;
      *(_DWORD *)(v27 + 24) = v28;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
      if ( v29 )
        *(_DWORD *)(v29 + 48) = 63;
LABEL_5:
      *(_BYTE *)(a1 + 48) = 1;
      return 0;
    case 0x19:
      if ( !(unsigned __int8)sub_11F7C0((char *)(v6 + 48), v81, 1u) || v81[0] != -1 )
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
      if ( (unsigned __int8)sub_1C1340(
                              *(_QWORD *)(v6 + 56),
                              a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              v70.m128i_i32[0],
                              v70.m128i_i32[2],
                              v71,
                              v72,
                              v73,
                              v74,
                              v75,
                              v76,
                              v77,
                              (_DWORD)v78,
                              v79,
                              v80,
                              v81[0]) )
      {
        v30 = *(_QWORD *)(a1 + 16);
        v31 = nullptr;
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
        v33 = *(_QWORD *)(v32 + 32);
        v34 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
        if ( v33 )
        {
          v67 = 4 * v33;
          v70 = v34;
          v31 = (void *)qalloc_or_throw(4 * v33);
          memcpy(v31, *(const void **)(v32 + 24), v67);
          v34 = _mm_load_si128(&v70);
        }
        v35 = *(_QWORD *)(v30 + 368);
        if ( v35 )
        {
          *(_QWORD *)(v30 + 376) = 0;
          v70 = v34;
          qfree(v35);
          v34 = _mm_load_si128(&v70);
        }
        *(_QWORD *)(v30 + 368) = v31;
        *(__m128i *)(v30 + 376) = v34;
      }
      return 0;
    case 0x36:
      v36 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v6 + 48) != 4 )
        goto LABEL_48;
      v66 = sub_11FFE0(*(_BYTE **)(v6 + 56), v36, 0, a4, a5, a6);
      v6 = *(_QWORD *)(a1 + 32);
      if ( !v66 )
        goto LABEL_94;
      if ( (unsigned __int8)sub_155710(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v6 + 48, 0) )
        goto LABEL_51;
      v6 = *(_QWORD *)(a1 + 32);
LABEL_94:
      v36 = *(_QWORD *)(a1 + 40);
LABEL_48:
      if ( *(_BYTE *)(v6 + 64) == 4
        && (unsigned __int8)sub_11FFE0(*(_BYTE **)(v6 + 72), v36, 0, a4, a5, a6)
        && (unsigned __int8)sub_155710(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) + 64LL, 0) )
      {
LABEL_51:
        v37 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 48) = 1;
        v38 = *(_DWORD *)(v37 + 24);
        BYTE1(v38) &= ~2u;
        LOBYTE(v38) = v38 | 0x80;
        *(_DWORD *)(v37 + 24) = v38;
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v39 )
        {
          sub_167250(*(_QWORD *)(a1 + 16), v39, 6);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 4LL) |= 0x20000u;
        }
      }
      return 0;
    default:
      return 0;
  }
}
