void __fastcall sub_7AF7A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // r12
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v8; // r13
  int v9; // r14d
  int v10; // ebp
  char v11; // al
  int v12; // eax
  char v13; // dl
  _QWORD *v14; // r12
  __int64 v15; // rsi
  bool v16; // r14
  __int64 v17; // rsi
  char v18; // al
  char v19; // r13
  char v20; // bp
  char v21; // di
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  char v27; // dl
  char v28; // si
  char v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  char v33; // al
  char v34; // al
  char v35; // r12
  _QWORD *v36; // rbp
  __int64 v37; // rax
  unsigned __int64 *v38; // rdi
  __int64 v39; // rax
  int v40; // edx
  bool v41; // dl
  char v42; // al
  unsigned __int8 v43; // r13
  char v44; // r12
  char v45; // r12
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 *v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int8 v53; // dl
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rbp
  __int64 (__fastcall *v57)(__int64); // rax
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // rbp
  void (*v62)(); // r14
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rax
  _QWORD *v67; // rax
  unsigned __int8 (__fastcall *v68)(__int64, __int64); // r14
  unsigned __int8 (__fastcall *v69)(__int64, __int64); // r13
  __int64 v70; // rax
  unsigned __int64 *v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  __int64 i; // rdi
  __int64 v75; // rdi
  char v76; // al
  __int64 v77; // rbp
  bool v78; // bp
  __int64 v79; // rdi
  __int64 v80; // r14
  _QWORD *v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // r14
  __int64 *v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbp
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  __int64 *v90; // [rsp+0h] [rbp-58h]
  bool v91; // [rsp+0h] [rbp-58h]
  bool v92; // [rsp+0h] [rbp-58h]
  unsigned __int8 v93; // [rsp+0h] [rbp-58h]
  char v94; // [rsp+0h] [rbp-58h]
  bool v95; // [rsp+0h] [rbp-58h]
  unsigned __int64 *v96; // [rsp+0h] [rbp-58h]
  _QWORD *v97; // [rsp+8h] [rbp-50h]
  __int64 v98; // [rsp+8h] [rbp-50h]
  unsigned __int64 v99; // [rsp+10h] [rbp-48h] BYREF
  __int64 v100[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v4 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v4 - 47 > 2
      && v4 != 30
      && ((unsigned int)v4 - 56 > 4 || ((*(_BYTE *)(v3 + 73) >> 5) & 0xFD) == 1) )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) &= ~0x20u;
    }
  }
  if ( (*(_WORD *)(v3 + 30) & 0x180) != 0 || *(char *)(v3 + 28) < 0 )
    return;
  v5 = 0;
  v6 = *(_BYTE *)(v3 + 28) & 0x7F;
  if ( v6 == 69 )
  {
    v5 = v3;
    v3 = *(_QWORD *)(v3 + 48);
    v6 = *(_BYTE *)(v3 + 28) & 0x7F;
  }
  v7 = v6;
  if ( (unsigned int)v6 - 16 > 0x3E )
  {
    v10 = 0;
    if ( (*(_BYTE *)(a1 + 74) & 2) != 0 )
      goto LABEL_29;
    v8 = v3;
    goto LABEL_15;
  }
  if ( ((v6 + 54) & 0x7Fu) > 1 && (unsigned int)v6 - 51 > 1 )
  {
    if ( v6 == 69 )
    {
      v8 = *(_QWORD *)(v3 + 48);
    }
    else
    {
      v7 = (unsigned int)v6 - 33;
      if ( (unsigned int)v7 <= 3 )
      {
        v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
        v65 = v64;
        if ( (*(_BYTE *)(v64 + 82) & 0xC) != 0
          || (*(_BYTE *)(v64 + 28) & 0x7F) != 0x24
          && (v66 = sub_798D40(v64), v7 = v65, (unsigned int)sub_6BE4E0(v66, v65)) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          **(_BYTE **)(a1 + 128) &= ~0x80u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 4u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= 0xF07Fu;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= 0xFFFC1FFF;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
          v7 = *(_QWORD *)(a1 + 104);
          sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
        }
      }
      v8 = v3;
    }
  }
  else
  {
    v8 = sub_77AA60(v3);
    if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x45 )
      v8 = *(_QWORD *)(v8 + 48);
  }
  if ( (*(_BYTE *)(a1 + 74) & 2) == 0 )
  {
LABEL_15:
    if ( (*(_BYTE *)(v3 + 29) & 2) != 0 )
    {
      v60 = sub_798D90(a1);
      v61 = v60;
      if ( v60 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        v62 = *(void (**)())(*(_QWORD *)v60 + 32LL);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        if ( v62 != nullsub_66 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 88LL);
          ((void (__fastcall *)(__int64, __int64, __int64))v62)(v61, v7, v3);
        }
      }
    }
  }
  if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0x24 )
  {
    v10 = 0;
    v11 = *(_BYTE *)(v8 + 28) & 0x7F;
LABEL_181:
    if ( v11 != 36 )
      goto LABEL_29;
    goto LABEL_182;
  }
  if ( (*(_BYTE *)(v3 + 87) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(v3 + 29) & 2) == 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      **(_BYTE **)(a1 + 128) |= 1u;
      v56 = *(_QWORD *)(sub_798D40(a1) + 17288);
      v57 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL);
      v58 = v57 == sub_7A0C60 ? sub_777D70(v3) : v57(v3);
      if ( (*(_BYTE *)(v58 + 82) & 0x40) == 0 && (*(_BYTE *)(v3 + 83) & 2) == 0
        || (v68 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 776LL),
            v7 = sub_798D60(a1),
            !v68(v56, v7)) )
      {
        v7 = *(_QWORD *)(a1 + 104);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
      }
    }
    v9 = 2;
    v10 = 0;
    if ( !(unsigned int)sub_7803B0(v3) )
    {
      if ( sub_7A2C50(v3) )
      {
        v7 = *(_QWORD *)(a1 + 104);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 0x80u;
      }
      if ( (*(_BYTE *)(v3 + 84) & 3) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 8u;
      }
      if ( (*(_BYTE *)(v3 + 83) & 2) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 2u;
      }
      v9 = 3;
      v10 = 1;
    }
    if ( !v5 )
    {
      v7 = (__int64)&v99;
      if ( sub_7A6500(v3, &v99) )
      {
        if ( (v99 & 1) != 0 )
        {
          v7 = *(_QWORD *)(a1 + 104);
          sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 2u;
        }
        v10 = v9;
      }
      else
      {
        v7 = (__int64)v100;
        v10 |= 4 * (unsigned __int8)sub_7A6540(v3, v100);
      }
    }
    if ( *(char *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) >= 0 )
    {
      if ( !sub_7A2C50(v3) )
      {
        v52 = sub_777D70(v3);
        v53 = *(_BYTE *)(v52 + 87);
        v54 = (v53 & 0x40) != 0 ? *(_QWORD *)(v52 + 16LL * ((v53 & 0x20) != 0) + 176) & 3LL : v53 >> 7;
        if ( v54 != 1 )
          goto LABEL_24;
      }
    }
    else if ( (*(_BYTE *)(v3 + 29) & 2) != 0 )
    {
LABEL_24:
      v11 = *(_BYTE *)(v8 + 28) & 0x7F;
      goto LABEL_181;
    }
    v7 = *(_QWORD *)(a1 + 104);
    sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
    **(_BYTE **)(a1 + 128) &= ~0x80u;
    goto LABEL_24;
  }
  v10 = 0;
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x24 )
    goto LABEL_159;
LABEL_182:
  if ( (*(_BYTE *)(v8 + 84) & 3) != 0 )
  {
    v7 = (__int64)v100;
    if ( !(unsigned __int8)sub_7A63A0(v8, v100) )
    {
      v7 = *(_QWORD *)(a1 + 104);
      sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 1u;
    }
  }
  if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x24 )
  {
LABEL_159:
    if ( sub_7A5660((_QWORD *)v3) )
    {
      if ( (v10 |= 8u,
            v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 120) + 8LL * sub_780450(v3)) + 48LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            (unsigned int)*(unsigned __int8 *)(v50 + 16) - 42 > 1)
        && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1
         || (v50 = sub_B0D320(v50)) == 0)
        || (v51 = sub_6B2590(v50), (v51 & 1) != 0)
        || (byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        sub_6E77B0((unsigned __int64 *)(v7 + 96), v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 4u;
      }
    }
    v41 = sub_7A57A0((_QWORD *)v3, v7);
    v42 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( v41 )
    {
      v10 |= 0x10u;
      if ( v42 != 35 || (v43 = (*(_BYTE *)(v3 + 29) >> 5) & 3, sub_780F20(v3)) )
      {
LABEL_163:
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v44 = *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL);
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) = (((unsigned __int8)(~(_BYTE)v10 | v44 & 0x3F)
                                                  & (unsigned __int8)(*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7)
                                                  & 0x3F) << 7)
                                                | *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0xE07F;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v45 = *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL);
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) = (((unsigned __int8)(~(_BYTE)v10 | v45 & 0x3F)
                                                   & (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 13)
                                                   & 0x3F) << 13)
                                                 | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0xFFF81FFF;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) |= v10 & 0x3F;
        if ( (*(_BYTE *)(v3 + 29) & 2) == 0 )
        {
          if ( (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104)),
                **(_BYTE **)(a1 + 128) = (2 * ((v10 | (**(_BYTE **)(a1 + 128) >> 1)) & 0x3F))
                                       | **(_BYTE **)(a1 + 128) & 0x81,
                v59 = *(_QWORD *)(sub_798D40(a1) + 17288),
                (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3) + 82) & 0x40) == 0)
            && (*(_BYTE *)(v3 + 83) & 2) == 0
            && v10 != 16
            || (v69 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 776LL),
                v70 = sub_798D60(a1),
                !v69(v59, v70)) )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
          }
        }
        if ( (*(_BYTE *)(v3 + 83) & 0x10) == 0 )
          sub_7AA2F0(a1, (_BYTE *)v3, v10);
        return;
      }
    }
    else
    {
      if ( v42 != 35 )
        goto LABEL_178;
      v43 = (*(_BYTE *)(v3 + 29) >> 5) & 3;
      if ( sub_780F20(v3) )
        goto LABEL_178;
    }
    v97 = (_QWORD *)sub_798D40(a1);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v46 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v46 + 56) & 4) != 0 )
      sub_7A2D50(v46 + 40, (__int64)v97);
    if ( !v5 )
      v5 = v3;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5) )
    {
      v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      v48 = *(__int64 **)(v46 + 40);
      v49 = *(__int64 **)(v46 + 48);
      if ( v48 != v49 )
      {
        while ( v47 != (*v48 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          if ( v49 == ++v48 )
            goto LABEL_178;
        }
        *v48 = v5 | v43;
      }
    }
    else
    {
      v100[0] = v5 | v43;
      sub_7A94A0((unsigned __int64 *)(v46 + 40), v100, v97);
    }
LABEL_178:
    if ( !v10 )
      return;
    goto LABEL_163;
  }
  if ( !(unsigned int)sub_7803B0(v8) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 8u;
  }
LABEL_29:
  v12 = *(_BYTE *)(v3 + 28) & 0x7F;
  v7 = (unsigned int)(v12 - 33);
  v13 = *(_BYTE *)(v3 + 28) & 0x7F;
  if ( (unsigned int)v7 <= 3 )
  {
    if ( v13 == 34 )
      v10 |= 0x20u;
    goto LABEL_159;
  }
  if ( (unsigned int)(v12 - 47) <= 2 )
  {
    v14 = (_QWORD *)sub_798D40(a1);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x40) != 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
    }
    v15 = *(_QWORD *)(a1 + 104);
    if ( (*(_BYTE *)(v3 + 68) & 1) != 0 )
    {
      v55 = *(_QWORD *)(v3 + 40);
      if ( v55 <= 7 && !(_DWORD)v55 )
      {
        sub_6E77B0((unsigned __int64 *)(v15 + 96), v15);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 2) != 0
          && !(unsigned __int8)sub_7818A0(v3)
          && *(_BYTE *)(v14[270] + 204LL) > 0x2Fu )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
        }
        return;
      }
    }
    sub_6E77B0((unsigned __int64 *)(v15 + 96), v15);
    if ( *(char *)(*(_QWORD *)(a1 + 128) + 1LL) < 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
    }
    if ( ((*(_BYTE *)(v3 + 29) >> 5) & 3u) - 1 <= 1 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      **(_BYTE **)(a1 + 128) &= ~0x80u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x40u;
    }
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 1) != 0
      || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104)),
          (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 2) != 0) )
    {
      v16 = 0;
    }
    else
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v16 = (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 4) == 0;
    }
    v17 = *(_QWORD *)(a1 + 104);
    v18 = (*(_BYTE *)(v3 + 29) >> 5) & 3;
    switch ( v18 )
    {
      case 1:
        sub_6E77B0((unsigned __int64 *)(v17 + 96), v17);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 2u;
        v17 = *(_QWORD *)(a1 + 104);
        break;
      case 2:
        sub_6E77B0((unsigned __int64 *)(v17 + 96), v17);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 1u;
        v17 = *(_QWORD *)(a1 + 104);
        break;
      case 0:
        sub_6E77B0((unsigned __int64 *)(v17 + 96), v17);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 4u;
        v17 = *(_QWORD *)(a1 + 104);
        break;
    }
    sub_6E77B0((unsigned __int64 *)(v17 + 96), v17);
    v19 = *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v20 = *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (v19 & 1) + ((v20 & 2) != 0) + ((*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 4) != 0) > 1 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
    }
    if ( (*(_BYTE *)(v3 + 68) & 2) != 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 8u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x40u;
    }
    if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
    {
      if ( !(unsigned __int8)sub_781720(v3) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 0x10u;
      }
      if ( *(_BYTE *)(a1 + 73) >> 5 == 2 && v16 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 2u;
      }
    }
    v99 = sub_6CB5B0(v14, *(_QWORD *)(v3 + 48));
    v21 = sub_B17200(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL));
    v22 = *(_QWORD *)&byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL];
    v23 = (v22 >> 3) & 1;
    if ( v21 )
    {
      if ( !(_BYTE)v23 )
      {
LABEL_241:
        if ( (*(_BYTE *)(v14[270] + 107LL) & 4) == 0 )
          *(_BYTE *)(a1 + 75) |= 2u;
        goto LABEL_57;
      }
      v24 = *(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL))
          | ((unsigned __int8)v22 | (unsigned __int8)v99) & 7;
    }
    else if ( !(_BYTE)v23
           || (v24 = *(__int64 *)((char *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL))
                   | ((unsigned __int8)v22 | (unsigned __int8)v99) & 7,
               ((v24 >> 4) & 3) != 2) )
    {
      if ( !(unsigned __int8)sub_B19EA0(&v99, v14) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
      }
LABEL_57:
      if ( (*(_BYTE *)(v3 + 29) & 1) == 0 )
        goto LABEL_58;
      v71 = sub_79A2B0(v3);
      v72 = *v71;
      v73 = *v71 + 8LL * *((unsigned int *)v71 + 2);
      if ( v72 < v73 )
      {
        while ( *(_WORD *)(*(_QWORD *)v72 + 32LL) != 207 )
        {
          v72 += 8LL;
          if ( v73 == v72 )
            goto LABEL_58;
        }
      }
      else
      {
        if ( v72 == v73 )
          goto LABEL_58;
        while ( *(_WORD *)(*(_QWORD *)v73 + 32LL) != 207 )
        {
          v73 += 8LL;
          if ( v72 == v73 )
            goto LABEL_58;
        }
      }
      if ( v72 != v73 )
        *(_BYTE *)(a1 + 76) |= 4u;
LABEL_58:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 <= 1 )
      {
        if ( (~*(_BYTE *)(v3 + 68) & 0xC) == 0 || (*(_BYTE *)(v3 + 68) & 0xC) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 1u;
        }
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 43 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 4u;
        }
      }
      v27 = *(_BYTE *)(v3 + 68);
      v28 = v27 & 0xC;
      if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
      {
        if ( (v27 & 2) == 0 && v28 != 12 && (*(_BYTE *)(v3 + 68) & 0xC) != 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) &= ~2u;
        }
      }
      else if ( (v28 == 12 || (v27 & 0xC) == 0) && (*(_BYTE *)(v3 + 68) & 2) == 0 )
      {
        v86 = sub_B0E910(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL));
        v87 = v86;
        if ( !v86
          || (*(_QWORD *)(v86 + 128)
           || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v86 + 104) + 96LL), *(_QWORD *)(v86 + 104)),
               *(_QWORD *)(v87 + 128)))
          && !(unsigned __int8)sub_7AF5E0(v87) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 2u;
        }
      }
      if ( !(unsigned __int8)sub_B19540(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL), v14)
        || (v99 & 4) != 0
        || (byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 0x20u;
      }
      if ( (~*(_BYTE *)(v3 + 68) & 0xC) != 0 && (*(_BYTE *)(v3 + 68) & 0xC) != 0
        || (unsigned __int8)sub_781720(v3)
        && (v63 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL)),
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v63 + 104) + 96LL), *(_QWORD *)(v63 + 104)),
            *(char *)(*(_QWORD *)(v63 + 128) + 2LL) < 0) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 0x80u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x80u;
        if ( (*(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) & 0x20) == 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          **(_BYTE **)(a1 + 128) &= ~0x80u;
        }
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~1u;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 <= 1 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x10u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x20u;
      }
      v29 = sub_78B7C0(v3, (__int64)v14);
      v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v30 + 16LL) != 47 )
      {
        if ( !(unsigned __int8)sub_B19540(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL), v14)
          || ((~*(_BYTE *)(v3 + 68) & 0xC) == 0 || (*(_BYTE *)(v3 + 68) & 0xC) == 0)
          && *(_BYTE *)(a1 + 73) >> 5 != 2
          && *(char *)(v14[270] + 1LL) >= 0 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~4u;
        }
        if ( (v99 & 1) != 0
          || (v67 = (_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x10u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x20u;
          v67 = (_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
        }
        if ( !(unsigned __int8)sub_B19020(*v67) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) &= ~0x40u;
        }
        goto LABEL_141;
      }
      v31 = sub_B14A40(*v30);
      v32 = *(_QWORD *)(v31 + 128);
      if ( !v32
        && (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104)),
            (v32 = *(_QWORD *)(v31 + 128)) == 0)
        || !*(_QWORD *)(v32 + 88) )
      {
LABEL_141:
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 2) != 0 && !v29 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~2u;
        }
        if ( (*(_BYTE *)(sub_798D60(a1) + 89) & 1) != 0 )
        {
          for ( i = sub_B0D320(*(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL));
                (unsigned int)*(unsigned __int8 *)(i + 16) - 2 <= 1;
                i = sub_B0D840(i) )
          {
            ;
          }
          v75 = sub_B0D320(i);
          v76 = *(_BYTE *)(v75 + 16);
          if ( v76 == 47 )
          {
            v77 = sub_B0E910(v75);
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v77 + 104) + 96LL), *(_QWORD *)(v77 + 104));
            v78 = (*(_BYTE *)(*(_QWORD *)(v77 + 128) + 10LL) & 0x10) != 0;
          }
          else
          {
            v78 = 1;
            if ( v76 != 27 )
            {
              v78 = 0;
              v88 = *(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v88 + 16) == 13 )
                v78 = ((*(_WORD *)(v88 + 18) >> 3) & 0x1FF) == 433;
            }
          }
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) = (16
                                                    * (v78 || (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) & 0x10) != 0))
                                                   | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) & 0xEF;
        }
        v12 = *(_BYTE *)(v3 + 28) & 0x7F;
        v13 = *(_BYTE *)(v3 + 28) & 0x7F;
        goto LABEL_146;
      }
      sub_7AE3E0(a1, v31);
      if ( (((unsigned __int8)byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v99) & 5) != 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x80u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 1u;
      }
      if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
      {
        if ( sub_7AF450(v31) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 4u;
        }
        if ( sub_7ADB20(v31) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 8u;
        }
        if ( sub_7AF510(v31) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x10u;
        }
        if ( sub_7ADDC0(v31) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x20u;
        }
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        if ( ((*(_WORD *)(*(_QWORD *)(v31 + 128) + 4LL) >> 7) & 0x3Fu) <= 0x1F )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x40u;
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) |= 0x10u;
        }
      }
      if ( (unsigned __int8)sub_781720(v3) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        v91 = (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 3LL) & 0x20) != 0;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) = (32 * (v91 || (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 0x20) != 0))
                                                | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 0xDF;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        v92 = (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 3LL) & 0x40) != 0;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) = ((v92 || (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 0x40) != 0) << 6)
                                                | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 0xBF;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        v93 = *(_BYTE *)(*(_QWORD *)(v31 + 128) + 3LL) >> 7;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) = ((v93 | (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) >> 7)) << 7)
                                                | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 0x7F;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        v94 = *(_BYTE *)(*(_QWORD *)(v31 + 128) + 4LL) & 1;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= v94;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
        v95 = (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 4LL) & 2) != 0;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) = (2 * (v95 || (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) & 2) != 0))
                                                | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) & 0xFD;
      }
      if ( !(unsigned __int8)sub_7AE190(v31) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x80u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 5LL) & 1) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x100u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 5LL) & 0x40) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x4000u;
      }
      if ( !sub_7ADC00(v31) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x200u;
      }
      if ( !(unsigned __int8)sub_7ADCE0(v31) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x8000u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 5LL) & 4) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x400u;
      }
      if ( !sub_7ADEC0(v31) )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x800u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( ((*(_WORD *)(*(_QWORD *)(v31 + 128) + 4LL) >> 7) & 0x3Fu) <= 0x1F )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( ((*(_DWORD *)(*(_QWORD *)(v31 + 128) + 4LL) >> 13) & 0x3Fu) <= 0x1F )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( *(char *)(*(_QWORD *)(v31 + 128) + 7LL) >= 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 10LL) & 8) != 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
      }
      v33 = *(_BYTE *)(v31 + 75);
      if ( (v33 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 75) |= 2u;
        v33 = *(_BYTE *)(v31 + 75);
      }
      if ( (v33 & 4) != 0 )
        *(_BYTE *)(a1 + 75) |= 4u;
      if ( ((*(_BYTE *)(v31 + 76) >> 4) & 3) == 2 )
        *(_BYTE *)(a1 + 76) = *(_BYTE *)(a1 + 76) & 0xCF | 0x20;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 1LL) & 0x10) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 1LL) & 0x20) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(a1 + 73) >> 5 != 2 && !v16 && !v29 )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
LABEL_124:
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
          if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 2LL) & 8) != 0 )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 8u;
          }
          v34 = *(_BYTE *)(v3 + 68);
          if ( (v34 & 2) != 0 )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x80u;
            v34 = *(_BYTE *)(v3 + 68);
          }
          if ( ((~v34 & 0xC) == 0 || (v34 & 0xC) == 0)
            && !(unsigned __int8)sub_7AE270(v31)
            && *(_BYTE *)(a1 + 73) >> 5 != 2 )
          {
            v35 = *(_BYTE *)(v14[270] + 2LL);
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) = (4 * (v35 & 1)) | *(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0xFB;
          }
          if ( !sub_7A9910(v31) )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) &= ~0x80u;
          }
          if ( !(unsigned __int8)sub_7AF6B0(v31) )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) &= ~1u;
          }
          if ( (*(_BYTE *)(v31 + 76) & 4) != 0 )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
            if ( **(char **)(v31 + 128) < 0 )
              *(_BYTE *)(a1 + 76) |= 4u;
          }
          if ( *(_BYTE *)(v31 + 73) >> 5 != 2 )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
            if ( (**(_BYTE **)(v31 + 128) & 1) == 0 )
            {
              sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
              if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 3LL) & 1) != 0
                && ((~*(_BYTE *)(v3 + 68) & 0xC) == 0 || (*(_BYTE *)(v3 + 68) & 0xC) == 0) )
              {
                sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
                *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 1u;
              }
            }
          }
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104));
          if ( (*(_BYTE *)(*(_QWORD *)(v31 + 128) + 2LL) & 0x10) != 0 && (unsigned __int8)sub_781720(v3) )
          {
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
            *(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) |= 0x10u;
          }
          goto LABEL_141;
        }
        if ( (unsigned __int8)sub_7AA190(a1, v14, (_QWORD *)v31) )
        {
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x10u;
        }
      }
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x20) != 0 && v16 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v79 = *(_QWORD *)(a1 + 128);
        v80 = (*(_BYTE *)(v79 + 24) & 1) != 0 ? sub_7A2E20(v79) : *(_QWORD *)(v79 + 24);
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v81 = *(_QWORD **)(a1 + 104);
        v98 = v80 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
        sub_6E77B0(v81 + 12, (__int64)v81);
        v82 = *(_QWORD *)(a1 + 128);
        v83 = (*(_BYTE *)(v82 + 24) & 1) != 0 ? sub_7A2E20(v82) : *(_QWORD *)(v82 + 24);
        v84 = v100;
        if ( v83 != v98 )
        {
          while ( 1 )
          {
            v90 = v84;
            v100[0] = **(_QWORD **)(v83 + 16);
            v85 = sub_6B3060(v84, (__int64)v81);
            v84 = v90;
            v81 = (_QWORD *)(*(_QWORD *)&byte_8[v85 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
            if ( *v81 == *(_QWORD *)(*(_QWORD *)&byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              break;
            v83 += 24;
            if ( v83 == v98 )
              goto LABEL_124;
          }
          sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
          *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) &= ~0x20u;
        }
      }
      goto LABEL_124;
    }
    if ( ((v24 >> 6) & 6) != 0 )
    {
      *(_BYTE *)(a1 + 75) |= 2u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      v25 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)v25 &= 0xFFFFE07FFFFFFEFFLL;
      v26 = *(_QWORD *)&byte_8[v99 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v26 & 8) != 0
        && (v89 = ((*(__int64 *)((char *)&qword_18 + (v26 & 0xFFFFFFFFFFFFFFF0LL))
                  | (unsigned __int64)(((unsigned __int8)v26 | (unsigned __int8)v99) & 7)) >> 6)
                & 7,
            (unsigned int)(v89 - 2) <= 1) )
      {
        if ( (_DWORD)v89 == 3 )
          *(_BYTE *)(a1 + 76) = *(_BYTE *)(a1 + 76) & 0xCF | 0x20;
      }
      else
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= 0xFFF81FFF;
      }
      *(_BYTE *)(v25 + 7) &= ~0x80u;
      if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 4u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 8u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x10u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x20u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x40u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x20u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x40u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x80u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 1u;
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 4LL) |= 2u;
      }
      goto LABEL_57;
    }
    goto LABEL_241;
  }
LABEL_146:
  if ( (unsigned int)(v12 - 51) <= 1 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 7) != 5 )
      return;
    v36 = (_QWORD *)sub_798D40(a1);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v37 = *(_QWORD *)(a1 + 128);
    v38 = (unsigned __int64 *)(v37 + 40);
    if ( (*(_BYTE *)(v37 + 56) & 4) != 0 )
    {
      v96 = (unsigned __int64 *)(v37 + 40);
      sub_7A2D50((__int64)v38, (__int64)v36);
      v38 = v96;
    }
    v100[0] = v3 | (*(_BYTE *)(v3 + 29) >> 5) & 3;
    sub_7A94A0(v38, v100, v36);
    v13 = *(_BYTE *)(v3 + 28) & 0x7F;
  }
  if ( v13 == 78 )
  {
    v39 = *(_QWORD *)(v3 + 40);
    v40 = v39 & 7;
    if ( v40 == 3 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 4u;
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      **(_BYTE **)(a1 + 128) &= ~0x80u;
      v39 = *(_QWORD *)(v3 + 40);
      v40 = v39 & 7;
    }
    if ( v40 == 6 && *(_DWORD *)(v39 & 0xFFFFFFFFFFFFFFF8LL) == 15 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) |= 0x10u;
    }
  }
}

