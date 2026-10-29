void __fastcall sub_B2DD40(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int8 *v11; // rbp
  _BOOL8 v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned __int8 *v15; // rbp
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int8 *v18; // rbp
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  void **v27; // rbp
  unsigned __int64 v28; // rax
  void **v29; // r12
  void **v30; // rbx
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // rbx
  void **v34; // r12
  __int64 v35; // rdi
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // r15
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // r14
  __int64 v61; // rbp
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // r14
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 v71; // r14
  void *v72; // rdi
  __int64 v73; // [rsp+8h] [rbp-A0h]
  int v74; // [rsp+1Ch] [rbp-8Ch]
  void *v75; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-80h]
  __int64 v77; // [rsp+30h] [rbp-78h]
  void *v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+50h] [rbp-58h] BYREF
  __int16 v80; // [rsp+60h] [rbp-48h]

  v4 = (a2[3] >> 8) & 0xFFFFF;
  if ( *((char *)sub_B1A550(a1[3], v4) + 20) >= 0 )
    return;
  v7 = (a2[3] >> 8) & 0xFFFFF;
  if ( v7 == 68 )
  {
    v40 = a1[5];
    if ( !v40 )
      goto LABEL_67;
    v41 = *(_BYTE *)(v40 + 48);
    if ( (v41 & 1) != 0 )
    {
      if ( ((v41 >> 1) & 7) != 1 )
        goto LABEL_74;
    }
    else
    {
      sub_B169D0((__int64 *)v40, v4);
      v40 = a1[5];
      if ( ((*(_BYTE *)(v40 + 48) >> 1) & 7) != 1 )
      {
        if ( (*(_BYTE *)(v40 + 48) & 1) != 0 )
        {
LABEL_74:
          v42 = *(_QWORD *)(v40 + 8);
          if ( v42 )
            goto LABEL_66;
LABEL_67:
          v10 = 1;
          goto LABEL_13;
        }
LABEL_73:
        sub_B169D0((__int64 *)v40, v4);
        v40 = a1[5];
        goto LABEL_74;
      }
    }
    v42 = *(_QWORD *)(v40 + 8);
    if ( v42 )
    {
      if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 34 <= 5 )
        return;
      if ( (*(_BYTE *)(v40 + 48) & 1) != 0 )
      {
LABEL_66:
        if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x47 )
          return;
        goto LABEL_67;
      }
    }
    else if ( (*(_BYTE *)(v40 + 48) & 1) != 0 )
    {
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  if ( v7 <= 0x44 )
  {
    if ( v7 == 14 )
    {
      if ( sub_B2DC70((__int64)a1, v4, v5, v6) )
        return;
      v10 = 4;
      goto LABEL_13;
    }
    if ( v7 != 67 )
      return;
    v35 = a1[5];
    if ( !v35 )
      goto LABEL_50;
    v36 = *(_BYTE *)(v35 + 48);
    if ( (v36 & 1) != 0 )
    {
      if ( ((v36 >> 1) & 7) != 1 )
        goto LABEL_70;
    }
    else
    {
      sub_B169D0((__int64 *)v35, v4);
      v35 = a1[5];
      if ( ((*(_BYTE *)(v35 + 48) >> 1) & 7) != 1 )
      {
        if ( (*(_BYTE *)(v35 + 48) & 1) != 0 )
        {
LABEL_70:
          v37 = *(_QWORD *)(v35 + 8);
          if ( v37 )
            goto LABEL_49;
LABEL_50:
          v10 = 0;
          goto LABEL_13;
        }
LABEL_69:
        sub_B169D0((__int64 *)v35, v4);
        v35 = a1[5];
        goto LABEL_70;
      }
    }
    v37 = *(_QWORD *)(v35 + 8);
    if ( v37 )
    {
      if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 34 <= 5 )
        return;
      if ( (*(_BYTE *)(v35 + 48) & 1) != 0 )
      {
LABEL_49:
        if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x47 )
          return;
        goto LABEL_50;
      }
    }
    else if ( (*(_BYTE *)(v35 + 48) & 1) != 0 )
    {
      goto LABEL_50;
    }
    goto LABEL_69;
  }
  if ( v7 == 105 )
  {
    v38 = a1[5];
    if ( v38 )
    {
      if ( (*(_BYTE *)(v38 + 48) & 1) == 0 )
      {
        sub_B169D0((__int64 *)v38, v4);
        v38 = a1[5];
      }
      if ( ((*(_BYTE *)(v38 + 48) >> 1) & 7) == 1 )
      {
        v39 = *(_QWORD *)(v38 + 8);
        if ( v39 )
        {
          if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x12 )
            return;
        }
      }
    }
    v10 = 2;
  }
  else
  {
    if ( v7 != 106 )
      return;
    v8 = a1[5];
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 48) & 1) == 0 )
      {
        sub_B169D0((__int64 *)v8, v4);
        v8 = a1[5];
      }
      if ( ((*(_BYTE *)(v8 + 48) >> 1) & 7) == 1 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x12 )
            return;
        }
      }
    }
    v10 = 3;
  }
LABEL_13:
  sub_FA3370(&v75, a1[2], *a2, 2636);
  v11 = (unsigned __int8 *)v75;
  v12 = (*((_BYTE *)a2 + 15) & 0x10) != 0;
  if ( !v75 )
  {
    v50 = v76;
    v51 = *(_DWORD *)(v76 + 14976);
    if ( v51 )
    {
      v53 = (unsigned int)(v51 - 1);
      *(_DWORD *)(v76 + 14976) = v53;
      v11 = *(unsigned __int8 **)(v50 + 8 * v53 + 14848);
      v54 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v55 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v56 = v55 + (v54 << 6);
      while ( v55 != v56 )
      {
        while ( 1 )
        {
          v56 -= 64;
          v57 = *(void **)(v56 + 24);
          if ( v57 == (void *)(v56 + 40) )
            break;
          v73 = v55;
          operator delete(v57);
          v55 = v73;
          if ( v73 == v56 )
            goto LABEL_103;
        }
      }
LABEL_103:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v75 = v11;
  }
  v11[*v11 + 1] = 2;
  v13 = v75;
  v14 = *(unsigned __int8 *)v75;
  *(_BYTE *)v75 = v14 + 1;
  v15 = (unsigned __int8 *)v75;
  v13[v14 + 2] = v12;
  if ( !v15 )
  {
    v48 = v76;
    v49 = *(_DWORD *)(v76 + 14976);
    if ( v49 )
    {
      v68 = (unsigned int)(v49 - 1);
      *(_DWORD *)(v76 + 14976) = v68;
      v15 = *(unsigned __int8 **)(v48 + 8 * v68 + 14848);
      v69 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v70 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v71 = v70 + (v69 << 6);
      while ( v70 != v71 )
      {
        while ( 1 )
        {
          v71 -= 64;
          v72 = *(void **)(v71 + 24);
          if ( v72 == (void *)(v71 + 40) )
            break;
          operator delete(v72);
          if ( v70 == v71 )
            goto LABEL_120;
        }
      }
LABEL_120:
      *((_DWORD *)v15 + 134) = 0;
    }
    else
    {
      v15 = (unsigned __int8 *)operator new(0x3A0u);
      *v15 = 0;
      *((_QWORD *)v15 + 12) = v15 + 112;
      *((_QWORD *)v15 + 16) = v15 + 144;
      *((_QWORD *)v15 + 20) = v15 + 176;
      *((_QWORD *)v15 + 24) = v15 + 208;
      *((_QWORD *)v15 + 28) = v15 + 240;
      *((_QWORD *)v15 + 32) = v15 + 272;
      *((_QWORD *)v15 + 36) = v15 + 304;
      *((_QWORD *)v15 + 40) = v15 + 336;
      *((_QWORD *)v15 + 44) = v15 + 368;
      *((_QWORD *)v15 + 48) = v15 + 400;
      *((_QWORD *)v15 + 52) = v15 + 432;
      *((_QWORD *)v15 + 13) = 0;
      v15[112] = 0;
      *((_QWORD *)v15 + 17) = 0;
      v15[144] = 0;
      *((_QWORD *)v15 + 21) = 0;
      v15[176] = 0;
      *((_QWORD *)v15 + 25) = 0;
      v15[208] = 0;
      *((_QWORD *)v15 + 29) = 0;
      v15[240] = 0;
      *((_QWORD *)v15 + 33) = 0;
      v15[272] = 0;
      *((_QWORD *)v15 + 37) = 0;
      v15[304] = 0;
      *((_QWORD *)v15 + 41) = 0;
      v15[336] = 0;
      *((_QWORD *)v15 + 45) = 0;
      v15[368] = 0;
      *((_QWORD *)v15 + 49) = 0;
      v15[400] = 0;
      *((_QWORD *)v15 + 53) = 0x800000000LL;
      *((_QWORD *)v15 + 66) = v15 + 544;
      *((_QWORD *)v15 + 67) = 0x600000000LL;
    }
    v75 = v15;
  }
  v15[*v15 + 1] = 3;
  v16 = v75;
  v17 = *(unsigned __int8 *)v75;
  *(_BYTE *)v75 = v17 + 1;
  v18 = (unsigned __int8 *)v75;
  v16[v17 + 2] = v10;
  if ( !v18 )
  {
    v46 = v76;
    v47 = *(_DWORD *)(v76 + 14976);
    if ( v47 )
    {
      v63 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v76 + 14976) = v63;
      v18 = *(unsigned __int8 **)(v46 + 8 * v63 + 14848);
      v64 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v65 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v66 = v65 + (v64 << 6);
      while ( v65 != v66 )
      {
        while ( 1 )
        {
          v66 -= 64;
          v67 = *(void **)(v66 + 24);
          if ( v67 == (void *)(v66 + 40) )
            break;
          operator delete(v67);
          if ( v65 == v66 )
            goto LABEL_115;
        }
      }
LABEL_115:
      *((_DWORD *)v18 + 134) = 0;
    }
    else
    {
      v18 = (unsigned __int8 *)operator new(0x3A0u);
      *v18 = 0;
      *((_QWORD *)v18 + 12) = v18 + 112;
      *((_QWORD *)v18 + 16) = v18 + 144;
      *((_QWORD *)v18 + 20) = v18 + 176;
      *((_QWORD *)v18 + 24) = v18 + 208;
      *((_QWORD *)v18 + 28) = v18 + 240;
      *((_QWORD *)v18 + 32) = v18 + 272;
      *((_QWORD *)v18 + 36) = v18 + 304;
      *((_QWORD *)v18 + 40) = v18 + 336;
      *((_QWORD *)v18 + 44) = v18 + 368;
      *((_QWORD *)v18 + 48) = v18 + 400;
      *((_QWORD *)v18 + 52) = v18 + 432;
      *((_QWORD *)v18 + 13) = 0;
      v18[112] = 0;
      *((_QWORD *)v18 + 17) = 0;
      v18[144] = 0;
      *((_QWORD *)v18 + 21) = 0;
      v18[176] = 0;
      *((_QWORD *)v18 + 25) = 0;
      v18[208] = 0;
      *((_QWORD *)v18 + 29) = 0;
      v18[240] = 0;
      *((_QWORD *)v18 + 33) = 0;
      v18[272] = 0;
      *((_QWORD *)v18 + 37) = 0;
      v18[304] = 0;
      *((_QWORD *)v18 + 41) = 0;
      v18[336] = 0;
      *((_QWORD *)v18 + 45) = 0;
      v18[368] = 0;
      *((_QWORD *)v18 + 49) = 0;
      v18[400] = 0;
      *((_QWORD *)v18 + 53) = 0x800000000LL;
      *((_QWORD *)v18 + 66) = v18 + 544;
      *((_QWORD *)v18 + 67) = 0x600000000LL;
    }
    v75 = v18;
  }
  v18[*v18 + 1] = 3;
  v19 = v75;
  v20 = *(unsigned __int8 *)v75;
  *(_BYTE *)v75 = v20 + 1;
  v19[v20 + 2] = v10;
  v21 = *(_QWORD *)(a2 + 1);
  v22 = v75;
  if ( v75 )
  {
    v23 = *((unsigned int *)v75 + 106);
    v24 = *((unsigned int *)v75 + 107);
    v25 = v23 + 1;
  }
  else
  {
    v43 = v76;
    v44 = *(_DWORD *)(v76 + 14976);
    if ( v44 )
    {
      v58 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v76 + 14976) = v58;
      v22 = *(_QWORD **)(v43 + 8 * v58 + 14848);
      v59 = *((unsigned int *)v22 + 134);
      *(_BYTE *)v22 = 0;
      v60 = v22[66];
      *((_DWORD *)v22 + 106) = 0;
      v61 = v60 + (v59 << 6);
      if ( v60 == v61 )
      {
        v25 = 1;
        v23 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v61 -= 64;
            v62 = *(void **)(v61 + 24);
            if ( v62 == (void *)(v61 + 40) )
              break;
            operator delete(v62);
            if ( v60 == v61 )
              goto LABEL_107;
          }
        }
        while ( v60 != v61 );
LABEL_107:
        v23 = *((unsigned int *)v22 + 106);
        v25 = v23 + 1;
      }
      *((_DWORD *)v22 + 134) = 0;
      v24 = *((unsigned int *)v22 + 107);
    }
    else
    {
      v45 = operator new(0x3A0u);
      v24 = 8;
      v25 = 1;
      v22 = (_QWORD *)v45;
      *(_BYTE *)v45 = 0;
      *(_QWORD *)(v45 + 96) = v45 + 112;
      *(_QWORD *)(v45 + 128) = v45 + 144;
      *(_QWORD *)(v45 + 160) = v45 + 176;
      *(_QWORD *)(v45 + 192) = v45 + 208;
      *(_QWORD *)(v45 + 224) = v45 + 240;
      *(_QWORD *)(v45 + 256) = v45 + 272;
      *(_QWORD *)(v45 + 288) = v45 + 304;
      *(_QWORD *)(v45 + 320) = v45 + 336;
      *(_QWORD *)(v45 + 352) = v45 + 368;
      *(_QWORD *)(v45 + 384) = v45 + 400;
      *(_QWORD *)(v45 + 416) = v45 + 432;
      *(_QWORD *)(v45 + 104) = 0;
      *(_BYTE *)(v45 + 112) = 0;
      *(_QWORD *)(v45 + 136) = 0;
      *(_BYTE *)(v45 + 144) = 0;
      *(_QWORD *)(v45 + 168) = 0;
      *(_BYTE *)(v45 + 176) = 0;
      *(_QWORD *)(v45 + 200) = 0;
      *(_BYTE *)(v45 + 208) = 0;
      *(_QWORD *)(v45 + 232) = 0;
      *(_BYTE *)(v45 + 240) = 0;
      *(_QWORD *)(v45 + 264) = 0;
      *(_BYTE *)(v45 + 272) = 0;
      *(_QWORD *)(v45 + 296) = 0;
      *(_BYTE *)(v45 + 304) = 0;
      *(_QWORD *)(v45 + 328) = 0;
      *(_BYTE *)(v45 + 336) = 0;
      *(_QWORD *)(v45 + 360) = 0;
      *(_BYTE *)(v45 + 368) = 0;
      *(_QWORD *)(v45 + 392) = 0;
      *(_BYTE *)(v45 + 400) = 0;
      *(_QWORD *)(v45 + 424) = 0x800000000LL;
      *(_QWORD *)(v45 + 528) = v45 + 544;
      *(_QWORD *)(v45 + 536) = 0x600000000LL;
      v23 = 0;
    }
    v75 = v22;
  }
  LOBYTE(v74) = 1;
  if ( v25 > v24 )
  {
    sub_22134E0(v22 + 52, v22 + 54, v25, 12);
    v23 = *((unsigned int *)v22 + 106);
  }
  v26 = v22[52] + 12 * v23;
  *(_QWORD *)v26 = v21;
  *(_DWORD *)(v26 + 8) = v74;
  ++*((_DWORD *)v22 + 106);
  if ( (_BYTE)v80 )
  {
    sub_FA3A50(v77, &v75, HIBYTE(v80));
    v77 = 0;
    v80 = 0;
  }
  if ( v78 != &v79 )
    operator delete(v78);
  v27 = (void **)v75;
  if ( v75 )
  {
    v28 = v76;
    if ( v76 )
    {
      if ( (unsigned __int64)v75 >= v76 && (unsigned __int64)v75 <= v76 + 14848 )
      {
        v52 = *(unsigned int *)(v76 + 14976);
        *(_DWORD *)(v76 + 14976) = v52 + 1;
        *(_QWORD *)(v28 + 8 * v52 + 14848) = v27;
      }
      else
      {
        v29 = *((void ***)v75 + 66);
        v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v75 + 134)];
        if ( v29 != v30 )
        {
          do
          {
            while ( 1 )
            {
              v30 -= 8;
              v31 = (void **)v30[3];
              if ( v31 == v30 + 5 )
                break;
              operator delete(v31);
              if ( v29 == v30 )
                goto LABEL_31;
            }
          }
          while ( v29 != v30 );
LABEL_31:
          v30 = (void **)v27[66];
        }
        if ( v30 != v27 + 68 )
          free(v30);
        v32 = (void **)v27[52];
        v33 = v27 + 52;
        if ( v32 != v27 + 54 )
          free(v32);
        v34 = v27 + 12;
        do
        {
          while ( 1 )
          {
            v33 -= 4;
            if ( *v33 == v33 + 2 )
              break;
            operator delete(*v33);
            if ( v34 == v33 )
              goto LABEL_39;
          }
        }
        while ( v34 != v33 );
LABEL_39:
        operator delete(v27, 0x3A0u);
      }
    }
  }
}

