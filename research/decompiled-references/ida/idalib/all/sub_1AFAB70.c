_BOOL8 __fastcall sub_1AFAB70(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r12
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // rax
  _BYTE *v24; // r10
  char v25; // r11
  bool v26; // r10
  __int64 v27; // rax
  unsigned __int16 *v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r12d
  unsigned __int64 v43; // rax
  __int64 v44; // rbp
  unsigned __int64 v45; // rax
  signed __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int64 v60; // r12
  __int64 v61; // rax
  unsigned int v62; // r10d
  __int64 v63; // rdi
  int v64; // eax
  int v65; // r10d
  _BYTE *v66; // r11
  unsigned __int64 *v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  int v71; // edi
  char v73; // [rsp+Fh] [rbp-69h]
  char v74; // [rsp+17h] [rbp-61h] BYREF
  __int64 v75; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v77[72]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v7 = (_QWORD *)sub_168B6C0(a1);
  v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (_BYTE *)v8;
  v75 = *(_QWORD *)(v8 + 48);
  v12 = *(unsigned int *)(v10 + 344);
  if ( !(_DWORD)v12 )
    goto LABEL_3;
  v9 = *(_QWORD *)(v10 + 336) + 6776 * v12 - 6776;
  if ( *(_QWORD *)(v9 + 6768) != *(_QWORD *)(v10 + 328) )
    goto LABEL_3;
  v47 = *(unsigned int *)(v9 + 8);
  v10 = *(unsigned int *)(v10 + 27504);
  if ( (unsigned int)v47 <= (unsigned int)v10 )
    goto LABEL_3;
  if ( v47 - v10 <= v4 )
    goto LABEL_3;
  v48 = 1688 * v4;
  v73 = sub_FFE8A0(*(_DWORD *)(*(_QWORD *)v9 + 1688 * v4 + 976));
  if ( !v73 )
    goto LABEL_3;
  v49 = v75;
  v50 = *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v10 <= 1 )
  {
    while ( 1 )
    {
      v51 = (unsigned int)*(unsigned __int8 *)(v50 + 16) - 43;
      if ( (unsigned int)v51 > 1 )
        v50 = sub_F63050(v50, v75, v51, v9);
      v10 = *(_QWORD *)(v50 + 32);
      if ( (*(_BYTE *)(v50 + 18) & 0x10) == 0 )
        break;
      v50 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v75 = *(_QWORD *)(v50 + 32);
    v49 = v10;
  }
  v52 = *(_QWORD *)(a1 + 8);
  v53 = *(unsigned int *)(v52 + 344);
  if ( !(_DWORD)v53 )
    goto LABEL_46;
  v10 = *(_QWORD *)(v52 + 336);
  v9 = v10 + 6776 * v53 - 6776;
  if ( *(_QWORD *)(v9 + 6768) != *(_QWORD *)(v52 + 328) )
    goto LABEL_46;
  v19 = *(unsigned int *)(v9 + 8);
  v10 = *(unsigned int *)(v52 + 27504);
  if ( (unsigned int)v19 <= (unsigned int)v10 )
    goto LABEL_46;
  if ( v19 - v10 <= v4 )
    goto LABEL_46;
  v20 = v48 + *(_QWORD *)v9;
  v10 = *(unsigned int *)(v20 + 720);
  v21 = *(_QWORD *)(v20 + 704);
  if ( !(_DWORD)v10 )
    goto LABEL_46;
  v22 = (unsigned int)(v10 - 1);
  v9 = (unsigned int)v22 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v23 = v21 + 1184 * v9;
  v24 = *(_BYTE **)v23;
  if ( v11 != *(_BYTE **)v23 )
  {
    v64 = 1;
    if ( v24 == (_BYTE *)-4096LL )
    {
LABEL_46:
      a2 = v49 & 0xFFFFFFFFFFFFFFF0LL;
      v29 = *(_QWORD *)a2;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v65 = v64 + 1;
      v9 = (unsigned int)v22 & (v64 + (_DWORD)v9);
      v23 = v21 + 1184LL * (unsigned int)v9;
      v66 = *(_BYTE **)v23;
      if ( v11 == *(_BYTE **)v23 )
        break;
      v64 = v65;
      if ( v66 == (_BYTE *)-4096LL )
        goto LABEL_46;
    }
  }
  v9 = 9 * v10;
  v10 = v21 + 1184 * v10;
  if ( v23 == v10 )
    goto LABEL_46;
  v9 = *(unsigned int *)(v23 + 16);
  v10 = *(_QWORD *)(v23 + 8);
  v22 = v10 + 144 * v9;
  if ( v10 == v22 )
    goto LABEL_46;
  v25 = 0;
  v26 = *(_DWORD *)(v23 + 1176) != 41 && *(_DWORD *)(v23 + 1176) != 55;
  while ( 1 )
  {
    if ( !v26 )
    {
      v9 = *(_QWORD *)v10;
      v27 = *(_QWORD *)v10 + 16LL * *(unsigned int *)(v10 + 8);
      if ( (*(_WORD *)(*(_QWORD *)(v27 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == 0x47 )
        v25 |= *(_QWORD *)(v27 - 8) == (_QWORD)v11;
      if ( v9 != v27 - 16 )
      {
        v28 = (unsigned __int16 *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v28;
        LOWORD(v9) = v9 & 0x1FF;
        if ( (_WORD)v9 == 4 )
        {
          if ( *((_BYTE *)v28 + 2) >> 3 == 5 )
            break;
        }
        else if ( (((_WORD)v9 + 389) & 0x1FFu) <= 1 )
        {
          break;
        }
        if ( (*(_WORD *)(*(_QWORD *)(v27 - 32) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == 0x2E || (_WORD)v9 == 44 )
          break;
      }
    }
    v10 += 144;
    if ( v22 == v10 )
    {
      v73 = 0;
      break;
    }
  }
  a2 = v49 & 0xFFFFFFFFFFFFFFF0LL;
  v29 = *(_QWORD *)a2;
  if ( v25 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 && v73 )
      goto LABEL_29;
    v30 = sub_C1BEF0((__int64)&v75, a2, v10, v9);
    if ( !sub_F61140(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v32, v33, v34) )
      return 1;
    v35 = *(_QWORD *)(a1 + 8);
    ptr[1] = (void *)0x400000000LL;
    v36 = *(unsigned int *)(v35 + 344);
    ptr[0] = v77;
    v37 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v35 + 336) + 6776 * v36 - 6776) + 1688 * v4 + 976);
    sub_FFF220((__int64)ptr, v37);
    v42 = *((_DWORD *)ptr[0] + a4);
    if ( ptr[0] != v77 )
      free(ptr[0]);
    if ( v42 == 70 )
      goto LABEL_58;
    goto LABEL_28;
  }
LABEL_47:
  if ( *(_BYTE *)(v52 + 27473)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22
    || !sub_F61140(v29, a2, v10, v9, v52, v22)
    || (v54 = *(_QWORD *)(a1 + 8),
        v55 = sub_168B6E0(a1),
        a2 = (unsigned __int64)v11,
        v58 = sub_1AF0190(v55, (__int64)v11, v56, v57),
        (v58 & 0xFFFFFFFD) != 0)
    || (v59 = *(_DWORD *)(v48
                        + *(_QWORD *)(*(_QWORD *)(v54 + 336) + 6776LL * *(unsigned int *)(v54 + 344) - 6776)
                        + 8LL * v58
                        + 928
                        + 8),
        v10 = (unsigned int)(v59 - 5),
        (unsigned int)v10 <= 3)
    || v59 == 12
    || (a2 = (unsigned __int64)v11,
        (unsigned __int8)sub_1AFA770(
                           *(_QWORD *)(a1 + 8),
                           (__int64)v11,
                           (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE6590,
                           (__int64)ptr,
                           a3,
                           0)) )
  {
LABEL_3:
    v13 = sub_C1BEF0((__int64)&v75, a2, v10, v9);
    if ( !sub_F61140(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), a2, v14, v15, v16, v17) )
      return 1;
LABEL_28:
    if ( (unsigned __int8)sub_1AFA770(
                            *(_QWORD *)(a1 + 8),
                            (__int64)v11,
                            (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE65A0,
                            (__int64)&v74,
                            a3,
                            1u) )
      goto LABEL_29;
    v60 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    v61 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 32LL))(v11);
    v38 = *(unsigned int *)(v60 + 1320);
    v37 = *(_QWORD *)(v60 + 1304);
    if ( (_DWORD)v38 )
    {
      v40 = (unsigned int)(v38 - 1);
      v62 = v40 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
      v39 = (_QWORD *)(v37 + 16LL * v62);
      if ( v61 != *v39 )
      {
        if ( *v39 == -4096 )
          goto LABEL_58;
        v71 = 1;
        while ( 1 )
        {
          v41 = (unsigned int)(v71 + 1);
          v62 = v40 & (v71 + v62);
          v39 = (_QWORD *)(v37 + 16LL * v62);
          if ( v61 == *v39 )
            break;
          ++v71;
          if ( *v39 == -4096 )
            goto LABEL_58;
        }
      }
      v38 = v37 + 16 * v38;
      if ( v39 != (_QWORD *)v38 )
        goto LABEL_29;
    }
LABEL_58:
    if ( (v11[28] & 0x7F) != 0x2C )
      goto LABEL_59;
    if ( (v11[29] & 1) == 0 )
    {
LABEL_67:
      if ( (*(_BYTE *)(sub_B73640((__int64)v11) + 1) & 6) == 0 )
        goto LABEL_29;
      goto LABEL_59;
    }
    v67 = sub_B8C3D0((__int64)v11, v37, v38, (__int64)v39, v40, v41);
    v68 = *v67;
    v69 = *v67 + 8LL * *((unsigned int *)v67 + 2);
    if ( *v67 >= v69 )
    {
      if ( v68 == v69 )
        goto LABEL_67;
      while ( *(_WORD *)(*(_QWORD *)v69 + 36LL) != 294 )
      {
        v69 += 8LL;
        if ( v68 == v69 )
          goto LABEL_67;
      }
    }
    else
    {
      v70 = *v67;
      while ( *(_WORD *)(*(_QWORD *)v70 + 36LL) != 294 )
      {
        v70 += 8LL;
        if ( v69 == v70 )
          goto LABEL_67;
      }
      if ( v69 == v70 )
        goto LABEL_67;
    }
LABEL_59:
    v63 = *(_QWORD *)(a1 + 8);
    if ( (((unsigned int)sub_1AE7690(v63) - 4) & 0xFFFFFFFB) == 0
      && !(unsigned __int8)sub_1AFA770(
                             v63,
                             (__int64)v11,
                             (__int64 (__fastcall *)(__int64, __int64, _QWORD))sub_1AE65C0,
                             (__int64)ptr,
                             a3,
                             0)
      && !(unsigned int)sub_1AF96C0(*(_QWORD *)(a1 + 8), (__int64)v11, a3) )
    {
      goto LABEL_29;
    }
    return 1;
  }
LABEL_29:
  v43 = sub_A70970(v7);
  v44 = sub_AAE980((__int64)v7, v43);
  if ( sub_AAE980((__int64)v7, v75) > v44 )
    return 1;
  v45 = sub_A70970(v7);
  v46 = sub_A980A0((__int64)v7, v45);
  if ( (v11[28] & 0x7Fu) - 40 >= 7 )
    v11 = nullptr;
  return (__int64)sub_AAFE80(v7, v75, (__int64)v11) > v46;
}
