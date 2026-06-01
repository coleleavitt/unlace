__int64 __fastcall sub_FB1C40(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  _BYTE *v7; // r8
  char v8; // r13
  char v9; // cl
  bool v10; // r14
  char v11; // r9
  _QWORD *v12; // r10
  unsigned __int8 v13; // bl
  unsigned int v14; // r11d
  unsigned __int8 v15; // al
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned __int8 v19; // al
  int v20; // eax
  __int64 v21; // rsi
  char v22; // al
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rdx
  char *v32; // rsi
  char *v33; // rsi
  unsigned int v34; // ebx
  unsigned int v36; // eax
  void *v37; // rdx
  int v38; // eax
  _QWORD *v40; // rax
  _QWORD *v41; // r13
  __int64 v42; // rbp
  void *v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rbp
  void *v46; // rdi
  __int64 v47; // r14
  _QWORD *v48; // r14
  _QWORD *v49; // rbp
  _QWORD *v50; // rdi
  unsigned int v51; // eax
  size_t v52; // rdx
  int v53; // eax
  void *v54; // rdi
  void *v55; // rdi
  _QWORD *v56; // [rsp+8h] [rbp-F0h]
  _QWORD *v57; // [rsp+8h] [rbp-F0h]
  unsigned int v58; // [rsp+10h] [rbp-E8h]
  _BYTE *v59; // [rsp+10h] [rbp-E8h]
  size_t v60; // [rsp+18h] [rbp-E0h]
  int v61; // [rsp+20h] [rbp-D8h]
  char v62; // [rsp+24h] [rbp-D4h]
  unsigned int v63; // [rsp+28h] [rbp-D0h]
  char v64; // [rsp+28h] [rbp-D0h]
  unsigned int v65; // [rsp+2Ch] [rbp-CCh]
  size_t v66; // [rsp+30h] [rbp-C8h]
  _BYTE *v67; // [rsp+38h] [rbp-C0h]
  _QWORD *v68; // [rsp+40h] [rbp-B8h]
  char v69; // [rsp+4Ah] [rbp-AEh]
  char v70; // [rsp+4Bh] [rbp-ADh]
  unsigned int v71; // [rsp+4Ch] [rbp-ACh]
  unsigned int v72; // [rsp+5Ch] [rbp-9Ch] BYREF
  __int16 v73; // [rsp+60h] [rbp-98h] BYREF
  int v74; // [rsp+64h] [rbp-94h]
  void *s2; // [rsp+68h] [rbp-90h] BYREF
  size_t v76; // [rsp+70h] [rbp-88h]
  _BYTE v77[24]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v78; // [rsp+90h] [rbp-68h] BYREF
  void *v79; // [rsp+98h] [rbp-60h] BYREF
  _DWORD v80[20]; // [rsp+A8h] [rbp-50h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 )
  {
    v40 = (_QWORD *)operator new(0x78u);
    v41 = *(_QWORD **)(a1 + 8);
    v3 = v40;
    *(_QWORD *)(a1 + 8) = v40;
    memset(v40, 0, 0x78u);
    v56 = v40 + 4;
    v40[6] = v40 + 4;
    v40[7] = v40 + 4;
    v40[12] = v40 + 10;
    v40[13] = v40 + 10;
    if ( !v41 )
      goto LABEL_3;
    v42 = v41[11];
    if ( v42 )
    {
      while ( 1 )
      {
        sub_FB17E0((__int64)(v41 + 9), *(_QWORD **)(v42 + 24));
        v43 = *(void **)(v42 + 40);
        v44 = *(_QWORD *)(v42 + 16);
        if ( v43 )
        {
          operator delete(v43);
          operator delete((void *)v42);
          if ( !v44 )
            break;
        }
        else
        {
          operator delete((void *)v42);
          if ( !v44 )
            break;
        }
        v42 = v44;
      }
    }
    v45 = v41[5];
    if ( v45 )
    {
      while ( 1 )
      {
        sub_FB1770((__int64)(v41 + 3), *(_QWORD **)(v45 + 24));
        v46 = *(void **)(v45 + 40);
        v47 = *(_QWORD *)(v45 + 16);
        if ( v46 == (void *)(v45 + 56) )
        {
          operator delete((void *)v45);
          if ( !v47 )
            break;
        }
        else
        {
          operator delete(v46);
          operator delete((void *)v45);
          if ( !v47 )
            break;
        }
        v45 = v47;
      }
    }
    v48 = (_QWORD *)v41[1];
    v49 = (_QWORD *)*v41;
    if ( v48 != (_QWORD *)*v41 )
    {
      do
      {
        while ( 1 )
        {
          v50 = (_QWORD *)v49[1];
          if ( v50 == v49 + 3 )
            break;
          operator delete(v50);
          v49 += 5;
          if ( v48 == v49 )
            goto LABEL_61;
        }
        v49 += 5;
      }
      while ( v48 != v49 );
LABEL_61:
      v49 = (_QWORD *)*v41;
    }
    if ( v49 )
      operator delete(v49);
    operator delete(v41, 0x78u);
    v3 = *(_QWORD **)(a1 + 8);
  }
  v56 = v3 + 4;
LABEL_3:
  v4 = *(_BYTE **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v73 = *(_WORD *)a2 & 0x1FF | v73 & 0xFE00;
  v74 = *(_DWORD *)(a2 + 4);
  s2 = v77;
  sub_FAF060(&s2, v4, (__int64)&v4[v5]);
  v6 = v3[5];
  if ( !v6 )
  {
    v7 = s2;
    v61 = v74;
    v9 = HIBYTE(v73) & 1;
    v8 = v73 & 7;
    v13 = ((unsigned __int8)v73 >> 3) & 7;
    v10 = (v73 & 0x40) != 0;
    v11 = (unsigned __int8)v73 >> 7;
    v60 = v76;
    goto LABEL_14;
  }
  v7 = s2;
  v60 = v76;
  v8 = v73 & 7;
  v9 = HIBYTE(v73) & 1;
  v10 = (v73 & 0x40) != 0;
  v61 = v74;
  v11 = (unsigned __int8)v73 >> 7;
  v58 = v73 & 7;
  v12 = v56;
  v13 = ((unsigned __int8)v73 >> 3) & 7;
  v63 = (unsigned __int8)v73 >> 7;
  v14 = v13;
  v65 = HIBYTE(v73) & 1;
  do
  {
    v15 = *(_BYTE *)(v6 + 32);
    v16 = v15 & 7;
    if ( v58 > v16 )
    {
LABEL_10:
      v6 = *(_QWORD *)(v6 + 24);
      continue;
    }
    if ( v58 == v16 )
    {
      v17 = (v15 >> 3) & 7;
      if ( v14 > v17 )
        goto LABEL_10;
      if ( v14 == v17 )
      {
        v18 = (v15 & 0x40) != 0;
        if ( v10 > v18 )
          goto LABEL_10;
        if ( v10 == v18 )
        {
          v36 = v15 >> 7;
          if ( v63 > v36 )
            goto LABEL_10;
          if ( v63 == v36 )
          {
            v51 = *(_BYTE *)(v6 + 33) & 1;
            if ( v65 > v51 )
              goto LABEL_10;
            if ( v65 == v51 )
            {
              if ( *(_DWORD *)(v6 + 36) < v74 )
                goto LABEL_10;
              if ( *(_DWORD *)(v6 + 36) == v74 )
              {
                v52 = v60;
                v66 = *(_QWORD *)(v6 + 48);
                if ( v66 <= v60 )
                  v52 = *(_QWORD *)(v6 + 48);
                if ( !v52
                  || (v71 = v14,
                      v68 = v12,
                      v70 = v11,
                      v69 = v9,
                      v67 = v7,
                      v53 = memcmp(*(const void **)(v6 + 40), v7, v52),
                      v7 = v67,
                      v9 = v69,
                      v11 = v70,
                      v12 = v68,
                      v14 = v71,
                      !v53) )
                {
                  if ( (__int64)(v66 - v60) > 0x7FFFFFFF )
                    goto LABEL_37;
                  v53 = v66 - v60;
                  if ( (__int64)(v66 - v60) < (__int64)0xFFFFFFFF80000000LL )
                    goto LABEL_10;
                }
                if ( v53 < 0 )
                  goto LABEL_10;
              }
            }
          }
        }
      }
    }
LABEL_37:
    v12 = (_QWORD *)v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v6 );
  if ( v12 != v56 )
  {
    v19 = *((_BYTE *)v12 + 32);
    if ( (v19 & 7) == v8
      && ((v19 >> 3) & 7) == v13
      && ((v19 & 0x40) != 0) == v10
      && v11 == v19 >> 7
      && (*((_BYTE *)v12 + 33) & 1) == v9
      && *((_DWORD *)v12 + 9) == v74 )
    {
      v37 = (void *)v12[5];
      v78 = v12[6];
      v79 = v37;
      if ( v78 == v60 )
      {
        v64 = v11;
        v62 = v9;
        v59 = v7;
        v57 = v12;
        v38 = sub_FB0DD0((__int64)&v78, v60, v7);
        v7 = v59;
        v9 = v62;
        v11 = v64;
        if ( !v38 )
        {
          v34 = *((_DWORD *)v57 + 18);
          goto LABEL_31;
        }
      }
    }
  }
LABEL_14:
  v20 = -858993459 * ((__int64)(v3[1] - *v3) >> 3);
  v79 = v80;
  LOBYTE(v78) = (v10 << 6) | (8 * (v13 & 7)) | v8 | (v11 << 7);
  v72 = v20 + 9020;
  BYTE1(v78) = BYTE1(v78) & 0xFE | v9;
  HIDWORD(v78) = v61;
  sub_FAF060(&v79, v7, (__int64)&v7[v60]);
  v80[4] = v72;
  sub_FB0E30(v3 + 3, (char *)&v78);
  if ( v79 != v80 )
    operator delete(v79);
  v21 = v3[1];
  if ( v21 == v3[2] )
  {
    sub_FB1300((char **)v3, v21, (__int64)&v73);
  }
  else
  {
    v22 = v73 & 7 | *(_BYTE *)v21 & 0xF8;
    *(_BYTE *)v21 = v22;
    v23 = v73 & 0x38 | v22 & 0xC7;
    *(_BYTE *)v21 = v23;
    v24 = v73 & 0x40 | v23 & 0xBF;
    *(_BYTE *)v21 = v24;
    *(_BYTE *)v21 = v73 & 0x80 | v24 & 0x7F;
    *(_BYTE *)(v21 + 1) = HIBYTE(v73) & 1 | *(_BYTE *)(v21 + 1) & 0xFE;
    *(_DWORD *)(v21 + 4) = v74;
    *(_QWORD *)(v21 + 8) = v21 + 24;
    sub_FAF060((_QWORD *)(v21 + 8), s2, (__int64)s2 + v76);
    v3[1] += 40LL;
  }
  if ( (v73 & 0x100) != 0 )
  {
    v25 = v3[11];
    v26 = v74;
    v27 = (__int64)(v3 + 10);
    if ( !v25 )
      goto LABEL_26;
    do
    {
      while ( v74 <= *(_DWORD *)(v25 + 32) )
      {
        v27 = v25;
        v25 = *(_QWORD *)(v25 + 16);
        if ( !v25 )
          goto LABEL_24;
      }
      v25 = *(_QWORD *)(v25 + 24);
    }
    while ( v25 );
LABEL_24:
    if ( v3 + 10 == (_QWORD *)v27 || v74 < *(_DWORD *)(v27 + 32) )
    {
LABEL_26:
      v28 = operator new(0x40u);
      v29 = v27;
      *(_DWORD *)(v28 + 32) = v26;
      v27 = v28;
      *(_QWORD *)(v28 + 56) = 0;
      *(_OWORD *)(v28 + 40) = 0;
      v30 = sub_FB1990(v3 + 9, v29, (int *)(v28 + 32));
      if ( v31 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++v3[14];
      }
      else
      {
        v54 = *(void **)(v27 + 40);
        if ( v54 )
          operator delete(v54);
        v55 = (void *)v27;
        v27 = v30;
        operator delete(v55);
      }
    }
    v32 = *(char **)(v27 + 48);
    if ( v32 == *(char **)(v27 + 56) )
    {
      sub_FB1620(v27 + 40, v32, (int *)&v72);
    }
    else
    {
      v33 = v32 + 4;
      *((_DWORD *)v33 - 1) = v72;
      *(_QWORD *)(v27 + 48) = v33;
    }
  }
  v34 = v72;
  v7 = s2;
LABEL_31:
  if ( v7 != v77 )
    operator delete(v7);
  return v34;
}

