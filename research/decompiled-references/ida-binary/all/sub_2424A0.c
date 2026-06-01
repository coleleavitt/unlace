__int64 __fastcall sub_2424A0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // r12d
  char v15; // dl
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  int v39; // r12d
  __int64 v40; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 v42; // rdx
  char v43; // bl
  char v44; // bp
  unsigned int *v45; // r12
  _DWORD *v46; // rax
  __int64 v47; // rdx
  char *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  char *v51; // rcx
  __int64 v52; // rsi
  char *v53; // rcx
  bool v54; // zf
  void *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  __int64 v61; // rcx
  int v62; // eax
  void *v63; // rdi
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // [rsp-10h] [rbp-4F8h]
  __int64 v67; // [rsp-8h] [rbp-4F0h]
  __int64 v68; // [rsp+0h] [rbp-4E8h]
  char *v69; // [rsp+8h] [rbp-4E0h]
  _QWORD v70[2]; // [rsp+10h] [rbp-4D8h] BYREF
  _QWORD v71[2]; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 v72; // [rsp+30h] [rbp-4B8h] BYREF
  __int128 v73; // [rsp+38h] [rbp-4B0h]
  __int64 v74; // [rsp+50h] [rbp-498h] BYREF
  __int128 v75; // [rsp+58h] [rbp-490h]
  __int64 v76; // [rsp+70h] [rbp-478h] BYREF
  __int128 v77; // [rsp+78h] [rbp-470h]
  __int64 v78; // [rsp+88h] [rbp-460h]
  int v79; // [rsp+90h] [rbp-458h]
  _BYTE v80[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v81; // [rsp+4A8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v14 = dword_8CC5F0;
  if ( !dword_8CC5F0 )
    return (unsigned int)v14;
  v15 = byte_8CC5ED;
  v16 = a1;
  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 7 )
  {
LABEL_21:
    v76 = 0;
    a3 = 0;
    v78 = 0;
    v79 = -1;
    v72 = 0;
    v77 = 0;
    v73 = 0;
    if ( !v15 )
      goto LABEL_22;
LABEL_53:
    if ( byte_8CC5E2 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( byte_8CC5ED )
  {
    v76 = 0;
    a3.m128_u64[0] = 0;
    v78 = 0;
    v79 = -1;
    v72 = 0;
    v77 = 0;
    v73 = 0;
    goto LABEL_53;
  }
  a12 = xmmword_8CC2F8;
  LOBYTE(qword_8CC350) = 0;
  a1 = dword_8BA5B0 & 0x6000;
  if ( (_QWORD)xmmword_8CC2F8 )
  {
    a2 = (unsigned int)xmmword_8CC358;
    v17 = qword_8CC2F0;
    v18 = 0;
    while ( *(_DWORD *)v17 != (_DWORD)xmmword_8CC358 )
    {
      ++v18;
      v17 += 56;
      if ( v18 == (_QWORD)xmmword_8CC2F8 )
      {
        if ( (_DWORD)a1 != 0x2000 )
          goto LABEL_124;
LABEL_129:
        if ( (*(_BYTE *)(dbg + 35) & 0x40) == 0 )
        {
          v14 = v16 & 8;
          if ( (v16 & 8) == 0 )
          {
            if ( (_QWORD)xmmword_8CC2F8 == v18 )
            {
              if ( (_BYTE)qword_8CC350 )
                *(double *)a3.m128_u64 = qsnprintf(
                                           v80,
                                           1024,
                                           "BUTTON YES%c ~Y~es (pass to app)\n"
                                           "BUTTON NO%c ~N~o (discard)\n"
                                           "BUTTON CANCEL ~S~uspend (don't resume)\n"
                                           "STARTITEM %d\n"
                                           "Exception handling\n"
                                           "\n"
                                           "The execution will be resumed after the exception.\n"
                                           "Do you want to pass the exception to the application?\n"
                                           "\n"
                                           "If you answer yes, the application's exception handler\n"
                                           "will be executed if there is one.\n"
                                           "The control of the application might be lost.\n"
                                           "\n"
                                           " <~C~hange exception definition:k:%zu:::>\n"
                                           "\n",
                                           32,
                                           42,
                                           2,
                                           (unsigned int)xmmword_8CC358);
              else
                *(double *)a3.m128_u64 = qsnprintf(
                                           v80,
                                           1024,
                                           "BUTTON YES%c ~Y~es (pass to app)\n"
                                           "BUTTON NO%c ~N~o (discard)\n"
                                           "BUTTON CANCEL ~S~uspend (don't resume)\n"
                                           "STARTITEM %d\n"
                                           "Exception handling\n"
                                           "\n"
                                           "The execution will be resumed after the exception.\n"
                                           "Do you want to pass the exception to the application?\n"
                                           "\n"
                                           "If you answer yes, the application's exception handler\n"
                                           "will be executed if there is one.\n"
                                           "The control of the application might be lost.\n"
                                           "\n"
                                           " <~C~hange exception definition:k:%zu:::>\n"
                                           "\n",
                                           42,
                                           32,
                                           1,
                                           (unsigned int)xmmword_8CC358);
              a2 = (__int64)sub_240700;
              v56 = v67;
            }
            else
            {
              if ( (_BYTE)qword_8CC350 )
                *(double *)a3.m128_u64 = qsnprintf(
                                           v80,
                                           1024,
                                           "BUTTON YES%c ~Y~es (pass to app)\n"
                                           "BUTTON NO%c ~N~o (discard)\n"
                                           "BUTTON CANCEL ~S~uspend (don't resume)\n"
                                           "STARTITEM %d\n"
                                           "Exception handling\n"
                                           "\n"
                                           "The execution will be resumed after the exception.\n"
                                           "Do you want to pass the exception to the application?\n"
                                           "\n"
                                           "If you answer yes, the application's exception handler\n"
                                           "will be executed if there is one.\n"
                                           "The control of the application might be lost.\n"
                                           "\n"
                                           " <~C~hange exception definition:k:%zu:::>\n"
                                           "\n",
                                           32,
                                           42,
                                           2,
                                           v18);
              else
                *(double *)a3.m128_u64 = qsnprintf(
                                           v80,
                                           1024,
                                           "BUTTON YES%c ~Y~es (pass to app)\n"
                                           "BUTTON NO%c ~N~o (discard)\n"
                                           "BUTTON CANCEL ~S~uspend (don't resume)\n"
                                           "STARTITEM %d\n"
                                           "Exception handling\n"
                                           "\n"
                                           "The execution will be resumed after the exception.\n"
                                           "Do you want to pass the exception to the application?\n"
                                           "\n"
                                           "If you answer yes, the application's exception handler\n"
                                           "will be executed if there is one.\n"
                                           "The control of the application might be lost.\n"
                                           "\n"
                                           " <~C~hange exception definition:k:%zu:::>\n"
                                           "\n",
                                           42,
                                           32,
                                           1,
                                           v18);
              v61 = v66;
              a2 = (__int64)sub_2409E0;
            }
            a1 = (__int64)v80;
            v62 = sub_1697D0((int)v80, a2, v56, v61, v57, v58, a3, a4, a5, a6, v59, v60, a9, a10, v68);
            if ( v62 )
            {
              if ( v62 == 1 )
              {
                LOBYTE(qword_8CC350) = 0;
                v15 = byte_8CC5ED;
              }
              else
              {
                if ( v62 == -1 )
                  goto LABEL_17;
                if ( v62 <= 0 )
                  goto LABEL_159;
                v15 = byte_8CC5ED;
              }
            }
            else
            {
              LOBYTE(qword_8CC350) = 1;
              v15 = byte_8CC5ED;
            }
            goto LABEL_21;
          }
        }
        goto LABEL_127;
      }
    }
    a2 = (*(_BYTE *)(v17 + 4) & 2) != 0;
    LOBYTE(qword_8CC350) = (*(_BYTE *)(v17 + 4) & 2) != 0;
    if ( (_DWORD)a1 != 0x2000 )
    {
      v19 = *(_DWORD *)(v17 + 4) & 1;
      goto LABEL_125;
    }
    if ( (_QWORD)xmmword_8CC2F8 == v18 )
      goto LABEL_129;
  }
  else
  {
    v18 = 0;
    if ( (_DWORD)a1 == 0x2000 )
      goto LABEL_129;
LABEL_124:
    LOBYTE(v19) = 1;
LABEL_125:
    if ( (_DWORD)a1 == 24576 && (_BYTE)v19 )
      goto LABEL_129;
  }
LABEL_127:
  v76 = 0;
  a3 = 0;
  v78 = 0;
  v79 = -1;
  v72 = 0;
  v77 = 0;
  v73 = 0;
LABEL_22:
  if ( byte_8CC5E2 )
    goto LABEL_55;
  v26 = xmmword_8CC438;
  v27 = qword_8CC430;
  if ( !((_QWORD)xmmword_8CC438 << 8) )
  {
LABEL_54:
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    v20 = (__int64)&v76;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 208LL))(
            bpt_kernel_interface,
            &v76);
    if ( v14 < 0 )
      goto LABEL_13;
LABEL_55:
    v42 = xmmword_8CC438;
    v43 = 0;
    v44 = 0;
    v45 = (unsigned int *)qword_8CC430;
    if ( !((_QWORD)xmmword_8CC438 << 8) )
    {
LABEL_72:
      qword_8CC120 = 0;
      if ( (_QWORD)v77 )
      {
        LOBYTE(v16) = v16 & 0xEF;
      }
      else if ( (v16 & 0x10) != 0 )
      {
        getinf_flag(45, 16);
      }
      sub_22FC60(0x14u, &qword_8CC340);
      *(double *)a3.m128_u64 = reset_undo();
      v20 = 2;
      v14 = sub_23D480((__int64)qword_8CC600, 2, v47, v48, *(double *)a3.m128_u64);
      if ( v14 > 0 )
      {
        if ( v44 && (!v43 || (dword_8BA5B0 & 0x40000) == 0) )
          byte_8CC558 = 1;
        if ( (v16 & 0x20) == 0 )
        {
          v20 = 0;
          mark_builtin_widgets(0x4000, 0, 1);
          dword_8CC55C |= 2u;
        }
        if ( (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
        {
          sub_541EF0();
          if ( !(unsigned __int8)QT::QElapsedTimer::isValid((QT::QElapsedTimer *)&unk_8BA570) )
            QT::QElapsedTimer::start((QT::QElapsedTimer *)&unk_8BA570);
        }
        if ( v72 )
        {
          *(_QWORD *)&v73 = 0;
          *(double *)a3.m128_u64 = qfree(v72, (const char *)v20);
        }
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree(v76, (const char *)v20, *(double *)a3.m128_u64);
        }
        return (unsigned int)v14;
      }
      goto LABEL_13;
    }
    while ( 1 )
    {
      if ( !*((_BYTE *)v45 + 32) )
      {
        if ( !byte_8CC5ED && *((_BYTE *)v45 + 153) && *(char *)(dbg + 34) >= 0 )
          sub_221580(v45);
        if ( !(_QWORD)v77 || *((_QWORD *)v45 + 30) )
        {
          v46 = (_DWORD *)v72;
          a12 = *v45;
          v42 = v72 + 4 * v73;
          if ( v72 == v42 )
            goto LABEL_112;
          while ( (_DWORD)a12 != *v46 )
          {
            if ( (_DWORD *)v42 == ++v46 )
              goto LABEL_112;
          }
          if ( v46 == (_DWORD *)v42 )
          {
LABEL_112:
            if ( *((_BYTE *)v45 + 33) )
            {
              if ( *((_BYTE *)v45 + 32)
                || (v63 = qword_8CC600,
                    *(_DWORD *)qword_8CC600 = a12,
                    (int)sub_23D480((__int64)v63, 14, v42, (char *)a12, *(double *)a3.m128_u64) > 0) )
              {
                *((_BYTE *)v45 + 33) = 0;
              }
            }
            v54 = *((_QWORD *)v45 + 30) == 0;
            v45[9] = dword_8CC38C;
            if ( v54 )
            {
              v42 = xmmword_8CC438;
              v44 = 1;
              goto LABEL_71;
            }
            v43 = 1;
LABEL_117:
            v42 = xmmword_8CC438;
            goto LABEL_71;
          }
        }
        if ( *((_BYTE *)v45 + 33) )
          goto LABEL_117;
        if ( !*((_BYTE *)v45 + 32) )
        {
          v55 = qword_8CC600;
          *(_DWORD *)qword_8CC600 = *v45;
          if ( (int)sub_23D480((__int64)v55, 13, v42, (char *)a12, *(double *)a3.m128_u64) <= 0 )
            goto LABEL_117;
        }
        *((_BYTE *)v45 + 33) = 1;
        v42 = xmmword_8CC438;
      }
LABEL_71:
      v45 += 64;
      if ( v45 == (unsigned int *)(qword_8CC430 + (v42 << 8)) )
        goto LABEL_72;
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v27 + 32) )
      goto LABEL_52;
    v28 = *(_QWORD *)(v27 + 40);
    if ( v28 )
    {
      a12 = dword_8BA594;
      v29 = *(_QWORD *)(v28 + 32LL * dword_8BA594 + 8);
      if ( dbg )
      {
        if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
        {
          a1 = (__int64)qword_8CC600;
          if ( qword_8CC600 )
          {
            *(_QWORD *)qword_8CC600 = v29;
            a2 = 11;
            *(_QWORD *)(a1 + 8) = v28;
            *(_DWORD *)(a1 + 16) = a12;
            if ( (unsigned int)sub_23D480(a1, 11, v28, (char *)a12, *(double *)a3.m128_u64) != 1 )
              goto LABEL_107;
            v29 = *(_QWORD *)qword_8CC600;
          }
        }
      }
      if ( v29 != -1 )
        break;
    }
LABEL_107:
    if ( *(_QWORD *)(v27 + 240) )
    {
      a1 = (__int64)"Debugger: failed to get instruction pointer while single stepping\n";
      sub_169700(
        (int)"Debugger: failed to get instruction pointer while single stepping\n",
        a2,
        v28,
        a12,
        a13,
        a14,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        v68);
    }
LABEL_51:
    v26 = xmmword_8CC438;
LABEL_52:
    v27 += 256;
    if ( v27 == qword_8CC430 + (v26 << 8) )
      goto LABEL_53;
  }
  v74 = 0;
  a4 = 0;
  v75 = 0;
  if ( *(_QWORD *)(v27 + 224) == -1 )
    goto LABEL_40;
  a1 = get_bpt_kernel_interface(a1, a2);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &v74, *(_QWORD *)(v27 + 224));
  a2 = v75;
  if ( !(_QWORD)v75 )
    goto LABEL_39;
  a1 = v74;
  v33 = dbg;
  v34 = 0;
  v35 = 0;
  while ( 1 )
  {
    v36 = *(_QWORD *)(v74 + 8 * v35);
    v37 = *(_DWORD *)(v36 + 64);
    if ( (v37 & 8) == 0 && (*(char *)(v36 + 76) < 0 || (*(_BYTE *)(dbg + 35) & 2) != 0) )
      break;
    v35 = ++v34;
    if ( v34 >= (unsigned __int64)v75 )
      goto LABEL_39;
  }
  v51 = *(char **)(v27 + 224);
  if ( !*(_QWORD *)(v27 + 240) )
  {
    v69 = *(char **)(v27 + 224);
    v20 = v16 | 0x1001u;
    v68 = v36;
    v14 = sub_241C80(v27, v20, v36, v51, v30, dbg, a3, (__m128)0LL, a5, a6, v31, v32, a9, a10);
    if ( v14 > 0 )
    {
      v36 = v68;
      v51 = v69;
      v37 = *(_DWORD *)(v68 + 64);
      goto LABEL_102;
    }
LABEL_11:
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      *(double *)a3.m128_u64 = qfree(v74, (const char *)v20, v22);
    }
LABEL_13:
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      *(double *)a3.m128_u64 = qfree(v72, (const char *)v20, v22, *(double *)a3.m128_u64);
    }
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      *(double *)a3.m128_u64 = qfree(v76, (const char *)v20, v22, *(double *)a3.m128_u64);
    }
    goto LABEL_17;
  }
LABEL_102:
  if ( *(_DWORD *)(v36 + 44) != 3 )
    v51 = *(char **)(v36 + 56);
  v52 = 1;
  if ( v37 != 4 )
    v52 = *(int *)(v36 + 80);
  v70[0] = v51;
  a1 = (__int64)&v76;
  v53 = &v51[v52];
  a2 = (__int64)v70;
  v70[1] = v53;
  rangeset_t_add(&v76, v70, v36, v53, v30, v33);
LABEL_39:
  *(_QWORD *)&v75 = 0;
  *(_QWORD *)(v27 + 224) = -1;
LABEL_40:
  v38 = get_bpt_kernel_interface(a1, a2);
  a2 = (__int64)&v74;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v38 + 56LL))(v38, &v74, v29);
  a1 = v74;
  if ( !(_QWORD)v75 )
    goto LABEL_49;
  v39 = 0;
  v40 = 0;
  while ( 2 )
  {
    v22 = *(_QWORD *)(a1 + 8 * v40);
    if ( (*(_BYTE *)(v22 + 72) & 8) != 0 )
    {
      a12 = *(unsigned int *)(v22 + 76);
      if ( (a12 & 2) == 0 )
      {
        if ( *(_DWORD *)(v22 + 44) != 3 || *(_DWORD *)(v22 + 40) || (v49 = *(_QWORD *)(v27 + 248)) == 0 )
        {
LABEL_45:
          if ( *(_QWORD *)(v27 + 240) )
            goto LABEL_95;
          a2 = v29;
          if ( !sub_236AB0(v27, v29) )
          {
            v64 = v73;
            v65 = *(_DWORD *)v27;
            a2 = v72;
            if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
            {
              v72 = qvector_reserve(&v72, v72, v73 + 1, 4);
              a2 = v72;
              v64 = v73;
            }
            *(_DWORD *)(a2 + 4 * v64) = v65;
            *(_QWORD *)&v73 = v73 + 1;
            goto LABEL_100;
          }
          a1 = v74;
LABEL_48:
          v40 = ++v39;
          if ( v39 >= (unsigned __int64)v75 )
            goto LABEL_49;
          continue;
        }
        while ( 1 )
        {
          a2 = v49 + 24;
          if ( v22 == v49 + 24 )
            break;
          v49 = *(_QWORD *)(v49 + 8);
          if ( !v49 )
            goto LABEL_45;
        }
      }
      if ( (unsigned int)(*(_DWORD *)(v27 + 216) - 5) <= 2 && (*(_BYTE *)(v22 + 64) & 0xC) != 0 )
      {
        if ( (*(_BYTE *)(dbg + 32) & 0x10) == 0 || (a12 = (unsigned __int8)a12 & 0x80, (_DWORD)a12) )
        {
          if ( !*(_QWORD *)(v27 + 240) )
          {
            v68 = v22;
            v20 = v16 | 0x1001u;
            v21 = sub_241C80(v27, v20, v22, (char *)a12, a13, a14, a3, (__m128)0LL, a5, a6, a7, a8, a9, a10);
            v22 = v68;
            v14 = v21;
            if ( v21 <= 0 )
              goto LABEL_11;
          }
LABEL_95:
          if ( *(_DWORD *)(v22 + 44) != 3 )
            v29 = *(_QWORD *)(v22 + 56);
          v50 = 1;
          if ( *(_DWORD *)(v22 + 64) != 4 )
            v50 = *(int *)(v22 + 80);
          a2 = (__int64)v71;
          v71[0] = v29;
          v71[1] = v29 + v50;
          rangeset_t_add(&v76, v71, v22, a12, a13, a14);
LABEL_100:
          a1 = v74;
LABEL_49:
          v26 = xmmword_8CC438;
          if ( a1 )
          {
            *(_QWORD *)&v75 = 0;
            *(double *)a3.m128_u64 = qfree(a1, (const char *)a2, (_QWORD)xmmword_8CC438);
            goto LABEL_51;
          }
          goto LABEL_52;
        }
      }
      goto LABEL_48;
    }
    break;
  }
  if ( under_debugger )
    BUG();
  v62 = interr(40054, a2, v22, a12, *(double *)a3.m128_u64);
LABEL_159:
  v14 = v62;
LABEL_17:
  v23 = qword_8CC430;
  if ( (_QWORD)xmmword_8CC438 << 8 )
  {
    do
    {
      v24 = v23;
      v23 += 256;
      sub_235140(v24, 1, v22, *(double *)a3.m128_u64);
    }
    while ( v23 != qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8) );
  }
  return (unsigned int)v14;
}
