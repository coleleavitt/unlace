__int64 __fastcall sub_AC8BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int8 *v18; // r15
  _QWORD *v19; // rdx
  __int64 v20; // rax
  bool v21; // zf
  unsigned __int8 *v22; // rbp
  _BOOL8 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  void **v26; // rbp
  unsigned __int64 v27; // rax
  void **v28; // rdx
  void **v29; // r15
  void **v30; // rdi
  void **v31; // rdi
  void **v32; // r15
  unsigned __int8 *v33; // rbp
  _QWORD *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // rbx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // rdx
  int v45; // eax
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r15
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rdx
  __int64 v63; // r15
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rbp
  __int64 v67; // r13
  __int64 v68; // rbp
  void *v69; // rdi
  unsigned int v70; // [rsp+8h] [rbp-A0h]
  void **v71; // [rsp+8h] [rbp-A0h]
  void **v72; // [rsp+8h] [rbp-A0h]
  _BOOL8 v73; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+8h] [rbp-A0h]
  _BOOL8 v75; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+8h] [rbp-A0h]
  __int64 v77; // [rsp+8h] [rbp-A0h]
  __int64 v78; // [rsp+10h] [rbp-98h]
  __int64 v79; // [rsp+18h] [rbp-90h]
  void *v80; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v81; // [rsp+28h] [rbp-80h]
  __int64 v82; // [rsp+30h] [rbp-78h]
  void *v83; // [rsp+40h] [rbp-68h]
  __int64 v84; // [rsp+50h] [rbp-58h] BYREF
  __int16 v85; // [rsp+60h] [rbp-48h]

  v4 = a3;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      return 1;
    v9 = **(_QWORD **)sub_B68690(a3);
    goto LABEL_47;
  }
  v8 = **(_QWORD **)sub_B68690(a2);
  if ( (*(_BYTE *)(v4 + 29) & 1) != 0 )
  {
    v9 = **(_QWORD **)sub_B68690(v4);
    if ( !v8 )
    {
LABEL_47:
      if ( !v9 )
        return 1;
      v8 = 0;
    }
  }
  else
  {
    v9 = 0;
    if ( !v8 )
      return 1;
  }
  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 && (*(_BYTE *)(v4 + 29) & 2) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( a4 )
      v4 = a4;
    v70 = *(_DWORD *)(v4 + 24);
    if ( !*(_BYTE *)(a1 + 143) )
    {
      v39 = sub_A3ED80(v10);
      v40 = sub_A3ED80(*(_QWORD *)(a1 + 8));
      v10 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v39 + 204) = *(_DWORD *)(v40 + 204);
    }
    *(_BYTE *)(a1 + 143) = 1;
    v11 = sub_A3ED80(v10);
    sub_FA3370(&v80, v11, v70, 2580);
    v16 = *(_QWORD *)(v4 + 48);
    if ( v16 )
      v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v17 = sub_A56D30(*(_QWORD *)(a1 + 16), v4, v12, v13, v14, v15);
    v18 = (unsigned __int8 *)v80;
    if ( !v80 )
    {
      v44 = v81;
      v45 = *(_DWORD *)(v81 + 14976);
      if ( v45 )
      {
        v55 = (unsigned int)(v45 - 1);
        *(_DWORD *)(v81 + 14976) = v55;
        v18 = *(unsigned __int8 **)(v44 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v57 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            v79 = v58;
            v76 = v17;
            operator delete(v59);
            v58 = v79;
            v17 = v76;
            if ( v57 == v79 )
              goto LABEL_74;
          }
        }
LABEL_74:
        *((_DWORD *)v18 + 134) = 0;
      }
      else
      {
        v74 = v17;
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
        v17 = v74;
        *((_QWORD *)v18 + 66) = v18 + 544;
        *((_QWORD *)v18 + 67) = 0x600000000LL;
      }
      v80 = v18;
    }
    v18[*v18 + 1] = 8;
    v19 = v80;
    v20 = *(unsigned __int8 *)v80;
    *(_BYTE *)v80 = v20 + 1;
    v19[v20 + 2] = v17;
    v21 = a4 == 0;
    v22 = (unsigned __int8 *)v80;
    v23 = !v21;
    if ( !v80 )
    {
      v42 = v81;
      v43 = *(_DWORD *)(v81 + 14976);
      if ( v43 )
      {
        v50 = (unsigned int)(v43 - 1);
        *(_DWORD *)(v81 + 14976) = v50;
        v22 = *(unsigned __int8 **)(v42 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v52 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v53 = v52 + (v51 << 6);
        while ( v52 != v53 )
        {
          while ( 1 )
          {
            v53 -= 64;
            v54 = *(void **)(v53 + 24);
            if ( v54 == (void *)(v53 + 40) )
              break;
            v78 = v52;
            v75 = v23;
            operator delete(v54);
            v52 = v78;
            v23 = v75;
            if ( v78 == v53 )
              goto LABEL_69;
          }
        }
LABEL_69:
        *((_DWORD *)v22 + 134) = 0;
      }
      else
      {
        v73 = !v21;
        v22 = (unsigned __int8 *)operator new(0x3A0u);
        *v22 = 0;
        *((_QWORD *)v22 + 12) = v22 + 112;
        *((_QWORD *)v22 + 16) = v22 + 144;
        *((_QWORD *)v22 + 20) = v22 + 176;
        *((_QWORD *)v22 + 24) = v22 + 208;
        *((_QWORD *)v22 + 28) = v22 + 240;
        *((_QWORD *)v22 + 32) = v22 + 272;
        *((_QWORD *)v22 + 36) = v22 + 304;
        *((_QWORD *)v22 + 40) = v22 + 336;
        *((_QWORD *)v22 + 44) = v22 + 368;
        *((_QWORD *)v22 + 48) = v22 + 400;
        *((_QWORD *)v22 + 52) = v22 + 432;
        *((_QWORD *)v22 + 13) = 0;
        v22[112] = 0;
        *((_QWORD *)v22 + 17) = 0;
        v22[144] = 0;
        *((_QWORD *)v22 + 21) = 0;
        v22[176] = 0;
        *((_QWORD *)v22 + 25) = 0;
        v22[208] = 0;
        *((_QWORD *)v22 + 29) = 0;
        v22[240] = 0;
        *((_QWORD *)v22 + 33) = 0;
        v22[272] = 0;
        *((_QWORD *)v22 + 37) = 0;
        v22[304] = 0;
        *((_QWORD *)v22 + 41) = 0;
        v22[336] = 0;
        *((_QWORD *)v22 + 45) = 0;
        v22[368] = 0;
        *((_QWORD *)v22 + 49) = 0;
        v22[400] = 0;
        *((_QWORD *)v22 + 53) = 0x800000000LL;
        v23 = v73;
        *((_QWORD *)v22 + 66) = v22 + 544;
        *((_QWORD *)v22 + 67) = 0x600000000LL;
      }
      v80 = v22;
    }
    v22[*v22 + 1] = 2;
    v24 = v80;
    v25 = *(unsigned __int8 *)v80;
    *(_BYTE *)v80 = v25 + 1;
    v24[v25 + 2] = v23;
    if ( (_BYTE)v85 )
    {
      sub_FA3A50(v82, &v80, HIBYTE(v85));
      v82 = 0;
      v85 = 0;
    }
    if ( v83 != &v84 )
      operator delete(v83);
    v26 = (void **)v80;
    if ( v80 )
    {
      v27 = v81;
      if ( v81 )
      {
        if ( (unsigned __int64)v80 < v81 || (unsigned __int64)v80 > v81 + 14848 )
        {
          v28 = *((void ***)v80 + 66);
          v29 = &v28[8 * (unsigned __int64)*((unsigned int *)v80 + 134)];
          if ( v28 != v29 )
          {
            do
            {
              while ( 1 )
              {
                v29 -= 8;
                v30 = (void **)v29[3];
                if ( v30 == v29 + 5 )
                  break;
                v71 = v28;
                operator delete(v30);
                v28 = v71;
                if ( v71 == v29 )
                  goto LABEL_26;
              }
            }
            while ( v28 != v29 );
LABEL_26:
            v29 = (void **)v26[66];
          }
          if ( v29 != v26 + 68 )
            free(v29);
          v31 = (void **)v26[52];
          if ( v31 != v26 + 54 )
            free(v31);
          v32 = v26 + 48;
          v72 = v26 + 8;
          do
          {
            while ( *v32 != v32 + 2 )
            {
              operator delete(*v32);
              v32 -= 4;
              if ( v72 == v32 )
                goto LABEL_34;
            }
            v32 -= 4;
          }
          while ( v32 != v72 );
LABEL_34:
          operator delete(v26, 0x3A0u);
        }
        else
        {
          v41 = *(unsigned int *)(v81 + 14976);
          *(_DWORD *)(v81 + 14976) = v41 + 1;
          *(_QWORD *)(v27 + 8 * v41 + 14848) = v26;
        }
      }
    }
    if ( v8 )
    {
      sub_AC74B0((__int64)&v80, a1, *(_DWORD *)(v8 + 24), 0x9DFu);
      v33 = (unsigned __int8 *)v80;
      if ( !v80 )
      {
        v48 = v81;
        v49 = *(_DWORD *)(v81 + 14976);
        if ( v49 )
        {
          v60 = (unsigned int)(v49 - 1);
          *(_DWORD *)(v81 + 14976) = v60;
          v33 = *(unsigned __int8 **)(v48 + 8 * v60 + 14848);
          v61 = *((unsigned int *)v33 + 134);
          *v33 = 0;
          v62 = *((_QWORD *)v33 + 66);
          *((_DWORD *)v33 + 106) = 0;
          v63 = v62 + (v61 << 6);
          while ( v62 != v63 )
          {
            while ( 1 )
            {
              v63 -= 64;
              v64 = *(void **)(v63 + 24);
              if ( v64 == (void *)(v63 + 40) )
                break;
              v77 = v62;
              operator delete(v64);
              v62 = v77;
              if ( v77 == v63 )
                goto LABEL_79;
            }
          }
LABEL_79:
          *((_DWORD *)v33 + 134) = 0;
        }
        else
        {
          v33 = (unsigned __int8 *)operator new(0x3A0u);
          *v33 = 0;
          *((_QWORD *)v33 + 12) = v33 + 112;
          *((_QWORD *)v33 + 16) = v33 + 144;
          *((_QWORD *)v33 + 20) = v33 + 176;
          *((_QWORD *)v33 + 24) = v33 + 208;
          *((_QWORD *)v33 + 28) = v33 + 240;
          *((_QWORD *)v33 + 32) = v33 + 272;
          *((_QWORD *)v33 + 36) = v33 + 304;
          *((_QWORD *)v33 + 40) = v33 + 336;
          *((_QWORD *)v33 + 44) = v33 + 368;
          *((_QWORD *)v33 + 48) = v33 + 400;
          *((_QWORD *)v33 + 52) = v33 + 432;
          *((_QWORD *)v33 + 13) = 0;
          v33[112] = 0;
          *((_QWORD *)v33 + 17) = 0;
          v33[144] = 0;
          *((_QWORD *)v33 + 21) = 0;
          v33[176] = 0;
          *((_QWORD *)v33 + 25) = 0;
          v33[208] = 0;
          *((_QWORD *)v33 + 29) = 0;
          v33[240] = 0;
          *((_QWORD *)v33 + 33) = 0;
          v33[272] = 0;
          *((_QWORD *)v33 + 37) = 0;
          v33[304] = 0;
          *((_QWORD *)v33 + 41) = 0;
          v33[336] = 0;
          *((_QWORD *)v33 + 45) = 0;
          v33[368] = 0;
          *((_QWORD *)v33 + 49) = 0;
          v33[400] = 0;
          *((_QWORD *)v33 + 53) = 0x800000000LL;
          *((_QWORD *)v33 + 66) = v33 + 544;
          *((_QWORD *)v33 + 67) = 0x600000000LL;
        }
        v80 = v33;
      }
      v33[*v33 + 1] = 14;
      v34 = v80;
      v35 = *(unsigned __int8 *)v80;
      *(_BYTE *)v80 = v35 + 1;
      v34[v35 + 2] = v8;
      sub_AC6300((__int64)&v80);
    }
    if ( v9 )
    {
      sub_AC74B0((__int64)&v80, a1, *(_DWORD *)(v9 + 24), 0x9DFu);
      v36 = (unsigned __int8 *)v80;
      if ( !v80 )
      {
        v46 = v81;
        v47 = *(_DWORD *)(v81 + 14976);
        if ( v47 )
        {
          v65 = (unsigned int)(v47 - 1);
          *(_DWORD *)(v81 + 14976) = v65;
          v36 = *(unsigned __int8 **)(v46 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v36 + 134);
          *v36 = 0;
          v67 = *((_QWORD *)v36 + 66);
          *((_DWORD *)v36 + 106) = 0;
          v68 = v67 + (v66 << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              operator delete(v69);
              if ( v67 == v68 )
                goto LABEL_84;
            }
          }
LABEL_84:
          *((_DWORD *)v36 + 134) = 0;
        }
        else
        {
          v36 = (unsigned __int8 *)operator new(0x3A0u);
          *v36 = 0;
          *((_QWORD *)v36 + 12) = v36 + 112;
          *((_QWORD *)v36 + 16) = v36 + 144;
          *((_QWORD *)v36 + 20) = v36 + 176;
          *((_QWORD *)v36 + 24) = v36 + 208;
          *((_QWORD *)v36 + 28) = v36 + 240;
          *((_QWORD *)v36 + 32) = v36 + 272;
          *((_QWORD *)v36 + 36) = v36 + 304;
          *((_QWORD *)v36 + 40) = v36 + 336;
          *((_QWORD *)v36 + 44) = v36 + 368;
          *((_QWORD *)v36 + 48) = v36 + 400;
          *((_QWORD *)v36 + 52) = v36 + 432;
          *((_QWORD *)v36 + 13) = 0;
          v36[112] = 0;
          *((_QWORD *)v36 + 17) = 0;
          v36[144] = 0;
          *((_QWORD *)v36 + 21) = 0;
          v36[176] = 0;
          *((_QWORD *)v36 + 25) = 0;
          v36[208] = 0;
          *((_QWORD *)v36 + 29) = 0;
          v36[240] = 0;
          *((_QWORD *)v36 + 33) = 0;
          v36[272] = 0;
          *((_QWORD *)v36 + 37) = 0;
          v36[304] = 0;
          *((_QWORD *)v36 + 41) = 0;
          v36[336] = 0;
          *((_QWORD *)v36 + 45) = 0;
          v36[368] = 0;
          *((_QWORD *)v36 + 49) = 0;
          v36[400] = 0;
          *((_QWORD *)v36 + 53) = 0x800000000LL;
          *((_QWORD *)v36 + 66) = v36 + 544;
          *((_QWORD *)v36 + 67) = 0x600000000LL;
        }
        v80 = v36;
      }
      v36[*v36 + 1] = 14;
      v37 = v80;
      v38 = *(unsigned __int8 *)v80;
      *(_BYTE *)v80 = v38 + 1;
      v37[v38 + 2] = v9;
      sub_AC6300((__int64)&v80);
    }
  }
  return 1;
}

