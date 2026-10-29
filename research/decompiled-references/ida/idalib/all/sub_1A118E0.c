void __fastcall sub_1A118E0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int *v21; // rax
  unsigned int v22; // r13d
  unsigned int v23; // r14d
  unsigned __int8 *v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int8 *v29; // rbx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  unsigned __int8 *v32; // r13
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r15
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // r13
  void *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // r15
  void *v59; // rdi
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // r15
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  void *v72; // rdi
  __int64 v73; // [rsp+0h] [rbp-F8h]
  __int64 v74; // [rsp+0h] [rbp-F8h]
  __int64 v75; // [rsp+0h] [rbp-F8h]
  __int64 v76; // [rsp+8h] [rbp-F0h]
  __int64 v77; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v78; // [rsp+20h] [rbp-D8h] BYREF
  int v79; // [rsp+28h] [rbp-D0h]
  _QWORD v80[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v82; // [rsp+50h] [rbp-A8h]
  __int64 v83; // [rsp+58h] [rbp-A0h]
  char v84; // [rsp+A8h] [rbp-50h]
  unsigned int v85; // [rsp+B0h] [rbp-48h]
  char v86; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v80, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v6 = **(_QWORD **)(a1 + 24);
  if ( v84 )
  {
    v32 = v82;
    if ( !v82 )
    {
      v53 = v83;
      v54 = *(_DWORD *)(v83 + 14976);
      if ( v54 )
      {
        v55 = (unsigned int)(v54 - 1);
        *(_DWORD *)(v83 + 14976) = v55;
        v32 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v32 + 134);
        *v32 = 0;
        v57 = *((_QWORD *)v32 + 66);
        *((_DWORD *)v32 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            v73 = v57;
            operator delete(v59);
            v57 = v73;
            if ( v73 == v58 )
              goto LABEL_39;
          }
        }
LABEL_39:
        *((_DWORD *)v32 + 134) = 0;
      }
      else
      {
        v32 = (unsigned __int8 *)operator new(0x3A0u);
        *v32 = 0;
        *((_QWORD *)v32 + 12) = v32 + 112;
        *((_QWORD *)v32 + 16) = v32 + 144;
        *((_QWORD *)v32 + 20) = v32 + 176;
        *((_QWORD *)v32 + 24) = v32 + 208;
        *((_QWORD *)v32 + 28) = v32 + 240;
        *((_QWORD *)v32 + 32) = v32 + 272;
        *((_QWORD *)v32 + 36) = v32 + 304;
        *((_QWORD *)v32 + 40) = v32 + 336;
        *((_QWORD *)v32 + 44) = v32 + 368;
        *((_QWORD *)v32 + 48) = v32 + 400;
        *((_QWORD *)v32 + 52) = v32 + 432;
        *((_QWORD *)v32 + 13) = 0;
        v32[112] = 0;
        *((_QWORD *)v32 + 17) = 0;
        v32[144] = 0;
        *((_QWORD *)v32 + 21) = 0;
        v32[176] = 0;
        *((_QWORD *)v32 + 25) = 0;
        v32[208] = 0;
        *((_QWORD *)v32 + 29) = 0;
        v32[240] = 0;
        *((_QWORD *)v32 + 33) = 0;
        v32[272] = 0;
        *((_QWORD *)v32 + 37) = 0;
        v32[304] = 0;
        *((_QWORD *)v32 + 41) = 0;
        v32[336] = 0;
        *((_QWORD *)v32 + 45) = 0;
        v32[368] = 0;
        *((_QWORD *)v32 + 49) = 0;
        v32[400] = 0;
        *((_QWORD *)v32 + 53) = 0x800000000LL;
        *((_QWORD *)v32 + 66) = v32 + 544;
        *((_QWORD *)v32 + 67) = 0x600000000LL;
      }
      v82 = v32;
    }
    v32[*v32 + 1] = 8;
    v33 = v82;
    v34 = *v82;
    *v82 = v34 + 1;
    *(_QWORD *)&v33[8 * v34 + 16] = v6;
  }
  else
  {
    if ( !v86 )
      goto LABEL_3;
    v18 = sub_168B9E0(v80);
    v19 = v81;
    if ( v81 )
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
    v78 = v19;
    v20 = sub_1587BC0(v18, (__int64 *)&v78, v14, v15, v16, v17);
    sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v85 + 8), v6, 8u);
  }
  v21 = *(unsigned int **)(a1 + 16);
  v22 = *v21;
  v23 = v21[1];
  if ( v84 )
  {
    v24 = v82;
    if ( v82 )
    {
LABEL_13:
      v25 = *((unsigned int *)v24 + 106);
      v26 = *((unsigned int *)v24 + 107);
      v27 = v25 + 1;
      goto LABEL_14;
    }
    v60 = v83;
    v61 = *(_DWORD *)(v83 + 14976);
    if ( v61 )
    {
      v62 = (unsigned int)(v61 - 1);
      *(_DWORD *)(v83 + 14976) = v62;
      v24 = *(unsigned __int8 **)(v60 + 8 * v62 + 14848);
      v63 = *((unsigned int *)v24 + 134);
      *v24 = 0;
      v64 = *((_QWORD *)v24 + 66);
      *((_DWORD *)v24 + 106) = 0;
      v65 = v64 + (v63 << 6);
      if ( v64 == v65 )
      {
        v27 = 1;
        v25 = 0;
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
            v74 = v64;
            operator delete(v66);
            v64 = v74;
            if ( v74 == v65 )
              goto LABEL_44;
          }
        }
        while ( v64 != v65 );
LABEL_44:
        v25 = *((unsigned int *)v24 + 106);
        v27 = v25 + 1;
      }
      *((_DWORD *)v24 + 134) = 0;
      v26 = *((unsigned int *)v24 + 107);
    }
    else
    {
      v67 = operator new(0x3A0u);
      v26 = 8;
      v27 = 1;
      v24 = (unsigned __int8 *)v67;
      *(_BYTE *)v67 = 0;
      *(_QWORD *)(v67 + 96) = v67 + 112;
      *(_QWORD *)(v67 + 128) = v67 + 144;
      *(_QWORD *)(v67 + 160) = v67 + 176;
      *(_QWORD *)(v67 + 192) = v67 + 208;
      *(_QWORD *)(v67 + 224) = v67 + 240;
      *(_QWORD *)(v67 + 256) = v67 + 272;
      *(_QWORD *)(v67 + 288) = v67 + 304;
      *(_QWORD *)(v67 + 320) = v67 + 336;
      *(_QWORD *)(v67 + 352) = v67 + 368;
      *(_QWORD *)(v67 + 384) = v67 + 400;
      *(_QWORD *)(v67 + 416) = v67 + 432;
      *(_QWORD *)(v67 + 104) = 0;
      *(_BYTE *)(v67 + 112) = 0;
      *(_QWORD *)(v67 + 136) = 0;
      *(_BYTE *)(v67 + 144) = 0;
      *(_QWORD *)(v67 + 168) = 0;
      *(_BYTE *)(v67 + 176) = 0;
      *(_QWORD *)(v67 + 200) = 0;
      *(_BYTE *)(v67 + 208) = 0;
      *(_QWORD *)(v67 + 232) = 0;
      *(_BYTE *)(v67 + 240) = 0;
      *(_QWORD *)(v67 + 264) = 0;
      *(_BYTE *)(v67 + 272) = 0;
      *(_QWORD *)(v67 + 296) = 0;
      *(_BYTE *)(v67 + 304) = 0;
      *(_QWORD *)(v67 + 328) = 0;
      *(_BYTE *)(v67 + 336) = 0;
      *(_QWORD *)(v67 + 360) = 0;
      *(_BYTE *)(v67 + 368) = 0;
      *(_QWORD *)(v67 + 392) = 0;
      *(_BYTE *)(v67 + 400) = 0;
      *(_QWORD *)(v67 + 424) = 0x800000000LL;
      *(_QWORD *)(v67 + 528) = v67 + 544;
      *(_QWORD *)(v67 + 536) = 0x600000000LL;
      v25 = 0;
    }
    v82 = v24;
  }
  else
  {
    if ( !v86 )
    {
LABEL_3:
      if ( v86 )
      {
        v9 = sub_168B9E0(v80);
        v12 = v81;
        if ( v81 )
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
        v78 = v12;
        v13 = sub_1587BC0(v9, (__int64 *)&v78, v7, v8, v10, v11);
        sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v85 + 8), a4, 8u);
      }
      goto LABEL_4;
    }
    v37 = sub_168B9E0(v80);
    v40 = v81;
    if ( v81 )
      v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
    v77 = v40;
    v41 = sub_1587BC0(v37, &v77, v35, v36, v38, v39);
    v42 = *v41 + 32LL * v85;
    v24 = *(unsigned __int8 **)(v42 + 8);
    if ( v24 )
      goto LABEL_13;
    v43 = *(_QWORD *)(v42 + 16);
    v44 = *(_DWORD *)(v43 + 14976);
    if ( v44 )
    {
      v68 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v43 + 14976) = v68;
      v24 = *(unsigned __int8 **)(v43 + 8 * v68 + 14848);
      v69 = *((unsigned int *)v24 + 134);
      *v24 = 0;
      v70 = *((_QWORD *)v24 + 66);
      *((_DWORD *)v24 + 106) = 0;
      v71 = v70 + (v69 << 6);
      if ( v70 == v71 )
      {
        v27 = 1;
        v25 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v71 -= 64;
            v72 = *(void **)(v71 + 24);
            if ( v72 == (void *)(v71 + 40) )
              break;
            v76 = v71;
            v75 = v70;
            operator delete(v72);
            v70 = v75;
            v71 = v76;
            if ( v75 == v76 )
              goto LABEL_57;
          }
        }
        while ( v70 != v71 );
LABEL_57:
        v25 = *((unsigned int *)v24 + 106);
        v27 = v25 + 1;
      }
      *((_DWORD *)v24 + 134) = 0;
      v26 = *((unsigned int *)v24 + 107);
    }
    else
    {
      v45 = operator new(0x3A0u);
      v26 = 8;
      v27 = 1;
      v24 = (unsigned __int8 *)v45;
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
      v25 = 0;
    }
    *(_QWORD *)(v42 + 8) = v24;
  }
LABEL_14:
  v78 = __PAIR64__(v23, v22);
  LOBYTE(v79) = 1;
  if ( v27 > v26 )
  {
    sub_2237220(v24 + 416, v24 + 432, v27, 12);
    v25 = *((unsigned int *)v24 + 106);
  }
  v28 = *((_QWORD *)v24 + 52) + 12 * v25;
  *(_QWORD *)v28 = v78;
  *(_DWORD *)(v28 + 8) = v79;
  LOBYTE(v28) = v84;
  ++*((_DWORD *)v24 + 106);
  if ( !(_BYTE)v28 )
    goto LABEL_3;
  v29 = v82;
  if ( !v82 )
  {
    v46 = v83;
    v47 = *(_DWORD *)(v83 + 14976);
    if ( v47 )
    {
      v48 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v83 + 14976) = v48;
      v29 = *(unsigned __int8 **)(v46 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v50 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
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
            goto LABEL_33;
        }
      }
LABEL_33:
      *((_DWORD *)v29 + 134) = 0;
    }
    else
    {
      v29 = (unsigned __int8 *)operator new(0x3A0u);
      *v29 = 0;
      *((_QWORD *)v29 + 12) = v29 + 112;
      *((_QWORD *)v29 + 16) = v29 + 144;
      *((_QWORD *)v29 + 20) = v29 + 176;
      *((_QWORD *)v29 + 24) = v29 + 208;
      *((_QWORD *)v29 + 28) = v29 + 240;
      *((_QWORD *)v29 + 32) = v29 + 272;
      *((_QWORD *)v29 + 36) = v29 + 304;
      *((_QWORD *)v29 + 40) = v29 + 336;
      *((_QWORD *)v29 + 44) = v29 + 368;
      *((_QWORD *)v29 + 48) = v29 + 400;
      *((_QWORD *)v29 + 52) = v29 + 432;
      *((_QWORD *)v29 + 13) = 0;
      v29[112] = 0;
      *((_QWORD *)v29 + 17) = 0;
      v29[144] = 0;
      *((_QWORD *)v29 + 21) = 0;
      v29[176] = 0;
      *((_QWORD *)v29 + 25) = 0;
      v29[208] = 0;
      *((_QWORD *)v29 + 29) = 0;
      v29[240] = 0;
      *((_QWORD *)v29 + 33) = 0;
      v29[272] = 0;
      *((_QWORD *)v29 + 37) = 0;
      v29[304] = 0;
      *((_QWORD *)v29 + 41) = 0;
      v29[336] = 0;
      *((_QWORD *)v29 + 45) = 0;
      v29[368] = 0;
      *((_QWORD *)v29 + 49) = 0;
      v29[400] = 0;
      *((_QWORD *)v29 + 53) = 0x800000000LL;
      *((_QWORD *)v29 + 66) = v29 + 544;
      *((_QWORD *)v29 + 67) = 0x600000000LL;
    }
    v82 = v29;
  }
  v29[*v29 + 1] = 8;
  v30 = v82;
  v31 = *v82;
  *v82 = v31 + 1;
  *(_QWORD *)&v30[8 * v31 + 16] = a4;
LABEL_4:
  sub_15F7200(v80);
}
