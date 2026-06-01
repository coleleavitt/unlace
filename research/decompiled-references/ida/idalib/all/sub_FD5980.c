__int64 __fastcall sub_FD5980(__int64 a1, __int64 a2)
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
  _QWORD *v26; // r13
  int v27; // r12d
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r12
  _BOOL8 v34; // rdi
  char *v35; // rsi
  char *v36; // rsi
  unsigned int v37; // ebx
  unsigned int v39; // eax
  void *v40; // rdx
  int v41; // eax
  _QWORD *v43; // rax
  _QWORD *v44; // r13
  __int64 v45; // rbp
  void *v46; // rdi
  __int64 v47; // r14
  __int64 v48; // rbp
  void *v49; // rdi
  __int64 v50; // r14
  _QWORD *v51; // r14
  _QWORD *v52; // rbp
  _QWORD *v53; // rdi
  unsigned int v54; // eax
  size_t v55; // rdx
  int v56; // eax
  void *v57; // rdi
  void *v58; // rdi
  _QWORD *v59; // [rsp+8h] [rbp-F0h]
  _QWORD *v60; // [rsp+8h] [rbp-F0h]
  unsigned int v61; // [rsp+10h] [rbp-E8h]
  _BYTE *v62; // [rsp+10h] [rbp-E8h]
  size_t v63; // [rsp+18h] [rbp-E0h]
  int v64; // [rsp+20h] [rbp-D8h]
  char v65; // [rsp+24h] [rbp-D4h]
  unsigned int v66; // [rsp+28h] [rbp-D0h]
  char v67; // [rsp+28h] [rbp-D0h]
  unsigned int v68; // [rsp+2Ch] [rbp-CCh]
  size_t v69; // [rsp+30h] [rbp-C8h]
  _BYTE *v70; // [rsp+38h] [rbp-C0h]
  _QWORD *v71; // [rsp+40h] [rbp-B8h]
  char v72; // [rsp+4Ah] [rbp-AEh]
  char v73; // [rsp+4Bh] [rbp-ADh]
  unsigned int v74; // [rsp+4Ch] [rbp-ACh]
  unsigned int v75; // [rsp+5Ch] [rbp-9Ch] BYREF
  __int16 v76; // [rsp+60h] [rbp-98h] BYREF
  int v77; // [rsp+64h] [rbp-94h]
  void *s2; // [rsp+68h] [rbp-90h] BYREF
  size_t v79; // [rsp+70h] [rbp-88h]
  _BYTE v80[24]; // [rsp+78h] [rbp-80h] BYREF
  __int64 v81; // [rsp+90h] [rbp-68h] BYREF
  void *v82; // [rsp+98h] [rbp-60h] BYREF
  _DWORD v83[20]; // [rsp+A8h] [rbp-50h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 )
  {
    v43 = (_QWORD *)operator new(0x78u);
    v44 = *(_QWORD **)(a1 + 8);
    v3 = v43;
    *(_QWORD *)(a1 + 8) = v43;
    memset(v43, 0, 0x78u);
    v59 = v43 + 4;
    v43[6] = v43 + 4;
    v43[7] = v43 + 4;
    v43[12] = v43 + 10;
    v43[13] = v43 + 10;
    if ( !v44 )
      goto LABEL_3;
    v45 = v44[11];
    if ( v45 )
    {
      while ( 1 )
      {
        sub_FD5520((__int64)(v44 + 9), *(_QWORD **)(v45 + 24));
        v46 = *(void **)(v45 + 40);
        v47 = *(_QWORD *)(v45 + 16);
        if ( v46 )
        {
          operator delete(v46);
          operator delete((void *)v45);
          if ( !v47 )
            break;
        }
        else
        {
          operator delete((void *)v45);
          if ( !v47 )
            break;
        }
        v45 = v47;
      }
    }
    v48 = v44[5];
    if ( v48 )
    {
      while ( 1 )
      {
        sub_FD54B0((__int64)(v44 + 3), *(_QWORD **)(v48 + 24));
        v49 = *(void **)(v48 + 40);
        v50 = *(_QWORD *)(v48 + 16);
        if ( v49 == (void *)(v48 + 56) )
        {
          operator delete((void *)v48);
          if ( !v50 )
            break;
        }
        else
        {
          operator delete(v49);
          operator delete((void *)v48);
          if ( !v50 )
            break;
        }
        v48 = v50;
      }
    }
    v51 = (_QWORD *)v44[1];
    v52 = (_QWORD *)*v44;
    if ( v51 != (_QWORD *)*v44 )
    {
      do
      {
        while ( 1 )
        {
          v53 = (_QWORD *)v52[1];
          if ( v53 == v52 + 3 )
            break;
          operator delete(v53);
          v52 += 5;
          if ( v51 == v52 )
            goto LABEL_64;
        }
        v52 += 5;
      }
      while ( v51 != v52 );
LABEL_64:
      v52 = (_QWORD *)*v44;
    }
    if ( v52 )
      operator delete(v52);
    operator delete(v44, 0x78u);
    v3 = *(_QWORD **)(a1 + 8);
  }
  v59 = v3 + 4;
LABEL_3:
  v4 = *(_BYTE **)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v76 = *(_WORD *)a2 & 0x1FF | v76 & 0xFE00;
  v77 = *(_DWORD *)(a2 + 4);
  s2 = v80;
  sub_FD2DA0(&s2, v4, (__int64)&v4[v5]);
  v6 = v3[5];
  if ( !v6 )
  {
    v7 = s2;
    v64 = v77;
    v9 = HIBYTE(v76) & 1;
    v8 = v76 & 7;
    v13 = ((unsigned __int8)v76 >> 3) & 7;
    v10 = (v76 & 0x40) != 0;
    v11 = (unsigned __int8)v76 >> 7;
    v63 = v79;
    goto LABEL_14;
  }
  v7 = s2;
  v63 = v79;
  v8 = v76 & 7;
  v9 = HIBYTE(v76) & 1;
  v10 = (v76 & 0x40) != 0;
  v64 = v77;
  v11 = (unsigned __int8)v76 >> 7;
  v61 = v76 & 7;
  v12 = v59;
  v13 = ((unsigned __int8)v76 >> 3) & 7;
  v66 = (unsigned __int8)v76 >> 7;
  v14 = v13;
  v68 = HIBYTE(v76) & 1;
  do
  {
    v15 = *(_BYTE *)(v6 + 32);
    v16 = v15 & 7;
    if ( v61 > v16 )
    {
LABEL_10:
      v6 = *(_QWORD *)(v6 + 24);
      continue;
    }
    if ( v61 == v16 )
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
          v39 = v15 >> 7;
          if ( v66 > v39 )
            goto LABEL_10;
          if ( v66 == v39 )
          {
            v54 = *(_BYTE *)(v6 + 33) & 1;
            if ( v68 > v54 )
              goto LABEL_10;
            if ( v68 == v54 )
            {
              if ( *(_DWORD *)(v6 + 36) < v77 )
                goto LABEL_10;
              if ( *(_DWORD *)(v6 + 36) == v77 )
              {
                v55 = v63;
                v69 = *(_QWORD *)(v6 + 48);
                if ( v69 <= v63 )
                  v55 = *(_QWORD *)(v6 + 48);
                if ( !v55
                  || (v74 = v14,
                      v71 = v12,
                      v73 = v11,
                      v72 = v9,
                      v70 = v7,
                      v56 = memcmp(*(const void **)(v6 + 40), v7, v55),
                      v7 = v70,
                      v9 = v72,
                      v11 = v73,
                      v12 = v71,
                      v14 = v74,
                      !v56) )
                {
                  if ( (__int64)(v69 - v63) > 0x7FFFFFFF )
                    goto LABEL_40;
                  v56 = v69 - v63;
                  if ( (__int64)(v69 - v63) < (__int64)0xFFFFFFFF80000000LL )
                    goto LABEL_10;
                }
                if ( v56 < 0 )
                  goto LABEL_10;
              }
            }
          }
        }
      }
    }
LABEL_40:
    v12 = (_QWORD *)v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v6 );
  if ( v12 != v59 )
  {
    v19 = *((_BYTE *)v12 + 32);
    if ( (v19 & 7) == v8
      && ((v19 >> 3) & 7) == v13
      && ((v19 & 0x40) != 0) == v10
      && v11 == v19 >> 7
      && (*((_BYTE *)v12 + 33) & 1) == v9
      && *((_DWORD *)v12 + 9) == v77 )
    {
      v40 = (void *)v12[5];
      v81 = v12[6];
      v82 = v40;
      if ( v81 == v63 )
      {
        v67 = v11;
        v65 = v9;
        v62 = v7;
        v60 = v12;
        v41 = sub_FD4B10((__int64)&v81, v63, v7);
        v7 = v62;
        v9 = v65;
        v11 = v67;
        if ( !v41 )
        {
          v37 = *((_DWORD *)v60 + 18);
          goto LABEL_34;
        }
      }
    }
  }
LABEL_14:
  v20 = -858993459 * ((__int64)(v3[1] - *v3) >> 3);
  v82 = v83;
  LOBYTE(v81) = (v10 << 6) | (8 * (v13 & 7)) | v8 | (v11 << 7);
  v75 = v20 + 9020;
  BYTE1(v81) = BYTE1(v81) & 0xFE | v9;
  HIDWORD(v81) = v64;
  sub_FD2DA0(&v82, v7, (__int64)&v7[v63]);
  v83[4] = v75;
  sub_FD4B70(v3 + 3, (char *)&v81);
  if ( v82 != v83 )
    operator delete(v82);
  v21 = v3[1];
  if ( v21 == v3[2] )
  {
    sub_FD5040((char **)v3, v21, (__int64)&v76);
  }
  else
  {
    v22 = v76 & 7 | *(_BYTE *)v21 & 0xF8;
    *(_BYTE *)v21 = v22;
    v23 = v76 & 0x38 | v22 & 0xC7;
    *(_BYTE *)v21 = v23;
    v24 = v76 & 0x40 | v23 & 0xBF;
    *(_BYTE *)v21 = v24;
    *(_BYTE *)v21 = v76 & 0x80 | v24 & 0x7F;
    *(_BYTE *)(v21 + 1) = HIBYTE(v76) & 1 | *(_BYTE *)(v21 + 1) & 0xFE;
    *(_DWORD *)(v21 + 4) = v77;
    *(_QWORD *)(v21 + 8) = v21 + 24;
    sub_FD2DA0((_QWORD *)(v21 + 8), s2, (__int64)s2 + v79);
    v3[1] += 40LL;
  }
  if ( (v76 & 0x100) != 0 )
  {
    v25 = v3[11];
    v26 = v3 + 10;
    v27 = v77;
    v28 = (__int64)(v3 + 10);
    if ( !v25 )
      goto LABEL_26;
    do
    {
      while ( v77 <= *(_DWORD *)(v25 + 32) )
      {
        v28 = v25;
        v25 = *(_QWORD *)(v25 + 16);
        if ( !v25 )
          goto LABEL_24;
      }
      v25 = *(_QWORD *)(v25 + 24);
    }
    while ( v25 );
LABEL_24:
    if ( v26 == (_QWORD *)v28 || v77 < *(_DWORD *)(v28 + 32) )
    {
LABEL_26:
      v29 = operator new(0x40u);
      v30 = v28;
      *(_DWORD *)(v29 + 32) = v27;
      v28 = v29;
      *(_QWORD *)(v29 + 56) = 0;
      *(_OWORD *)(v29 + 40) = 0;
      v31 = sub_FD56D0(v3 + 9, v30, (int *)(v29 + 32));
      v33 = v31;
      if ( v32 )
      {
        v34 = v26 == (_QWORD *)v32 || v31 || *(_DWORD *)(v28 + 32) < *(_DWORD *)(v32 + 32);
        std::_Rb_tree_insert_and_rebalance(v34, v28, v32, v3 + 10);
        ++v3[14];
      }
      else
      {
        v57 = *(void **)(v28 + 40);
        if ( v57 )
          operator delete(v57);
        v58 = (void *)v28;
        v28 = v33;
        operator delete(v58);
      }
    }
    v35 = *(char **)(v28 + 48);
    if ( v35 == *(char **)(v28 + 56) )
    {
      sub_FD5360(v28 + 40, v35, (int *)&v75);
    }
    else
    {
      v36 = v35 + 4;
      *((_DWORD *)v36 - 1) = v75;
      *(_QWORD *)(v28 + 48) = v36;
    }
  }
  v37 = v75;
  v7 = s2;
LABEL_34:
  if ( v7 != v80 )
    operator delete(v7);
  return v37;
}
