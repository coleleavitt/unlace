void __fastcall sub_18E80C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rax
  _BYTE *v6; // r14
  signed __int64 v7; // r13
  unsigned int *v8; // rax
  unsigned int v9; // r13d
  unsigned int v10; // r14d
  bool v11; // al
  bool v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rax
  char v20; // dl
  unsigned int *v21; // rax
  unsigned __int8 *v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // rbp
  _BOOL8 v28; // r13
  unsigned __int8 *v29; // rdx
  __int64 v30; // rax
  unsigned __int8 *v31; // rbp
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r15
  void *v65; // rdi
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // r14
  __int64 v71; // r13
  void *v72; // rdi
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // r14
  void *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  void *v85; // rdi
  __int64 v86; // [rsp+0h] [rbp-F8h]
  __int64 v87; // [rsp+0h] [rbp-F8h]
  __int64 v88; // [rsp+8h] [rbp-F0h]
  __int64 v89; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v90; // [rsp+20h] [rbp-D8h] BYREF
  int v91; // [rsp+28h] [rbp-D0h]
  _QWORD v92[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v94; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v95; // [rsp+58h] [rbp-A0h]
  char v96; // [rsp+A8h] [rbp-50h]
  unsigned int v97; // [rsp+B0h] [rbp-48h]
  char v98; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v92, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( v96 )
  {
    sub_AEC220(&v94, *(_BYTE **)v5, *(_QWORD *)(v5 + 8));
    v20 = v96;
  }
  else
  {
    if ( !v98 )
    {
      v8 = *(unsigned int **)(a1 + 16);
      v9 = *v8;
      v10 = v8[1];
      goto LABEL_4;
    }
    v17 = sub_168B9E0(v92);
    v18 = v93;
    if ( v93 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
    v90 = v18;
    v19 = sub_1587BC0(v17, (__int64 *)&v90, v13, v14, v15, v16);
    sub_AEC220((unsigned __int8 **)(*v19 + 32LL * v97 + 8), v6, v7);
    v20 = v96;
  }
  v21 = *(unsigned int **)(a1 + 16);
  v9 = *v21;
  v10 = v21[1];
  if ( v20 )
  {
    v22 = v94;
    if ( !v94 )
    {
      v59 = v95;
      v60 = *(_DWORD *)(v95 + 14976);
      if ( v60 )
      {
        v61 = (unsigned int)(v60 - 1);
        *(_DWORD *)(v95 + 14976) = v61;
        v22 = *(unsigned __int8 **)(v59 + 8 * v61 + 14848);
        v62 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v63 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v64 = v63 + (v62 << 6);
        if ( v63 == v64 )
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
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              v86 = v63;
              operator delete(v65);
              v63 = v86;
              if ( v86 == v64 )
                goto LABEL_39;
            }
          }
          while ( v63 != v64 );
LABEL_39:
          v23 = *((unsigned int *)v22 + 106);
          v25 = v23 + 1;
        }
        *((_DWORD *)v22 + 134) = 0;
        v24 = *((unsigned int *)v22 + 107);
      }
      else
      {
        v80 = operator new(0x3A0u);
        v24 = 8;
        v25 = 1;
        v22 = (unsigned __int8 *)v80;
        *(_BYTE *)v80 = 0;
        *(_QWORD *)(v80 + 96) = v80 + 112;
        *(_QWORD *)(v80 + 128) = v80 + 144;
        *(_QWORD *)(v80 + 160) = v80 + 176;
        *(_QWORD *)(v80 + 192) = v80 + 208;
        *(_QWORD *)(v80 + 224) = v80 + 240;
        *(_QWORD *)(v80 + 256) = v80 + 272;
        *(_QWORD *)(v80 + 288) = v80 + 304;
        *(_QWORD *)(v80 + 320) = v80 + 336;
        *(_QWORD *)(v80 + 352) = v80 + 368;
        *(_QWORD *)(v80 + 384) = v80 + 400;
        *(_QWORD *)(v80 + 416) = v80 + 432;
        *(_QWORD *)(v80 + 104) = 0;
        *(_BYTE *)(v80 + 112) = 0;
        *(_QWORD *)(v80 + 136) = 0;
        *(_BYTE *)(v80 + 144) = 0;
        *(_QWORD *)(v80 + 168) = 0;
        *(_BYTE *)(v80 + 176) = 0;
        *(_QWORD *)(v80 + 200) = 0;
        *(_BYTE *)(v80 + 208) = 0;
        *(_QWORD *)(v80 + 232) = 0;
        *(_BYTE *)(v80 + 240) = 0;
        *(_QWORD *)(v80 + 264) = 0;
        *(_BYTE *)(v80 + 272) = 0;
        *(_QWORD *)(v80 + 296) = 0;
        *(_BYTE *)(v80 + 304) = 0;
        *(_QWORD *)(v80 + 328) = 0;
        *(_BYTE *)(v80 + 336) = 0;
        *(_QWORD *)(v80 + 360) = 0;
        *(_BYTE *)(v80 + 368) = 0;
        *(_QWORD *)(v80 + 392) = 0;
        *(_BYTE *)(v80 + 400) = 0;
        *(_QWORD *)(v80 + 424) = 0x800000000LL;
        *(_QWORD *)(v80 + 528) = v80 + 544;
        *(_QWORD *)(v80 + 536) = 0x600000000LL;
        v23 = 0;
      }
      v94 = v22;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
LABEL_4:
  if ( !v98 )
    goto LABEL_5;
  v50 = sub_168B9E0(v92);
  v53 = v93;
  if ( v93 )
    v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
  v89 = v53;
  v54 = sub_1587BC0(v50, &v89, v48, v49, v51, v52);
  v55 = *v54 + 32LL * v97;
  v22 = *(unsigned __int8 **)(v55 + 8);
  if ( !v22 )
  {
    v56 = *(_QWORD *)(v55 + 16);
    v57 = *(_DWORD *)(v56 + 14976);
    if ( v57 )
    {
      v81 = (unsigned int)(v57 - 1);
      *(_DWORD *)(v56 + 14976) = v81;
      v22 = *(unsigned __int8 **)(v56 + 8 * v81 + 14848);
      v82 = *((unsigned int *)v22 + 134);
      *v22 = 0;
      v83 = *((_QWORD *)v22 + 66);
      *((_DWORD *)v22 + 106) = 0;
      v84 = v83 + (v82 << 6);
      if ( v83 == v84 )
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
            v84 -= 64;
            v85 = *(void **)(v84 + 24);
            if ( v85 == (void *)(v84 + 40) )
              break;
            v88 = v84;
            v87 = v83;
            operator delete(v85);
            v83 = v87;
            v84 = v88;
            if ( v87 == v88 )
              goto LABEL_64;
          }
        }
        while ( v83 != v84 );
LABEL_64:
        v23 = *((unsigned int *)v22 + 106);
        v25 = v23 + 1;
      }
      *((_DWORD *)v22 + 134) = 0;
      v24 = *((unsigned int *)v22 + 107);
    }
    else
    {
      v58 = operator new(0x3A0u);
      v24 = 8;
      v25 = 1;
      v22 = (unsigned __int8 *)v58;
      *(_BYTE *)v58 = 0;
      *(_QWORD *)(v58 + 96) = v58 + 112;
      *(_QWORD *)(v58 + 128) = v58 + 144;
      *(_QWORD *)(v58 + 160) = v58 + 176;
      *(_QWORD *)(v58 + 192) = v58 + 208;
      *(_QWORD *)(v58 + 224) = v58 + 240;
      *(_QWORD *)(v58 + 256) = v58 + 272;
      *(_QWORD *)(v58 + 288) = v58 + 304;
      *(_QWORD *)(v58 + 320) = v58 + 336;
      *(_QWORD *)(v58 + 352) = v58 + 368;
      *(_QWORD *)(v58 + 384) = v58 + 400;
      *(_QWORD *)(v58 + 416) = v58 + 432;
      *(_QWORD *)(v58 + 104) = 0;
      *(_BYTE *)(v58 + 112) = 0;
      *(_QWORD *)(v58 + 136) = 0;
      *(_BYTE *)(v58 + 144) = 0;
      *(_QWORD *)(v58 + 168) = 0;
      *(_BYTE *)(v58 + 176) = 0;
      *(_QWORD *)(v58 + 200) = 0;
      *(_BYTE *)(v58 + 208) = 0;
      *(_QWORD *)(v58 + 232) = 0;
      *(_BYTE *)(v58 + 240) = 0;
      *(_QWORD *)(v58 + 264) = 0;
      *(_BYTE *)(v58 + 272) = 0;
      *(_QWORD *)(v58 + 296) = 0;
      *(_BYTE *)(v58 + 304) = 0;
      *(_QWORD *)(v58 + 328) = 0;
      *(_BYTE *)(v58 + 336) = 0;
      *(_QWORD *)(v58 + 360) = 0;
      *(_BYTE *)(v58 + 368) = 0;
      *(_QWORD *)(v58 + 392) = 0;
      *(_BYTE *)(v58 + 400) = 0;
      *(_QWORD *)(v58 + 424) = 0x800000000LL;
      *(_QWORD *)(v58 + 528) = v58 + 544;
      *(_QWORD *)(v58 + 536) = 0x600000000LL;
      v23 = 0;
    }
    *(_QWORD *)(v55 + 8) = v22;
    goto LABEL_14;
  }
LABEL_13:
  v23 = *((unsigned int *)v22 + 106);
  v24 = *((unsigned int *)v22 + 107);
  v25 = v23 + 1;
LABEL_14:
  v90 = __PAIR64__(v10, v9);
  LOBYTE(v91) = 1;
  if ( v25 > v24 )
  {
    sub_2237220(v22 + 416, v22 + 432, v25, 12);
    v23 = *((unsigned int *)v22 + 106);
  }
  v26 = *((_QWORD *)v22 + 52) + 12 * v23;
  *(_QWORD *)v26 = v90;
  *(_DWORD *)(v26 + 8) = v91;
  ++*((_DWORD *)v22 + 106);
LABEL_5:
  v11 = sub_F582C0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v12 = v11;
  if ( v96 )
  {
    v27 = v94;
    v28 = v11;
    if ( !v94 )
    {
      v73 = v95;
      v74 = *(_DWORD *)(v95 + 14976);
      if ( v74 )
      {
        v75 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v95 + 14976) = v75;
        v27 = *(unsigned __int8 **)(v73 + 8 * v75 + 14848);
        v76 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v77 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v78 = v77 + (v76 << 6);
        while ( v77 != v78 )
        {
          while ( 1 )
          {
            v78 -= 64;
            v79 = *(void **)(v78 + 24);
            if ( v79 == (void *)(v78 + 40) )
              break;
            operator delete(v79);
            if ( v77 == v78 )
              goto LABEL_52;
          }
        }
LABEL_52:
        *((_DWORD *)v27 + 134) = 0;
      }
      else
      {
        v27 = (unsigned __int8 *)operator new(0x3A0u);
        *v27 = 0;
        *((_QWORD *)v27 + 12) = v27 + 112;
        *((_QWORD *)v27 + 16) = v27 + 144;
        *((_QWORD *)v27 + 20) = v27 + 176;
        *((_QWORD *)v27 + 24) = v27 + 208;
        *((_QWORD *)v27 + 28) = v27 + 240;
        *((_QWORD *)v27 + 32) = v27 + 272;
        *((_QWORD *)v27 + 36) = v27 + 304;
        *((_QWORD *)v27 + 40) = v27 + 336;
        *((_QWORD *)v27 + 44) = v27 + 368;
        *((_QWORD *)v27 + 48) = v27 + 400;
        *((_QWORD *)v27 + 52) = v27 + 432;
        *((_QWORD *)v27 + 13) = 0;
        v27[112] = 0;
        *((_QWORD *)v27 + 17) = 0;
        v27[144] = 0;
        *((_QWORD *)v27 + 21) = 0;
        v27[176] = 0;
        *((_QWORD *)v27 + 25) = 0;
        v27[208] = 0;
        *((_QWORD *)v27 + 29) = 0;
        v27[240] = 0;
        *((_QWORD *)v27 + 33) = 0;
        v27[272] = 0;
        *((_QWORD *)v27 + 37) = 0;
        v27[304] = 0;
        *((_QWORD *)v27 + 41) = 0;
        v27[336] = 0;
        *((_QWORD *)v27 + 45) = 0;
        v27[368] = 0;
        *((_QWORD *)v27 + 49) = 0;
        v27[400] = 0;
        *((_QWORD *)v27 + 53) = 0x800000000LL;
        *((_QWORD *)v27 + 66) = v27 + 544;
        *((_QWORD *)v27 + 67) = 0x600000000LL;
      }
      v94 = v27;
    }
    v27[*v27 + 1] = 2;
    v29 = v94;
    v30 = *v94;
    *v94 = v30 + 1;
    *(_QWORD *)&v29[8 * v30 + 16] = v28;
    if ( !v96 )
    {
LABEL_25:
      if ( v98 )
      {
        v43 = sub_168B9E0(v92);
        v46 = v93;
        if ( v93 )
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
        v90 = v46;
        v47 = sub_1587BC0(v43, (__int64 *)&v90, v41, v42, v44, v45);
        sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v97 + 8), a4, 8u);
      }
      goto LABEL_7;
    }
  }
  else
  {
    if ( !v98 )
      goto LABEL_7;
    v38 = sub_168B9E0(v92);
    v39 = v93;
    if ( v93 )
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 32LL))(v93);
    v90 = v39;
    v40 = sub_1587BC0(v38, (__int64 *)&v90, v34, v35, v36, v37);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v97 + 8), v12, 2u);
    if ( !v96 )
      goto LABEL_25;
  }
  v31 = v94;
  if ( !v94 )
  {
    v66 = v95;
    v67 = *(_DWORD *)(v95 + 14976);
    if ( v67 )
    {
      v68 = (unsigned int)(v67 - 1);
      *(_DWORD *)(v95 + 14976) = v68;
      v31 = *(unsigned __int8 **)(v66 + 8 * v68 + 14848);
      v69 = *((unsigned int *)v31 + 134);
      *v31 = 0;
      v70 = *((_QWORD *)v31 + 66);
      *((_DWORD *)v31 + 106) = 0;
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
            goto LABEL_46;
        }
      }
LABEL_46:
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
    v94 = v31;
  }
  v31[*v31 + 1] = 8;
  v32 = v94;
  v33 = *v94;
  *v94 = v33 + 1;
  *(_QWORD *)&v32[8 * v33 + 16] = a4;
LABEL_7:
  sub_15F7200(v92);
}
