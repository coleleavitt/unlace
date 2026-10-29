__int16 __fastcall sub_1C0DAD0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int16 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  unsigned __int8 *v34; // r13
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int8 *v45; // r13
  _BYTE *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  unsigned __int8 *v56; // r13
  _BYTE *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
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
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  void *v86; // rdi
  __int64 v88; // [rsp+18h] [rbp-F0h]
  __int64 v89; // [rsp+18h] [rbp-F0h]
  __int64 v90; // [rsp+18h] [rbp-F0h]
  __int64 v91; // [rsp+18h] [rbp-F0h]
  __int64 v92; // [rsp+18h] [rbp-F0h]
  __int64 v93; // [rsp+18h] [rbp-F0h]
  __int64 v94; // [rsp+20h] [rbp-E8h]
  __int64 v95; // [rsp+20h] [rbp-E8h]
  __int64 v96; // [rsp+20h] [rbp-E8h]
  __int64 v97; // [rsp+20h] [rbp-E8h]
  __int64 v98; // [rsp+28h] [rbp-E0h]
  __int64 v99; // [rsp+28h] [rbp-E0h]
  __int64 v100; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v101[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v103; // [rsp+60h] [rbp-A8h]
  __int64 v104; // [rsp+68h] [rbp-A0h]
  char v105; // [rsp+B8h] [rbp-50h]
  unsigned int v106; // [rsp+C0h] [rbp-48h]
  char v107; // [rsp+C4h] [rbp-44h]

  v4 = a2;
  v6 = (unsigned __int16 *)sub_BFB9F0(a3);
  v9 = *v6;
  LOWORD(v9) = v9 & 0x1FF;
  if ( (_WORD)v9 != 79 )
    return (__int16)v6;
  v10 = *((_QWORD *)v6 + 2);
  LOWORD(v6) = *(_WORD *)v10 & 0x1FF;
  if ( (_WORD)v6 != 71 )
    return (__int16)v6;
  v11 = *(_QWORD *)(v10 + 16);
  LOWORD(v6) = *(_BYTE *)(v11 + 28) & 0x7F;
  if ( (_BYTE)v6 != 43 )
    return (__int16)v6;
  v6 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
  if ( *((_BYTE *)v6 + 16) != 48 )
    return (__int16)v6;
  v12 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v10,
          v9,
          v7,
          v8);
  v6 = (unsigned __int16 *)sub_B7E900((__int64)v12, a2, v13, v14, v15, v16);
  v21 = (__int64)v6;
  if ( !v6 )
    return (__int16)v6;
LABEL_7:
  if ( (*(_BYTE *)(v21 + 29) & 1) == 0 )
    goto LABEL_14;
  v22 = sub_B8C3D0(v21, a2, v17, v18, v19, v20);
  v17 = *v22;
  v23 = *v22 + 8LL * *((unsigned int *)v22 + 2);
  if ( v17 >= v23 )
  {
    if ( v17 == v23 )
      goto LABEL_14;
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 126 )
    {
      v29 = (__int64 *)(v23 + 8);
      do
      {
        v18 = (__int64)v29;
        if ( (__int64 *)v17 == v29 )
          goto LABEL_14;
        v30 = *v29++;
      }
      while ( *(_WORD *)(v30 + 36) != 126 );
    }
LABEL_19:
    while ( 1 )
    {
      v24 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 126 )
        break;
      v17 += 8LL;
    }
    v25 = sub_168B6C0((__int64)a1);
    v26 = sub_168B6C0((__int64)a1);
    a2 = (unsigned int)sub_B065C0(v24, v26, v27, v28);
    if ( sub_A97FF0(v25, a2) != 16 )
      goto LABEL_14;
    sub_168B9F0((__int64)v101, a1, *(_DWORD *)(v21 + 24), 0x1BF3u, 0);
    if ( v105 )
    {
      v31 = v103;
      if ( !v103 )
      {
        v61 = v104;
        v62 = *(_DWORD *)(v104 + 14976);
        if ( v62 )
        {
          v67 = (unsigned int)(v62 - 1);
          *(_DWORD *)(v104 + 14976) = v67;
          v31 = *(unsigned __int8 **)(v61 + 8 * v67 + 14848);
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
              v94 = v70;
              v90 = v69;
              operator delete(v71);
              v69 = v90;
              v70 = v94;
              if ( v90 == v94 )
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
          *((_QWORD *)v31 + 13) = 0;
          v31[112] = 0;
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
        v103 = v31;
      }
      v31[*v31 + 1] = 10;
      v32 = v103;
      v33 = *v103;
      *v103 = v33 + 1;
      *(_QWORD *)&v32[8 * v33 + 16] = v21;
    }
    else if ( v107 )
    {
      v52 = sub_168B9E0(v101);
      v53 = v102;
      if ( v102 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      v100 = v53;
      v54 = sub_1587BC0(v52, &v100, v48, v49, v50, v51);
      v55 = *v54 + 32LL * v106;
      v56 = *(unsigned __int8 **)(v55 + 8);
      if ( !v56 )
      {
        v63 = *(_QWORD *)(v55 + 16);
        v64 = *(_DWORD *)(v63 + 14976);
        if ( v64 )
        {
          v82 = (unsigned int)(v64 - 1);
          *(_DWORD *)(v63 + 14976) = v82;
          v56 = *(unsigned __int8 **)(v63 + 8 * v82 + 14848);
          v83 = *((unsigned int *)v56 + 134);
          *v56 = 0;
          v84 = *((_QWORD *)v56 + 66);
          *((_DWORD *)v56 + 106) = 0;
          v85 = v84 + (v83 << 6);
          while ( v84 != v85 )
          {
            while ( 1 )
            {
              v85 -= 64;
              v86 = *(void **)(v85 + 24);
              if ( v86 == (void *)(v85 + 40) )
                break;
              v99 = v85;
              v97 = v84;
              v93 = v55;
              operator delete(v86);
              v84 = v97;
              v85 = v99;
              v55 = v93;
              if ( v97 == v99 )
                goto LABEL_75;
            }
          }
LABEL_75:
          *((_DWORD *)v56 + 134) = 0;
        }
        else
        {
          v88 = v55;
          v56 = (unsigned __int8 *)operator new(0x3A0u);
          *v56 = 0;
          *((_QWORD *)v56 + 12) = v56 + 112;
          *((_QWORD *)v56 + 16) = v56 + 144;
          *((_QWORD *)v56 + 20) = v56 + 176;
          *((_QWORD *)v56 + 24) = v56 + 208;
          *((_QWORD *)v56 + 28) = v56 + 240;
          *((_QWORD *)v56 + 32) = v56 + 272;
          *((_QWORD *)v56 + 36) = v56 + 304;
          *((_QWORD *)v56 + 40) = v56 + 336;
          *((_QWORD *)v56 + 44) = v56 + 368;
          *((_QWORD *)v56 + 48) = v56 + 400;
          *((_QWORD *)v56 + 52) = v56 + 432;
          *((_QWORD *)v56 + 13) = 0;
          v56[112] = 0;
          *((_QWORD *)v56 + 17) = 0;
          v56[144] = 0;
          *((_QWORD *)v56 + 21) = 0;
          v56[176] = 0;
          *((_QWORD *)v56 + 25) = 0;
          v56[208] = 0;
          *((_QWORD *)v56 + 29) = 0;
          v56[240] = 0;
          *((_QWORD *)v56 + 33) = 0;
          v56[272] = 0;
          *((_QWORD *)v56 + 37) = 0;
          v56[304] = 0;
          *((_QWORD *)v56 + 41) = 0;
          v56[336] = 0;
          *((_QWORD *)v56 + 45) = 0;
          v56[368] = 0;
          *((_QWORD *)v56 + 49) = 0;
          v56[400] = 0;
          *((_QWORD *)v56 + 53) = 0x800000000LL;
          v55 = v88;
          *((_QWORD *)v56 + 66) = v56 + 544;
          *((_QWORD *)v56 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v55 + 8) = v56;
      }
      v56[*v56 + 1] = 10;
      v57 = *(_BYTE **)(v55 + 8);
      v58 = (unsigned __int8)*v57;
      *v57 = v58 + 1;
      *(_QWORD *)&v57[8 * v58 + 16] = v21;
    }
    sub_15F7200(v101);
    a2 = (unsigned __int64)a1;
    sub_168B9F0((__int64)v101, a1, v4, 0x17CDu, 0);
    if ( v105 )
    {
      v34 = v103;
      if ( !v103 )
      {
        v59 = v104;
        v60 = *(_DWORD *)(v104 + 14976);
        if ( v60 )
        {
          v72 = (unsigned int)(v60 - 1);
          *(_DWORD *)(v104 + 14976) = v72;
          v34 = *(unsigned __int8 **)(v59 + 8 * v72 + 14848);
          v73 = *((unsigned int *)v34 + 134);
          *v34 = 0;
          v74 = *((_QWORD *)v34 + 66);
          *((_DWORD *)v34 + 106) = 0;
          v75 = v74 + (v73 << 6);
          while ( v74 != v75 )
          {
            while ( 1 )
            {
              v75 -= 64;
              v76 = *(void **)(v75 + 24);
              if ( v76 == (void *)(v75 + 40) )
                break;
              v95 = v75;
              v91 = v74;
              operator delete(v76);
              v74 = v91;
              v75 = v95;
              if ( v91 == v95 )
                goto LABEL_65;
            }
          }
LABEL_65:
          *((_DWORD *)v34 + 134) = 0;
        }
        else
        {
          v34 = (unsigned __int8 *)operator new(0x3A0u);
          *v34 = 0;
          *((_QWORD *)v34 + 12) = v34 + 112;
          *((_QWORD *)v34 + 16) = v34 + 144;
          *((_QWORD *)v34 + 20) = v34 + 176;
          *((_QWORD *)v34 + 24) = v34 + 208;
          *((_QWORD *)v34 + 28) = v34 + 240;
          *((_QWORD *)v34 + 32) = v34 + 272;
          *((_QWORD *)v34 + 36) = v34 + 304;
          *((_QWORD *)v34 + 40) = v34 + 336;
          *((_QWORD *)v34 + 44) = v34 + 368;
          *((_QWORD *)v34 + 48) = v34 + 400;
          *((_QWORD *)v34 + 52) = v34 + 432;
          *((_QWORD *)v34 + 13) = 0;
          v34[112] = 0;
          *((_QWORD *)v34 + 17) = 0;
          v34[144] = 0;
          *((_QWORD *)v34 + 21) = 0;
          v34[176] = 0;
          *((_QWORD *)v34 + 25) = 0;
          v34[208] = 0;
          *((_QWORD *)v34 + 29) = 0;
          v34[240] = 0;
          *((_QWORD *)v34 + 33) = 0;
          v34[272] = 0;
          *((_QWORD *)v34 + 37) = 0;
          v34[304] = 0;
          *((_QWORD *)v34 + 41) = 0;
          v34[336] = 0;
          *((_QWORD *)v34 + 45) = 0;
          v34[368] = 0;
          *((_QWORD *)v34 + 49) = 0;
          v34[400] = 0;
          *((_QWORD *)v34 + 53) = 0x800000000LL;
          *((_QWORD *)v34 + 66) = v34 + 544;
          *((_QWORD *)v34 + 67) = 0x600000000LL;
        }
        v103 = v34;
      }
      v34[*v34 + 1] = 10;
      v35 = v103;
      v36 = *v103;
      *v103 = v36 + 1;
      *(_QWORD *)&v35[8 * v36 + 16] = v11;
    }
    else if ( v107 )
    {
      v41 = sub_168B9E0(v101);
      v42 = v102;
      if ( v102 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      a2 = (unsigned __int64)&v100;
      v100 = v42;
      v43 = sub_1587BC0(v41, &v100, v37, v38, v39, v40);
      v44 = *v43 + 32LL * v106;
      v45 = *(unsigned __int8 **)(v44 + 8);
      if ( !v45 )
      {
        v65 = *(_QWORD *)(v44 + 16);
        v66 = *(_DWORD *)(v65 + 14976);
        if ( v66 )
        {
          v77 = (unsigned int)(v66 - 1);
          *(_DWORD *)(v65 + 14976) = v77;
          v45 = *(unsigned __int8 **)(v65 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v45 + 134);
          *v45 = 0;
          v79 = *((_QWORD *)v45 + 66);
          *((_DWORD *)v45 + 106) = 0;
          v80 = v79 + (v78 << 6);
          while ( v79 != v80 )
          {
            while ( 1 )
            {
              v80 -= 64;
              v81 = *(void **)(v80 + 24);
              a2 = v80 + 40;
              if ( v81 == (void *)(v80 + 40) )
                break;
              v98 = v80;
              v96 = v79;
              v92 = v44;
              operator delete(v81);
              v79 = v96;
              v80 = v98;
              v44 = v92;
              if ( v96 == v98 )
                goto LABEL_70;
            }
          }
LABEL_70:
          *((_DWORD *)v45 + 134) = 0;
        }
        else
        {
          v89 = v44;
          v45 = (unsigned __int8 *)operator new(0x3A0u);
          *v45 = 0;
          *((_QWORD *)v45 + 12) = v45 + 112;
          *((_QWORD *)v45 + 16) = v45 + 144;
          *((_QWORD *)v45 + 20) = v45 + 176;
          *((_QWORD *)v45 + 24) = v45 + 208;
          *((_QWORD *)v45 + 28) = v45 + 240;
          *((_QWORD *)v45 + 32) = v45 + 272;
          *((_QWORD *)v45 + 36) = v45 + 304;
          *((_QWORD *)v45 + 40) = v45 + 336;
          *((_QWORD *)v45 + 44) = v45 + 368;
          *((_QWORD *)v45 + 48) = v45 + 400;
          *((_QWORD *)v45 + 52) = v45 + 432;
          *((_QWORD *)v45 + 13) = 0;
          v45[112] = 0;
          *((_QWORD *)v45 + 17) = 0;
          v45[144] = 0;
          *((_QWORD *)v45 + 21) = 0;
          v45[176] = 0;
          *((_QWORD *)v45 + 25) = 0;
          v45[208] = 0;
          *((_QWORD *)v45 + 29) = 0;
          v45[240] = 0;
          *((_QWORD *)v45 + 33) = 0;
          v45[272] = 0;
          *((_QWORD *)v45 + 37) = 0;
          v45[304] = 0;
          *((_QWORD *)v45 + 41) = 0;
          v45[336] = 0;
          *((_QWORD *)v45 + 45) = 0;
          v45[368] = 0;
          *((_QWORD *)v45 + 49) = 0;
          v45[400] = 0;
          *((_QWORD *)v45 + 53) = 0x800000000LL;
          v44 = v89;
          *((_QWORD *)v45 + 66) = v45 + 544;
          *((_QWORD *)v45 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v44 + 8) = v45;
      }
      v45[*v45 + 1] = 10;
      v46 = *(_BYTE **)(v44 + 8);
      v47 = (unsigned __int8)*v46;
      *v46 = v47 + 1;
      *(_QWORD *)&v46[8 * v47 + 16] = v11;
    }
    sub_15F7200(v101);
    goto LABEL_14;
  }
  v18 = v17;
  while ( 1 )
  {
    a2 = *(_QWORD *)v18;
    if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 126 )
      break;
    v18 += 8;
    if ( v23 == v18 )
      goto LABEL_14;
  }
  if ( v23 != v18 )
    goto LABEL_19;
LABEL_14:
  while ( 1 )
  {
    v6 = (unsigned __int16 *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    v21 = (__int64)v6;
    if ( !v6 )
      return (__int16)v6;
    if ( (v6[14] & 0x7Fu) - 49 <= 2 )
      goto LABEL_7;
  }
}
