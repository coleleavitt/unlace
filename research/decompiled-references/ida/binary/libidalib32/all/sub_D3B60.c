__int64 __fastcall sub_D3B60(int a1)
{
  int v1; // r12d
  char v2; // dl
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rsi
  unsigned int v16; // ebx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 bpt_kernel_interface; // rax
  __int64 v29; // rdx
  __int64 v30; // r12
  char v31; // bl
  char v32; // bp
  _DWORD *v33; // rax
  unsigned int v34; // ecx
  _DWORD *v35; // rdx
  __int64 v36; // rax
  bool v37; // zf
  void *v38; // rdi
  void *v39; // rsi
  int v40; // eax
  void *v41; // rdi
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rsi
  __int64 v45; // [rsp+20h] [rbp-4B8h]
  __int128 v46; // [rsp+28h] [rbp-4B0h]
  __int64 v47; // [rsp+40h] [rbp-498h] BYREF
  __int128 v48; // [rsp+48h] [rbp-490h]
  __int64 v49; // [rsp+60h] [rbp-478h] BYREF
  __int128 v50; // [rsp+68h] [rbp-470h]
  __int64 v51; // [rsp+78h] [rbp-460h]
  int v52; // [rsp+80h] [rbp-458h]
  _BYTE v53[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v54; // [rsp+498h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v1 = dword_2515A4;
  if ( !dword_2515A4 )
    return (unsigned int)v1;
  v2 = byte_2515A1;
  if ( (qword_251330 & 0xFFFFFFF) != 7 )
  {
LABEL_21:
    v49 = 0;
    v51 = 0;
    v52 = -1;
    v45 = 0;
    v50 = 0;
    v46 = 0;
    if ( !v2 )
      goto LABEL_22;
LABEL_53:
    if ( byte_25159A )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( byte_2515A1 )
  {
    v49 = 0;
    v51 = 0;
    v52 = -1;
    v45 = 0;
    v50 = 0;
    *(_QWORD *)&v46 = 0;
    goto LABEL_53;
  }
  BYTE4(qword_251328) = 0;
  v4 = dword_24412C & 0x6000;
  if ( (_QWORD)xmmword_2512E8 )
  {
    v5 = qword_2512E0;
    v6 = 0;
    while ( *(_DWORD *)v5 != HIDWORD(qword_251330) )
    {
      ++v6;
      v5 += 56;
      if ( v6 == (_QWORD)xmmword_2512E8 )
      {
        if ( v4 != 0x2000 )
          goto LABEL_119;
LABEL_124:
        if ( (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
        {
          v1 = a1 & 8;
          if ( (a1 & 8) == 0 )
          {
            if ( (_QWORD)xmmword_2512E8 == v6 )
            {
              qsnprintf();
              v39 = sub_CFDA0;
            }
            else
            {
              qsnprintf();
              v39 = sub_D0070;
            }
            v40 = sub_8F730((__int64)v53, v39);
            if ( v40 )
            {
              if ( v40 == 1 )
              {
                BYTE4(qword_251328) = 0;
                v2 = byte_2515A1;
              }
              else
              {
                if ( v40 == -1 )
                  goto LABEL_17;
                if ( v40 <= 0 )
                {
LABEL_146:
                  v1 = v40;
                  goto LABEL_17;
                }
                v2 = byte_2515A1;
              }
            }
            else
            {
              BYTE4(qword_251328) = 1;
              v2 = byte_2515A1;
            }
            goto LABEL_21;
          }
        }
        goto LABEL_122;
      }
    }
    BYTE4(qword_251328) = (*(_BYTE *)(v5 + 4) & 2) != 0;
    if ( v4 != 0x2000 )
    {
      v7 = *(_DWORD *)(v5 + 4) & 1;
      goto LABEL_120;
    }
    if ( (_QWORD)xmmword_2512E8 == v6 )
      goto LABEL_124;
  }
  else
  {
    v6 = 0;
    if ( v4 == 0x2000 )
      goto LABEL_124;
LABEL_119:
    LOBYTE(v7) = 1;
LABEL_120:
    if ( v4 == 24576 && (_BYTE)v7 )
      goto LABEL_124;
  }
LABEL_122:
  v49 = 0;
  v51 = 0;
  v52 = -1;
  v45 = 0;
  v50 = 0;
  v46 = 0;
LABEL_22:
  if ( byte_25159A )
    goto LABEL_55;
  v11 = xmmword_251418;
  v12 = qword_251410;
  if ( !(232LL * (_QWORD)xmmword_251418) )
  {
LABEL_54:
    bpt_kernel_interface = get_bpt_kernel_interface();
    v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 208LL))(
           bpt_kernel_interface,
           &v49);
    if ( v1 < 0 )
      goto LABEL_13;
LABEL_55:
    v29 = xmmword_251418;
    v30 = qword_251410;
    v31 = 0;
    v32 = 0;
    if ( !(232LL * (_QWORD)xmmword_251418) )
    {
LABEL_72:
      qword_2511A0 = 0;
      if ( (_QWORD)v50 )
      {
        LOBYTE(a1) = a1 & 0xEF;
      }
      else if ( (a1 & 0x10) != 0 && !(unsigned __int8)getinf_flag() && byte_251038 )
      {
        TProgram::switch_screen((TProgram *)((char *)&dword_0 + 1), 16);
        TView::enableCommand((TView *)unk_24DF86, 0x10u);
      }
      sub_C0300();
      reset_undo();
      v1 = sub_CC780((__int64)qword_2515B0, 2);
      if ( v1 <= 0 )
        goto LABEL_13;
      if ( v32 && (!v31 || (dword_24412C & 0x40000) == 0) )
        byte_251534 = 1;
      if ( (a1 & 0x20) == 0 )
      {
        mark_builtin_widgets();
        dword_251538 |= 2u;
      }
      if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        sub_19F870();
      if ( v45 )
        qfree();
      if ( v49 )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      if ( !*(_BYTE *)(v30 + 32) )
      {
        if ( !byte_2515A1 && *(_BYTE *)(v30 + 153) && *(char *)(dbg + 34LL) >= 0 )
          sub_B19C0((unsigned int *)v30);
        if ( !(_QWORD)v50 || *(_QWORD *)(v30 + 216) )
        {
          v33 = (_DWORD *)v45;
          v34 = *(_DWORD *)v30;
          v35 = (_DWORD *)(v45 + 4 * v46);
          if ( (_DWORD *)v45 == v35 )
            goto LABEL_105;
          while ( v34 != *v33 )
          {
            if ( v35 == ++v33 )
              goto LABEL_105;
          }
          if ( v35 == v33 )
          {
LABEL_105:
            if ( *(_BYTE *)(v30 + 33) )
            {
              if ( *(_BYTE *)(v30 + 32)
                || (v41 = qword_2515B0, *(_DWORD *)qword_2515B0 = v34, (int)sub_CC780((__int64)v41, 14) > 0) )
              {
                *(_BYTE *)(v30 + 33) = 0;
              }
            }
            v37 = *(_QWORD *)(v30 + 216) == 0;
            *(_DWORD *)(v30 + 36) = dword_251360;
            if ( v37 )
            {
              v29 = xmmword_251418;
              v32 = 1;
              goto LABEL_71;
            }
            v31 = 1;
LABEL_110:
            v29 = xmmword_251418;
            goto LABEL_71;
          }
        }
        if ( *(_BYTE *)(v30 + 33) )
          goto LABEL_110;
        if ( !*(_BYTE *)(v30 + 32) )
        {
          v38 = qword_2515B0;
          *(_DWORD *)qword_2515B0 = *(_DWORD *)v30;
          if ( (int)sub_CC780((__int64)v38, 13) <= 0 )
            goto LABEL_110;
        }
        *(_BYTE *)(v30 + 33) = 1;
        v29 = xmmword_251418;
      }
LABEL_71:
      v30 += 232;
      if ( v30 == qword_251410 + 232 * v29 )
        goto LABEL_72;
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v12 + 32) )
      goto LABEL_52;
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 )
    {
      v14 = dword_24411C;
      v15 = *(_QWORD *)(v13 + 32LL * dword_24411C + 8);
      v16 = v15;
      if ( dbg )
      {
        if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
        {
          v17 = qword_2515B0;
          if ( qword_2515B0 )
          {
            *(_DWORD *)qword_2515B0 = v15;
            v17[1] = v13;
            *((_DWORD *)v17 + 4) = v14;
            if ( (unsigned int)sub_CC780((__int64)v17, 11) != 1 )
              goto LABEL_100;
            v16 = *(_DWORD *)qword_2515B0;
          }
        }
      }
      if ( v16 != -1 )
        break;
    }
LABEL_100:
    if ( *(_QWORD *)(v12 + 216) )
      sub_8F660((__int64)"Debugger: failed to get instruction pointer while single stepping\n");
LABEL_51:
    v11 = xmmword_251418;
LABEL_52:
    v12 += 232;
    if ( v12 == qword_251410 + 232 * v11 )
      goto LABEL_53;
  }
  v47 = 0;
  v48 = 0;
  if ( *(_DWORD *)(v12 + 204) != -1 )
  {
    v18 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v18 + 56LL))(
      v18,
      &v47,
      *(unsigned int *)(v12 + 204));
    if ( (_QWORD)v48 )
    {
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v47 + 8 * v20);
        if ( (*(_DWORD *)(v21 + 56) & 8) == 0 && (*(char *)(v21 + 68) < 0 || (*(_BYTE *)(dbg + 35LL) & 2) != 0) )
          break;
        v20 = ++v19;
        if ( v19 >= (unsigned __int64)v48 )
          goto LABEL_39;
      }
      if ( !*(_QWORD *)(v12 + 216) )
      {
        v1 = sub_D3340(v12, a1 | 0x1001u, 0.0);
        if ( v1 <= 0 )
          goto LABEL_11;
      }
      rangeset_t_add();
    }
LABEL_39:
    *(_QWORD *)&v48 = 0;
    *(_DWORD *)(v12 + 204) = -1;
  }
  v22 = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, &v47, v16);
  v23 = v47;
  if ( !(_QWORD)v48 )
    goto LABEL_49;
  v24 = 0;
  v25 = 0;
  while ( 2 )
  {
    v26 = *(_QWORD *)(v23 + 8 * v25);
    if ( (*(_BYTE *)(v26 + 64) & 8) == 0 )
    {
      if ( under_debugger )
        BUG();
      v40 = interr();
      goto LABEL_146;
    }
    v27 = *(_DWORD *)(v26 + 68);
    if ( (v27 & 2) == 0 )
    {
      if ( *(_DWORD *)(v26 + 40) != 3 || *(_DWORD *)(v26 + 36) || (v36 = *(_QWORD *)(v12 + 224)) == 0 )
      {
LABEL_45:
        if ( *(_QWORD *)(v12 + 216) )
          goto LABEL_96;
        if ( !sub_C7030(v12, v16) )
        {
          v42 = v46;
          v43 = *(_DWORD *)v12;
          v44 = v45;
          if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
          {
            v45 = qvector_reserve();
            v44 = v45;
            v42 = v46;
          }
          *(_DWORD *)(v44 + 4 * v42) = v43;
          *(_QWORD *)&v46 = v46 + 1;
LABEL_97:
          v23 = v47;
LABEL_49:
          v11 = xmmword_251418;
          if ( v23 )
          {
            *(_QWORD *)&v48 = 0;
            qfree();
            goto LABEL_51;
          }
          goto LABEL_52;
        }
        v23 = v47;
        goto LABEL_48;
      }
      while ( v26 != v36 + 24 )
      {
        v36 = *(_QWORD *)(v36 + 8);
        if ( !v36 )
          goto LABEL_45;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(v12 + 200) - 5) > 2
      || (*(_BYTE *)(v26 + 56) & 0xC) == 0
      || (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 && (v27 & 0x80) == 0 )
    {
LABEL_48:
      v25 = ++v24;
      if ( v24 >= (unsigned __int64)v48 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  if ( *(_QWORD *)(v12 + 216) || (v1 = sub_D3340(v12, a1 | 0x1001u, 0.0), v1 > 0) )
  {
LABEL_96:
    rangeset_t_add();
    goto LABEL_97;
  }
LABEL_11:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
LABEL_13:
  if ( v45 )
    qfree();
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
LABEL_17:
  v8 = qword_251410;
  if ( 232LL * (_QWORD)xmmword_251418 )
  {
    do
    {
      v9 = v8;
      v8 += 232;
      sub_C5200(v9, 1);
    }
    while ( v8 != qword_251410 + 232LL * (_QWORD)xmmword_251418 );
  }
  return (unsigned int)v1;
}

