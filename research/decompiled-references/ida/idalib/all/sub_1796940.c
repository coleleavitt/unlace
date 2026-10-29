char __fastcall sub_1796940(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v10; // r12
  char v11; // r13
  char v12; // cl
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r14
  __int64 *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 *v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned int v48; // ecx
  __int64 v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbp
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // r15
  unsigned __int8 *v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int8 v62; // cl
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r15
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r15
  void *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  void *v83; // rdi
  __int64 v85; // [rsp+0h] [rbp-F8h]
  __int64 v86; // [rsp+0h] [rbp-F8h]
  __int64 v87; // [rsp+8h] [rbp-F0h]
  __int64 v88; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v89; // [rsp+20h] [rbp-D8h] BYREF
  int v90; // [rsp+28h] [rbp-D0h]
  _QWORD v91[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v93; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v94; // [rsp+58h] [rbp-A0h]
  char v95; // [rsp+A8h] [rbp-50h]
  unsigned int v96; // [rsp+B0h] [rbp-48h]
  char v97; // [rsp+B4h] [rbp-44h]

  v8 = *(_QWORD *)(a2 + 16);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)v9;
  if ( v9 )
  {
    LODWORD(v8) = (*(_BYTE *)(v9 + 8) & 0x7F) - 34;
    if ( (unsigned int)v8 <= 5 && v9 != 72 )
    {
      LOBYTE(v8) = sub_B8E180(v9);
      if ( (_BYTE)v8 )
        return v8;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v33 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v36 = *v33;
  v8 = *((unsigned int *)v33 + 2);
  v37 = v36 + 8 * v8;
  if ( v36 >= v37 )
  {
    if ( v36 == v37 )
      goto LABEL_47;
    while ( 1 )
    {
      v8 = *(_QWORD *)v37;
      if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 168 )
        break;
      v37 += 8LL;
      if ( v36 == v37 )
        goto LABEL_47;
    }
  }
  else
  {
    v8 = v36;
    while ( 1 )
    {
      v36 = *(_QWORD *)v8;
      if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 168 )
        break;
      v8 += 8;
      if ( v37 == v8 )
        goto LABEL_47;
    }
    if ( v37 == v8 )
    {
LABEL_47:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_8;
      v38 = sub_B8C3D0(a2, a2, v36, v37, v34, v35);
      v41 = *v38;
      v8 = *((unsigned int *)v38 + 2);
      v42 = v41 + 8 * v8;
      if ( v41 >= v42 )
      {
        if ( v41 != v42 )
        {
          if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) == 160 )
            goto LABEL_58;
          v8 = v42 + 8;
          while ( 1 )
          {
            v42 = v8;
            if ( v41 == v8 )
              break;
            v46 = *(_QWORD *)v8;
            v8 += 8;
            if ( *(_WORD *)(v46 + 36) == 160 )
              goto LABEL_58;
          }
        }
      }
      else
      {
        v8 = v41;
        while ( 1 )
        {
          v41 = *(_QWORD *)v8;
          if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) == 160 )
            break;
          v8 += 8;
          if ( v42 == v8 )
            goto LABEL_52;
        }
        if ( v42 != v8 )
          goto LABEL_58;
      }
LABEL_52:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_8;
      v43 = sub_B8C3D0(a2, a2, v41, v42, v39, v40);
      v44 = *v43;
      v8 = *((unsigned int *)v43 + 2);
      v45 = v44 + 8 * v8;
      if ( v44 < v45 )
      {
        v8 = v44;
        while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 159 )
        {
          v8 += 8;
          if ( v45 == v8 )
            goto LABEL_8;
        }
        if ( v45 != v8 )
          goto LABEL_58;
LABEL_8:
        v10 = 0;
        v11 = 0;
        goto LABEL_9;
      }
      if ( v44 == v45 )
        goto LABEL_8;
      if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 159 )
      {
        v8 = v45 + 8;
        while ( v8 != v44 )
        {
          v47 = *(_QWORD *)v8;
          v8 += 8;
          if ( *(_WORD *)(v47 + 36) == 159 )
            goto LABEL_58;
        }
        goto LABEL_8;
      }
LABEL_58:
      v10 = 0;
      goto LABEL_64;
    }
  }
  v10 = 1;
LABEL_64:
  v8 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v8 & 8) != 0 )
  {
    LODWORD(v8) = (*(_DWORD *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v8 & 7)) >> 9;
    if ( (_DWORD)v8 )
    {
      sub_168B9F0((__int64)v91, a1, *(_DWORD *)(a2 + 24), 0xDE7u, 0);
      goto LABEL_41;
    }
  }
  v11 = 1;
LABEL_9:
  if ( *(char *)(a2 + 28) < 0 )
    return v8;
  LOBYTE(v8) = sub_B735C0(a2);
  if ( !(_BYTE)v8 )
    return v8;
  v12 = *(_BYTE *)(a2 + 96);
  v13 = v12 & 7;
  LOBYTE(v8) = v12 & 7;
  if ( (v12 & 7) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_67;
    LOBYTE(v8) = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned __int8)v8 != 40 && (unsigned __int8)v8 != 46 )
      goto LABEL_106;
    v61 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v61 = *(_QWORD *)(v61 + 8);
    if ( !v61 )
    {
LABEL_106:
      if ( (_BYTE)v8 == 43 )
        return v8;
      goto LABEL_24;
    }
    v8 = sub_B8EAA0(v61);
    v62 = *(_BYTE *)(v8 + 8) & 0x7F;
    if ( v62 > 0x12u )
    {
      if ( ((v62 + 94) & 0x7Fu) > 5 )
      {
LABEL_104:
        LOBYTE(v8) = *(_BYTE *)(a2 + 28) & 0x7F;
        if ( (_BYTE)v8 != 43 )
          goto LABEL_24;
      }
    }
    else
    {
      v8 = 1LL << v62;
      if ( ((1LL << v62) & 0x40182) == 0 )
        goto LABEL_104;
    }
    v13 = *(_BYTE *)(a2 + 96) & 7;
LABEL_67:
    if ( v13 > 3u )
      return v8;
    goto LABEL_24;
  }
  v14 = *(_QWORD *)(a2 + 48);
  v15 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v15 & 8) == 0
    || (*(_DWORD *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v15 & 7)) >> 9 != 3 )
  {
    LOBYTE(v8) = *(_BYTE *)(a2 + 28) + 85;
    if ( (v8 & 0x7D) == 0 )
      goto LABEL_23;
    v16 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 8);
    v17 = *(_BYTE *)(sub_B8EAA0(v16) + 8) & 0x7F;
    if ( v17 && v17 != 24 )
    {
      LOBYTE(v8) = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (_BYTE)v8 == 43 )
        goto LABEL_22;
      v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v8 = *(_QWORD *)v8;
      LOBYTE(v8) = (*(_BYTE *)(v8 + 8) + 70) & 0x7F;
      if ( (unsigned __int8)v8 > 3u )
      {
LABEL_22:
        v12 = *(_BYTE *)(a2 + 96);
LABEL_23:
        if ( (v12 & 0x18) == 0 )
          return v8;
      }
    }
LABEL_24:
    v14 = *(_QWORD *)(a2 + 48);
  }
  v8 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 17) & 4) != 0 )
    return v8;
  v8 = sub_B73640(a2);
  if ( v8 )
  {
    LODWORD(v8) = *(_DWORD *)v8;
    if ( (v8 & 0x20000) != 0 )
      return v8;
  }
  v8 = sub_B73640(a2);
  v21 = v8;
  if ( v11 )
  {
    if ( v10 )
    {
      LOBYTE(v8) = sub_1793C50(a1, a2, 1);
      v48 = 4978;
      if ( (_BYTE)v8 )
        return v8;
    }
    else
    {
      LOBYTE(v8) = sub_1793C50(a1, a2, 0);
      v48 = 3721;
      if ( (_BYTE)v8 )
        return v8;
    }
    sub_168B9F0((__int64)v91, a1, *(_DWORD *)(a2 + 24), v48, 0);
    v49 = sub_EEC8C0(v21, (__int64)a1, a7);
    if ( v95 )
    {
      v58 = v93;
      if ( !v93 )
      {
        v63 = v94;
        v64 = *(_DWORD *)(v94 + 14976);
        if ( v64 )
        {
          v74 = (unsigned int)(v64 - 1);
          *(_DWORD *)(v94 + 14976) = v74;
          v58 = *(unsigned __int8 **)(v63 + 8 * v74 + 14848);
          v75 = *((unsigned int *)v58 + 134);
          *v58 = 0;
          v76 = *((_QWORD *)v58 + 66);
          *((_DWORD *)v58 + 106) = 0;
          v77 = v76 + (v75 << 6);
          while ( v76 != v77 )
          {
            while ( 1 )
            {
              v77 -= 64;
              v78 = *(void **)(v77 + 24);
              if ( v78 == (void *)(v77 + 40) )
                break;
              v85 = v76;
              operator delete(v78);
              v76 = v85;
              if ( v85 == v77 )
                goto LABEL_132;
            }
          }
LABEL_132:
          *((_DWORD *)v58 + 134) = 0;
        }
        else
        {
          v58 = (unsigned __int8 *)operator new(0x3A0u);
          *v58 = 0;
          *((_QWORD *)v58 + 12) = v58 + 112;
          *((_QWORD *)v58 + 16) = v58 + 144;
          *((_QWORD *)v58 + 20) = v58 + 176;
          *((_QWORD *)v58 + 24) = v58 + 208;
          *((_QWORD *)v58 + 28) = v58 + 240;
          *((_QWORD *)v58 + 32) = v58 + 272;
          *((_QWORD *)v58 + 36) = v58 + 304;
          *((_QWORD *)v58 + 40) = v58 + 336;
          *((_QWORD *)v58 + 44) = v58 + 368;
          *((_QWORD *)v58 + 48) = v58 + 400;
          *((_QWORD *)v58 + 52) = v58 + 432;
          v58[112] = 0;
          *((_QWORD *)v58 + 13) = 0;
          *((_QWORD *)v58 + 17) = 0;
          v58[144] = 0;
          *((_QWORD *)v58 + 21) = 0;
          v58[176] = 0;
          *((_QWORD *)v58 + 25) = 0;
          v58[208] = 0;
          *((_QWORD *)v58 + 29) = 0;
          v58[240] = 0;
          *((_QWORD *)v58 + 33) = 0;
          v58[272] = 0;
          *((_QWORD *)v58 + 37) = 0;
          v58[304] = 0;
          *((_QWORD *)v58 + 41) = 0;
          v58[336] = 0;
          *((_QWORD *)v58 + 45) = 0;
          v58[368] = 0;
          *((_QWORD *)v58 + 49) = 0;
          v58[400] = 0;
          *((_QWORD *)v58 + 53) = 0x800000000LL;
          *((_QWORD *)v58 + 66) = v58 + 544;
          *((_QWORD *)v58 + 67) = 0x600000000LL;
        }
        v93 = v58;
      }
      goto LABEL_92;
    }
    if ( v97 )
    {
      v52 = sub_168B9E0(v91);
      v55 = v92;
      if ( v92 )
        v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
      v88 = v55;
      v56 = sub_1587BC0(v52, &v88, v50, v51, v53, v54);
      v57 = *v56 + 32LL * v96;
      v58 = *(unsigned __int8 **)(v57 + 8);
      if ( !v58 )
      {
        v72 = *(_QWORD *)(v57 + 16);
        v73 = *(_DWORD *)(v72 + 14976);
        if ( v73 )
        {
          v79 = (unsigned int)(v73 - 1);
          *(_DWORD *)(v72 + 14976) = v79;
          v58 = *(unsigned __int8 **)(v72 + 8 * v79 + 14848);
          v80 = *((unsigned int *)v58 + 134);
          *v58 = 0;
          v81 = *((_QWORD *)v58 + 66);
          *((_DWORD *)v58 + 106) = 0;
          v82 = v81 + (v80 << 6);
          while ( v81 != v82 )
          {
            while ( 1 )
            {
              v82 -= 64;
              v83 = *(void **)(v82 + 24);
              if ( v83 == (void *)(v82 + 40) )
                break;
              v87 = v81;
              v86 = v82;
              operator delete(v83);
              v82 = v86;
              v81 = v87;
              if ( v87 == v86 )
                goto LABEL_137;
            }
          }
LABEL_137:
          *((_DWORD *)v58 + 134) = 0;
        }
        else
        {
          v58 = (unsigned __int8 *)operator new(0x3A0u);
          *v58 = 0;
          *((_QWORD *)v58 + 12) = v58 + 112;
          *((_QWORD *)v58 + 16) = v58 + 144;
          *((_QWORD *)v58 + 20) = v58 + 176;
          *((_QWORD *)v58 + 24) = v58 + 208;
          *((_QWORD *)v58 + 28) = v58 + 240;
          *((_QWORD *)v58 + 32) = v58 + 272;
          *((_QWORD *)v58 + 36) = v58 + 304;
          *((_QWORD *)v58 + 40) = v58 + 336;
          *((_QWORD *)v58 + 44) = v58 + 368;
          *((_QWORD *)v58 + 48) = v58 + 400;
          *((_QWORD *)v58 + 52) = v58 + 432;
          v58[112] = 0;
          *((_QWORD *)v58 + 13) = 0;
          *((_QWORD *)v58 + 17) = 0;
          v58[144] = 0;
          *((_QWORD *)v58 + 21) = 0;
          v58[176] = 0;
          *((_QWORD *)v58 + 25) = 0;
          v58[208] = 0;
          *((_QWORD *)v58 + 29) = 0;
          v58[240] = 0;
          *((_QWORD *)v58 + 33) = 0;
          v58[272] = 0;
          *((_QWORD *)v58 + 37) = 0;
          v58[304] = 0;
          *((_QWORD *)v58 + 41) = 0;
          v58[336] = 0;
          *((_QWORD *)v58 + 45) = 0;
          v58[368] = 0;
          *((_QWORD *)v58 + 49) = 0;
          v58[400] = 0;
          *((_QWORD *)v58 + 53) = 0x800000000LL;
          *((_QWORD *)v58 + 66) = v58 + 544;
          *((_QWORD *)v58 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v57 + 8) = v58;
      }
LABEL_92:
      v89 = v49;
      LOBYTE(v90) = 1;
      v59 = *((unsigned int *)v58 + 106);
      if ( v59 + 1 > (unsigned __int64)*((unsigned int *)v58 + 107) )
      {
        sub_2237220(v58 + 416, v58 + 432, v59 + 1, 12);
        v59 = *((unsigned int *)v58 + 106);
      }
      v60 = *((_QWORD *)v58 + 52) + 12 * v59;
      *(_QWORD *)v60 = v89;
      *(_DWORD *)(v60 + 8) = v90;
      ++*((_DWORD *)v58 + 106);
    }
LABEL_41:
    sub_15F7200(v91);
    LOBYTE(v8) = sub_B88650(a2, 1);
    return v8;
  }
  LOWORD(v8) = *(_WORD *)v8 & 0x1FF;
  v22 = (__int64 *)((unsigned int)(unsigned __int16)v8 - 113);
  if ( (unsigned int)v22 > 1 )
  {
    LOWORD(v8) = (v8 + 423) & 0x1FF;
    if ( (unsigned __int16)v8 > 4u )
      return v8;
    v8 = sub_BFBC70(*(_QWORD *)(v21 + 32));
    v23 = v8;
    if ( !v8 )
      return v8;
    LODWORD(v8) = (*(_BYTE *)(v8 + 28) & 0x7F) - 34;
    if ( (unsigned int)v8 > 5 )
      return v8;
  }
  else
  {
    v23 = *(_QWORD *)(v21 + 16);
    if ( !v23 )
      return v8;
  }
  LODWORD(v88) = sub_178DFB0((__int64)a1, v23, v22, v18, v19, v20);
  LOBYTE(v8) = v88 - 2;
  if ( (unsigned int)(v88 - 2) > 1 )
  {
    sub_168B9F0((__int64)v91, a1, *(_DWORD *)(a2 + 24), 0x1333u, 0);
    v24 = sub_17961C0((__int64)v91, (int *)&v88);
    v25 = v24;
    if ( *(_BYTE *)(v24 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v24 + 32), v23, 0xAu);
    }
    else if ( *(_BYTE *)(v24 + 132) )
    {
      v69 = sub_168B9E0((_QWORD *)v24);
      v70 = *(_QWORD *)(v25 + 16);
      if ( v70 )
        v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v70 + 32LL))(*(_QWORD *)(v25 + 16));
      v89 = v70;
      v71 = sub_1587BC0(v69, &v89, v65, v66, v67, v68);
      sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * *(unsigned int *)(v25 + 128) + 8), v23, 0xAu);
    }
    sub_15F7200(v91);
    sub_168B9F0((__int64)v91, a1, *(_DWORD *)(v23 + 24), 0x188Bu, 0);
    if ( v95 )
    {
      sub_AE9DF0(&v93, v23, 0xAu);
    }
    else if ( v97 )
    {
      v28 = sub_168B9E0(v91);
      v31 = v92;
      if ( v92 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
      v89 = v31;
      v32 = sub_1587BC0(v28, &v89, v26, v27, v29, v30);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v96 + 8), v23, 0xAu);
    }
    goto LABEL_41;
  }
  return v8;
}
