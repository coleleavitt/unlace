__int64 __fastcall sub_D50A0(int a1)
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
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 bpt_kernel_interface; // rax
  __int64 v28; // rdx
  char v29; // bl
  char v30; // bp
  __int64 v31; // r12
  _DWORD *v32; // rax
  unsigned int v33; // ecx
  _DWORD *v34; // rdx
  __int64 v35; // rax
  bool v36; // zf
  void *v37; // rdi
  void *v38; // rsi
  int v39; // eax
  void *v40; // rdi
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rsi
  __int64 v44; // [rsp+30h] [rbp-4B8h]
  __int128 v45; // [rsp+38h] [rbp-4B0h]
  __int64 v46; // [rsp+50h] [rbp-498h] BYREF
  __int128 v47; // [rsp+58h] [rbp-490h]
  __int64 v48; // [rsp+70h] [rbp-478h] BYREF
  __int128 v49; // [rsp+78h] [rbp-470h]
  __int64 v50; // [rsp+88h] [rbp-460h]
  int v51; // [rsp+90h] [rbp-458h]
  _BYTE v52[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v53; // [rsp+4A8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v1 = dword_25274C;
  if ( !dword_25274C )
    return (unsigned int)v1;
  v2 = byte_252749;
  if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 7 )
  {
LABEL_21:
    v48 = 0;
    v50 = 0;
    v51 = -1;
    v44 = 0;
    v49 = 0;
    v45 = 0;
    if ( !v2 )
      goto LABEL_22;
LABEL_53:
    if ( byte_252742 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( byte_252749 )
  {
    v48 = 0;
    v50 = 0;
    v51 = -1;
    v44 = 0;
    v49 = 0;
    *(_QWORD *)&v45 = 0;
    goto LABEL_53;
  }
  LOBYTE(qword_2524B0) = 0;
  v4 = dword_245190 & 0x6000;
  if ( (_QWORD)xmmword_252458 )
  {
    v5 = qword_252450;
    v6 = 0;
    while ( *(_DWORD *)v5 != (_DWORD)xmmword_2524B8 )
    {
      ++v6;
      v5 += 56;
      if ( v6 == (_QWORD)xmmword_252458 )
      {
        if ( v4 != 0x2000 )
          goto LABEL_119;
LABEL_124:
        if ( (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
        {
          v1 = a1 & 8;
          if ( (a1 & 8) == 0 )
          {
            if ( (_QWORD)xmmword_252458 == v6 )
            {
              qsnprintf();
              v38 = sub_D1370;
            }
            else
            {
              qsnprintf();
              v38 = sub_D1650;
            }
            v39 = sub_8F810((__int64)v52, v38);
            if ( v39 )
            {
              if ( v39 == 1 )
              {
                LOBYTE(qword_2524B0) = 0;
                v2 = byte_252749;
              }
              else
              {
                if ( v39 == -1 )
                  goto LABEL_17;
                if ( v39 <= 0 )
                {
LABEL_146:
                  v1 = v39;
                  goto LABEL_17;
                }
                v2 = byte_252749;
              }
            }
            else
            {
              LOBYTE(qword_2524B0) = 1;
              v2 = byte_252749;
            }
            goto LABEL_21;
          }
        }
        goto LABEL_122;
      }
    }
    LOBYTE(qword_2524B0) = (*(_BYTE *)(v5 + 4) & 2) != 0;
    if ( v4 != 0x2000 )
    {
      v7 = *(_DWORD *)(v5 + 4) & 1;
      goto LABEL_120;
    }
    if ( (_QWORD)xmmword_252458 == v6 )
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
  v48 = 0;
  v50 = 0;
  v51 = -1;
  v44 = 0;
  v49 = 0;
  v45 = 0;
LABEL_22:
  if ( byte_252742 )
    goto LABEL_55;
  v11 = xmmword_252598;
  v12 = qword_252590;
  if ( !((_QWORD)xmmword_252598 << 8) )
  {
LABEL_54:
    bpt_kernel_interface = get_bpt_kernel_interface();
    v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)bpt_kernel_interface + 208LL))(
           bpt_kernel_interface,
           &v48);
    if ( v1 < 0 )
      goto LABEL_13;
LABEL_55:
    v28 = xmmword_252598;
    v29 = 0;
    v30 = 0;
    v31 = qword_252590;
    if ( !((_QWORD)xmmword_252598 << 8) )
    {
LABEL_72:
      qword_252280 = 0;
      if ( (_QWORD)v49 )
      {
        LOBYTE(a1) = a1 & 0xEF;
      }
      else if ( (a1 & 0x10) != 0 && !(unsigned __int8)getinf_flag() && byte_252118 )
      {
        TProgram::switch_screen((TProgram *)((char *)&dword_0 + 1), 16);
        TView::enableCommand((TView *)unk_24EFE6, 0x10u);
      }
      sub_C14A0();
      reset_undo();
      v1 = sub_CDCF0((__int64)qword_252758, 2);
      if ( v1 <= 0 )
        goto LABEL_13;
      if ( v30 && (!v29 || (dword_245190 & 0x40000) == 0) )
        byte_2526B8 = 1;
      if ( (a1 & 0x20) == 0 )
      {
        mark_builtin_widgets();
        dword_2526BC |= 2u;
      }
      if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
        sub_1A0470();
      if ( v44 )
        qfree();
      if ( v48 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      if ( !*(_BYTE *)(v31 + 32) )
      {
        if ( !byte_252749 && *(_BYTE *)(v31 + 153) && *(char *)(dbg + 34LL) >= 0 )
          sub_B1F80((unsigned int *)v31);
        if ( !(_QWORD)v49 || *(_QWORD *)(v31 + 240) )
        {
          v32 = (_DWORD *)v44;
          v33 = *(_DWORD *)v31;
          v34 = (_DWORD *)(v44 + 4 * v45);
          if ( (_DWORD *)v44 == v34 )
            goto LABEL_105;
          while ( v33 != *v32 )
          {
            if ( v34 == ++v32 )
              goto LABEL_105;
          }
          if ( v34 == v32 )
          {
LABEL_105:
            if ( *(_BYTE *)(v31 + 33) )
            {
              if ( *(_BYTE *)(v31 + 32)
                || (v40 = qword_252758, *(_DWORD *)qword_252758 = v33, (int)sub_CDCF0((__int64)v40, 14) > 0) )
              {
                *(_BYTE *)(v31 + 33) = 0;
              }
            }
            v36 = *(_QWORD *)(v31 + 240) == 0;
            *(_DWORD *)(v31 + 36) = dword_2524EC;
            if ( v36 )
            {
              v28 = xmmword_252598;
              v30 = 1;
              goto LABEL_71;
            }
            v29 = 1;
LABEL_110:
            v28 = xmmword_252598;
            goto LABEL_71;
          }
        }
        if ( *(_BYTE *)(v31 + 33) )
          goto LABEL_110;
        if ( !*(_BYTE *)(v31 + 32) )
        {
          v37 = qword_252758;
          *(_DWORD *)qword_252758 = *(_DWORD *)v31;
          if ( (int)sub_CDCF0((__int64)v37, 13) <= 0 )
            goto LABEL_110;
        }
        *(_BYTE *)(v31 + 33) = 1;
        v28 = xmmword_252598;
      }
LABEL_71:
      v31 += 256;
      if ( v31 == qword_252590 + (v28 << 8) )
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
      v14 = dword_245174;
      v15 = *(_QWORD *)(v13 + 32LL * dword_245174 + 8);
      if ( dbg )
      {
        if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
        {
          v16 = qword_252758;
          if ( qword_252758 )
          {
            *(_QWORD *)qword_252758 = v15;
            v16[1] = v13;
            *((_DWORD *)v16 + 4) = v14;
            if ( (unsigned int)sub_CDCF0((__int64)v16, 11) != 1 )
              goto LABEL_100;
            v15 = *(_QWORD *)qword_252758;
          }
        }
      }
      if ( v15 != -1 )
        break;
    }
LABEL_100:
    if ( *(_QWORD *)(v12 + 240) )
      sub_8F740((__int64)"Debugger: failed to get instruction pointer while single stepping\n");
LABEL_51:
    v11 = xmmword_252598;
LABEL_52:
    v12 += 256;
    if ( v12 == qword_252590 + (v11 << 8) )
      goto LABEL_53;
  }
  v46 = 0;
  v47 = 0;
  if ( *(_QWORD *)(v12 + 224) != -1 )
  {
    v17 = get_bpt_kernel_interface();
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, &v46, *(_QWORD *)(v12 + 224));
    if ( (_QWORD)v47 )
    {
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v46 + 8 * v19);
        if ( (*(_DWORD *)(v20 + 64) & 8) == 0 && (*(char *)(v20 + 76) < 0 || (*(_BYTE *)(dbg + 35LL) & 2) != 0) )
          break;
        v19 = ++v18;
        if ( v18 >= (unsigned __int64)v47 )
          goto LABEL_39;
      }
      if ( !*(_QWORD *)(v12 + 240) )
      {
        v1 = sub_D4880(v12, a1 | 0x1001u);
        if ( v1 <= 0 )
          goto LABEL_11;
      }
      rangeset_t_add();
    }
LABEL_39:
    *(_QWORD *)&v47 = 0;
    *(_QWORD *)(v12 + 224) = -1;
  }
  v21 = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v21 + 56LL))(v21, &v46, v15);
  v22 = v46;
  if ( !(_QWORD)v47 )
    goto LABEL_49;
  v23 = 0;
  v24 = 0;
  while ( 2 )
  {
    v25 = *(_QWORD *)(v22 + 8 * v24);
    if ( (*(_BYTE *)(v25 + 72) & 8) == 0 )
    {
      if ( under_debugger )
        BUG();
      v39 = interr();
      goto LABEL_146;
    }
    v26 = *(_DWORD *)(v25 + 76);
    if ( (v26 & 2) == 0 )
    {
      if ( *(_DWORD *)(v25 + 44) != 3 || *(_DWORD *)(v25 + 40) || (v35 = *(_QWORD *)(v12 + 248)) == 0 )
      {
LABEL_45:
        if ( *(_QWORD *)(v12 + 240) )
          goto LABEL_96;
        if ( !sub_C84B0(v12, v15) )
        {
          v41 = v45;
          v42 = *(_DWORD *)v12;
          v43 = v44;
          if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
          {
            v44 = qvector_reserve();
            v43 = v44;
            v41 = v45;
          }
          *(_DWORD *)(v43 + 4 * v41) = v42;
          *(_QWORD *)&v45 = v45 + 1;
LABEL_97:
          v22 = v46;
LABEL_49:
          v11 = xmmword_252598;
          if ( v22 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
            goto LABEL_51;
          }
          goto LABEL_52;
        }
        v22 = v46;
        goto LABEL_48;
      }
      while ( v25 != v35 + 24 )
      {
        v35 = *(_QWORD *)(v35 + 8);
        if ( !v35 )
          goto LABEL_45;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(v12 + 216) - 5) > 2
      || (*(_BYTE *)(v25 + 64) & 0xC) == 0
      || (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 && (v26 & 0x80) == 0 )
    {
LABEL_48:
      v24 = ++v23;
      if ( v23 >= (unsigned __int64)v47 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  if ( *(_QWORD *)(v12 + 240) || (v1 = sub_D4880(v12, a1 | 0x1001u), v1 > 0) )
  {
LABEL_96:
    rangeset_t_add();
    goto LABEL_97;
  }
LABEL_11:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
LABEL_13:
  if ( v44 )
    qfree();
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
LABEL_17:
  v8 = qword_252590;
  if ( (_QWORD)xmmword_252598 << 8 )
  {
    do
    {
      v9 = v8;
      v8 += 256;
      sub_C6660(v9, 1);
    }
    while ( v8 != qword_252590 + ((_QWORD)xmmword_252598 << 8) );
  }
  return (unsigned int)v1;
}

