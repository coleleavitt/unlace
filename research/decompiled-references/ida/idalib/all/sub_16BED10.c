void __fastcall sub_16BED10(__int64 a1, int a2, unsigned int a3, unsigned int a4, double a5)
{
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 *v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rsi
  unsigned __int8 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r15
  void *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  void *v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-A0h]
  __int64 v50; // [rsp+10h] [rbp-98h]
  __int64 v51; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  __int64 v53; // [rsp+10h] [rbp-98h]
  __int64 v54; // [rsp+18h] [rbp-90h]
  __int64 v55; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+20h] [rbp-88h]
  void *v58; // [rsp+30h] [rbp-78h] BYREF
  signed __int64 v59; // [rsp+38h] [rbp-70h]
  _BYTE v60[16]; // [rsp+40h] [rbp-68h] BYREF
  void *v61; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-50h]
  __int64 v63; // [rsp+60h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 16);
  **(_DWORD **)a1 = 6937;
  v9 = (unsigned int)(**(_DWORD **)(a1 + 8) + a2);
  sub_FBD280((__int64)&v61, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 248LL) + 17520LL), **(_DWORD **)(v8 + 8));
  v10 = (__int64 *)v61;
  v11 = v62;
  if ( **(_BYTE **)(v8 + 16) )
  {
    v12 = 0;
    if ( v62 > 0xB )
    {
      v12 = v62 - 12;
      if ( v62 - 12 > v62 - 16 )
        v12 = v62 - 16;
      v11 = 12;
    }
    v13 = (char *)v61 + v11;
  }
  else if ( v62 > 9 && *(_QWORD *)v61 == 0x69746C6975625F5FLL && *((_WORD *)v61 + 4) == 24430 )
  {
    v12 = v62 - 10;
    v13 = (char *)v61 + 10;
  }
  else
  {
    v12 = v62;
    v13 = v61;
  }
  v58 = v60;
  if ( v13 )
  {
    sub_16BA000(&v58, v13, (__int64)&v13[v12]);
    v10 = (__int64 *)v61;
  }
  else
  {
    v59 = 0;
    v60[0] = 0;
  }
  if ( v10 != &v63 )
    operator delete(v10);
  v49 = *(_QWORD *)(a1 + 32);
  sub_168B9B0((__int64)&v61, v49 + 8, **(_DWORD **)a1);
  sub_AEC220((unsigned __int8 **)&v61, v58, v59);
  v14 = (unsigned __int8 *)v61;
  v15 = (unsigned int)(v9 + 1);
  if ( !v61 )
  {
    v32 = v62;
    v33 = *(_DWORD *)(v62 + 14976);
    if ( v33 )
    {
      v44 = (unsigned int)(v33 - 1);
      *(_DWORD *)(v62 + 14976) = v44;
      v14 = *(unsigned __int8 **)(v32 + 8 * v44 + 14848);
      v45 = *((unsigned int *)v14 + 134);
      *v14 = 0;
      v46 = *((_QWORD *)v14 + 66);
      *((_DWORD *)v14 + 106) = 0;
      v47 = v46 + (v45 << 6);
      while ( v46 != v47 )
      {
        while ( 1 )
        {
          v47 -= 64;
          v48 = *(void **)(v47 + 24);
          if ( v48 == (void *)(v47 + 40) )
            break;
          v57 = v47;
          v56 = v14;
          v53 = v15;
          operator delete(v48);
          v47 = v57;
          v15 = v53;
          v14 = v56;
          if ( v46 == v57 )
            goto LABEL_47;
        }
      }
LABEL_47:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
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
      v15 = (unsigned int)(v9 + 1);
    }
    v61 = v14;
  }
  v14[*v14 + 1] = 3;
  v16 = v61;
  v17 = *(unsigned __int8 *)v61;
  *(_BYTE *)v61 = v17 + 1;
  v16[v17 + 2] = v15;
  v18 = a3;
  v19 = (unsigned __int8 *)v61;
  if ( !v61 )
  {
    v28 = v62;
    v29 = *(_DWORD *)(v62 + 14976);
    if ( v29 )
    {
      v34 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v62 + 14976) = v34;
      v19 = *(unsigned __int8 **)(v28 + 8 * v34 + 14848);
      v35 = *((unsigned int *)v19 + 134);
      *v19 = 0;
      v36 = *((_QWORD *)v19 + 66);
      *((_DWORD *)v19 + 106) = 0;
      v37 = v36 + (v35 << 6);
      while ( v36 != v37 )
      {
        while ( 1 )
        {
          v37 -= 64;
          v38 = *(void **)(v37 + 24);
          if ( v38 == (void *)(v37 + 40) )
            break;
          v54 = v37;
          v51 = v18;
          operator delete(v38);
          v37 = v54;
          v18 = v51;
          if ( v36 == v54 )
            goto LABEL_37;
        }
      }
LABEL_37:
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      v50 = v18;
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
      v18 = v50;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v61 = v19;
  }
  v19[*v19 + 1] = 3;
  v20 = v61;
  v21 = *(unsigned __int8 *)v61;
  *(_BYTE *)v61 = v21 + 1;
  v20[v21 + 2] = v18;
  v22 = (unsigned __int8 *)v61;
  v23 = a4;
  if ( !v61 )
  {
    v30 = v62;
    v31 = *(_DWORD *)(v62 + 14976);
    if ( v31 )
    {
      v39 = (unsigned int)(v31 - 1);
      *(_DWORD *)(v62 + 14976) = v39;
      v22 = *(unsigned __int8 **)(v30 + 8 * v39 + 14848);
      v40 = *((unsigned int *)v22 + 134);
      *v22 = 0;
      v41 = *((_QWORD *)v22 + 66);
      *((_DWORD *)v22 + 106) = 0;
      v42 = v41 + (v40 << 6);
      while ( v41 != v42 )
      {
        while ( 1 )
        {
          v42 -= 64;
          v43 = *(void **)(v42 + 24);
          if ( v43 == (void *)(v42 + 40) )
            break;
          v55 = v41;
          v52 = v23;
          operator delete(v43);
          v41 = v55;
          v23 = v52;
          if ( v55 == v42 )
            goto LABEL_42;
        }
      }
LABEL_42:
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
      v23 = a4;
      *((_QWORD *)v22 + 66) = v22 + 544;
      *((_QWORD *)v22 + 67) = 0x600000000LL;
    }
    v61 = v22;
  }
  v22[*v22 + 1] = 3;
  v24 = v61;
  v25 = *(unsigned __int8 *)v61;
  *(_BYTE *)v61 = v25 + 1;
  v24[v25 + 2] = v23;
  v26 = **(_QWORD **)(a1 + 24);
  v27 = sub_EEB7E0(*(_QWORD *)(v26 + 8 * (v9 + ((*(_BYTE *)(v26 + 2) & 8) != 0)) + 40), (unsigned int)(v25 + 1), a5);
  sub_18CAED0(v49, v27, v26, &v61);
  if ( v61 && v62 )
    sub_1580C40(v62, (unsigned __int64)v61);
  if ( v58 != v60 )
    operator delete(v58);
}
