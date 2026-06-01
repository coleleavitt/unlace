__int64 __fastcall sub_522B20(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 **a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v7; // rsi
  unsigned __int8 **v8; // rbx
  unsigned __int8 *v10; // rax
  int v12; // r9d
  char v13; // r13
  int v14; // r9d
  char *v15; // rdi
  void *v16; // r15
  void *v17; // r14
  char *v18; // r12
  void *v19; // rdi
  void *v20; // rdi
  unsigned __int8 v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // r11d
  __int64 v24; // r9
  __int64 v25; // r10
  unsigned __int8 v26; // dl
  unsigned int v27; // eax
  int v28; // r9d
  char *v29; // rdi
  void *v30; // r15
  void *v31; // r14
  char *v32; // r12
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // r10
  __int64 v36; // r9
  int v37; // r9d
  char *v38; // rdi
  __int64 v39; // r13
  __int64 v40; // r12
  char *v41; // r15
  void *v42; // rdi
  void *v43; // rdi
  char *v44; // rdi
  void *v45; // r13
  void *v46; // r12
  char *v47; // r15
  void *v48; // rdi
  void *v49; // rdi
  unsigned __int8 *v50; // rax
  __int64 v51; // r10
  __int64 v52; // r9
  char v53; // dl
  char v54; // r11
  int v55; // r9d
  unsigned int v56; // eax
  int v57; // r9d
  char *v58; // r15
  char *v59; // r14
  __int64 v60; // rbx
  char *v61; // r12
  void *v62; // rdi
  void *v63; // rdi
  char v64; // dl
  __int64 v65; // r15
  __int64 v66; // r14
  char *v67; // r12
  void *v68; // rdi
  void *v69; // rdi
  char v70; // al
  __int64 v71; // rax
  char v72; // al
  char v73; // [rsp+8h] [rbp-108h]
  __int64 v74; // [rsp+8h] [rbp-108h]
  __int64 v76; // [rsp+10h] [rbp-100h]
  int v77[2]; // [rsp+10h] [rbp-100h]
  __int64 v78; // [rsp+18h] [rbp-F8h]
  int v81[2]; // [rsp+20h] [rbp-F0h]
  __int64 v84; // [rsp+28h] [rbp-E8h]
  unsigned int v85; // [rsp+28h] [rbp-E8h]
  unsigned int v86; // [rsp+28h] [rbp-E8h]
  int v88[2]; // [rsp+30h] [rbp-E0h]
  unsigned __int8 v89; // [rsp+3Fh] [rbp-D1h]
  int v90[2]; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+48h] [rbp-C8h] BYREF
  void *v92; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v93; // [rsp+58h] [rbp-B8h]
  void *v94[3]; // [rsp+70h] [rbp-A0h] BYREF
  void *v95[3]; // [rsp+88h] [rbp-88h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-70h]
  int v97; // [rsp+A8h] [rbp-68h]
  void *ptr; // [rsp+B0h] [rbp-60h]
  __int128 v99; // [rsp+B8h] [rbp-58h]
  char v100; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-38h]

  v101 = __readfsqword(0x28u);
  v7 = *a4;
  *(_QWORD *)v90 = v7;
  if ( !v7 )
    return 0;
  v8 = a4;
  v89 = *v7;
  switch ( *v7 & 0xF )
  {
    case 0xA:
      v10 = v7 + 1;
      *(_QWORD *)v90 = v7 + 1;
      if ( !v7[1] )
        goto LABEL_4;
      v92 = nullptr;
      v91 = 0;
      *(_OWORD *)v94 = 0;
      copy_tinfo_t(&v94[1]);
      v94[2] = nullptr;
      copy_tinfo_t(&v94[2]);
      LODWORD(v95[0]) = 0;
      WORD2(v95[0]) = 0;
      clear_tinfo_t(&v91);
      clear_tinfo_t(&v92);
      v50 = *(unsigned __int8 **)v90;
      v51 = a3;
      v52 = a6;
      if ( (~v89 & 0x30) != 0 )
        goto LABEL_73;
      if ( **(_BYTE **)v90 == 0xFF )
      {
        v72 = sub_5225A0(*(__int64 **)(a2 + 1480), (unsigned __int64 *)&v94[1], a3, (const char **)v90, a5, a6, nullptr);
        v52 = a6;
        v51 = a3;
        if ( !v72 )
          goto LABEL_77;
        v50 = *(unsigned __int8 **)v90;
      }
      else
      {
        if ( !**(_BYTE **)v90 )
        {
          clear_tinfo_t(&v94[2]);
          clear_tinfo_t(&v94[1]);
          clear_tinfo_t(v94);
          return 0;
        }
        ++*(_QWORD *)v90;
        BYTE4(v95[0]) = *v50++;
      }
LABEL_73:
      v53 = 0;
      v54 = 0;
      if ( *v50 == 0xFE )
      {
        v74 = v52;
        *(_QWORD *)v77 = v51;
        v70 = sub_51F860((const char **)v90, &v92, (__int64 **)(a1 + 40));
        v51 = *(_QWORD *)v77;
        v52 = v74;
        if ( !v70 )
          goto LABEL_77;
        v54 = (unsigned __int8)v92 & 0xF0;
        *(_BYTE *)(a1 + 71) = (unsigned __int8)v92 & 0xF;
        v53 = v54;
      }
      BYTE5(v95[0]) = v53;
      v73 = v54;
      v76 = v52;
      v84 = v51;
      if ( (unsigned __int8)sub_5225A0(
                              *(__int64 **)(a2 + 1480),
                              (unsigned __int64 *)v94,
                              v51,
                              (const char **)v90,
                              a5,
                              v52,
                              nullptr) )
      {
        v55 = v76;
        if ( (v73 & 0x80) == 0
          || (unsigned __int8)sub_5225A0(
                                *(__int64 **)(a2 + 1480),
                                (unsigned __int64 *)&v94[2],
                                v84,
                                (const char **)v90,
                                a5,
                                v76,
                                nullptr)
          && (unsigned __int8)sub_693030(v90, v95) )
        {
          v13 = sub_52A1C0(a1, v89, 10, (unsigned int)v94, 1, v55);
          clear_tinfo_t(&v94[2]);
          clear_tinfo_t(&v94[1]);
          clear_tinfo_t(v94);
          goto LABEL_9;
        }
      }
LABEL_77:
      clear_tinfo_t(&v94[2]);
      clear_tinfo_t(&v94[1]);
      clear_tinfo_t(v94);
      v10 = *(unsigned __int8 **)v90;
LABEL_4:
      *v8 = v10;
      return 0;
    case 0xB:
      v94[0] = nullptr;
      v94[1] = nullptr;
      if ( !(unsigned __int8)sub_54EE20(v90, &v94[1], (char *)&v94[1] + 4) )
        goto LABEL_54;
      v35 = a3;
      v36 = a6;
      if ( **(_BYTE **)v90 != 0xFE )
        goto LABEL_47;
      if ( (unsigned __int8)sub_51F860((const char **)v90, &v92, (__int64 **)(a1 + 40)) )
      {
        v36 = a6;
        v35 = a3;
        *(_BYTE *)(a1 + 71) = (unsigned __int8)v92 & 0xF;
LABEL_47:
        if ( (unsigned __int8)sub_5225A0(
                                *(__int64 **)(a2 + 1480),
                                (unsigned __int64 *)v94,
                                v35,
                                (const char **)v90,
                                a5,
                                v36,
                                nullptr) )
        {
          v89 &= ~0x10u;
          v13 = sub_52A1C0(a1, v89, 11, (unsigned int)v94, 1, v37);
          clear_tinfo_t(v94);
          goto LABEL_9;
        }
      }
LABEL_54:
      clear_tinfo_t(v94);
      *v8 = *(unsigned __int8 **)v90;
      return 0;
    case 0xC:
      memset(v94, 0, sizeof(v94));
      memset(v95, 0, sizeof(v95));
      v96 = 0;
      v97 = 0;
      ptr = nullptr;
      v100 = 16;
      v99 = 0;
      v13 = sub_52AFD0(a1, a2, v94, a3, v90, a5, a6);
      if ( v13 )
        v13 = sub_52A1C0(a1, v89, 12, (unsigned int)v94, 1, v14);
      if ( ptr )
      {
        *(_QWORD *)&v99 = 0;
        qfree(ptr);
      }
      cleanup_argloc(&v95[2]);
      clear_tinfo_t(&v95[1]);
      v15 = (char *)v94[0];
      if ( !v94[0] )
        goto LABEL_9;
      v16 = v94[1];
      if ( v94[1] )
      {
        v17 = nullptr;
        do
        {
          v18 = &v15[80 * (_QWORD)v17];
          clear_tinfo_t(v18 + 64);
          v19 = *((void **)v18 + 5);
          if ( v19 )
          {
            *((_QWORD *)v18 + 6) = 0;
            qfree(v19);
          }
          v20 = *((void **)v18 + 2);
          if ( v20 )
          {
            *((_QWORD *)v18 + 3) = 0;
            qfree(v20);
          }
          v17 = (char *)v17 + 1;
          cleanup_argloc(v18);
          v15 = (char *)v94[0];
        }
        while ( v16 != v17 );
      }
      goto LABEL_94;
    case 0xD:
      v21 = v89 & 0x30;
      *(_QWORD *)v90 = v7 + 1;
      LOBYTE(v91) = 0;
      if ( (v89 & 0x30) == 0x30 )
        goto LABEL_51;
      v22 = sub_693160(v90, &v91);
      v23 = v22;
      if ( v22 == -1 )
        goto LABEL_71;
      v24 = a6;
      if ( v21 == 32 )
      {
        if ( v22 || (_BYTE)v91 )
        {
          v56 = 0;
          if ( **(_BYTE **)v90 == 0xFE )
          {
            *(_QWORD *)v81 = a6;
            v86 = v23;
            if ( !(unsigned __int8)sub_51F860((const char **)v90, v94, (__int64 **)(a1 + 40)) )
              goto LABEL_71;
            v23 = v86;
            v24 = *(_QWORD *)v81;
            v56 = (__int64)v94[0] & 0xFFFFFFF0;
            *(_BYTE *)(a1 + 71) = (__int64)v94[0] & 0xF;
          }
          memset(v94, 0, sizeof(v94));
          memset(v95, 0, sizeof(v95));
          BYTE4(v96) = 0x80;
          LODWORD(v96) = v56;
          v13 = sub_51CE80((__int64)v94, v23, (_BYTE **)v90, a5, v24);
          if ( v13 )
            v13 = sub_52A1C0(a1, v89, 45, (unsigned int)v94, 1, v57);
          if ( v95[0] )
          {
            v95[1] = nullptr;
            qfree(v95[0]);
          }
          v15 = (char *)v94[0];
          if ( v94[0] )
          {
            if ( v94[1] )
            {
              v58 = nullptr;
              *(_QWORD *)v88 = v8;
              v59 = (char *)v94[1];
              v60 = 0;
              do
              {
                v61 = &v15[v60];
                v62 = *(void **)&v15[v60 + 24];
                if ( v62 )
                {
                  *((_QWORD *)v61 + 4) = 0;
                  qfree(v62);
                }
                v63 = *(void **)v61;
                if ( *(_QWORD *)v61 )
                {
                  *((_QWORD *)v61 + 1) = 0;
                  qfree(v63);
                }
                ++v58;
                v15 = (char *)v94[0];
                v60 += 56;
              }
              while ( v59 != v58 );
              v8 = *(unsigned __int8 ***)v88;
            }
            goto LABEL_94;
          }
LABEL_9:
          *v8 = *(unsigned __int8 **)v90;
          if ( v13 )
            return v89;
          return 0;
        }
        goto LABEL_51;
      }
      if ( v21 > 0x20u )
        goto LABEL_71;
      v25 = a3;
      if ( !v22 && !(_BYTE)v91 )
      {
LABEL_51:
        if ( !under_debugger )
          interr(988);
        BUG();
      }
      if ( (**(_BYTE **)v90 & 0xCF ^ 0xC0u) > 1 )
      {
        v26 = *(_BYTE *)(a1 + 71);
        v27 = 0;
        goto LABEL_32;
      }
      v78 = a6;
      v85 = v22;
      if ( (unsigned __int8)sub_51F860((const char **)v90, v94, (__int64 **)(a1 + 40)) )
      {
        v23 = v85;
        v25 = a3;
        v24 = v78;
        v27 = (__int64)v94[0] & 0xFFFFFFF0;
        v26 = (__int64)v94[0] & 0xF;
        *(_BYTE *)(a1 + 71) = (__int64)v94[0] & 0xF;
LABEL_32:
        HIDWORD(v95[2]) = v27;
        *(_WORD *)((char *)&v96 + 1) = v26;
        LOBYTE(v96) = 1;
        BYTE3(v96) = (v89 & 0x3F) == 29;
        memset(v94, 0, sizeof(v94));
        v92 = nullptr;
        memset(v95, 0, 20);
        v93 = 0;
        v13 = sub_54E3B0(a2, v94, &v92, v25, v23, v90, a5, v24, 1);
        if ( v13 )
        {
          v13 = sub_52A1C0(a1, v89, 13, (unsigned int)v94, 1, v28);
          if ( v13 )
          {
            if ( (_QWORD)v93 )
            {
              v71 = qalloc_or_throw(24, (const char *)v89);
              *(_QWORD *)v71 = 0;
              *(_OWORD *)(v71 + 8) = 0;
              *(_QWORD *)v71 = v92;
              *(_OWORD *)(v71 + 8) = v93;
              *(_QWORD *)(a1 + 8) = v71;
LABEL_36:
              v15 = (char *)v94[0];
              if ( !v94[0] )
              {
                *v8 = *(unsigned __int8 **)v90;
                return v89;
              }
              goto LABEL_37;
            }
            *(_QWORD *)(a1 + 8) = 0;
            v29 = (char *)v92;
            if ( !v92 )
              goto LABEL_36;
LABEL_107:
            *(_QWORD *)&v93 = 0;
            qfree(v29);
            v15 = (char *)v94[0];
            if ( !v94[0] )
              goto LABEL_9;
LABEL_37:
            v30 = v94[1];
            if ( v94[1] )
            {
              v31 = nullptr;
              do
              {
                v32 = &v15[128 * (_QWORD)v31];
                clear_tinfo_t(v32 + 64);
                v33 = *((void **)v32 + 5);
                if ( v33 )
                {
                  *((_QWORD *)v32 + 6) = 0;
                  qfree(v33);
                }
                v34 = *((void **)v32 + 2);
                if ( v34 )
                {
                  *((_QWORD *)v32 + 3) = 0;
                  qfree(v34);
                }
                v31 = (char *)v31 + 1;
                v15 = (char *)v94[0];
              }
              while ( v30 != v31 );
            }
LABEL_94:
            v94[1] = nullptr;
            qfree(v15);
            goto LABEL_9;
          }
          v38 = (char *)v92;
          if ( v92 )
          {
            v39 = v93;
            v40 = 0;
            if ( (_QWORD)v93 )
            {
              do
              {
                v41 = &v38[128 * v40];
                clear_tinfo_t(v41 + 64);
                v42 = *((void **)v41 + 5);
                if ( v42 )
                {
                  *((_QWORD *)v41 + 6) = 0;
                  qfree(v42);
                }
                v43 = *((void **)v41 + 2);
                if ( v43 )
                {
                  *((_QWORD *)v41 + 3) = 0;
                  qfree(v43);
                }
                ++v40;
                v38 = (char *)v92;
              }
              while ( v39 != v40 );
            }
            *(_QWORD *)&v93 = 0;
            qfree(v38);
          }
          v44 = (char *)v94[0];
          if ( v94[0] )
          {
            v45 = v94[1];
            v46 = nullptr;
            if ( v94[1] )
            {
              do
              {
                v47 = &v44[128 * (_QWORD)v46];
                clear_tinfo_t(v47 + 64);
                v48 = *((void **)v47 + 5);
                if ( v48 )
                {
                  *((_QWORD *)v47 + 6) = 0;
                  qfree(v48);
                }
                v49 = *((void **)v47 + 2);
                if ( v49 )
                {
                  *((_QWORD *)v47 + 3) = 0;
                  qfree(v49);
                }
                v46 = (char *)v46 + 1;
                v44 = (char *)v94[0];
              }
              while ( v45 != v46 );
            }
            v94[1] = nullptr;
            qfree(v44);
          }
        }
        else
        {
          v29 = (char *)v92;
          if ( v92 )
          {
            v65 = v93;
            if ( (_QWORD)v93 )
            {
              v66 = 0;
              do
              {
                v67 = &v29[128 * v66];
                clear_tinfo_t(v67 + 64);
                v68 = *((void **)v67 + 5);
                if ( v68 )
                {
                  *((_QWORD *)v67 + 6) = 0;
                  qfree(v68);
                }
                v69 = *((void **)v67 + 2);
                if ( v69 )
                {
                  *((_QWORD *)v67 + 3) = 0;
                  qfree(v69);
                }
                ++v66;
                v29 = (char *)v92;
              }
              while ( v65 != v66 );
            }
            goto LABEL_107;
          }
          v15 = (char *)v94[0];
          if ( v94[0] )
            goto LABEL_37;
        }
      }
LABEL_71:
      *v8 = *(unsigned __int8 **)v90;
      return 0;
    case 0xE:
      BYTE2(v94[0]) = 0;
      LOWORD(v94[0]) = 0;
      *(_QWORD *)v90 = sub_54C770(v94);
      if ( *(_QWORD *)v90 )
      {
        v13 = sub_52A1C0(a1, v89, 14, (unsigned int)v94, 1, v12);
        goto LABEL_9;
      }
      *v8 = nullptr;
      return 0;
    case 0xF:
      return 0;
    default:
      *(_BYTE *)(a1 + 70) = v89;
      v10 = v7 + 1;
      *(_QWORD *)v90 = v7 + 1;
      if ( v7[1] != 0xFE )
        goto LABEL_50;
      v64 = sub_51F860((const char **)v90, v94, (__int64 **)(a1 + 40));
      v10 = *(unsigned __int8 **)v90;
      if ( !v64 )
        goto LABEL_4;
      *(_BYTE *)(a1 + 71) = (__int64)v94[0] & 0xF;
LABEL_50:
      *v8 = v10;
      return v89;
  }
}

