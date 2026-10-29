__int64 __fastcall sub_1ADD0A0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r13
  char v15; // al
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // r15
  unsigned __int8 *v26; // r12
  __int64 v27; // r15
  _BYTE *v28; // rdx
  __int64 v29; // rax
  char v30; // dl
  unsigned __int8 *v31; // r14
  _BYTE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int8 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int8 *v51; // r14
  _BYTE *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // r14
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  void *v81; // rdi
  __int64 v82; // [rsp+8h] [rbp-F0h]
  __int64 v83; // [rsp+8h] [rbp-F0h]
  __int64 v84; // [rsp+8h] [rbp-F0h]
  __int64 v85; // [rsp+8h] [rbp-F0h]
  __int64 v86; // [rsp+8h] [rbp-F0h]
  __int64 v87; // [rsp+8h] [rbp-F0h]
  __int64 v88; // [rsp+10h] [rbp-E8h]
  __int64 v89; // [rsp+10h] [rbp-E8h]
  __int64 v90; // [rsp+10h] [rbp-E8h]
  __int64 v91; // [rsp+18h] [rbp-E0h]
  __int64 v92; // [rsp+18h] [rbp-E0h]
  __int64 v93; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v95[200]; // [rsp+30h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_16EC930(*a1, a2, 2u, a3) )
    return 1;
  v8 = sub_1ADC130(*a1, a2, v4, v5, v6, v7, a3);
  if ( (_BYTE)v8 )
    return 1;
  v13 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_BYTE *)(v14 + 16);
  switch ( v15 )
  {
    case 13:
      if ( (((*(_WORD *)(v14 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      {
LABEL_8:
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(sub_168B6C0((__int64)a1) + 19488);
        return v8;
      }
      break;
    case 47:
      v16 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v13,
              v10,
              v11,
              v12);
      if ( ((*((_BYTE *)v16 + 74) & 1) != 0 || (v16[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *((char *)sub_F60F10(v14, a2, v17, v10, v11, v12) + 76) >= 0 )
      {
        goto LABEL_8;
      }
      v13 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
      break;
    case 10:
      goto LABEL_8;
  }
  if ( sub_F65360(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v10, v11, v12) )
    goto LABEL_8;
  v18 = sub_BF6D70(a2);
  sub_168B9F0((__int64)v95, a1, v18, 0x123Fu, 0);
  v19 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v19 && (*(_BYTE *)(v19 + 28) & 0x7Fu) - 34 >= 6 )
    v19 = 0;
  v20 = (__int64)&v93;
  v93 = v19;
  v21 = sub_16CEDA0((__int64)v95, &v93);
  v22 = sub_168B6C0((__int64)a1);
  v23 = v22;
  if ( *(_BYTE *)(v21 + 120) )
  {
    v26 = *(unsigned __int8 **)(v21 + 32);
    v27 = *(_QWORD *)(v22 + 18768);
    if ( !v26 )
    {
      v56 = *(_QWORD *)(v21 + 40);
      v57 = *(_DWORD *)(v56 + 14976);
      if ( v57 )
      {
        v62 = (unsigned int)(v57 - 1);
        *(_DWORD *)(v56 + 14976) = v62;
        v26 = *(unsigned __int8 **)(v56 + 8 * v62 + 14848);
        v63 = *((unsigned int *)v26 + 134);
        v64 = *((_QWORD *)v26 + 66);
        *v26 = 0;
        *((_DWORD *)v26 + 106) = 0;
        v65 = v64 + (v63 << 6);
        while ( v64 != v65 )
        {
          while ( 1 )
          {
            v65 -= 64;
            v66 = *(void **)(v65 + 24);
            if ( v66 == (void *)(v65 + 40) )
              break;
            v84 = v64;
            operator delete(v66);
            v64 = v84;
            if ( v84 == v65 )
              goto LABEL_55;
          }
        }
LABEL_55:
        *((_DWORD *)v26 + 134) = 0;
      }
      else
      {
        v26 = (unsigned __int8 *)operator new(0x3A0u);
        *v26 = 0;
        *((_QWORD *)v26 + 12) = v26 + 112;
        *((_QWORD *)v26 + 16) = v26 + 144;
        *((_QWORD *)v26 + 20) = v26 + 176;
        *((_QWORD *)v26 + 24) = v26 + 208;
        *((_QWORD *)v26 + 28) = v26 + 240;
        *((_QWORD *)v26 + 32) = v26 + 272;
        *((_QWORD *)v26 + 36) = v26 + 304;
        *((_QWORD *)v26 + 40) = v26 + 336;
        *((_QWORD *)v26 + 44) = v26 + 368;
        *((_QWORD *)v26 + 48) = v26 + 400;
        *((_QWORD *)v26 + 52) = v26 + 432;
        *((_QWORD *)v26 + 13) = 0;
        v26[112] = 0;
        *((_QWORD *)v26 + 17) = 0;
        v26[144] = 0;
        *((_QWORD *)v26 + 21) = 0;
        v26[176] = 0;
        *((_QWORD *)v26 + 25) = 0;
        v26[208] = 0;
        *((_QWORD *)v26 + 29) = 0;
        v26[240] = 0;
        *((_QWORD *)v26 + 33) = 0;
        v26[272] = 0;
        *((_QWORD *)v26 + 37) = 0;
        v26[304] = 0;
        *((_QWORD *)v26 + 41) = 0;
        v26[336] = 0;
        *((_QWORD *)v26 + 45) = 0;
        v26[368] = 0;
        *((_QWORD *)v26 + 49) = 0;
        v26[400] = 0;
        *((_QWORD *)v26 + 53) = 0x800000000LL;
        *((_QWORD *)v26 + 66) = v26 + 544;
        *((_QWORD *)v26 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v21 + 32) = v26;
    }
    v26[*v26 + 1] = 8;
    v28 = *(_BYTE **)(v21 + 32);
    v29 = (unsigned __int8)*v28;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v27;
    v30 = *(_BYTE *)(v21 + 120);
  }
  else
  {
    if ( !*(_BYTE *)(v21 + 132) )
    {
      v24 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
      v25 = *(_QWORD *)(v24 + 8);
      goto LABEL_23;
    }
    v46 = sub_168B9E0((_QWORD *)v21);
    v47 = *(_QWORD *)(v21 + 16);
    if ( v47 )
      v47 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 32LL))(*(_QWORD *)(v21 + 16));
    v94 = v47;
    v48 = sub_1587BC0(v46, &v94, v42, v43, v44, v45);
    v49 = *(_QWORD *)(v23 + 18768);
    v50 = *v48 + 32LL * *(unsigned int *)(v21 + 128);
    v51 = *(unsigned __int8 **)(v50 + 8);
    if ( !v51 )
    {
      v60 = *(_QWORD *)(v50 + 16);
      v61 = *(_DWORD *)(v60 + 14976);
      if ( v61 )
      {
        v72 = (unsigned int)(v61 - 1);
        *(_DWORD *)(v60 + 14976) = v72;
        v51 = *(unsigned __int8 **)(v60 + 8 * v72 + 14848);
        v73 = *((unsigned int *)v51 + 134);
        *v51 = 0;
        v74 = *((_QWORD *)v51 + 66);
        *((_DWORD *)v51 + 106) = 0;
        v75 = v74 + (v73 << 6);
        while ( v74 != v75 )
        {
          while ( 1 )
          {
            v75 -= 64;
            v76 = *(void **)(v75 + 24);
            if ( v76 == (void *)(v75 + 40) )
              break;
            v91 = v49;
            v89 = v75;
            v86 = v74;
            operator delete(v76);
            v74 = v86;
            v75 = v89;
            v49 = v91;
            if ( v86 == v89 )
              goto LABEL_65;
          }
        }
LABEL_65:
        *((_DWORD *)v51 + 134) = 0;
      }
      else
      {
        v83 = v49;
        v51 = (unsigned __int8 *)operator new(0x3A0u);
        *v51 = 0;
        *((_QWORD *)v51 + 12) = v51 + 112;
        *((_QWORD *)v51 + 16) = v51 + 144;
        *((_QWORD *)v51 + 20) = v51 + 176;
        *((_QWORD *)v51 + 24) = v51 + 208;
        *((_QWORD *)v51 + 28) = v51 + 240;
        *((_QWORD *)v51 + 32) = v51 + 272;
        *((_QWORD *)v51 + 36) = v51 + 304;
        *((_QWORD *)v51 + 40) = v51 + 336;
        *((_QWORD *)v51 + 44) = v51 + 368;
        *((_QWORD *)v51 + 48) = v51 + 400;
        *((_QWORD *)v51 + 52) = v51 + 432;
        v51[112] = 0;
        *((_QWORD *)v51 + 13) = 0;
        *((_QWORD *)v51 + 17) = 0;
        v51[144] = 0;
        *((_QWORD *)v51 + 21) = 0;
        v51[176] = 0;
        *((_QWORD *)v51 + 25) = 0;
        v51[208] = 0;
        *((_QWORD *)v51 + 29) = 0;
        v51[240] = 0;
        *((_QWORD *)v51 + 33) = 0;
        v51[272] = 0;
        *((_QWORD *)v51 + 37) = 0;
        v51[304] = 0;
        *((_QWORD *)v51 + 41) = 0;
        v51[336] = 0;
        *((_QWORD *)v51 + 45) = 0;
        v51[368] = 0;
        *((_QWORD *)v51 + 49) = 0;
        v51[400] = 0;
        *((_QWORD *)v51 + 53) = 0x800000000LL;
        v49 = v83;
        *((_QWORD *)v51 + 66) = v51 + 544;
        *((_QWORD *)v51 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v50 + 8) = v51;
    }
    v51[*v51 + 1] = 8;
    v52 = *(_BYTE **)(v50 + 8);
    v53 = (unsigned __int8)*v52;
    v20 = (unsigned int)(v53 + 1);
    *v52 = v53 + 1;
    *(_QWORD *)&v52[8 * v53 + 16] = v49;
    v30 = *(_BYTE *)(v21 + 120);
  }
  v24 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  v25 = *(_QWORD *)(v24 + 8);
  if ( v30 )
  {
    v31 = *(unsigned __int8 **)(v21 + 32);
    if ( !v31 )
    {
      v54 = *(_QWORD *)(v21 + 40);
      v55 = *(_DWORD *)(v54 + 14976);
      if ( v55 )
      {
        v67 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v54 + 14976) = v67;
        v31 = *(unsigned __int8 **)(v54 + 8 * v67 + 14848);
        v68 = *((unsigned int *)v31 + 134);
        *v31 = 0;
        v69 = *((_QWORD *)v31 + 66);
        *((_DWORD *)v31 + 106) = 0;
        v70 = v69 + (v68 << 6);
        while ( v69 != v70 )
        {
          while ( 1 )
          {
            v70 -= 64;
            v71 = *(void **)(v70 + 24);
            if ( v71 == (void *)(v70 + 40) )
              break;
            v88 = v69;
            v85 = v70;
            operator delete(v71);
            v70 = v85;
            v69 = v88;
            if ( v88 == v85 )
              goto LABEL_60;
          }
        }
LABEL_60:
        *((_DWORD *)v31 + 134) = 0;
      }
      else
      {
        v31 = (unsigned __int8 *)operator new(0x3A0u);
        *v31 = 0;
        *((_QWORD *)v31 + 12) = v31 + 112;
        *((_QWORD *)v31 + 16) = v31 + 144;
        *((_QWORD *)v31 + 20) = v31 + 176;
        *((_QWORD *)v31 + 24) = v31 + 208;
        *((_QWORD *)v31 + 28) = v31 + 240;
        *((_QWORD *)v31 + 32) = v31 + 272;
        *((_QWORD *)v31 + 36) = v31 + 304;
        *((_QWORD *)v31 + 40) = v31 + 336;
        *((_QWORD *)v31 + 44) = v31 + 368;
        *((_QWORD *)v31 + 48) = v31 + 400;
        *((_QWORD *)v31 + 52) = v31 + 432;
        v31[112] = 0;
        *((_QWORD *)v31 + 13) = 0;
        *((_QWORD *)v31 + 17) = 0;
        v31[144] = 0;
        *((_QWORD *)v31 + 21) = 0;
        v31[176] = 0;
        *((_QWORD *)v31 + 25) = 0;
        v31[208] = 0;
        *((_QWORD *)v31 + 29) = 0;
        v31[240] = 0;
        *((_QWORD *)v31 + 33) = 0;
        v31[272] = 0;
        *((_QWORD *)v31 + 37) = 0;
        v31[304] = 0;
        *((_QWORD *)v31 + 41) = 0;
        v31[336] = 0;
        *((_QWORD *)v31 + 45) = 0;
        v31[368] = 0;
        *((_QWORD *)v31 + 49) = 0;
        v31[400] = 0;
        *((_QWORD *)v31 + 53) = 0x800000000LL;
        *((_QWORD *)v31 + 66) = v31 + 544;
        *((_QWORD *)v31 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v21 + 32) = v31;
    }
    v31[*v31 + 1] = 8;
    v32 = *(_BYTE **)(v21 + 32);
    goto LABEL_30;
  }
LABEL_23:
  if ( *(_BYTE *)(v21 + 132) )
  {
    v38 = sub_168B9E0((_QWORD *)v21);
    v39 = *(_QWORD *)(v21 + 16);
    if ( v39 )
      v39 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v39 + 32LL))(*(_QWORD *)(v21 + 16));
    v20 = (__int64)&v94;
    v94 = v39;
    v40 = *sub_1587BC0(v38, &v94, v34, v35, v36, v37) + 32LL * *(unsigned int *)(v21 + 128);
    v41 = *(unsigned __int8 **)(v40 + 8);
    if ( !v41 )
    {
      v58 = *(_QWORD *)(v40 + 16);
      v59 = *(_DWORD *)(v58 + 14976);
      if ( v59 )
      {
        v77 = (unsigned int)(v59 - 1);
        *(_DWORD *)(v58 + 14976) = v77;
        v41 = *(unsigned __int8 **)(v58 + 8 * v77 + 14848);
        v78 = *((unsigned int *)v41 + 134);
        *v41 = 0;
        v79 = *((_QWORD *)v41 + 66);
        *((_DWORD *)v41 + 106) = 0;
        v80 = v79 + (v78 << 6);
        while ( v79 != v80 )
        {
          while ( 1 )
          {
            v80 -= 64;
            v81 = *(void **)(v80 + 24);
            v20 = v80 + 40;
            if ( v81 == (void *)(v80 + 40) )
              break;
            v92 = v79;
            v90 = v40;
            v87 = v80;
            operator delete(v81);
            v80 = v87;
            v79 = v92;
            v40 = v90;
            if ( v92 == v87 )
              goto LABEL_70;
          }
        }
LABEL_70:
        *((_DWORD *)v41 + 134) = 0;
      }
      else
      {
        v82 = v40;
        v41 = (unsigned __int8 *)operator new(0x3A0u);
        *v41 = 0;
        *((_QWORD *)v41 + 12) = v41 + 112;
        *((_QWORD *)v41 + 16) = v41 + 144;
        *((_QWORD *)v41 + 20) = v41 + 176;
        *((_QWORD *)v41 + 24) = v41 + 208;
        *((_QWORD *)v41 + 28) = v41 + 240;
        *((_QWORD *)v41 + 32) = v41 + 272;
        *((_QWORD *)v41 + 36) = v41 + 304;
        *((_QWORD *)v41 + 40) = v41 + 336;
        *((_QWORD *)v41 + 44) = v41 + 368;
        *((_QWORD *)v41 + 48) = v41 + 400;
        *((_QWORD *)v41 + 52) = v41 + 432;
        v41[112] = 0;
        *((_QWORD *)v41 + 13) = 0;
        *((_QWORD *)v41 + 17) = 0;
        v41[144] = 0;
        *((_QWORD *)v41 + 21) = 0;
        v41[176] = 0;
        *((_QWORD *)v41 + 25) = 0;
        v41[208] = 0;
        *((_QWORD *)v41 + 29) = 0;
        v41[240] = 0;
        *((_QWORD *)v41 + 33) = 0;
        v41[272] = 0;
        *((_QWORD *)v41 + 37) = 0;
        v41[304] = 0;
        *((_QWORD *)v41 + 41) = 0;
        v41[336] = 0;
        *((_QWORD *)v41 + 45) = 0;
        v41[368] = 0;
        *((_QWORD *)v41 + 49) = 0;
        v41[400] = 0;
        *((_QWORD *)v41 + 53) = 0x800000000LL;
        v40 = v82;
        *((_QWORD *)v41 + 66) = v41 + 544;
        *((_QWORD *)v41 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v40 + 8) = v41;
    }
    v41[*v41 + 1] = 8;
    v32 = *(_BYTE **)(v40 + 8);
LABEL_30:
    v33 = (unsigned __int8)*v32;
    *v32 = v33 + 1;
    *(_QWORD *)&v32[8 * v33 + 16] = v25;
    v24 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  }
  v94 = sub_EEC8C0(v24, v20, a3);
  sub_1587DB0(v21, &v94);
  sub_15F7200(v95);
  return 1;
}
