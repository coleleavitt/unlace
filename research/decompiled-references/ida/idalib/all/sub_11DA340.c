void __fastcall sub_11DA340(__int64 a1)
{
  int v2; // edi
  char *v3; // rax
  unsigned __int8 *v4; // rbp
  char *v5; // r13
  _QWORD *v6; // rdx
  __int64 v7; // rax
  void *v8; // rdi
  void **v9; // rbp
  unsigned __int64 v10; // rax
  void **v11; // r12
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rbx
  void **v16; // r12
  char *v17; // rax
  __int64 v18; // rdx
  char *v19; // rbx
  unsigned __int8 *v20; // r12
  _QWORD *v21; // rdx
  __int64 v22; // rax
  char *v23; // rax
  unsigned __int8 *v24; // r12
  char *v25; // r14
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void *v28; // rdi
  void **v29; // r12
  unsigned __int64 v30; // rax
  void **v31; // r13
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // r15
  __int64 v44; // r13
  void *v45; // rdi
  unsigned __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // r13
  void *v52; // rdi
  unsigned __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r14
  __int64 v58; // r12
  void *v59; // rdi
  void *v60; // [rsp+0h] [rbp-A8h] BYREF
  signed __int64 v61; // [rsp+8h] [rbp-A0h]
  _BYTE v62[16]; // [rsp+10h] [rbp-98h] BYREF
  void *v63; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-80h]
  __int64 v65; // [rsp+30h] [rbp-78h]
  void *v66; // [rsp+40h] [rbp-68h]
  _BYTE v67[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v68; // [rsp+60h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 <= 26 )
  {
    if ( v2 <= 22 )
      return;
    sub_FC70B0((__int64)&v63, **(_QWORD **)a1, 0, 587);
    v3 = sub_FBFE80(*(_DWORD *)(a1 + 12));
    v4 = (unsigned __int8 *)v63;
    v5 = v3;
    if ( !v63 )
    {
      v53 = v64;
      v54 = *(_DWORD *)(v64 + 14976);
      if ( v54 )
      {
        v55 = (unsigned int)(v54 - 1);
        *(_DWORD *)(v64 + 14976) = v55;
        v4 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v4 + 134);
        *v4 = 0;
        v57 = *((_QWORD *)v4 + 66);
        *((_DWORD *)v4 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            operator delete(v59);
            if ( v57 == v58 )
              goto LABEL_88;
          }
        }
LABEL_88:
        *((_DWORD *)v4 + 134) = 0;
      }
      else
      {
        v4 = (unsigned __int8 *)operator new(0x3A0u);
        *v4 = 0;
        *((_QWORD *)v4 + 12) = v4 + 112;
        *((_QWORD *)v4 + 16) = v4 + 144;
        *((_QWORD *)v4 + 20) = v4 + 176;
        *((_QWORD *)v4 + 24) = v4 + 208;
        *((_QWORD *)v4 + 28) = v4 + 240;
        *((_QWORD *)v4 + 32) = v4 + 272;
        *((_QWORD *)v4 + 36) = v4 + 304;
        *((_QWORD *)v4 + 40) = v4 + 336;
        *((_QWORD *)v4 + 44) = v4 + 368;
        *((_QWORD *)v4 + 48) = v4 + 400;
        *((_QWORD *)v4 + 52) = v4 + 432;
        *((_QWORD *)v4 + 13) = 0;
        v4[112] = 0;
        *((_QWORD *)v4 + 17) = 0;
        v4[144] = 0;
        *((_QWORD *)v4 + 21) = 0;
        v4[176] = 0;
        *((_QWORD *)v4 + 25) = 0;
        v4[208] = 0;
        *((_QWORD *)v4 + 29) = 0;
        v4[240] = 0;
        *((_QWORD *)v4 + 33) = 0;
        v4[272] = 0;
        *((_QWORD *)v4 + 37) = 0;
        v4[304] = 0;
        *((_QWORD *)v4 + 41) = 0;
        v4[336] = 0;
        *((_QWORD *)v4 + 45) = 0;
        v4[368] = 0;
        *((_QWORD *)v4 + 49) = 0;
        v4[400] = 0;
        *((_QWORD *)v4 + 53) = 0x800000000LL;
        *((_QWORD *)v4 + 66) = v4 + 544;
        *((_QWORD *)v4 + 67) = 0x600000000LL;
      }
      v63 = v4;
    }
    v4[*v4 + 1] = 1;
    v6 = v63;
    v7 = *(unsigned __int8 *)v63;
    *(_BYTE *)v63 = v7 + 1;
    v6[v7 + 2] = v5;
    if ( (_BYTE)v68 )
    {
      sub_FC7790(v65, (__int64 *)&v63, SHIBYTE(v68));
      v8 = v66;
      v65 = 0;
      v68 = 0;
      if ( v66 == v67 )
        goto LABEL_8;
    }
    else
    {
      v8 = v66;
      if ( v66 == v67 )
      {
LABEL_8:
        v9 = (void **)v63;
        if ( v63 )
        {
          v10 = v64;
          if ( v64 )
          {
            if ( (unsigned __int64)v63 < v64 || (unsigned __int64)v63 > v64 + 14848 )
            {
              v11 = *((void ***)v63 + 66);
              v12 = &v11[8 * (unsigned __int64)*((unsigned int *)v63 + 134)];
              if ( v11 != v12 )
              {
                do
                {
                  while ( 1 )
                  {
                    v12 -= 8;
                    v13 = (void **)v12[3];
                    if ( v13 == v12 + 5 )
                      break;
                    operator delete(v13);
                    if ( v11 == v12 )
                      goto LABEL_14;
                  }
                }
                while ( v11 != v12 );
LABEL_14:
                v12 = (void **)v9[66];
              }
              if ( v12 != v9 + 68 )
                free(v12);
              v14 = (void **)v9[52];
              if ( v14 != v9 + 54 )
                free(v14);
              v15 = v9 + 48;
              v16 = v9 + 8;
              do
              {
                while ( *v15 != v15 + 2 )
                {
                  operator delete(*v15);
                  v15 -= 4;
                  if ( v15 == v16 )
                    goto LABEL_22;
                }
                v15 -= 4;
              }
              while ( v16 != v15 );
LABEL_22:
              operator delete(v9, 0x3A0u);
            }
            else
            {
              v38 = *(unsigned int *)(v64 + 14976);
              *(_DWORD *)(v64 + 14976) = v38 + 1;
              *(_QWORD *)(v10 + 8 * v38 + 14848) = v9;
            }
          }
        }
        return;
      }
    }
    operator delete(v8);
    goto LABEL_8;
  }
  v17 = sub_FBFE80(v2);
  v18 = -1;
  v19 = v17;
  v60 = v62;
  if ( v17 )
    v18 = (__int64)&v17[strlen(v17)];
  sub_11D7980(&v60, v19, v18);
  if ( v61 )
    sub_99BDC0(&v60, 0, 0, " ", 1u);
  sub_FC70B0((__int64)&v63, **(_QWORD **)a1, 0, 579);
  sub_AEC220((unsigned __int8 **)&v63, v60, v61);
  v20 = (unsigned __int8 *)v63;
  if ( !v63 )
  {
    v46 = v64;
    v47 = *(_DWORD *)(v64 + 14976);
    if ( v47 )
    {
      v48 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v64 + 14976) = v48;
      v20 = *(unsigned __int8 **)(v46 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v20 + 134);
      v50 = *((_QWORD *)v20 + 66);
      *v20 = 0;
      *((_DWORD *)v20 + 106) = 0;
      v51 = v50 + (v49 << 6);
      while ( v50 != v51 )
      {
        while ( 1 )
        {
          v51 -= 64;
          v52 = *(void **)(v51 + 24);
          if ( v52 == (void *)(v51 + 40) )
            break;
          operator delete(v52);
          if ( v50 == v51 )
            goto LABEL_76;
        }
      }
LABEL_76:
      *((_DWORD *)v20 + 134) = 0;
    }
    else
    {
      v20 = (unsigned __int8 *)operator new(0x3A0u);
      *v20 = 0;
      *((_QWORD *)v20 + 12) = v20 + 112;
      *((_QWORD *)v20 + 16) = v20 + 144;
      *((_QWORD *)v20 + 20) = v20 + 176;
      *((_QWORD *)v20 + 24) = v20 + 208;
      *((_QWORD *)v20 + 28) = v20 + 240;
      *((_QWORD *)v20 + 32) = v20 + 272;
      *((_QWORD *)v20 + 36) = v20 + 304;
      *((_QWORD *)v20 + 40) = v20 + 336;
      *((_QWORD *)v20 + 44) = v20 + 368;
      *((_QWORD *)v20 + 48) = v20 + 400;
      *((_QWORD *)v20 + 52) = v20 + 432;
      *((_QWORD *)v20 + 13) = 0;
      v20[112] = 0;
      *((_QWORD *)v20 + 17) = 0;
      v20[144] = 0;
      *((_QWORD *)v20 + 21) = 0;
      v20[176] = 0;
      *((_QWORD *)v20 + 25) = 0;
      v20[208] = 0;
      *((_QWORD *)v20 + 29) = 0;
      v20[240] = 0;
      *((_QWORD *)v20 + 33) = 0;
      v20[272] = 0;
      *((_QWORD *)v20 + 37) = 0;
      v20[304] = 0;
      *((_QWORD *)v20 + 41) = 0;
      v20[336] = 0;
      *((_QWORD *)v20 + 45) = 0;
      v20[368] = 0;
      *((_QWORD *)v20 + 49) = 0;
      v20[400] = 0;
      *((_QWORD *)v20 + 53) = 0x800000000LL;
      *((_QWORD *)v20 + 66) = v20 + 544;
      *((_QWORD *)v20 + 67) = 0x600000000LL;
    }
    v63 = v20;
  }
  v20[*v20 + 1] = 2;
  v21 = v63;
  v22 = *(unsigned __int8 *)v63;
  *(_BYTE *)v63 = v22 + 1;
  v21[v22 + 2] = 1;
  v23 = sub_FBFE80(26);
  v24 = (unsigned __int8 *)v63;
  v25 = v23;
  if ( !v63 )
  {
    v39 = v64;
    v40 = *(_DWORD *)(v64 + 14976);
    if ( v40 )
    {
      v41 = (unsigned int)(v40 - 1);
      *(_DWORD *)(v64 + 14976) = v41;
      v24 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v24 + 134);
      v43 = *((_QWORD *)v24 + 66);
      *v24 = 0;
      *((_DWORD *)v24 + 106) = 0;
      v44 = v43 + (v42 << 6);
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *(void **)(v44 + 24);
          if ( v45 == (void *)(v44 + 40) )
            break;
          operator delete(v45);
          if ( v43 == v44 )
            goto LABEL_70;
        }
      }
LABEL_70:
      *((_DWORD *)v24 + 134) = 0;
    }
    else
    {
      v24 = (unsigned __int8 *)operator new(0x3A0u);
      *v24 = 0;
      *((_QWORD *)v24 + 12) = v24 + 112;
      *((_QWORD *)v24 + 16) = v24 + 144;
      *((_QWORD *)v24 + 20) = v24 + 176;
      *((_QWORD *)v24 + 24) = v24 + 208;
      *((_QWORD *)v24 + 28) = v24 + 240;
      *((_QWORD *)v24 + 32) = v24 + 272;
      *((_QWORD *)v24 + 36) = v24 + 304;
      *((_QWORD *)v24 + 40) = v24 + 336;
      *((_QWORD *)v24 + 44) = v24 + 368;
      *((_QWORD *)v24 + 48) = v24 + 400;
      *((_QWORD *)v24 + 52) = v24 + 432;
      *((_QWORD *)v24 + 13) = 0;
      v24[112] = 0;
      *((_QWORD *)v24 + 17) = 0;
      v24[144] = 0;
      *((_QWORD *)v24 + 21) = 0;
      v24[176] = 0;
      *((_QWORD *)v24 + 25) = 0;
      v24[208] = 0;
      *((_QWORD *)v24 + 29) = 0;
      v24[240] = 0;
      *((_QWORD *)v24 + 33) = 0;
      v24[272] = 0;
      *((_QWORD *)v24 + 37) = 0;
      v24[304] = 0;
      *((_QWORD *)v24 + 41) = 0;
      v24[336] = 0;
      *((_QWORD *)v24 + 45) = 0;
      v24[368] = 0;
      *((_QWORD *)v24 + 49) = 0;
      v24[400] = 0;
      *((_QWORD *)v24 + 53) = 0x800000000LL;
      *((_QWORD *)v24 + 66) = v24 + 544;
      *((_QWORD *)v24 + 67) = 0x600000000LL;
    }
    v63 = v24;
  }
  v24[*v24 + 1] = 1;
  v26 = v63;
  v27 = *(unsigned __int8 *)v63;
  *(_BYTE *)v63 = v27 + 1;
  v26[v27 + 2] = v25;
  if ( !(_BYTE)v68 )
  {
    v28 = v66;
    if ( v66 == v67 )
      goto LABEL_32;
    goto LABEL_31;
  }
  sub_FC7790(v65, (__int64 *)&v63, SHIBYTE(v68));
  v28 = v66;
  v65 = 0;
  v68 = 0;
  if ( v66 != v67 )
LABEL_31:
    operator delete(v28);
LABEL_32:
  v29 = (void **)v63;
  if ( v63 )
  {
    v30 = v64;
    if ( v64 )
    {
      if ( (unsigned __int64)v63 < v64 || (unsigned __int64)v63 > v64 + 14848 )
      {
        v31 = *((void ***)v63 + 66);
        v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v63 + 134)];
        if ( v31 != v32 )
        {
          do
          {
            while ( 1 )
            {
              v32 -= 8;
              v33 = (void **)v32[3];
              if ( v33 == v32 + 5 )
                break;
              operator delete(v33);
              if ( v31 == v32 )
                goto LABEL_38;
            }
          }
          while ( v31 != v32 );
LABEL_38:
          v32 = (void **)v29[66];
        }
        if ( v32 != v29 + 68 )
          free(v32);
        v34 = (void **)v29[52];
        if ( v34 != v29 + 54 )
          free(v34);
        v35 = v29 + 48;
        v36 = v29 + 8;
        do
        {
          while ( *v35 != v35 + 2 )
          {
            operator delete(*v35);
            v35 -= 4;
            if ( v35 == v36 )
              goto LABEL_46;
          }
          v35 -= 4;
        }
        while ( v35 != v36 );
LABEL_46:
        operator delete(v29, 0x3A0u);
      }
      else
      {
        v37 = *(unsigned int *)(v64 + 14976);
        *(_DWORD *)(v64 + 14976) = v37 + 1;
        *(_QWORD *)(v30 + 8 * v37 + 14848) = v29;
      }
    }
  }
  if ( v60 != v62 )
    operator delete(v60);
}
