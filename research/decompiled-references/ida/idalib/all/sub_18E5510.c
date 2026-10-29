void __fastcall sub_18E5510(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r13
  bool v6; // al
  bool v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned __int8 *v15; // rbp
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned __int8 *v25; // rbp
  _BOOL8 v26; // r13
  unsigned __int8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  unsigned __int8 *v36; // rbp
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r14
  void *v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // r14
  void *v52; // rdi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // r13
  void *v59; // rdi
  __int64 v60; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v61[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v63; // [rsp+30h] [rbp-A8h]
  __int64 v64; // [rsp+38h] [rbp-A0h]
  char v65; // [rsp+88h] [rbp-50h]
  unsigned int v66; // [rsp+90h] [rbp-48h]
  char v67; // [rsp+94h] [rbp-44h]

  sub_168B9F0((__int64)v61, (__int64 *)(a2 + 8), a3, *(_DWORD *)(a1 + 8), 0);
  v5 = **(_QWORD **)(a1 + 16);
  if ( v65 )
  {
    v36 = v63;
    if ( !v63 )
    {
      v39 = v64;
      v40 = *(_DWORD *)(v64 + 14976);
      if ( v40 )
      {
        v41 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v64 + 14976) = v41;
        v36 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
        v42 = *((unsigned int *)v36 + 134);
        *v36 = 0;
        v43 = *((_QWORD *)v36 + 66);
        *((_DWORD *)v36 + 106) = 0;
        v44 = v43 + (v42 << 6);
        while ( v43 != v44 )
        {
          while ( 1 )
          {
            v44 -= 64;
            v45 = *(void **)(v44 + 24);
            if ( v45 == (void *)(v44 + 40) )
              break;
            operator delete(v45);
            if ( v43 == v44 )
              goto LABEL_27;
          }
        }
LABEL_27:
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
      v63 = v36;
    }
    v36[*v36 + 1] = 9;
    v37 = v63;
    v38 = *v63;
    *v63 = v38 + 1;
    *(_QWORD *)&v37[8 * v38 + 16] = v5;
  }
  else if ( v67 )
  {
    v20 = sub_168B9E0(v61);
    v23 = v62;
    if ( v62 )
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
    v60 = v23;
    v24 = sub_1587BC0(v20, &v60, v18, v19, v21, v22);
    sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v66 + 8), v5, 9u);
  }
  v6 = sub_F582C0(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = v6;
  if ( !v65 )
  {
    if ( !v67 )
      goto LABEL_5;
    v12 = sub_168B9E0(v61);
    v13 = v62;
    if ( v62 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
    v60 = v13;
    v14 = sub_1587BC0(v12, &v60, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v66 + 8), v7, 2u);
    if ( v65 )
      goto LABEL_9;
LABEL_16:
    if ( v67 )
    {
      v31 = sub_168B9E0(v61);
      v34 = v62;
      if ( v62 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
      v60 = v34;
      v35 = sub_1587BC0(v31, &v60, v29, v30, v32, v33);
      sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v66 + 8), a4, 8u);
    }
    goto LABEL_5;
  }
  v25 = v63;
  v26 = v6;
  if ( !v63 )
  {
    v46 = v64;
    v47 = *(_DWORD *)(v64 + 14976);
    if ( v47 )
    {
      v48 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v64 + 14976) = v48;
      v25 = *(unsigned __int8 **)(v46 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v25 + 134);
      *v25 = 0;
      v50 = *((_QWORD *)v25 + 66);
      *((_DWORD *)v25 + 106) = 0;
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
    v63 = v25;
  }
  v25[*v25 + 1] = 2;
  v27 = v63;
  v28 = *v63;
  *v63 = v28 + 1;
  *(_QWORD *)&v27[8 * v28 + 16] = v26;
  if ( !v65 )
    goto LABEL_16;
LABEL_9:
  v15 = v63;
  if ( !v63 )
  {
    v53 = v64;
    v54 = *(_DWORD *)(v64 + 14976);
    if ( v54 )
    {
      v55 = (unsigned int)(v54 - 1);
      *(_DWORD *)(v64 + 14976) = v55;
      v15 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
      v56 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v57 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v58 = v57 + (v56 << 6);
      while ( v57 != v58 )
      {
        while ( 1 )
        {
          v58 -= 64;
          v59 = *(void **)(v58 + 24);
          if ( v59 == (void *)(v58 + 40) )
            break;
          operator delete(v59);
          if ( v57 == v58 )
            goto LABEL_39;
        }
      }
LABEL_39:
      *((_DWORD *)v15 + 134) = 0;
    }
    else
    {
      v15 = (unsigned __int8 *)operator new(0x3A0u);
      *v15 = 0;
      *((_QWORD *)v15 + 12) = v15 + 112;
      *((_QWORD *)v15 + 16) = v15 + 144;
      *((_QWORD *)v15 + 20) = v15 + 176;
      *((_QWORD *)v15 + 24) = v15 + 208;
      *((_QWORD *)v15 + 28) = v15 + 240;
      *((_QWORD *)v15 + 32) = v15 + 272;
      *((_QWORD *)v15 + 36) = v15 + 304;
      *((_QWORD *)v15 + 40) = v15 + 336;
      *((_QWORD *)v15 + 44) = v15 + 368;
      *((_QWORD *)v15 + 48) = v15 + 400;
      *((_QWORD *)v15 + 52) = v15 + 432;
      *((_QWORD *)v15 + 13) = 0;
      v15[112] = 0;
      *((_QWORD *)v15 + 17) = 0;
      v15[144] = 0;
      *((_QWORD *)v15 + 21) = 0;
      v15[176] = 0;
      *((_QWORD *)v15 + 25) = 0;
      v15[208] = 0;
      *((_QWORD *)v15 + 29) = 0;
      v15[240] = 0;
      *((_QWORD *)v15 + 33) = 0;
      v15[272] = 0;
      *((_QWORD *)v15 + 37) = 0;
      v15[304] = 0;
      *((_QWORD *)v15 + 41) = 0;
      v15[336] = 0;
      *((_QWORD *)v15 + 45) = 0;
      v15[368] = 0;
      *((_QWORD *)v15 + 49) = 0;
      v15[400] = 0;
      *((_QWORD *)v15 + 53) = 0x800000000LL;
      *((_QWORD *)v15 + 66) = v15 + 544;
      *((_QWORD *)v15 + 67) = 0x600000000LL;
    }
    v63 = v15;
  }
  v15[*v15 + 1] = 8;
  v16 = v63;
  v17 = *v63;
  *v63 = v17 + 1;
  *(_QWORD *)&v16[8 * v17 + 16] = a4;
LABEL_5:
  sub_15F7200(v61);
}
