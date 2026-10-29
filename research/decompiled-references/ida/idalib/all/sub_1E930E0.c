__int64 __fastcall sub_1E930E0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  char v10; // al
  unsigned __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 *v37; // rbx
  _BYTE *v38; // rdx
  __int64 v39; // rax
  unsigned __int8 v40; // r14
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int8 *v43; // rbp
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r14
  unsigned __int8 *v56; // rbx
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  int v60; // eax
  unsigned __int8 *v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // r15
  __int64 v70; // r14
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // r15
  __int64 v75; // r14
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // r15
  void *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rdx
  __int64 v85; // r15
  void *v86; // rdi
  __int64 v87; // [rsp+8h] [rbp-F0h]
  __int64 v88; // [rsp+8h] [rbp-F0h]
  __int64 v89; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v90; // [rsp+20h] [rbp-D8h] BYREF
  int v91; // [rsp+28h] [rbp-D0h]
  _QWORD v92[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v94; // [rsp+50h] [rbp-A8h]
  __int64 v95; // [rsp+58h] [rbp-A0h]
  unsigned __int8 v96; // [rsp+A8h] [rbp-50h]
  unsigned int v97; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v98; // [rsp+B4h] [rbp-44h]

  v8 = *(_QWORD *)(a2 + 8 * (a3 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 != 13 )
  {
    if ( v10 == 47 )
    {
      v32 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( ((*((_BYTE *)v32 + 74) & 1) != 0 || (v32[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *((char *)sub_F60F10(v9, a2, v33, v34, v35, v36) + 76) >= 0 )
      {
        return 0;
      }
    }
    else if ( v10 == 10 )
    {
      return 0;
    }
LABEL_3:
    v11 = a3 + 1;
    v12 = sub_EEB7E0(v8, a2, a7);
    v13 = (unsigned __int64 *)(a1 + 8);
    sub_168B9F0((__int64)v92, (__int64 *)(a1 + 8), v12, 0x1556u, 0);
    if ( v96 )
    {
      v37 = v94;
      if ( !v94 )
      {
        v57 = v95;
        v58 = *(_DWORD *)(v95 + 14976);
        if ( v58 )
        {
          v72 = (unsigned int)(v58 - 1);
          *(_DWORD *)(v95 + 14976) = v72;
          v37 = *(unsigned __int8 **)(v57 + 8 * v72 + 14848);
          v73 = *((unsigned int *)v37 + 134);
          *v37 = 0;
          v74 = *((_QWORD *)v37 + 66);
          *((_DWORD *)v37 + 106) = 0;
          v75 = v74 + (v73 << 6);
          while ( v74 != v75 )
          {
            while ( 1 )
            {
              v75 -= 64;
              v76 = *(void **)(v75 + 24);
              if ( v76 == (void *)(v75 + 40) )
                break;
              operator delete(v76);
              if ( v74 == v75 )
                goto LABEL_59;
            }
          }
LABEL_59:
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        v94 = v37;
      }
      v37[*v37 + 1] = 3;
      v38 = v94;
    }
    else
    {
      if ( !v98 )
      {
        v14 = sub_EEC8C0(v8, (__int64)v13, a7);
        v15 = v14;
        v11 = HIDWORD(v14);
        goto LABEL_6;
      }
      v50 = sub_168B9E0(v92);
      v53 = v93;
      if ( v93 )
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
      v13 = &v90;
      v90 = v53;
      v54 = sub_1587BC0(v50, (__int64 *)&v90, v48, v49, v51, v52);
      v55 = *v54 + 32LL * v97;
      v56 = *(unsigned __int8 **)(v55 + 8);
      if ( !v56 )
      {
        v62 = *(_QWORD *)(v55 + 16);
        v63 = *(_DWORD *)(v62 + 14976);
        if ( v63 )
        {
          v77 = (unsigned int)(v63 - 1);
          *(_DWORD *)(v62 + 14976) = v77;
          v56 = *(unsigned __int8 **)(v62 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v56 + 134);
          *v56 = 0;
          v79 = *((_QWORD *)v56 + 66);
          *((_DWORD *)v56 + 106) = 0;
          v80 = v79 + (v78 << 6);
          while ( v79 != v80 )
          {
            while ( 1 )
            {
              v80 -= 64;
              v81 = *(void **)(v80 + 24);
              if ( v81 == (void *)(v80 + 40) )
                break;
              v87 = v79;
              operator delete(v81);
              v79 = v87;
              if ( v87 == v80 )
                goto LABEL_64;
            }
          }
LABEL_64:
          *((_DWORD *)v56 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v56 + 66) = v56 + 544;
          *((_QWORD *)v56 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v55 + 8) = v56;
      }
      v56[*v56 + 1] = 3;
      v38 = *(_BYTE **)(v55 + 8);
    }
    v39 = (unsigned __int8)*v38;
    *v38 = v39 + 1;
    *(_QWORD *)&v38[8 * v39 + 16] = v11;
    v40 = v96;
    v41 = sub_EEC8C0(v8, (__int64)v13, a7);
    v15 = v41;
    v42 = HIDWORD(v41);
    LODWORD(v11) = HIDWORD(v41);
    if ( v40 )
    {
      v43 = v94;
      if ( v94 )
      {
        v44 = *((unsigned int *)v94 + 106);
        v45 = *((unsigned int *)v94 + 107);
        v46 = v44 + 1;
      }
      else
      {
        v59 = v95;
        v60 = *(_DWORD *)(v95 + 14976);
        if ( v60 )
        {
          v67 = (unsigned int)(v60 - 1);
          *(_DWORD *)(v95 + 14976) = v67;
          v43 = *(unsigned __int8 **)(v59 + 8 * v67 + 14848);
          v68 = *((unsigned int *)v43 + 134);
          *v43 = 0;
          v69 = *((_QWORD *)v43 + 66);
          *((_DWORD *)v43 + 106) = 0;
          v70 = v69 + (v68 << 6);
          if ( v69 == v70 )
          {
            v46 = 1;
            v44 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v70 -= 64;
                v71 = *(void **)(v70 + 24);
                if ( v71 == (void *)(v70 + 40) )
                  break;
                operator delete(v71);
                if ( v69 == v70 )
                  goto LABEL_51;
              }
            }
            while ( v69 != v70 );
LABEL_51:
            v44 = *((unsigned int *)v43 + 106);
            v46 = v44 + 1;
          }
          *((_DWORD *)v43 + 134) = 0;
          v45 = *((unsigned int *)v43 + 107);
        }
        else
        {
          v61 = (unsigned __int8 *)operator new(0x3A0u);
          v45 = 8;
          v46 = 1;
          v43 = v61;
          *v61 = 0;
          *((_QWORD *)v61 + 12) = v61 + 112;
          *((_QWORD *)v61 + 16) = v61 + 144;
          *((_QWORD *)v61 + 20) = v61 + 176;
          *((_QWORD *)v61 + 24) = v61 + 208;
          *((_QWORD *)v61 + 28) = v61 + 240;
          *((_QWORD *)v61 + 32) = v61 + 272;
          *((_QWORD *)v61 + 36) = v61 + 304;
          *((_QWORD *)v61 + 40) = v61 + 336;
          *((_QWORD *)v61 + 44) = v61 + 368;
          *((_QWORD *)v61 + 48) = v61 + 400;
          *((_QWORD *)v61 + 52) = v61 + 432;
          *((_QWORD *)v61 + 13) = 0;
          v61[112] = 0;
          *((_QWORD *)v61 + 17) = 0;
          v61[144] = 0;
          *((_QWORD *)v61 + 21) = 0;
          v61[176] = 0;
          *((_QWORD *)v61 + 25) = 0;
          v61[208] = 0;
          *((_QWORD *)v61 + 29) = 0;
          v61[240] = 0;
          *((_QWORD *)v61 + 33) = 0;
          v61[272] = 0;
          *((_QWORD *)v61 + 37) = 0;
          v61[304] = 0;
          *((_QWORD *)v61 + 41) = 0;
          v61[336] = 0;
          *((_QWORD *)v61 + 45) = 0;
          v61[368] = 0;
          *((_QWORD *)v61 + 49) = 0;
          v61[400] = 0;
          *((_QWORD *)v61 + 53) = 0x800000000LL;
          *((_QWORD *)v61 + 66) = v61 + 544;
          *((_QWORD *)v61 + 67) = 0x600000000LL;
          v44 = 0;
        }
        v94 = v43;
      }
      v90 = __PAIR64__(v42, v15);
      LOBYTE(v91) = 1;
      if ( v46 > v45 )
      {
        sub_2237220(v43 + 416, v43 + 432, v46, 12);
        v44 = *((unsigned int *)v43 + 106);
      }
      v47 = *((_QWORD *)v43 + 52) + 12 * v44;
      *(_QWORD *)v47 = v90;
      *(_DWORD *)(v47 + 8) = v91;
      v16 = v96;
      ++*((_DWORD *)v43 + 106);
      goto LABEL_29;
    }
LABEL_6:
    v16 = v98;
    if ( v98 )
    {
      v19 = sub_168B9E0(v92);
      v22 = v93;
      if ( v93 )
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
      v89 = v22;
      v23 = sub_1587BC0(v19, &v89, v17, v18, v20, v21);
      v24 = *v23 + 32LL * v97;
      v25 = *(_QWORD *)(v24 + 8);
      v26 = v24;
      if ( v25 )
      {
        v27 = *(unsigned int *)(v25 + 424);
        v28 = *(unsigned int *)(v25 + 428);
        v29 = v27 + 1;
      }
      else
      {
        v64 = *(_QWORD *)(v24 + 16);
        v65 = *(_DWORD *)(v64 + 14976);
        if ( v65 )
        {
          v82 = (unsigned int)(v65 - 1);
          *(_DWORD *)(v64 + 14976) = v82;
          v25 = *(_QWORD *)(v64 + 8 * v82 + 14848);
          v83 = *(unsigned int *)(v25 + 536);
          *(_BYTE *)v25 = 0;
          v84 = *(_QWORD *)(v25 + 528);
          *(_DWORD *)(v25 + 424) = 0;
          v85 = v84 + (v83 << 6);
          while ( v84 != v85 )
          {
            while ( 1 )
            {
              v85 -= 64;
              v86 = *(void **)(v85 + 24);
              if ( v86 == (void *)(v85 + 40) )
                break;
              v88 = v84;
              operator delete(v86);
              v84 = v88;
              if ( v88 == v85 )
                goto LABEL_69;
            }
          }
LABEL_69:
          v27 = *(unsigned int *)(v25 + 424);
          v28 = *(unsigned int *)(v25 + 428);
          *(_DWORD *)(v25 + 536) = 0;
          v29 = v27 + 1;
        }
        else
        {
          v66 = operator new(0x3A0u);
          v28 = 8;
          v29 = 1;
          v25 = v66;
          *(_BYTE *)v66 = 0;
          *(_QWORD *)(v66 + 96) = v66 + 112;
          *(_QWORD *)(v66 + 128) = v66 + 144;
          *(_QWORD *)(v66 + 160) = v66 + 176;
          *(_QWORD *)(v66 + 192) = v66 + 208;
          *(_QWORD *)(v66 + 224) = v66 + 240;
          *(_QWORD *)(v66 + 256) = v66 + 272;
          *(_QWORD *)(v66 + 288) = v66 + 304;
          *(_QWORD *)(v66 + 320) = v66 + 336;
          *(_QWORD *)(v66 + 352) = v66 + 368;
          *(_QWORD *)(v66 + 384) = v66 + 400;
          *(_QWORD *)(v66 + 416) = v66 + 432;
          *(_QWORD *)(v66 + 104) = 0;
          *(_BYTE *)(v66 + 112) = 0;
          *(_QWORD *)(v66 + 136) = 0;
          *(_BYTE *)(v66 + 144) = 0;
          *(_QWORD *)(v66 + 168) = 0;
          *(_BYTE *)(v66 + 176) = 0;
          *(_QWORD *)(v66 + 200) = 0;
          *(_BYTE *)(v66 + 208) = 0;
          *(_QWORD *)(v66 + 232) = 0;
          *(_BYTE *)(v66 + 240) = 0;
          *(_QWORD *)(v66 + 264) = 0;
          *(_BYTE *)(v66 + 272) = 0;
          *(_QWORD *)(v66 + 296) = 0;
          *(_BYTE *)(v66 + 304) = 0;
          *(_QWORD *)(v66 + 328) = 0;
          *(_BYTE *)(v66 + 336) = 0;
          *(_QWORD *)(v66 + 360) = 0;
          *(_BYTE *)(v66 + 368) = 0;
          *(_QWORD *)(v66 + 392) = 0;
          *(_BYTE *)(v66 + 400) = 0;
          *(_QWORD *)(v66 + 424) = 0x800000000LL;
          *(_QWORD *)(v66 + 528) = v66 + 544;
          *(_QWORD *)(v66 + 536) = 0x600000000LL;
          v27 = 0;
        }
        *(_QWORD *)(v26 + 8) = v25;
      }
      v90 = __PAIR64__(v11, v15);
      LOBYTE(v91) = 1;
      if ( v29 > v28 )
      {
        sub_2237220(v25 + 416, v25 + 432, v29, 12);
        v27 = *(unsigned int *)(v25 + 424);
      }
      v30 = *(_QWORD *)(v25 + 416) + 12 * v27;
      *(_QWORD *)v30 = v90;
      *(_DWORD *)(v30 + 8) = v91;
      ++*(_DWORD *)(v25 + 424);
      v16 = v96;
    }
LABEL_29:
    sub_15F7200(v92);
    return v16;
  }
  if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
    goto LABEL_3;
  return 0;
}
