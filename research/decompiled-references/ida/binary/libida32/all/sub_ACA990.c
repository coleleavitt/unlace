__int64 __fastcall sub_ACA990(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // r13
  __int64 *v12; // r12
  __int64 *v13; // r14
  unsigned int v14; // r15d
  int v15; // r12d
  __int64 v16; // rdi
  unsigned int v17; // r12d
  __int64 v18; // rax
  unsigned __int8 *v19; // r12
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // r12
  __int64 v24; // r13
  _QWORD *v25; // rdx
  __int64 v26; // rax
  void *v27; // rdi
  void **v28; // r13
  unsigned __int64 v29; // rax
  void **v30; // r15
  void **v31; // r12
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // r12
  void **v35; // r15
  unsigned int v36; // ebx
  __int64 v37; // rdi
  __int64 v38; // rax
  void *v39; // rdi
  void **v40; // rbp
  unsigned __int64 v41; // rax
  void **v42; // r12
  void **v43; // rbx
  void **v44; // rdi
  void **v45; // rdi
  void **v46; // rbx
  void **v47; // r12
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  int v55; // eax
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // r15
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r15
  void *v67; // rdi
  __int64 v68; // [rsp+0h] [rbp-98h]
  __int64 v69; // [rsp+0h] [rbp-98h]
  __int64 v70; // [rsp+0h] [rbp-98h]
  __int64 v71; // [rsp+8h] [rbp-90h]
  void *v72; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v73; // [rsp+18h] [rbp-80h]
  __int64 v74; // [rsp+20h] [rbp-78h]
  void *v75; // [rsp+30h] [rbp-68h]
  _BYTE v76[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v77; // [rsp+50h] [rbp-48h]

  v6 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
  if ( v6 != (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) )
  {
    if ( !*(_BYTE *)(a1 + 142) )
      return 0;
    v14 = *(_DWORD *)(a3 + 8);
    v15 = -(*(_BYTE *)(a1 + 141) == 0);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = (v15 & 0xDC) + 2344;
    if ( !*(_BYTE *)(a1 + 143) )
    {
      v50 = sub_A3ED80(v16);
      v51 = sub_A3ED80(*(_QWORD *)(a1 + 8));
      v16 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v50 + 204) = *(_DWORD *)(v51 + 204);
    }
    *(_BYTE *)(a1 + 143) = 1;
    v18 = sub_A3ED80(v16);
    sub_FA3370(&v72, v18, v14, v17);
    v19 = (unsigned __int8 *)v72;
    v20 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
    if ( !v72 )
    {
      v54 = v73;
      v55 = *(_DWORD *)(v73 + 14976);
      if ( v55 )
      {
        v58 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v73 + 14976) = v58;
        v19 = *(unsigned __int8 **)(v54 + 8 * v58 + 14848);
        v59 = *((unsigned int *)v19 + 134);
        v60 = *((_QWORD *)v19 + 66);
        *v19 = 0;
        *((_DWORD *)v19 + 106) = 0;
        v61 = v60 + (v59 << 6);
        while ( v60 != v61 )
        {
          while ( 1 )
          {
            v61 -= 64;
            v62 = *(void **)(v61 + 24);
            if ( v62 == (void *)(v61 + 40) )
              break;
            v71 = v60;
            v69 = v20;
            operator delete(v62);
            v60 = v71;
            v20 = v69;
            if ( v71 == v61 )
              goto LABEL_83;
          }
        }
LABEL_83:
        *((_DWORD *)v19 + 134) = 0;
      }
      else
      {
        v68 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
        v19 = (unsigned __int8 *)operator new(0x3A0u);
        *v19 = 0;
        *((_QWORD *)v19 + 12) = v19 + 112;
        *((_QWORD *)v19 + 16) = v19 + 144;
        *((_QWORD *)v19 + 20) = v19 + 176;
        *((_QWORD *)v19 + 24) = v19 + 208;
        *((_QWORD *)v19 + 28) = v19 + 240;
        *((_QWORD *)v19 + 32) = v19 + 272;
        *((_QWORD *)v19 + 36) = v19 + 304;
        *((_QWORD *)v19 + 40) = v19 + 336;
        *((_QWORD *)v19 + 44) = v19 + 368;
        *((_QWORD *)v19 + 48) = v19 + 400;
        *((_QWORD *)v19 + 52) = v19 + 432;
        *((_QWORD *)v19 + 13) = 0;
        v19[112] = 0;
        *((_QWORD *)v19 + 17) = 0;
        v19[144] = 0;
        *((_QWORD *)v19 + 21) = 0;
        v19[176] = 0;
        *((_QWORD *)v19 + 25) = 0;
        v19[208] = 0;
        *((_QWORD *)v19 + 29) = 0;
        v19[240] = 0;
        *((_QWORD *)v19 + 33) = 0;
        v19[272] = 0;
        *((_QWORD *)v19 + 37) = 0;
        v19[304] = 0;
        *((_QWORD *)v19 + 41) = 0;
        v19[336] = 0;
        *((_QWORD *)v19 + 45) = 0;
        v19[368] = 0;
        *((_QWORD *)v19 + 49) = 0;
        v19[400] = 0;
        *((_QWORD *)v19 + 53) = 0x800000000LL;
        v20 = v68;
        *((_QWORD *)v19 + 66) = v19 + 544;
        *((_QWORD *)v19 + 67) = 0x600000000LL;
      }
      v72 = v19;
    }
    v19[*v19 + 1] = 3;
    v21 = v72;
    v22 = *(unsigned __int8 *)v72;
    *(_BYTE *)v72 = v22 + 1;
    v21[v22 + 2] = v20;
    v23 = (unsigned __int8 *)v72;
    v24 = *(_DWORD *)(a3 + 20) & 0x1FFFFFFF;
    if ( !v72 )
    {
      v56 = v73;
      v57 = *(_DWORD *)(v73 + 14976);
      if ( v57 )
      {
        v63 = (unsigned int)(v57 - 1);
        *(_DWORD *)(v73 + 14976) = v63;
        v23 = *(unsigned __int8 **)(v56 + 8 * v63 + 14848);
        v64 = *((unsigned int *)v23 + 134);
        v65 = *((_QWORD *)v23 + 66);
        *v23 = 0;
        *((_DWORD *)v23 + 106) = 0;
        v66 = v65 + (v64 << 6);
        while ( v65 != v66 )
        {
          while ( 1 )
          {
            v66 -= 64;
            v67 = *(void **)(v66 + 24);
            if ( v67 == (void *)(v66 + 40) )
              break;
            v70 = v65;
            operator delete(v67);
            v65 = v70;
            if ( v70 == v66 )
              goto LABEL_88;
          }
        }
LABEL_88:
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        v23 = (unsigned __int8 *)operator new(0x3A0u);
        *v23 = 0;
        *((_QWORD *)v23 + 12) = v23 + 112;
        *((_QWORD *)v23 + 16) = v23 + 144;
        *((_QWORD *)v23 + 20) = v23 + 176;
        *((_QWORD *)v23 + 24) = v23 + 208;
        *((_QWORD *)v23 + 28) = v23 + 240;
        *((_QWORD *)v23 + 32) = v23 + 272;
        *((_QWORD *)v23 + 36) = v23 + 304;
        *((_QWORD *)v23 + 40) = v23 + 336;
        *((_QWORD *)v23 + 44) = v23 + 368;
        *((_QWORD *)v23 + 48) = v23 + 400;
        *((_QWORD *)v23 + 52) = v23 + 432;
        *((_QWORD *)v23 + 13) = 0;
        v23[112] = 0;
        *((_QWORD *)v23 + 17) = 0;
        v23[144] = 0;
        *((_QWORD *)v23 + 21) = 0;
        v23[176] = 0;
        *((_QWORD *)v23 + 25) = 0;
        v23[208] = 0;
        *((_QWORD *)v23 + 29) = 0;
        v23[240] = 0;
        *((_QWORD *)v23 + 33) = 0;
        v23[272] = 0;
        *((_QWORD *)v23 + 37) = 0;
        v23[304] = 0;
        *((_QWORD *)v23 + 41) = 0;
        v23[336] = 0;
        *((_QWORD *)v23 + 45) = 0;
        v23[368] = 0;
        *((_QWORD *)v23 + 49) = 0;
        v23[400] = 0;
        *((_QWORD *)v23 + 53) = 0x800000000LL;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      v72 = v23;
    }
    v23[*v23 + 1] = 3;
    v25 = v72;
    v26 = *(unsigned __int8 *)v72;
    *(_BYTE *)v72 = v26 + 1;
    v25[v26 + 2] = v24;
    if ( (_BYTE)v77 )
    {
      sub_FA3A50(v74, &v72, HIBYTE(v77));
      v27 = v75;
      v74 = 0;
      v77 = 0;
      if ( v75 == v76 )
        goto LABEL_18;
    }
    else
    {
      v27 = v75;
      if ( v75 == v76 )
      {
LABEL_18:
        v28 = (void **)v72;
        if ( v72 )
        {
          v29 = v73;
          if ( v73 )
          {
            if ( (unsigned __int64)v72 < v73 || (unsigned __int64)v72 > v73 + 14848 )
            {
              v30 = *((void ***)v72 + 66);
              v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v72 + 134)];
              if ( v30 != v31 )
              {
                do
                {
                  while ( 1 )
                  {
                    v31 -= 8;
                    v32 = (void **)v31[3];
                    if ( v32 == v31 + 5 )
                      break;
                    operator delete(v32);
                    if ( v30 == v31 )
                      goto LABEL_24;
                  }
                }
                while ( v30 != v31 );
LABEL_24:
                v31 = (void **)v28[66];
              }
              if ( v31 != v28 + 68 )
                free(v31);
              v33 = (void **)v28[52];
              if ( v33 != v28 + 54 )
                free(v33);
              v34 = v28 + 48;
              v35 = v28 + 8;
              do
              {
                while ( *v34 != v34 + 2 )
                {
                  operator delete(*v34);
                  v34 -= 4;
                  if ( v35 == v34 )
                    goto LABEL_32;
                }
                v34 -= 4;
              }
              while ( v35 != v34 );
LABEL_32:
              operator delete(v28, 0x3A0u);
            }
            else
            {
              v52 = *(unsigned int *)(v73 + 14976);
              *(_DWORD *)(v73 + 14976) = v52 + 1;
              *(_QWORD *)(v29 + 8 * v52 + 14848) = v28;
            }
          }
        }
        v36 = *(_DWORD *)(a2 + 8);
        v37 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(a1 + 143) )
        {
          v48 = sub_A3ED80(v37);
          v49 = sub_A3ED80(*(_QWORD *)(a1 + 16));
          v37 = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(v48 + 204) = *(_DWORD *)(v49 + 204);
        }
        *(_BYTE *)(a1 + 143) = 0;
        v38 = sub_A3ED80(v37);
        sub_FA3370(&v72, v38, v36, 2551);
        if ( (_BYTE)v77 )
        {
          sub_FA3A50(v74, &v72, HIBYTE(v77));
          v39 = v75;
          v74 = 0;
          v77 = 0;
          if ( v75 == v76 )
            goto LABEL_38;
        }
        else
        {
          v39 = v75;
          if ( v75 == v76 )
          {
LABEL_38:
            v40 = (void **)v72;
            if ( v72 )
            {
              v41 = v73;
              if ( v73 )
              {
                if ( (unsigned __int64)v72 < v73 || (unsigned __int64)v72 > v73 + 14848 )
                {
                  v42 = *((void ***)v72 + 66);
                  v43 = &v42[8 * (unsigned __int64)*((unsigned int *)v72 + 134)];
                  if ( v42 != v43 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v43 -= 8;
                        v44 = (void **)v43[3];
                        if ( v44 == v43 + 5 )
                          break;
                        operator delete(v44);
                        if ( v42 == v43 )
                          goto LABEL_44;
                      }
                    }
                    while ( v42 != v43 );
LABEL_44:
                    v43 = (void **)v40[66];
                  }
                  if ( v43 != v40 + 68 )
                    free(v43);
                  v45 = (void **)v40[52];
                  v46 = v40 + 52;
                  if ( v45 != v40 + 54 )
                    free(v45);
                  v47 = v40 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v46 -= 4;
                      if ( *v46 == v46 + 2 )
                        break;
                      operator delete(*v46);
                      if ( v46 == v47 )
                        goto LABEL_52;
                    }
                  }
                  while ( v46 != v47 );
LABEL_52:
                  operator delete(v40, 0x3A0u);
                }
                else
                {
                  v53 = *(unsigned int *)(v73 + 14976);
                  *(_DWORD *)(v73 + 14976) = v53 + 1;
                  *(_QWORD *)(v41 + 8 * v53 + 14848) = v40;
                }
              }
            }
            return 0;
          }
        }
        operator delete(v39);
        goto LABEL_38;
      }
    }
    operator delete(v27);
    goto LABEL_18;
  }
  if ( v6 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a3 + 24);
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) == (*(_BYTE *)(v8 + 28) & 0x7F) )
    {
      v10 = (__int64 *)(a2 + 32);
      v11 = (__int64 *)(a3 + 32);
      v12 = &v10[v6 - 1];
      while ( (unsigned __int8)sub_AC9FE0(a1, v8, v9) )
      {
        if ( v10 == v12 )
          return 1;
        v8 = *v10;
        v9 = *v11;
        v13 = v10;
        ++v11;
        ++v10;
        if ( (*(_BYTE *)(v9 + 28) & 0x7F) != (*(_BYTE *)(v8 + 28) & 0x7F) )
          goto LABEL_67;
      }
    }
    else
    {
      v13 = (__int64 *)(a2 + 24);
LABEL_67:
      if ( *(_BYTE *)(a1 + 142) )
      {
        sub_AC7530((__int64)&v72, a1, *(_DWORD *)(v9 + 24), *(_BYTE *)(a1 + 141) == 0 ? 2565 : 2345);
        sub_AC6300((__int64)&v72);
        sub_AC74B0((__int64)&v72, a1, *(_DWORD *)(*v13 + 24), 0x9F6u);
        sub_AC6300((__int64)&v72);
      }
    }
    return 0;
  }
  return 1;
}

