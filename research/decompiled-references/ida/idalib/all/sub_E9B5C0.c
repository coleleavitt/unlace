__int64 __fastcall sub_E9B5C0(__int64 a1, __int64 **a2, unsigned int a3)
{
  __int64 *v5; // r15
  unsigned __int8 *v6; // r13
  unsigned __int8 *v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 *v9; // rcx
  __int64 v10; // rax
  unsigned __int8 *v11; // rbx
  _BOOL8 v12; // rdx
  unsigned __int8 *v13; // rcx
  __int64 v14; // rax
  unsigned __int8 *v15; // rbx
  __int64 v16; // rcx
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 *v19; // rbx
  __int64 v20; // r15
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rbx
  __int64 *v24; // r14
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r15
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // r14
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // r15
  __int64 v61; // rbp
  void *v62; // rdi
  __int64 v64; // [rsp+0h] [rbp-F8h]
  __int64 v65; // [rsp+0h] [rbp-F8h]
  __int64 v66; // [rsp+8h] [rbp-F0h]
  _BOOL8 v67; // [rsp+8h] [rbp-F0h]
  __int64 v68; // [rsp+8h] [rbp-F0h]
  _BOOL8 v69; // [rsp+8h] [rbp-F0h]
  __int64 v70; // [rsp+8h] [rbp-F0h]
  __int64 v71; // [rsp+10h] [rbp-E8h]
  __int64 v72; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v73; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+28h] [rbp-D0h]
  unsigned __int8 *v75; // [rsp+70h] [rbp-88h] BYREF
  __int64 v76; // [rsp+78h] [rbp-80h]

  v5 = *a2;
  v6 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64 *))(*a2[1] + 16))(a2[1]);
  sub_FC70B0(&v75, *(_QWORD *)v5[2], *((unsigned int *)a2[1] + 6), 2339);
  v7 = v75;
  v8 = *v5;
  if ( !v75 )
  {
    v28 = v76;
    v29 = *(_DWORD *)(v76 + 14976);
    if ( v29 )
    {
      v38 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v76 + 14976) = v38;
      v7 = *(unsigned __int8 **)(v28 + 8 * v38 + 14848);
      v39 = *((unsigned int *)v7 + 134);
      *v7 = 0;
      v40 = *((_QWORD *)v7 + 66);
      *((_DWORD *)v7 + 106) = 0;
      v41 = v40 + (v39 << 6);
      while ( v40 != v41 )
      {
        while ( 1 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 == (void *)(v41 + 40) )
            break;
          v71 = v41;
          v68 = v8;
          operator delete(v42);
          v41 = v71;
          v8 = v68;
          if ( v40 == v71 )
            goto LABEL_26;
        }
      }
LABEL_26:
      *((_DWORD *)v7 + 134) = 0;
    }
    else
    {
      v66 = *v5;
      v7 = (unsigned __int8 *)operator new(0x3A0u);
      *v7 = 0;
      *((_QWORD *)v7 + 12) = v7 + 112;
      *((_QWORD *)v7 + 16) = v7 + 144;
      *((_QWORD *)v7 + 20) = v7 + 176;
      *((_QWORD *)v7 + 24) = v7 + 208;
      *((_QWORD *)v7 + 28) = v7 + 240;
      *((_QWORD *)v7 + 32) = v7 + 272;
      *((_QWORD *)v7 + 36) = v7 + 304;
      *((_QWORD *)v7 + 40) = v7 + 336;
      *((_QWORD *)v7 + 44) = v7 + 368;
      *((_QWORD *)v7 + 48) = v7 + 400;
      *((_QWORD *)v7 + 52) = v7 + 432;
      *((_QWORD *)v7 + 13) = 0;
      v7[112] = 0;
      *((_QWORD *)v7 + 17) = 0;
      v7[144] = 0;
      *((_QWORD *)v7 + 21) = 0;
      v7[176] = 0;
      *((_QWORD *)v7 + 25) = 0;
      v7[208] = 0;
      *((_QWORD *)v7 + 29) = 0;
      v7[240] = 0;
      *((_QWORD *)v7 + 33) = 0;
      v7[272] = 0;
      *((_QWORD *)v7 + 37) = 0;
      v7[304] = 0;
      *((_QWORD *)v7 + 41) = 0;
      v7[336] = 0;
      *((_QWORD *)v7 + 45) = 0;
      v7[368] = 0;
      *((_QWORD *)v7 + 49) = 0;
      v7[400] = 0;
      *((_QWORD *)v7 + 53) = 0x800000000LL;
      v8 = v66;
      *((_QWORD *)v7 + 66) = v7 + 544;
      *((_QWORD *)v7 + 67) = 0x600000000LL;
    }
    v75 = v7;
  }
  v7[*v7 + 1] = 10;
  v9 = v75;
  v10 = *v75;
  *v75 = v10 + 1;
  v11 = v75;
  *(_QWORD *)&v9[8 * v10 + 16] = v8;
  v12 = *(_QWORD *)(v5[1] + 8) == 0;
  if ( !v11 )
  {
    v30 = v76;
    v31 = *(_DWORD *)(v76 + 14976);
    if ( v31 )
    {
      v43 = (unsigned int)(v31 - 1);
      *(_DWORD *)(v76 + 14976) = v43;
      v11 = *(unsigned __int8 **)(v30 + 8 * v43 + 14848);
      v44 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v45 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v46 = v45 + (v44 << 6);
      while ( v45 != v46 )
      {
        while ( 1 )
        {
          v46 -= 64;
          v47 = *(void **)(v46 + 24);
          if ( v47 == (void *)(v46 + 40) )
            break;
          v72 = v46;
          v69 = v12;
          operator delete(v47);
          v46 = v72;
          v12 = v69;
          if ( v45 == v72 )
            goto LABEL_31;
        }
      }
LABEL_31:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v67 = *(_QWORD *)(v5[1] + 8) == 0;
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      v12 = v67;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v75 = v11;
  }
  v11[*v11 + 1] = 2;
  v13 = v75;
  v14 = *v75;
  *v75 = v14 + 1;
  *(_QWORD *)&v13[8 * v14 + 16] = v12;
  sub_AEC220(&v75, *(_BYTE **)v5[1], *(_QWORD *)(v5[1] + 8));
  v73 = v6;
  LOBYTE(v74) = 1;
  sub_AEC610((__int64 *)&v75, (__int64 *)&v73);
  v15 = v75;
  v16 = a3;
  if ( !v75 )
  {
    v34 = v76;
    v35 = *(_DWORD *)(v76 + 14976);
    if ( v35 )
    {
      v48 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v76 + 14976) = v48;
      v15 = *(unsigned __int8 **)(v34 + 8 * v48 + 14848);
      v49 = *((unsigned int *)v15 + 134);
      *v15 = 0;
      v50 = *((_QWORD *)v15 + 66);
      *((_DWORD *)v15 + 106) = 0;
      v51 = v50 + (v49 << 6);
      while ( v50 != v51 )
      {
        while ( 1 )
        {
          v51 -= 64;
          v52 = *(void **)(v51 + 24);
          if ( v52 == (void *)(v51 + 40) )
            break;
          v70 = v50;
          v64 = v16;
          operator delete(v52);
          v50 = v70;
          v16 = v64;
          if ( v70 == v51 )
            goto LABEL_36;
        }
      }
LABEL_36:
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
      v16 = a3;
      *((_QWORD *)v15 + 66) = v15 + 544;
      *((_QWORD *)v15 + 67) = 0x600000000LL;
    }
    v75 = v15;
  }
  v15[*v15 + 1] = 2;
  v17 = v75;
  v18 = *v75;
  *v75 = v18 + 1;
  *(_QWORD *)&v17[8 * v18 + 16] = v16;
  sub_FC70F0(&v73, &v75);
  sub_AEA040((__int64)&v75);
  v19 = v73;
  v20 = *((int *)a2 + 4);
  if ( !v73 )
  {
    v32 = v74;
    v33 = *(_DWORD *)(v74 + 14976);
    if ( v33 )
    {
      v53 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v74 + 14976) = v53;
      v19 = *(unsigned __int8 **)(v32 + 8 * v53 + 14848);
      v54 = *((unsigned int *)v19 + 134);
      *v19 = 0;
      v55 = *((_QWORD *)v19 + 66);
      *((_DWORD *)v19 + 106) = 0;
      v56 = v55 + (v54 << 6);
      while ( v55 != v56 )
      {
        while ( 1 )
        {
          v56 -= 64;
          v57 = *(void **)(v56 + 24);
          if ( v57 == (void *)(v56 + 40) )
            break;
          v65 = v55;
          operator delete(v57);
          v55 = v65;
          if ( v65 == v56 )
            goto LABEL_41;
        }
      }
LABEL_41:
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      v19 = (unsigned __int8 *)operator new(0x3A0u);
      *v19 = 0;
      *((_QWORD *)v19 + 12) = v19 + 112;
      *((_QWORD *)v19 + 16) = v19 + 144;
      *((_QWORD *)v19 + 20) = v19 + 176;
      *((_QWORD *)v19 + 24) = v19 + 208;
      *((_QWORD *)v19 + 28) = v19 + 240;
      *((_QWORD *)v19 + 32) = v19 + 272;
      *((_QWORD *)v19 + 36) = v19 + 304;
      *((_QWORD *)v19 + 40) = v19 + 336;
      *((_QWORD *)v19 + 44) = v19 + 368;
      *((_QWORD *)v19 + 48) = v19 + 400;
      *((_QWORD *)v19 + 52) = v19 + 432;
      *((_QWORD *)v19 + 13) = 0;
      v19[112] = 0;
      *((_QWORD *)v19 + 17) = 0;
      v19[144] = 0;
      *((_QWORD *)v19 + 21) = 0;
      v19[176] = 0;
      *((_QWORD *)v19 + 25) = 0;
      v19[208] = 0;
      *((_QWORD *)v19 + 29) = 0;
      v19[240] = 0;
      *((_QWORD *)v19 + 33) = 0;
      v19[272] = 0;
      *((_QWORD *)v19 + 37) = 0;
      v19[304] = 0;
      *((_QWORD *)v19 + 41) = 0;
      v19[336] = 0;
      *((_QWORD *)v19 + 45) = 0;
      v19[368] = 0;
      *((_QWORD *)v19 + 49) = 0;
      v19[400] = 0;
      *((_QWORD *)v19 + 53) = 0x800000000LL;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v73 = v19;
  }
  v19[*v19 + 1] = 2;
  v21 = v73;
  v22 = *v73;
  *v73 = v22 + 1;
  *(_QWORD *)&v21[8 * v22 + 16] = v20;
  v23 = v73;
  v24 = a2[3];
  if ( !v73 )
  {
    v36 = v74;
    v37 = *(_DWORD *)(v74 + 14976);
    if ( v37 )
    {
      v58 = (unsigned int)(v37 - 1);
      *(_DWORD *)(v74 + 14976) = v58;
      v23 = *(unsigned __int8 **)(v36 + 8 * v58 + 14848);
      v59 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v60 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v61 = v60 + (v59 << 6);
      while ( v60 != v61 )
      {
        while ( 1 )
        {
          v61 -= 64;
          v62 = *(void **)(v61 + 24);
          if ( v62 == (void *)(v61 + 40) )
            break;
          operator delete(v62);
          if ( v60 == v61 )
            goto LABEL_46;
        }
      }
LABEL_46:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v73 = v23;
  }
  v23[*v23 + 1] = 9;
  v25 = v73;
  v26 = *v73;
  *v73 = v26 + 1;
  *(_QWORD *)&v25[8 * v26 + 16] = v24;
  sub_FC70F0(a1, &v73);
  sub_AEA040((__int64)&v73);
  return a1;
}
