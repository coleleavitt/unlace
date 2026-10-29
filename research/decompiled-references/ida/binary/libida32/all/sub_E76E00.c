__int64 __fastcall sub_E76E00(__int64 a1, __int64 **a2, unsigned int a3)
{
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  unsigned __int64 (__fastcall *v8)(__int64); // rax
  unsigned int v9; // r12d
  unsigned __int8 *v10; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // rax
  _BOOL8 v15; // rcx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rax
  unsigned __int8 *v18; // rbx
  __int64 v19; // rcx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 *v23; // r13
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r15
  __int64 v39; // rbp
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  void *v55; // rdi
  unsigned __int64 v56; // [rsp+8h] [rbp-100h]
  __int64 v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+10h] [rbp-F8h]
  _BOOL8 v59; // [rsp+10h] [rbp-F8h]
  __int64 v60; // [rsp+10h] [rbp-F8h]
  __int64 v61; // [rsp+10h] [rbp-F8h]
  _BOOL8 v62; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v63; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v64; // [rsp+18h] [rbp-F0h]
  __int64 v65; // [rsp+20h] [rbp-E8h]
  __int64 v66; // [rsp+20h] [rbp-E8h]
  unsigned __int8 *v67; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+38h] [rbp-D0h]
  unsigned __int8 *v69; // [rsp+80h] [rbp-88h] BYREF
  __int64 v70; // [rsp+88h] [rbp-80h]

  v6 = a2[1];
  v7 = *a2;
  v8 = *(unsigned __int64 (__fastcall **)(__int64))(*v6 + 16);
  if ( v8 == sub_B81AB0 )
  {
    v56 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6[6] + 16LL))(v6[6]) >> 32;
    v9 = *(_DWORD *)(v6[7] + 8);
  }
  else
  {
    v27 = v8((__int64)a2[1]);
    v9 = v27;
    v56 = HIDWORD(v27);
  }
  sub_FA3370(&v69, *(_QWORD *)v7[2], *((unsigned int *)a2[1] + 6), 2339);
  v10 = v69;
  v11 = *v7;
  if ( !v69 )
  {
    v30 = v70;
    v31 = *(_DWORD *)(v70 + 14976);
    if ( v31 )
    {
      v46 = (unsigned int)(v31 - 1);
      *(_DWORD *)(v70 + 14976) = v46;
      v10 = *(unsigned __int8 **)(v30 + 8 * v46 + 14848);
      v47 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v48 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v49 = v48 + (v47 << 6);
      while ( v48 != v49 )
      {
        while ( 1 )
        {
          v49 -= 64;
          v50 = *(void **)(v49 + 24);
          if ( v50 == (void *)(v49 + 40) )
            break;
          v65 = v49;
          v63 = v10;
          v61 = v11;
          operator delete(v50);
          v49 = v65;
          v11 = v61;
          v10 = v63;
          if ( v48 == v65 )
            goto LABEL_35;
        }
      }
LABEL_35:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v58 = *v7;
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
      v11 = v58;
    }
    v69 = v10;
  }
  v10[*v10 + 1] = 10;
  v12 = v69;
  v13 = *v69;
  *v69 = v13 + 1;
  *(_QWORD *)&v12[8 * v13 + 16] = v11;
  v14 = v69;
  v15 = *(_QWORD *)(v7[1] + 8) == 0;
  if ( !v69 )
  {
    v32 = v70;
    v33 = *(_DWORD *)(v70 + 14976);
    if ( v33 )
    {
      v51 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v70 + 14976) = v51;
      v14 = *(unsigned __int8 **)(v32 + 8 * v51 + 14848);
      v52 = *((unsigned int *)v14 + 134);
      *v14 = 0;
      v53 = *((_QWORD *)v14 + 66);
      *((_DWORD *)v14 + 106) = 0;
      v54 = v53 + (v52 << 6);
      while ( v53 != v54 )
      {
        while ( 1 )
        {
          v54 -= 64;
          v55 = *(void **)(v54 + 24);
          if ( v55 == (void *)(v54 + 40) )
            break;
          v66 = v54;
          v64 = v14;
          v62 = v15;
          operator delete(v55);
          v54 = v66;
          v15 = v62;
          v14 = v64;
          if ( v53 == v66 )
            goto LABEL_40;
        }
      }
LABEL_40:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v59 = *(_QWORD *)(v7[1] + 8) == 0;
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
      v15 = v59;
    }
    v69 = v14;
  }
  v14[*v14 + 1] = 2;
  v16 = v69;
  v17 = *v69;
  *v69 = v17 + 1;
  *(_QWORD *)&v16[8 * v17 + 16] = v15;
  sub_AC84E0(&v69, *(_BYTE **)v7[1], *(_QWORD *)(v7[1] + 8));
  v67 = (unsigned __int8 *)__PAIR64__(v56, v9);
  LOBYTE(v68) = 1;
  sub_AC88D0((__int64 *)&v69, (__int64 *)&v67);
  v18 = v69;
  v19 = a3;
  if ( !v69 )
  {
    v34 = v70;
    v35 = *(_DWORD *)(v70 + 14976);
    if ( v35 )
    {
      v41 = (unsigned int)(v35 - 1);
      *(_DWORD *)(v70 + 14976) = v41;
      v18 = *(unsigned __int8 **)(v34 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v43 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v44 = v43 + (v42 << 6);
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *(void **)(v44 + 24);
          if ( v45 == (void *)(v44 + 40) )
            break;
          v60 = v43;
          v57 = v19;
          operator delete(v45);
          v43 = v60;
          v19 = v57;
          if ( v60 == v44 )
            goto LABEL_30;
        }
      }
LABEL_30:
      *((_DWORD *)v18 + 134) = 0;
    }
    else
    {
      v18 = (unsigned __int8 *)operator new(0x3A0u);
      *v18 = 0;
      *((_QWORD *)v18 + 12) = v18 + 112;
      *((_QWORD *)v18 + 16) = v18 + 144;
      *((_QWORD *)v18 + 20) = v18 + 176;
      *((_QWORD *)v18 + 24) = v18 + 208;
      *((_QWORD *)v18 + 28) = v18 + 240;
      *((_QWORD *)v18 + 32) = v18 + 272;
      *((_QWORD *)v18 + 36) = v18 + 304;
      *((_QWORD *)v18 + 40) = v18 + 336;
      *((_QWORD *)v18 + 44) = v18 + 368;
      *((_QWORD *)v18 + 48) = v18 + 400;
      *((_QWORD *)v18 + 52) = v18 + 432;
      *((_QWORD *)v18 + 13) = 0;
      v18[112] = 0;
      *((_QWORD *)v18 + 17) = 0;
      v18[144] = 0;
      *((_QWORD *)v18 + 21) = 0;
      v18[176] = 0;
      *((_QWORD *)v18 + 25) = 0;
      v18[208] = 0;
      *((_QWORD *)v18 + 29) = 0;
      v18[240] = 0;
      *((_QWORD *)v18 + 33) = 0;
      v18[272] = 0;
      *((_QWORD *)v18 + 37) = 0;
      v18[304] = 0;
      *((_QWORD *)v18 + 41) = 0;
      v18[336] = 0;
      *((_QWORD *)v18 + 45) = 0;
      v18[368] = 0;
      *((_QWORD *)v18 + 49) = 0;
      v18[400] = 0;
      *((_QWORD *)v18 + 53) = 0x800000000LL;
      v19 = a3;
      *((_QWORD *)v18 + 66) = v18 + 544;
      *((_QWORD *)v18 + 67) = 0x600000000LL;
    }
    v69 = v18;
  }
  v18[*v18 + 1] = 2;
  v20 = v69;
  v21 = *v69;
  *v69 = v21 + 1;
  *(_QWORD *)&v20[8 * v21 + 16] = v19;
  sub_FA33B0(&v67, &v69);
  sub_AC6300((__int64)&v69);
  v22 = v67;
  v23 = a2[1];
  if ( !v67 )
  {
    v28 = v68;
    v29 = *(_DWORD *)(v68 + 14976);
    if ( v29 )
    {
      v36 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v68 + 14976) = v36;
      v22 = *(unsigned __int8 **)(v28 + 8 * v36 + 14848);
      v37 = *((unsigned int *)v22 + 134);
      *v22 = 0;
      v38 = *((_QWORD *)v22 + 66);
      *((_DWORD *)v22 + 106) = 0;
      v39 = v38 + (v37 << 6);
      while ( v38 != v39 )
      {
        while ( 1 )
        {
          v39 -= 64;
          v40 = *(void **)(v39 + 24);
          if ( v40 == (void *)(v39 + 40) )
            break;
          operator delete(v40);
          if ( v38 == v39 )
            goto LABEL_25;
        }
      }
LABEL_25:
      *((_DWORD *)v22 + 134) = 0;
    }
    else
    {
      v22 = (unsigned __int8 *)operator new(0x3A0u);
      *v22 = 0;
      *((_QWORD *)v22 + 12) = v22 + 112;
      *((_QWORD *)v22 + 16) = v22 + 144;
      *((_QWORD *)v22 + 20) = v22 + 176;
      *((_QWORD *)v22 + 24) = v22 + 208;
      *((_QWORD *)v22 + 28) = v22 + 240;
      *((_QWORD *)v22 + 32) = v22 + 272;
      *((_QWORD *)v22 + 36) = v22 + 304;
      *((_QWORD *)v22 + 40) = v22 + 336;
      *((_QWORD *)v22 + 44) = v22 + 368;
      *((_QWORD *)v22 + 48) = v22 + 400;
      *((_QWORD *)v22 + 52) = v22 + 432;
      *((_QWORD *)v22 + 13) = 0;
      v22[112] = 0;
      *((_QWORD *)v22 + 17) = 0;
      v22[144] = 0;
      *((_QWORD *)v22 + 21) = 0;
      v22[176] = 0;
      *((_QWORD *)v22 + 25) = 0;
      v22[208] = 0;
      *((_QWORD *)v22 + 29) = 0;
      v22[240] = 0;
      *((_QWORD *)v22 + 33) = 0;
      v22[272] = 0;
      *((_QWORD *)v22 + 37) = 0;
      v22[304] = 0;
      *((_QWORD *)v22 + 41) = 0;
      v22[336] = 0;
      *((_QWORD *)v22 + 45) = 0;
      v22[368] = 0;
      *((_QWORD *)v22 + 49) = 0;
      v22[400] = 0;
      *((_QWORD *)v22 + 53) = 0x800000000LL;
      *((_QWORD *)v22 + 66) = v22 + 544;
      *((_QWORD *)v22 + 67) = 0x600000000LL;
    }
    v67 = v22;
  }
  v22[*v22 + 1] = 10;
  v24 = v67;
  v25 = *v67;
  *v67 = v25 + 1;
  *(_QWORD *)&v24[8 * v25 + 16] = v23;
  sub_FA33B0(a1, &v67);
  sub_AC6300((__int64)&v67);
  return a1;
}

