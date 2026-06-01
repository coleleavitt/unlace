void __fastcall sub_18E8CD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  __int64 *v5; // rsi
  __int64 v7; // r13
  bool v8; // al
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int8 *v17; // rbx
  _BYTE *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r15
  _BYTE *v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  _BOOL8 v34; // r13
  _BYTE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // r15
  void *v50; // rdi
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // r14
  void *v57; // rdi
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // r14
  __int64 v63; // r13
  void *v64; // rdi
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  void *v73; // rdi
  __int64 v74; // [rsp+0h] [rbp-F8h]
  __int64 v75; // [rsp+0h] [rbp-F8h]
  __int64 v76; // [rsp+8h] [rbp-F0h]
  __int64 v77; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v78; // [rsp+20h] [rbp-D8h] BYREF
  int v79; // [rsp+28h] [rbp-D0h]
  _QWORD v80[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+40h] [rbp-B8h]
  _BYTE *v82; // [rsp+50h] [rbp-A8h]
  __int64 v83; // [rsp+58h] [rbp-A0h]
  char v84; // [rsp+A8h] [rbp-50h]
  unsigned int v85; // [rsp+B0h] [rbp-48h]
  char v86; // [rsp+B4h] [rbp-44h]

  v5 = (__int64 *)(a2 + 8);
  sub_168B9F0((__int64)v80, v5, a3, *(_DWORD *)(a1 + 8), 0);
  v7 = sub_EEC8C0(**(_QWORD **)(a1 + 16), (__int64)v5, a5);
  if ( v84 )
  {
    v28 = v82;
    if ( !v82 )
    {
      v44 = v83;
      v45 = *(_DWORD *)(v83 + 14976);
      if ( v45 )
      {
        v46 = (unsigned int)(v45 - 1);
        *(_DWORD *)(v83 + 14976) = v46;
        v28 = *(_BYTE **)(v44 + 8 * v46 + 14848);
        v47 = *((unsigned int *)v28 + 134);
        *v28 = 0;
        v48 = *((_QWORD *)v28 + 66);
        *((_DWORD *)v28 + 106) = 0;
        v49 = v48 + (v47 << 6);
        if ( v48 == v49 )
        {
          v31 = 1;
          v29 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v49 -= 64;
              v50 = *(void **)(v49 + 24);
              if ( v50 == (void *)(v49 + 40) )
                break;
              v74 = v48;
              operator delete(v50);
              v48 = v74;
              if ( v74 == v49 )
                goto LABEL_29;
            }
          }
          while ( v48 != v49 );
LABEL_29:
          v29 = *((unsigned int *)v28 + 106);
          v31 = v29 + 1;
        }
        *((_DWORD *)v28 + 134) = 0;
        v30 = *((unsigned int *)v28 + 107);
      }
      else
      {
        v68 = operator new(0x3A0u);
        v30 = 8;
        v31 = 1;
        v28 = (_BYTE *)v68;
        *(_BYTE *)v68 = 0;
        *(_QWORD *)(v68 + 96) = v68 + 112;
        *(_QWORD *)(v68 + 128) = v68 + 144;
        *(_QWORD *)(v68 + 160) = v68 + 176;
        *(_QWORD *)(v68 + 192) = v68 + 208;
        *(_QWORD *)(v68 + 224) = v68 + 240;
        *(_QWORD *)(v68 + 256) = v68 + 272;
        *(_QWORD *)(v68 + 288) = v68 + 304;
        *(_QWORD *)(v68 + 320) = v68 + 336;
        *(_QWORD *)(v68 + 352) = v68 + 368;
        *(_QWORD *)(v68 + 384) = v68 + 400;
        *(_QWORD *)(v68 + 416) = v68 + 432;
        *(_QWORD *)(v68 + 104) = 0;
        *(_BYTE *)(v68 + 112) = 0;
        *(_QWORD *)(v68 + 136) = 0;
        *(_BYTE *)(v68 + 144) = 0;
        *(_QWORD *)(v68 + 168) = 0;
        *(_BYTE *)(v68 + 176) = 0;
        *(_QWORD *)(v68 + 200) = 0;
        *(_BYTE *)(v68 + 208) = 0;
        *(_QWORD *)(v68 + 232) = 0;
        *(_BYTE *)(v68 + 240) = 0;
        *(_QWORD *)(v68 + 264) = 0;
        *(_BYTE *)(v68 + 272) = 0;
        *(_QWORD *)(v68 + 296) = 0;
        *(_BYTE *)(v68 + 304) = 0;
        *(_QWORD *)(v68 + 328) = 0;
        *(_BYTE *)(v68 + 336) = 0;
        *(_QWORD *)(v68 + 360) = 0;
        *(_BYTE *)(v68 + 368) = 0;
        *(_QWORD *)(v68 + 392) = 0;
        *(_BYTE *)(v68 + 400) = 0;
        *(_QWORD *)(v68 + 424) = 0x800000000LL;
        *(_QWORD *)(v68 + 528) = v68 + 544;
        *(_QWORD *)(v68 + 536) = 0x600000000LL;
        v29 = 0;
      }
      v82 = v28;
      goto LABEL_15;
    }
  }
  else
  {
    if ( !v86 )
      goto LABEL_3;
    v22 = sub_168B9E0(v80);
    v25 = v81;
    if ( v81 )
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
    v77 = v25;
    v26 = sub_1587BC0(v22, &v77, v20, v21, v23, v24);
    v27 = *v26 + 32LL * v85;
    v28 = *(_BYTE **)(v27 + 8);
    if ( !v28 )
    {
      v65 = *(_QWORD *)(v27 + 16);
      v66 = *(_DWORD *)(v65 + 14976);
      if ( v66 )
      {
        v69 = (unsigned int)(v66 - 1);
        *(_DWORD *)(v65 + 14976) = v69;
        v28 = *(_BYTE **)(v65 + 8 * v69 + 14848);
        v70 = *((unsigned int *)v28 + 134);
        *v28 = 0;
        v71 = *((_QWORD *)v28 + 66);
        *((_DWORD *)v28 + 106) = 0;
        v72 = v71 + (v70 << 6);
        if ( v71 == v72 )
        {
          v31 = 1;
          v29 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v72 -= 64;
              v73 = *(void **)(v72 + 24);
              if ( v73 == (void *)(v72 + 40) )
                break;
              v76 = v71;
              v75 = v72;
              operator delete(v73);
              v72 = v75;
              v71 = v76;
              if ( v76 == v75 )
                goto LABEL_57;
            }
          }
          while ( v71 != v72 );
LABEL_57:
          v29 = *((unsigned int *)v28 + 106);
          v31 = v29 + 1;
        }
        *((_DWORD *)v28 + 134) = 0;
        v30 = *((unsigned int *)v28 + 107);
      }
      else
      {
        v67 = operator new(0x3A0u);
        v30 = 8;
        v31 = 1;
        v28 = (_BYTE *)v67;
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
        v29 = 0;
      }
      *(_QWORD *)(v27 + 8) = v28;
      goto LABEL_15;
    }
  }
  v29 = *((unsigned int *)v28 + 106);
  v30 = *((unsigned int *)v28 + 107);
  v31 = v29 + 1;
LABEL_15:
  v78 = v7;
  LOBYTE(v79) = 1;
  if ( v31 > v30 )
  {
    sub_2237220(v28 + 416, v28 + 432, v31, 12);
    v29 = *((unsigned int *)v28 + 106);
  }
  v32 = *((_QWORD *)v28 + 52) + 12 * v29;
  *(_QWORD *)v32 = v78;
  *(_DWORD *)(v32 + 8) = v79;
  ++*((_DWORD *)v28 + 106);
LABEL_3:
  v8 = sub_F582C0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v9 = v8;
  if ( !v84 )
  {
    if ( !v86 )
      goto LABEL_5;
    v14 = sub_168B9E0(v80);
    v15 = v81;
    if ( v81 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
    v78 = v15;
    v16 = sub_1587BC0(v14, &v78, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v85 + 8), v9, 2u);
    if ( v84 )
      goto LABEL_9;
LABEL_20:
    if ( v86 )
    {
      v39 = sub_168B9E0(v80);
      v42 = v81;
      if ( v81 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
      v78 = v42;
      v43 = sub_1587BC0(v39, &v78, v37, v38, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v85 + 8), a4, 8u);
    }
    goto LABEL_5;
  }
  v33 = v82;
  v34 = v8;
  if ( !v82 )
  {
    v51 = v83;
    v52 = *(_DWORD *)(v83 + 14976);
    if ( v52 )
    {
      v53 = (unsigned int)(v52 - 1);
      *(_DWORD *)(v83 + 14976) = v53;
      v33 = *(unsigned __int8 **)(v51 + 8 * v53 + 14848);
      v54 = *((unsigned int *)v33 + 134);
      *v33 = 0;
      v55 = *((_QWORD *)v33 + 66);
      *((_DWORD *)v33 + 106) = 0;
      v56 = v55 + (v54 << 6);
      while ( v55 != v56 )
      {
        while ( 1 )
        {
          v56 -= 64;
          v57 = *(void **)(v56 + 24);
          if ( v57 == (void *)(v56 + 40) )
            break;
          operator delete(v57);
          if ( v55 == v56 )
            goto LABEL_36;
        }
      }
LABEL_36:
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
    v82 = v33;
  }
  v33[*v33 + 1] = 2;
  v35 = v82;
  v36 = (unsigned __int8)*v82;
  *v82 = v36 + 1;
  *(_QWORD *)&v35[8 * v36 + 16] = v34;
  if ( !v84 )
    goto LABEL_20;
LABEL_9:
  v17 = v82;
  if ( !v82 )
  {
    v58 = v83;
    v59 = *(_DWORD *)(v83 + 14976);
    if ( v59 )
    {
      v60 = (unsigned int)(v59 - 1);
      *(_DWORD *)(v83 + 14976) = v60;
      v17 = *(unsigned __int8 **)(v58 + 8 * v60 + 14848);
      v61 = *((unsigned int *)v17 + 134);
      *v17 = 0;
      v62 = *((_QWORD *)v17 + 66);
      *((_DWORD *)v17 + 106) = 0;
      v63 = v62 + (v61 << 6);
      while ( v62 != v63 )
      {
        while ( 1 )
        {
          v63 -= 64;
          v64 = *(void **)(v63 + 24);
          if ( v64 == (void *)(v63 + 40) )
            break;
          operator delete(v64);
          if ( v62 == v63 )
            goto LABEL_42;
        }
      }
LABEL_42:
      *((_DWORD *)v17 + 134) = 0;
    }
    else
    {
      v17 = (unsigned __int8 *)operator new(0x3A0u);
      *v17 = 0;
      *((_QWORD *)v17 + 12) = v17 + 112;
      *((_QWORD *)v17 + 16) = v17 + 144;
      *((_QWORD *)v17 + 20) = v17 + 176;
      *((_QWORD *)v17 + 24) = v17 + 208;
      *((_QWORD *)v17 + 28) = v17 + 240;
      *((_QWORD *)v17 + 32) = v17 + 272;
      *((_QWORD *)v17 + 36) = v17 + 304;
      *((_QWORD *)v17 + 40) = v17 + 336;
      *((_QWORD *)v17 + 44) = v17 + 368;
      *((_QWORD *)v17 + 48) = v17 + 400;
      *((_QWORD *)v17 + 52) = v17 + 432;
      *((_QWORD *)v17 + 13) = 0;
      v17[112] = 0;
      *((_QWORD *)v17 + 17) = 0;
      v17[144] = 0;
      *((_QWORD *)v17 + 21) = 0;
      v17[176] = 0;
      *((_QWORD *)v17 + 25) = 0;
      v17[208] = 0;
      *((_QWORD *)v17 + 29) = 0;
      v17[240] = 0;
      *((_QWORD *)v17 + 33) = 0;
      v17[272] = 0;
      *((_QWORD *)v17 + 37) = 0;
      v17[304] = 0;
      *((_QWORD *)v17 + 41) = 0;
      v17[336] = 0;
      *((_QWORD *)v17 + 45) = 0;
      v17[368] = 0;
      *((_QWORD *)v17 + 49) = 0;
      v17[400] = 0;
      *((_QWORD *)v17 + 53) = 0x800000000LL;
      *((_QWORD *)v17 + 66) = v17 + 544;
      *((_QWORD *)v17 + 67) = 0x600000000LL;
    }
    v82 = v17;
  }
  v17[*v17 + 1] = 8;
  v18 = v82;
  v19 = (unsigned __int8)*v82;
  *v82 = v19 + 1;
  *(_QWORD *)&v18[8 * v19 + 16] = a4;
LABEL_5:
  sub_15F7200(v80);
}
