void __fastcall sub_18E6930(__int64 a1, unsigned int a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  char v17; // bp
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int8 *v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 *v25; // rbp
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r14
  void *v47; // rdi
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // r14
  __int64 v53; // r13
  void *v54; // rdi
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  unsigned __int8 *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // r15
  void *v63; // rdi
  __int64 v64; // [rsp+8h] [rbp-F0h]
  __int64 v65; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v66; // [rsp+20h] [rbp-D8h] BYREF
  int v67; // [rsp+28h] [rbp-D0h]
  _QWORD v68[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v70; // [rsp+50h] [rbp-A8h]
  __int64 v71; // [rsp+58h] [rbp-A0h]
  char v72; // [rsp+A8h] [rbp-50h]
  unsigned int v73; // [rsp+B0h] [rbp-48h]
  char v74; // [rsp+B4h] [rbp-44h]

  v5 = a1 + 8;
  sub_168B9F0(
    (__int64)v68,
    (__int64 *)(a1 + 8),
    a2,
    (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 ? 5572 : 5307,
    0);
  if ( v72 )
  {
    v25 = v70;
    if ( !v70 )
    {
      v48 = v71;
      v49 = *(_DWORD *)(v71 + 14976);
      if ( v49 )
      {
        v50 = (unsigned int)(v49 - 1);
        *(_DWORD *)(v71 + 14976) = v50;
        v25 = *(unsigned __int8 **)(v48 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v25 + 134);
        *v25 = 0;
        v52 = *((_QWORD *)v25 + 66);
        *((_DWORD *)v25 + 106) = 0;
        v53 = v52 + (v51 << 6);
        while ( v52 != v53 )
        {
          while ( 1 )
          {
            v53 -= 64;
            v54 = *(void **)(v53 + 24);
            if ( v54 == (void *)(v53 + 40) )
              break;
            operator delete(v54);
            if ( v52 == v53 )
              goto LABEL_35;
          }
        }
LABEL_35:
        *((_DWORD *)v25 + 134) = 0;
      }
      else
      {
        v25 = (unsigned __int8 *)operator new(0x3A0u);
        *v25 = 0;
        *((_QWORD *)v25 + 12) = v25 + 112;
        *((_QWORD *)v25 + 16) = v25 + 144;
        *((_QWORD *)v25 + 20) = v25 + 176;
        *((_QWORD *)v25 + 24) = v25 + 208;
        *((_QWORD *)v25 + 28) = v25 + 240;
        *((_QWORD *)v25 + 32) = v25 + 272;
        *((_QWORD *)v25 + 36) = v25 + 304;
        *((_QWORD *)v25 + 40) = v25 + 336;
        *((_QWORD *)v25 + 44) = v25 + 368;
        *((_QWORD *)v25 + 48) = v25 + 400;
        *((_QWORD *)v25 + 52) = v25 + 432;
        *((_QWORD *)v25 + 13) = 0;
        v25[112] = 0;
        *((_QWORD *)v25 + 17) = 0;
        v25[144] = 0;
        *((_QWORD *)v25 + 21) = 0;
        v25[176] = 0;
        *((_QWORD *)v25 + 25) = 0;
        v25[208] = 0;
        *((_QWORD *)v25 + 29) = 0;
        v25[240] = 0;
        *((_QWORD *)v25 + 33) = 0;
        v25[272] = 0;
        *((_QWORD *)v25 + 37) = 0;
        v25[304] = 0;
        *((_QWORD *)v25 + 41) = 0;
        v25[336] = 0;
        *((_QWORD *)v25 + 45) = 0;
        v25[368] = 0;
        *((_QWORD *)v25 + 49) = 0;
        v25[400] = 0;
        *((_QWORD *)v25 + 53) = 0x800000000LL;
        *((_QWORD *)v25 + 66) = v25 + 544;
        *((_QWORD *)v25 + 67) = 0x600000000LL;
      }
      v70 = v25;
    }
    v25[*v25 + 1] = 2;
    v26 = v70;
    v27 = *v70;
    *v70 = v27 + 1;
    *(_QWORD *)&v26[8 * v27 + 16] = 0;
    v17 = v72;
  }
  else
  {
    if ( !v74 )
    {
      v7 = sub_EEC8C0(a3, v5, a4);
      v8 = v7;
      v9 = HIDWORD(v7);
      goto LABEL_4;
    }
    v12 = sub_168B9E0(v68);
    v15 = v69;
    if ( v69 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
    v66 = v15;
    v16 = sub_1587BC0(v12, (__int64 *)&v66, v10, v11, v13, v14);
    v5 = 0;
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v73 + 8), 0, 2u);
    v17 = v72;
  }
  v18 = sub_EEC8C0(a3, v5, a4);
  v8 = v18;
  v19 = HIDWORD(v18);
  LODWORD(v9) = HIDWORD(v18);
  if ( !v17 )
  {
LABEL_4:
    if ( v74 )
    {
      v30 = sub_168B9E0(v68);
      v33 = v69;
      if ( v69 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v65 = v33;
      v34 = sub_1587BC0(v30, &v65, v28, v29, v31, v32);
      v35 = *v34 + 32LL * v73;
      v36 = *(_QWORD *)(v35 + 8);
      if ( v36 )
      {
        v37 = *(unsigned int *)(v36 + 424);
        v38 = *(unsigned int *)(v36 + 428);
        v39 = v37 + 1;
      }
      else
      {
        v55 = *(_QWORD *)(v35 + 16);
        v56 = *(_DWORD *)(v55 + 14976);
        if ( v56 )
        {
          v59 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v55 + 14976) = v59;
          v36 = *(_QWORD *)(v55 + 8 * v59 + 14848);
          v60 = *(unsigned int *)(v36 + 536);
          *(_BYTE *)v36 = 0;
          v61 = *(_QWORD *)(v36 + 528);
          *(_DWORD *)(v36 + 424) = 0;
          v62 = v61 + (v60 << 6);
          if ( v61 == v62 )
          {
            v39 = 1;
            v37 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v62 -= 64;
                v63 = *(void **)(v62 + 24);
                if ( v63 == (void *)(v62 + 40) )
                  break;
                v64 = v61;
                operator delete(v63);
                v61 = v64;
                if ( v64 == v62 )
                  goto LABEL_48;
              }
            }
            while ( v61 != v62 );
LABEL_48:
            v37 = *(unsigned int *)(v36 + 424);
            v39 = v37 + 1;
          }
          *(_DWORD *)(v36 + 536) = 0;
          v38 = *(unsigned int *)(v36 + 428);
        }
        else
        {
          v57 = operator new(0x3A0u);
          v38 = 8;
          v39 = 1;
          v36 = v57;
          *(_BYTE *)v57 = 0;
          *(_QWORD *)(v57 + 96) = v57 + 112;
          *(_QWORD *)(v57 + 128) = v57 + 144;
          *(_QWORD *)(v57 + 160) = v57 + 176;
          *(_QWORD *)(v57 + 192) = v57 + 208;
          *(_QWORD *)(v57 + 224) = v57 + 240;
          *(_QWORD *)(v57 + 256) = v57 + 272;
          *(_QWORD *)(v57 + 288) = v57 + 304;
          *(_QWORD *)(v57 + 320) = v57 + 336;
          *(_QWORD *)(v57 + 352) = v57 + 368;
          *(_QWORD *)(v57 + 384) = v57 + 400;
          *(_QWORD *)(v57 + 416) = v57 + 432;
          *(_QWORD *)(v57 + 104) = 0;
          *(_BYTE *)(v57 + 112) = 0;
          *(_QWORD *)(v57 + 136) = 0;
          *(_BYTE *)(v57 + 144) = 0;
          *(_QWORD *)(v57 + 168) = 0;
          *(_BYTE *)(v57 + 176) = 0;
          *(_QWORD *)(v57 + 200) = 0;
          *(_BYTE *)(v57 + 208) = 0;
          *(_QWORD *)(v57 + 232) = 0;
          *(_BYTE *)(v57 + 240) = 0;
          *(_QWORD *)(v57 + 264) = 0;
          *(_BYTE *)(v57 + 272) = 0;
          *(_QWORD *)(v57 + 296) = 0;
          *(_BYTE *)(v57 + 304) = 0;
          *(_QWORD *)(v57 + 328) = 0;
          *(_BYTE *)(v57 + 336) = 0;
          *(_QWORD *)(v57 + 360) = 0;
          *(_BYTE *)(v57 + 368) = 0;
          *(_QWORD *)(v57 + 392) = 0;
          *(_BYTE *)(v57 + 400) = 0;
          *(_QWORD *)(v57 + 424) = 0x800000000LL;
          *(_QWORD *)(v57 + 528) = v57 + 544;
          *(_QWORD *)(v57 + 536) = 0x600000000LL;
          v37 = 0;
        }
        *(_QWORD *)(v35 + 8) = v36;
      }
      v66 = __PAIR64__(v9, v8);
      LOBYTE(v67) = 1;
      if ( v39 > v38 )
      {
        sub_2237220(v36 + 416, v36 + 432, v39, 12);
        v37 = *(unsigned int *)(v36 + 424);
      }
      v40 = *(_QWORD *)(v36 + 416) + 12 * v37;
      *(_QWORD *)v40 = v66;
      *(_DWORD *)(v40 + 8) = v67;
      ++*(_DWORD *)(v36 + 424);
    }
    goto LABEL_5;
  }
  v20 = v70;
  if ( v70 )
  {
    v21 = *((unsigned int *)v70 + 106);
    v22 = *((unsigned int *)v70 + 107);
    v23 = v21 + 1;
  }
  else
  {
    v41 = v71;
    v42 = *(_DWORD *)(v71 + 14976);
    if ( v42 )
    {
      v43 = (unsigned int)(v42 - 1);
      *(_DWORD *)(v71 + 14976) = v43;
      v20 = *(unsigned __int8 **)(v41 + 8 * v43 + 14848);
      v44 = *((unsigned int *)v20 + 134);
      *v20 = 0;
      v45 = *((_QWORD *)v20 + 66);
      *((_DWORD *)v20 + 106) = 0;
      v46 = v45 + (v44 << 6);
      if ( v45 == v46 )
      {
        v23 = 1;
        v21 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v46 -= 64;
            v47 = *(void **)(v46 + 24);
            if ( v47 == (void *)(v46 + 40) )
              break;
            operator delete(v47);
            if ( v45 == v46 )
              goto LABEL_28;
          }
        }
        while ( v45 != v46 );
LABEL_28:
        v21 = *((unsigned int *)v20 + 106);
        v23 = v21 + 1;
      }
      *((_DWORD *)v20 + 134) = 0;
      v22 = *((unsigned int *)v20 + 107);
    }
    else
    {
      v58 = (unsigned __int8 *)operator new(0x3A0u);
      v22 = 8;
      v23 = 1;
      v20 = v58;
      *v58 = 0;
      *((_QWORD *)v58 + 12) = v58 + 112;
      *((_QWORD *)v58 + 16) = v58 + 144;
      *((_QWORD *)v58 + 20) = v58 + 176;
      *((_QWORD *)v58 + 24) = v58 + 208;
      *((_QWORD *)v58 + 28) = v58 + 240;
      *((_QWORD *)v58 + 32) = v58 + 272;
      *((_QWORD *)v58 + 36) = v58 + 304;
      *((_QWORD *)v58 + 40) = v58 + 336;
      *((_QWORD *)v58 + 44) = v58 + 368;
      *((_QWORD *)v58 + 48) = v58 + 400;
      *((_QWORD *)v58 + 52) = v58 + 432;
      *((_QWORD *)v58 + 13) = 0;
      v58[112] = 0;
      *((_QWORD *)v58 + 17) = 0;
      v58[144] = 0;
      *((_QWORD *)v58 + 21) = 0;
      v58[176] = 0;
      *((_QWORD *)v58 + 25) = 0;
      v58[208] = 0;
      *((_QWORD *)v58 + 29) = 0;
      v58[240] = 0;
      *((_QWORD *)v58 + 33) = 0;
      v58[272] = 0;
      *((_QWORD *)v58 + 37) = 0;
      v58[304] = 0;
      *((_QWORD *)v58 + 41) = 0;
      v58[336] = 0;
      *((_QWORD *)v58 + 45) = 0;
      v58[368] = 0;
      *((_QWORD *)v58 + 49) = 0;
      v58[400] = 0;
      *((_QWORD *)v58 + 53) = 0x800000000LL;
      *((_QWORD *)v58 + 66) = v58 + 544;
      *((_QWORD *)v58 + 67) = 0x600000000LL;
      v21 = 0;
    }
    v70 = v20;
  }
  v66 = __PAIR64__(v19, v8);
  LOBYTE(v67) = 1;
  if ( v23 > v22 )
  {
    sub_2237220(v20 + 416, v20 + 432, v23, 12);
    v21 = *((unsigned int *)v20 + 106);
  }
  v24 = *((_QWORD *)v20 + 52) + 12 * v21;
  *(_QWORD *)v24 = v66;
  *(_DWORD *)(v24 + 8) = v67;
  ++*((_DWORD *)v20 + 106);
LABEL_5:
  sub_15F7200(v68);
}
