void __fastcall sub_169DD80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r13
  unsigned __int8 *v16; // rbx
  _BYTE *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int8 *v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  unsigned __int8 *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // r13
  void *v42; // rdi
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // r15
  void *v49; // rdi
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int8 *v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  unsigned __int8 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r14
  void *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r15
  void *v65; // rdi
  __int64 v66; // [rsp+0h] [rbp-F8h]
  __int64 v67; // [rsp+0h] [rbp-F8h]
  __int64 v68; // [rsp+0h] [rbp-F8h]
  __int64 v69; // [rsp+8h] [rbp-F0h]
  __int64 v70; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v71; // [rsp+20h] [rbp-D8h] BYREF
  int v72; // [rsp+28h] [rbp-D0h]
  _QWORD v73[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v75; // [rsp+50h] [rbp-A8h]
  __int64 v76; // [rsp+58h] [rbp-A0h]
  char v77; // [rsp+A8h] [rbp-50h]
  unsigned int v78; // [rsp+B0h] [rbp-48h]
  char v79; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v73, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = *(unsigned int **)(a1 + 16);
  v6 = *v5;
  v7 = v5[1];
  if ( !v77 )
  {
    if ( !v79 )
      goto LABEL_3;
    v21 = sub_168B9E0(v73);
    v24 = v74;
    if ( v74 )
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL))(v74);
    v70 = v24;
    v25 = sub_1587BC0(v21, &v70, v19, v20, v22, v23);
    v26 = *v25 + 32LL * v78;
    v27 = *(unsigned __int8 **)(v26 + 8);
    if ( v27 )
    {
      v28 = *((unsigned int *)v27 + 106);
      v29 = *((unsigned int *)v27 + 107);
      v30 = v28 + 1;
    }
    else
    {
      v50 = *(_QWORD *)(v26 + 16);
      v51 = *(_DWORD *)(v50 + 14976);
      if ( v51 )
      {
        v61 = (unsigned int)(v51 - 1);
        *(_DWORD *)(v50 + 14976) = v61;
        v27 = *(unsigned __int8 **)(v50 + 8 * v61 + 14848);
        v62 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v63 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v64 = v63 + (v62 << 6);
        if ( v63 == v64 )
        {
          v30 = 1;
          v28 = 0;
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
              v69 = v63;
              v68 = v26;
              operator delete(v65);
              v63 = v69;
              v26 = v68;
              if ( v69 == v64 )
                goto LABEL_53;
            }
          }
          while ( v63 != v64 );
LABEL_53:
          v28 = *((unsigned int *)v27 + 106);
          v30 = v28 + 1;
        }
        *((_DWORD *)v27 + 134) = 0;
        v29 = *((unsigned int *)v27 + 107);
      }
      else
      {
        v67 = v26;
        v52 = (unsigned __int8 *)operator new(0x3A0u);
        v29 = 8;
        v30 = 1;
        v27 = v52;
        *v52 = 0;
        *((_QWORD *)v52 + 12) = v52 + 112;
        *((_QWORD *)v52 + 16) = v52 + 144;
        *((_QWORD *)v52 + 20) = v52 + 176;
        *((_QWORD *)v52 + 24) = v52 + 208;
        *((_QWORD *)v52 + 28) = v52 + 240;
        *((_QWORD *)v52 + 32) = v52 + 272;
        *((_QWORD *)v52 + 36) = v52 + 304;
        *((_QWORD *)v52 + 40) = v52 + 336;
        *((_QWORD *)v52 + 44) = v52 + 368;
        *((_QWORD *)v52 + 48) = v52 + 400;
        *((_QWORD *)v52 + 52) = v52 + 432;
        *((_QWORD *)v52 + 13) = 0;
        v52[112] = 0;
        *((_QWORD *)v52 + 17) = 0;
        v52[144] = 0;
        *((_QWORD *)v52 + 21) = 0;
        v52[176] = 0;
        *((_QWORD *)v52 + 25) = 0;
        v52[208] = 0;
        *((_QWORD *)v52 + 29) = 0;
        v52[240] = 0;
        *((_QWORD *)v52 + 33) = 0;
        v52[272] = 0;
        *((_QWORD *)v52 + 37) = 0;
        v52[304] = 0;
        *((_QWORD *)v52 + 41) = 0;
        v52[336] = 0;
        *((_QWORD *)v52 + 45) = 0;
        v52[368] = 0;
        *((_QWORD *)v52 + 49) = 0;
        v52[400] = 0;
        *((_QWORD *)v52 + 53) = 0x800000000LL;
        v26 = v67;
        *((_QWORD *)v52 + 66) = v52 + 544;
        *((_QWORD *)v52 + 67) = 0x600000000LL;
        v28 = 0;
      }
      *(_QWORD *)(v26 + 8) = v27;
    }
    v71 = __PAIR64__(v7, v6);
    LOBYTE(v72) = 1;
    if ( v30 <= v29 )
      goto LABEL_18;
    goto LABEL_14;
  }
  v27 = v75;
  if ( v75 )
  {
    v28 = *((unsigned int *)v75 + 106);
    v31 = *((unsigned int *)v75 + 107);
    v30 = v28 + 1;
  }
  else
  {
    v43 = v76;
    v44 = *(_DWORD *)(v76 + 14976);
    if ( v44 )
    {
      v45 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v76 + 14976) = v45;
      v27 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
      v46 = *((unsigned int *)v27 + 134);
      *v27 = 0;
      v47 = *((_QWORD *)v27 + 66);
      *((_DWORD *)v27 + 106) = 0;
      v48 = v47 + (v46 << 6);
      if ( v47 == v48 )
      {
        v30 = 1;
        v28 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v48 -= 64;
            v49 = *(void **)(v48 + 24);
            if ( v49 == (void *)(v48 + 40) )
              break;
            v66 = v47;
            operator delete(v49);
            v47 = v66;
            if ( v66 == v48 )
              goto LABEL_31;
          }
        }
        while ( v47 != v48 );
LABEL_31:
        v28 = *((unsigned int *)v27 + 106);
        v30 = v28 + 1;
      }
      *((_DWORD *)v27 + 134) = 0;
      v31 = *((unsigned int *)v27 + 107);
    }
    else
    {
      v55 = (unsigned __int8 *)operator new(0x3A0u);
      v31 = 8;
      v30 = 1;
      v27 = v55;
      *v55 = 0;
      *((_QWORD *)v55 + 12) = v55 + 112;
      *((_QWORD *)v55 + 16) = v55 + 144;
      *((_QWORD *)v55 + 20) = v55 + 176;
      *((_QWORD *)v55 + 24) = v55 + 208;
      *((_QWORD *)v55 + 28) = v55 + 240;
      *((_QWORD *)v55 + 32) = v55 + 272;
      *((_QWORD *)v55 + 36) = v55 + 304;
      *((_QWORD *)v55 + 40) = v55 + 336;
      *((_QWORD *)v55 + 44) = v55 + 368;
      *((_QWORD *)v55 + 48) = v55 + 400;
      *((_QWORD *)v55 + 52) = v55 + 432;
      *((_QWORD *)v55 + 13) = 0;
      v55[112] = 0;
      *((_QWORD *)v55 + 17) = 0;
      v55[144] = 0;
      *((_QWORD *)v55 + 21) = 0;
      v55[176] = 0;
      *((_QWORD *)v55 + 25) = 0;
      v55[208] = 0;
      *((_QWORD *)v55 + 29) = 0;
      v55[240] = 0;
      *((_QWORD *)v55 + 33) = 0;
      v55[272] = 0;
      *((_QWORD *)v55 + 37) = 0;
      v55[304] = 0;
      *((_QWORD *)v55 + 41) = 0;
      v55[336] = 0;
      *((_QWORD *)v55 + 45) = 0;
      v55[368] = 0;
      *((_QWORD *)v55 + 49) = 0;
      v55[400] = 0;
      *((_QWORD *)v55 + 53) = 0x800000000LL;
      *((_QWORD *)v55 + 66) = v55 + 544;
      *((_QWORD *)v55 + 67) = 0x600000000LL;
      v28 = 0;
    }
    v75 = v27;
  }
  v71 = __PAIR64__(v7, v6);
  LOBYTE(v72) = 1;
  if ( v30 > v31 )
  {
LABEL_14:
    sub_2237220(v27 + 416, v27 + 432, v30, 12);
    v28 = *((unsigned int *)v27 + 106);
  }
LABEL_18:
  v32 = *((_QWORD *)v27 + 52) + 12 * v28;
  *(_QWORD *)v32 = v71;
  *(_DWORD *)(v32 + 8) = v72;
  LOBYTE(v32) = v77;
  ++*((_DWORD *)v27 + 106);
  if ( !(_BYTE)v32 )
  {
LABEL_3:
    if ( v79 )
    {
      v10 = sub_168B9E0(v73);
      v13 = v74;
      if ( v74 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL))(v74);
      v71 = v13;
      v14 = sub_1587BC0(v10, (__int64 *)&v71, v8, v9, v11, v12);
      v15 = *v14 + 32LL * v78;
      v16 = *(unsigned __int8 **)(v15 + 8);
      if ( !v16 )
      {
        v53 = *(_QWORD *)(v15 + 16);
        v54 = *(_DWORD *)(v53 + 14976);
        if ( v54 )
        {
          v56 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v53 + 14976) = v56;
          v16 = *(unsigned __int8 **)(v53 + 8 * v56 + 14848);
          v57 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v58 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v59 = v58 + (v57 << 6);
          while ( v58 != v59 )
          {
            while ( 1 )
            {
              v59 -= 64;
              v60 = *(void **)(v59 + 24);
              if ( v60 == (void *)(v59 + 40) )
                break;
              operator delete(v60);
              if ( v58 == v59 )
                goto LABEL_49;
            }
          }
LABEL_49:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 52) = v16 + 432;
          *((_QWORD *)v16 + 13) = 0;
          v16[112] = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v15 + 8) = v16;
      }
      v16[*v16 + 1] = 8;
      v17 = *(_BYTE **)(v15 + 8);
      v18 = (unsigned __int8)*v17;
      *v17 = v18 + 1;
      *(_QWORD *)&v17[8 * v18 + 16] = a4;
    }
    goto LABEL_4;
  }
  v33 = v75;
  if ( !v75 )
  {
    v36 = v76;
    v37 = *(_DWORD *)(v76 + 14976);
    if ( v37 )
    {
      v38 = (unsigned int)(v37 - 1);
      *(_DWORD *)(v76 + 14976) = v38;
      v33 = *(unsigned __int8 **)(v36 + 8 * v38 + 14848);
      v39 = *((unsigned int *)v33 + 134);
      *v33 = 0;
      v40 = *((_QWORD *)v33 + 66);
      *((_DWORD *)v33 + 106) = 0;
      v41 = v40 + (v39 << 6);
      while ( v40 != v41 )
      {
        while ( 1 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 == (void *)(v41 + 40) )
            break;
          operator delete(v42);
          if ( v40 == v41 )
            goto LABEL_26;
        }
      }
LABEL_26:
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
    v75 = v33;
  }
  v33[*v33 + 1] = 8;
  v34 = v75;
  v35 = *v75;
  *v75 = v35 + 1;
  *(_QWORD *)&v34[8 * v35 + 16] = a4;
LABEL_4:
  sub_15F7200(v73);
}
