void __fastcall sub_B2ED00(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int8 *v14; // rbp
  _BOOL8 v15; // r14
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int8 *v18; // rbp
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbp
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r13
  _QWORD *v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  void **v30; // rbp
  unsigned __int64 v31; // rax
  void **v32; // r12
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r12
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // eax
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r15
  __int64 v55; // r14
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // r15
  void *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // r14
  __int64 v65; // rbp
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // r14
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // [rsp+8h] [rbp-A0h]
  int v74; // [rsp+1Ch] [rbp-8Ch]
  void *v75; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v76; // [rsp+28h] [rbp-80h]
  __int64 v77; // [rsp+30h] [rbp-78h]
  void *v78; // [rsp+40h] [rbp-68h]
  __int64 v79; // [rsp+50h] [rbp-58h] BYREF
  __int16 v80; // [rsp+60h] [rbp-48h]

  v4 = (a2[3] >> 8) & 0xFFFFF;
  if ( (*((_BYTE *)sub_B1A550(a1[3], v4) + 21) & 2) == 0 )
    return;
  v8 = (a2[3] >> 8) & 0xFFFFF;
  if ( v8 == 133 )
  {
    v40 = a1[5];
    if ( v40 )
    {
      if ( (*(_BYTE *)(v40 + 48) & 1) == 0 )
      {
        sub_B169D0((__int64 *)v40, v4);
        v40 = a1[5];
      }
      v41 = *(_QWORD *)(v40 + 8);
      if ( v41 )
      {
        if ( (*(_BYTE *)(v41 + 28) & 0x7F) == 0x13 )
          return;
      }
    }
    v13 = 2;
  }
  else if ( v8 <= 0x85 )
  {
    if ( v8 == 18 )
    {
      if ( sub_B2EC10((__int64)a1, v4, v5, v6, v7) )
        return;
      v38 = a1[5];
      if ( v38 )
      {
        if ( (*(_BYTE *)(v38 + 48) & 1) == 0 )
        {
          sub_B169D0((__int64 *)v38, v4);
          v38 = a1[5];
        }
        v39 = *(_QWORD *)(v38 + 8);
        if ( v39 )
        {
          if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x48 )
            return;
        }
        if ( (*((_BYTE *)a2 + 15) & 0x10) != 0 )
        {
          if ( (*(_BYTE *)(v38 + 48) & 1) == 0 )
          {
            sub_B169D0((__int64 *)v38, v4);
            v38 = a1[5];
          }
          v72 = *(_QWORD *)(v38 + 8);
          if ( v72 )
          {
            if ( (*(_BYTE *)(v72 + 28) & 0x7F) == 0x14 )
              return;
          }
        }
      }
      v13 = 0;
    }
    else
    {
      if ( v8 != 89 )
        return;
      v11 = a1[5];
      if ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 48) & 1) == 0 )
        {
          sub_B169D0((__int64 *)v11, v4);
          v11 = a1[5];
        }
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          if ( (*(_BYTE *)(v12 + 28) & 0x7F) == 0x14 )
            return;
        }
      }
      v13 = 1;
    }
  }
  else if ( v8 == 168 )
  {
    v13 = 3;
    if ( sub_B2EC10((__int64)a1, v4, v5, v6, v7) )
      return;
  }
  else
  {
    if ( v8 != 186 )
      return;
    v9 = a1[5];
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 48) & 1) == 0 )
      {
        sub_B169D0((__int64 *)v9, v4);
        v9 = a1[5];
      }
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
      {
        if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 58 <= 3 && *(_BYTE *)(v10 + 73) >> 5 == 2 )
          return;
      }
    }
    v13 = 4;
  }
  sub_FA3370(&v75, a1[2], *a2, 2631);
  v14 = (unsigned __int8 *)v75;
  v15 = (*((_BYTE *)a2 + 15) & 0x10) != 0;
  if ( !v75 )
  {
    v43 = v76;
    v44 = *(_DWORD *)(v76 + 14976);
    if ( v44 )
    {
      v57 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v76 + 14976) = v57;
      v14 = *(unsigned __int8 **)(v43 + 8 * v57 + 14848);
      v58 = *((unsigned int *)v14 + 134);
      *v14 = 0;
      v59 = *((_QWORD *)v14 + 66);
      *((_DWORD *)v14 + 106) = 0;
      v60 = v59 + (v58 << 6);
      while ( v59 != v60 )
      {
        while ( 1 )
        {
          v60 -= 64;
          v61 = *(void **)(v60 + 24);
          if ( v61 == (void *)(v60 + 40) )
            break;
          v73 = v59;
          operator delete(v61);
          v59 = v73;
          if ( v73 == v60 )
            goto LABEL_90;
        }
      }
LABEL_90:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
    }
    v75 = v14;
  }
  v14[*v14 + 1] = 2;
  v16 = v75;
  v17 = *(unsigned __int8 *)v75;
  *(_BYTE *)v75 = v17 + 1;
  v18 = (unsigned __int8 *)v75;
  v16[v17 + 2] = v15;
  if ( !v18 )
  {
    v50 = v76;
    v51 = *(_DWORD *)(v76 + 14976);
    if ( v51 )
    {
      v52 = (unsigned int)(v51 - 1);
      *(_DWORD *)(v76 + 14976) = v52;
      v18 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
      v53 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v54 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v55 = v54 + (v53 << 6);
      while ( v54 != v55 )
      {
        while ( 1 )
        {
          v55 -= 64;
          v56 = *(void **)(v55 + 24);
          if ( v56 == (void *)(v55 + 40) )
            break;
          operator delete(v56);
          if ( v54 == v55 )
            goto LABEL_85;
        }
      }
LABEL_85:
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
  v21 = (unsigned __int8 *)v75;
  v19[v20 + 2] = v13;
  if ( !v21 )
  {
    v48 = v76;
    v49 = *(_DWORD *)(v76 + 14976);
    if ( v49 )
    {
      v67 = (unsigned int)(v49 - 1);
      *(_DWORD *)(v76 + 14976) = v67;
      v21 = *(unsigned __int8 **)(v48 + 8 * v67 + 14848);
      v68 = *((unsigned int *)v21 + 134);
      *v21 = 0;
      v69 = *((_QWORD *)v21 + 66);
      *((_DWORD *)v21 + 106) = 0;
      v70 = v69 + (v68 << 6);
      while ( v69 != v70 )
      {
        while ( 1 )
        {
          v70 -= 64;
          v71 = *(void **)(v70 + 24);
          if ( v71 == (void *)(v70 + 40) )
            break;
          operator delete(v71);
          if ( v69 == v70 )
            goto LABEL_102;
        }
      }
LABEL_102:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      v21 = (unsigned __int8 *)operator new(0x3A0u);
      *v21 = 0;
      *((_QWORD *)v21 + 12) = v21 + 112;
      *((_QWORD *)v21 + 16) = v21 + 144;
      *((_QWORD *)v21 + 20) = v21 + 176;
      *((_QWORD *)v21 + 24) = v21 + 208;
      *((_QWORD *)v21 + 28) = v21 + 240;
      *((_QWORD *)v21 + 32) = v21 + 272;
      *((_QWORD *)v21 + 36) = v21 + 304;
      *((_QWORD *)v21 + 40) = v21 + 336;
      *((_QWORD *)v21 + 44) = v21 + 368;
      *((_QWORD *)v21 + 48) = v21 + 400;
      *((_QWORD *)v21 + 52) = v21 + 432;
      *((_QWORD *)v21 + 13) = 0;
      v21[112] = 0;
      *((_QWORD *)v21 + 17) = 0;
      v21[144] = 0;
      *((_QWORD *)v21 + 21) = 0;
      v21[176] = 0;
      *((_QWORD *)v21 + 25) = 0;
      v21[208] = 0;
      *((_QWORD *)v21 + 29) = 0;
      v21[240] = 0;
      *((_QWORD *)v21 + 33) = 0;
      v21[272] = 0;
      *((_QWORD *)v21 + 37) = 0;
      v21[304] = 0;
      *((_QWORD *)v21 + 41) = 0;
      v21[336] = 0;
      *((_QWORD *)v21 + 45) = 0;
      v21[368] = 0;
      *((_QWORD *)v21 + 49) = 0;
      v21[400] = 0;
      *((_QWORD *)v21 + 53) = 0x800000000LL;
      *((_QWORD *)v21 + 66) = v21 + 544;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
    }
    v75 = v21;
  }
  v21[*v21 + 1] = 3;
  v22 = v75;
  v23 = *(unsigned __int8 *)v75;
  *(_BYTE *)v75 = v23 + 1;
  v22[v23 + 2] = v13;
  v24 = *(_QWORD *)(a2 + 1);
  v25 = v75;
  if ( v75 )
  {
    v26 = *((unsigned int *)v75 + 106);
    v27 = *((unsigned int *)v75 + 107);
    v28 = v26 + 1;
  }
  else
  {
    v45 = v76;
    v46 = *(_DWORD *)(v76 + 14976);
    if ( v46 )
    {
      v62 = (unsigned int)(v46 - 1);
      *(_DWORD *)(v76 + 14976) = v62;
      v25 = *(_QWORD **)(v45 + 8 * v62 + 14848);
      v63 = *((unsigned int *)v25 + 134);
      *(_BYTE *)v25 = 0;
      v64 = v25[66];
      *((_DWORD *)v25 + 106) = 0;
      v65 = v64 + (v63 << 6);
      if ( v64 == v65 )
      {
        v28 = 1;
        v26 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v65 -= 64;
            v66 = *(void **)(v65 + 24);
            if ( v66 == (void *)(v65 + 40) )
              break;
            operator delete(v66);
            if ( v64 == v65 )
              goto LABEL_94;
          }
        }
        while ( v64 != v65 );
LABEL_94:
        v26 = *((unsigned int *)v25 + 106);
        v28 = v26 + 1;
      }
      *((_DWORD *)v25 + 134) = 0;
      v27 = *((unsigned int *)v25 + 107);
    }
    else
    {
      v47 = operator new(0x3A0u);
      v27 = 8;
      v28 = 1;
      v25 = (_QWORD *)v47;
      *(_BYTE *)v47 = 0;
      *(_QWORD *)(v47 + 96) = v47 + 112;
      *(_QWORD *)(v47 + 128) = v47 + 144;
      *(_QWORD *)(v47 + 160) = v47 + 176;
      *(_QWORD *)(v47 + 192) = v47 + 208;
      *(_QWORD *)(v47 + 224) = v47 + 240;
      *(_QWORD *)(v47 + 256) = v47 + 272;
      *(_QWORD *)(v47 + 288) = v47 + 304;
      *(_QWORD *)(v47 + 320) = v47 + 336;
      *(_QWORD *)(v47 + 352) = v47 + 368;
      *(_QWORD *)(v47 + 384) = v47 + 400;
      *(_QWORD *)(v47 + 416) = v47 + 432;
      *(_QWORD *)(v47 + 104) = 0;
      *(_BYTE *)(v47 + 112) = 0;
      *(_QWORD *)(v47 + 136) = 0;
      *(_BYTE *)(v47 + 144) = 0;
      *(_QWORD *)(v47 + 168) = 0;
      *(_BYTE *)(v47 + 176) = 0;
      *(_QWORD *)(v47 + 200) = 0;
      *(_BYTE *)(v47 + 208) = 0;
      *(_QWORD *)(v47 + 232) = 0;
      *(_BYTE *)(v47 + 240) = 0;
      *(_QWORD *)(v47 + 264) = 0;
      *(_BYTE *)(v47 + 272) = 0;
      *(_QWORD *)(v47 + 296) = 0;
      *(_BYTE *)(v47 + 304) = 0;
      *(_QWORD *)(v47 + 328) = 0;
      *(_BYTE *)(v47 + 336) = 0;
      *(_QWORD *)(v47 + 360) = 0;
      *(_BYTE *)(v47 + 368) = 0;
      *(_QWORD *)(v47 + 392) = 0;
      *(_BYTE *)(v47 + 400) = 0;
      *(_QWORD *)(v47 + 424) = 0x800000000LL;
      *(_QWORD *)(v47 + 528) = v47 + 544;
      *(_QWORD *)(v47 + 536) = 0x600000000LL;
      v26 = 0;
    }
    v75 = v25;
  }
  LOBYTE(v74) = 1;
  if ( v27 < v28 )
  {
    sub_22134E0(v25 + 52, v25 + 54, v28, 12);
    v26 = *((unsigned int *)v25 + 106);
  }
  v29 = v25[52] + 12 * v26;
  *(_QWORD *)v29 = v24;
  *(_DWORD *)(v29 + 8) = v74;
  ++*((_DWORD *)v25 + 106);
  if ( (_BYTE)v80 )
  {
    sub_FA3A50(v77, &v75, HIBYTE(v80));
    v77 = 0;
    v80 = 0;
  }
  if ( v78 != &v79 )
    operator delete(v78);
  v30 = (void **)v75;
  if ( v75 )
  {
    v31 = v76;
    if ( v76 )
    {
      if ( (unsigned __int64)v75 < v76 || (unsigned __int64)v75 > v76 + 14848 )
      {
        v32 = *((void ***)v75 + 66);
        v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v75 + 134)];
        if ( v32 != v33 )
        {
          do
          {
            while ( 1 )
            {
              v33 -= 8;
              v34 = (void **)v33[3];
              if ( v34 == v33 + 5 )
                break;
              operator delete(v34);
              if ( v32 == v33 )
                goto LABEL_39;
            }
          }
          while ( v32 != v33 );
LABEL_39:
          v33 = (void **)v30[66];
        }
        if ( v33 != v30 + 68 )
          free(v33);
        v35 = (void **)v30[52];
        if ( v35 != v30 + 54 )
          free(v35);
        v36 = v30 + 48;
        v37 = v30 + 8;
        do
        {
          while ( *v36 != v36 + 2 )
          {
            operator delete(*v36);
            v36 -= 4;
            if ( v37 == v36 )
              goto LABEL_47;
          }
          v36 -= 4;
        }
        while ( v37 != v36 );
LABEL_47:
        operator delete(v30, 0x3A0u);
      }
      else
      {
        v42 = *(unsigned int *)(v76 + 14976);
        *(_DWORD *)(v76 + 14976) = v42 + 1;
        *(_QWORD *)(v31 + 8 * v42 + 14848) = v30;
      }
    }
  }
}

