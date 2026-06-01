__int64 __fastcall sub_D78F70(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  char *v4; // rbp
  __int64 v6; // r14
  int v7; // r12d
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  _QWORD **v10; // rdi
  unsigned __int8 (*v11)(void); // rdx
  char v12; // al
  _QWORD **v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  void **v30; // r12
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rbp
  void *v34; // rdi
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbp
  void **v38; // r13
  __int64 v39; // rbp
  char v40; // bl
  unsigned int v42; // eax
  __int64 v43; // rax
  _QWORD *v44; // rbp
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  void **v50; // r13
  void **v51; // rbp
  void **v52; // rdi
  void **v53; // rdi
  void **v54; // rbp
  void **v55; // r13
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  _DWORD *v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // r13
  void *v69; // rdi
  __int64 v70; // [rsp+4h] [rbp-94h] BYREF
  int v71; // [rsp+Ch] [rbp-8Ch]
  void *v72; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v73; // [rsp+18h] [rbp-80h]
  __int64 v74; // [rsp+20h] [rbp-78h]
  void *v75; // [rsp+30h] [rbp-68h]
  _BYTE v76[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v77; // [rsp+50h] [rbp-48h]

  v4 = a2;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(_DWORD *)(a1[50] + 24LL);
  if ( !(unsigned __int8)sub_DFDF30(a1) )
    goto LABEL_38;
  v8 = (_QWORD *)a1[3];
  v9 = *(__int64 (**)(void))(*v8 + 24LL);
  if ( (char *)v9 == (char *)sub_CCC510 )
  {
    v10 = (_QWORD **)v8[3];
    v11 = (unsigned __int8 (*)(void))(*v10)[3];
    v12 = (char *)v11 == (char *)v9 ? (*(__int64 (__fastcall **)(_QWORD *))(*v10[3] + 24LL))(v10[3]) : v11();
  }
  else
  {
    v12 = v9();
  }
  if ( v12 )
    goto LABEL_38;
  v13 = (_QWORD **)a1[3];
  v14 = (__int64 (__fastcall *)(__int64))(*v13)[12];
  v15 = v14 == sub_CCC500 ? (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 96LL))(v13[3]) : ((__int64 (*)(void))v14)();
  if ( !*(_QWORD *)(v15 + 8) )
    goto LABEL_38;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_38;
    v56 = sub_DFA810(a2);
    v57 = v56;
    if ( !v56 )
      goto LABEL_38;
    if ( !sub_B6AF40(v56) )
      goto LABEL_38;
    v58 = *(_QWORD *)(v57 + 40);
    if ( (v58 & 7) != 0 )
      goto LABEL_38;
    v59 = v58 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v59 )
      goto LABEL_38;
    v60 = *(_DWORD **)(v59 + 16);
    if ( *v60 != 21 )
      goto LABEL_38;
    a2 = "is_constant_evaluated";
    if ( memcmp(v60 + 4, "is_constant_evaluated", 0x15u) )
      goto LABEL_38;
  }
  if ( v6
    && (v19 = sub_DFA810(v4), (v20 = v19) != 0)
    && sub_B6AF40(v19)
    && (v21 = *(_QWORD *)(v20 + 40), (v21 & 7) == 0)
    && (v22 = v21 & 0xFFFFFFFFFFFFFFF8LL) != 0
    && (v23 = *(_QWORD *)(v22 + 16), *(_DWORD *)v23 == 21)
    && (a2 = (char *)(v23 + 16),
        v16 = *(_QWORD *)(v23 + 16) ^ 0x74736E6F635F7369LL,
        (v17 = v16 | *(_QWORD *)(v23 + 24) ^ 0x6C6176655F746E61LL) == 0)
    && *(_DWORD *)(v23 + 32) == 1702125941
    && *(_BYTE *)(v23 + 36) == 100 )
  {
    v24 = *(_QWORD *)(v6 + 136);
    v25 = sub_DFB220(v6);
    v29 = sub_BDCD00(v25, v24, v26, v27, v28);
    sub_E0E4C0(&v72, a1, v29, 2562);
    sub_AC60B0((unsigned __int8 **)&v72, (__int64)"std::is_constant_evaluated", 1u);
    LOBYTE(v71) = 1;
    v70 = sub_EC8B80(v25);
    sub_AC88D0((__int64 *)&v72, &v70);
    if ( (_BYTE)v77 )
    {
      sub_FA3A50(v74, &v72, HIBYTE(v77));
      v74 = 0;
      v77 = 0;
    }
    if ( v75 != v76 )
      operator delete(v75);
    v30 = (void **)v72;
    if ( v72 )
    {
      v31 = v73;
      if ( v73 )
      {
        if ( (unsigned __int64)v72 >= v73 && (unsigned __int64)v72 <= v73 + 14848 )
        {
LABEL_80:
          v61 = *(unsigned int *)(v31 + 14976);
          *(_DWORD *)(v31 + 14976) = v61 + 1;
          *(_QWORD *)(v31 + 8 * v61 + 14848) = v30;
          goto LABEL_38;
        }
        v32 = *((_QWORD *)v72 + 66);
        v33 = v32 + ((unsigned __int64)*((unsigned int *)v72 + 134) << 6);
        while ( v32 != v33 )
        {
          while ( 1 )
          {
            v33 -= 64;
            v34 = *(void **)(v33 + 24);
            if ( v34 == (void *)(v33 + 40) )
              break;
            operator delete(v34);
            if ( v32 == v33 )
              goto LABEL_30;
          }
        }
LABEL_30:
        v35 = (void **)v30[66];
        if ( v35 != v30 + 68 )
          free(v35);
        v36 = (void **)v30[52];
        v37 = v30 + 52;
        if ( v36 != v30 + 54 )
          free(v36);
        v38 = v30 + 12;
        do
        {
          while ( 1 )
          {
            v37 -= 4;
            if ( *v37 == v37 + 2 )
              break;
            operator delete(*v37);
            if ( v37 == v38 )
              goto LABEL_37;
          }
        }
        while ( v37 != v38 );
LABEL_37:
        operator delete(v30, 0x3A0u);
      }
    }
  }
  else
  {
    v42 = sub_BDCD00(a3, (__int64)a2, v16, v17, v18);
    sub_E0E4C0(&v72, a1, v42, 2562);
    sub_AC60B0((unsigned __int8 **)&v72, (__int64)"__builtin_is_constant_evaluated", 1u);
    v43 = sub_EC8B80(a3);
    v44 = v72;
    v45 = v43;
    if ( v72 )
    {
      v46 = *((unsigned int *)v72 + 106);
      v47 = *((unsigned int *)v72 + 107);
      v48 = v46 + 1;
    }
    else
    {
      v62 = v73;
      v63 = *(_DWORD *)(v73 + 14976);
      if ( v63 )
      {
        v65 = (unsigned int)(v63 - 1);
        *(_DWORD *)(v73 + 14976) = v65;
        v44 = *(_QWORD **)(v62 + 8 * v65 + 14848);
        v66 = *((unsigned int *)v44 + 134);
        *(_BYTE *)v44 = 0;
        v67 = v44[66];
        *((_DWORD *)v44 + 106) = 0;
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
              goto LABEL_88;
          }
        }
LABEL_88:
        v46 = *((unsigned int *)v44 + 106);
        v47 = *((unsigned int *)v44 + 107);
        *((_DWORD *)v44 + 134) = 0;
        v48 = v46 + 1;
      }
      else
      {
        v64 = operator new(0x3A0u);
        v47 = 8;
        v48 = 1;
        v44 = (_QWORD *)v64;
        *(_BYTE *)v64 = 0;
        *(_QWORD *)(v64 + 96) = v64 + 112;
        *(_QWORD *)(v64 + 128) = v64 + 144;
        *(_QWORD *)(v64 + 160) = v64 + 176;
        *(_QWORD *)(v64 + 192) = v64 + 208;
        *(_QWORD *)(v64 + 224) = v64 + 240;
        *(_QWORD *)(v64 + 256) = v64 + 272;
        *(_QWORD *)(v64 + 288) = v64 + 304;
        *(_QWORD *)(v64 + 320) = v64 + 336;
        *(_QWORD *)(v64 + 352) = v64 + 368;
        *(_QWORD *)(v64 + 384) = v64 + 400;
        *(_QWORD *)(v64 + 416) = v64 + 432;
        *(_QWORD *)(v64 + 104) = 0;
        *(_BYTE *)(v64 + 112) = 0;
        *(_QWORD *)(v64 + 136) = 0;
        *(_BYTE *)(v64 + 144) = 0;
        *(_QWORD *)(v64 + 168) = 0;
        *(_BYTE *)(v64 + 176) = 0;
        *(_QWORD *)(v64 + 200) = 0;
        *(_BYTE *)(v64 + 208) = 0;
        *(_QWORD *)(v64 + 232) = 0;
        *(_BYTE *)(v64 + 240) = 0;
        *(_QWORD *)(v64 + 264) = 0;
        *(_BYTE *)(v64 + 272) = 0;
        *(_QWORD *)(v64 + 296) = 0;
        *(_BYTE *)(v64 + 304) = 0;
        *(_QWORD *)(v64 + 328) = 0;
        *(_BYTE *)(v64 + 336) = 0;
        *(_QWORD *)(v64 + 360) = 0;
        *(_BYTE *)(v64 + 368) = 0;
        *(_QWORD *)(v64 + 392) = 0;
        *(_BYTE *)(v64 + 400) = 0;
        *(_QWORD *)(v64 + 424) = 0x800000000LL;
        *(_QWORD *)(v64 + 528) = v64 + 544;
        *(_QWORD *)(v64 + 536) = 0x600000000LL;
        v46 = 0;
      }
      v72 = v44;
    }
    v70 = v45;
    LOBYTE(v71) = 1;
    if ( v48 > v47 )
    {
      sub_22134E0(v44 + 52, v44 + 54, v48, 12);
      v46 = *((unsigned int *)v44 + 106);
    }
    v49 = v44[52] + 12 * v46;
    *(_QWORD *)v49 = v70;
    *(_DWORD *)(v49 + 8) = v71;
    ++*((_DWORD *)v44 + 106);
    if ( (_BYTE)v77 )
    {
      sub_FA3A50(v74, &v72, HIBYTE(v77));
      v74 = 0;
      v77 = 0;
    }
    if ( v75 != v76 )
      operator delete(v75);
    v30 = (void **)v72;
    if ( v72 )
    {
      v31 = v73;
      if ( v73 )
      {
        if ( (unsigned __int64)v72 >= v73 && (unsigned __int64)v72 <= v73 + 14848 )
          goto LABEL_80;
        v50 = *((void ***)v72 + 66);
        v51 = &v50[8 * (unsigned __int64)*((unsigned int *)v72 + 134)];
        if ( v50 != v51 )
        {
          do
          {
            while ( 1 )
            {
              v51 -= 8;
              v52 = (void **)v51[3];
              if ( v52 == v51 + 5 )
                break;
              operator delete(v52);
              if ( v50 == v51 )
                goto LABEL_54;
            }
          }
          while ( v50 != v51 );
LABEL_54:
          v51 = (void **)v30[66];
        }
        if ( v51 != v30 + 68 )
          free(v51);
        v53 = (void **)v30[52];
        v54 = v30 + 52;
        if ( v53 != v30 + 54 )
          free(v53);
        v55 = v30 + 12;
        do
        {
          while ( 1 )
          {
            v54 -= 4;
            if ( *v54 == v54 + 2 )
              break;
            operator delete(*v54);
            if ( v54 == v55 )
              goto LABEL_37;
          }
        }
        while ( v54 != v55 );
        goto LABEL_37;
      }
    }
  }
LABEL_38:
  v39 = a1[22];
  v40 = sub_DFDF30(a1);
  *(_BYTE *)sub_DFD980(v39, 8) = v40;
  return 1;
}

