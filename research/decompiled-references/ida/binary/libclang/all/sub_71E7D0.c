void __fastcall sub_71E7D0(__int64 a1, unsigned __int64 a2, char *a3)
{
  __int64 v3; // rcx
  char *v4; // r14
  unsigned __int64 v5; // rbp
  char *v6; // r14
  __int64 v7; // r15
  size_t v8; // r9
  size_t v9; // r10
  size_t v10; // rdx
  signed __int64 v11; // rax
  size_t v12; // r11
  const void *v13; // rsi
  size_t v14; // rdx
  int v15; // eax
  __int64 v16; // r9
  size_t v17; // rdx
  const void **v18; // r15
  const void **v19; // r14
  size_t v20; // rbx
  int v21; // eax
  size_t v22; // r15
  size_t v23; // rdx
  size_t v24; // r15
  size_t v25; // rdx
  signed __int64 v26; // rax
  _QWORD *v27; // rax
  char *v28; // rbp
  _QWORD *v29; // r13
  void *v30; // rcx
  _BYTE *v31; // rsi
  _DWORD *v32; // rdx
  _DWORD *v33; // r9
  _DWORD *v34; // rcx
  unsigned int v35; // esi
  __int64 v36; // rdi
  size_t v37; // r11
  const void *v38; // rsi
  size_t v39; // rdx
  signed __int64 v40; // rax
  size_t v41; // rdx
  int v42; // edi
  _DWORD *v43; // r9
  _DWORD *v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  char *v49; // rdx
  char *v50; // r9
  unsigned int v51; // esi
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rdi
  void *s1; // [rsp+0h] [rbp-B8h]
  _BYTE *s1a; // [rsp+0h] [rbp-B8h]
  void *v64; // [rsp+10h] [rbp-A8h]
  void *v65; // [rsp+10h] [rbp-A8h]
  void *s2a; // [rsp+18h] [rbp-A0h]
  char *s2; // [rsp+18h] [rbp-A0h]
  size_t v68; // [rsp+20h] [rbp-98h]
  size_t v69; // [rsp+20h] [rbp-98h]
  size_t v70; // [rsp+20h] [rbp-98h]
  size_t v71; // [rsp+30h] [rbp-88h]
  size_t v72; // [rsp+30h] [rbp-88h]
  size_t v73; // [rsp+38h] [rbp-80h]
  size_t v74; // [rsp+38h] [rbp-80h]
  _QWORD *v75; // [rsp+40h] [rbp-78h]
  void *v76; // [rsp+48h] [rbp-70h]
  _QWORD v77[2]; // [rsp+50h] [rbp-68h] BYREF
  void *v78[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v79[9]; // [rsp+70h] [rbp-48h] BYREF

  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 512 )
    return;
  v4 = a3;
  v5 = a2;
  if ( !a3 )
    goto LABEL_45;
  do
  {
    v6 = v4 - 1;
    v7 = a1 + 32 * (v3 >> 6);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = *(_QWORD *)(v7 + 8);
    s1 = *(void **)(a1 + 32);
    v10 = v9;
    v64 = *(void **)v7;
    if ( v8 <= v9 )
      v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      v68 = *(_QWORD *)(v7 + 8);
      s2a = *(void **)(a1 + 40);
      LODWORD(v11) = memcmp(*(const void **)(a1 + 32), *(const void **)v7, v10);
      v8 = (size_t)s2a;
      v9 = v68;
      if ( (_DWORD)v11 )
        goto LABEL_9;
    }
    v11 = v8 - v9;
    if ( (__int64)(v8 - v9) >= 0x80000000LL )
      goto LABEL_10;
    if ( v11 > (__int64)0xFFFFFFFF7FFFFFFFLL )
    {
LABEL_9:
      if ( (int)v11 >= 0 )
      {
LABEL_10:
        v12 = *(_QWORD *)(v5 - 24);
        v13 = *(const void **)(v5 - 32);
        v14 = v12;
        if ( v8 <= v12 )
          v14 = v8;
        if ( !v14
          || (v73 = *(_QWORD *)(v5 - 24),
              v71 = v9,
              v69 = v8,
              v15 = memcmp(s1, v13, v14),
              v8 = v69,
              v9 = v71,
              v12 = v73,
              !v15) )
        {
          v16 = v8 - v12;
          if ( v16 >= 0x80000000LL )
          {
LABEL_18:
            v17 = v12;
            if ( v9 <= v12 )
              v17 = v9;
            if ( v17 )
              memcmp(v64, v13, v17);
            goto LABEL_22;
          }
          if ( v16 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
            goto LABEL_22;
          v15 = v16;
        }
        if ( v15 < 0 )
          goto LABEL_22;
        goto LABEL_18;
      }
    }
    v37 = *(_QWORD *)(v5 - 24);
    v38 = *(const void **)(v5 - 32);
    v39 = v37;
    if ( v9 <= v37 )
      v39 = v9;
    if ( v39 )
    {
      v74 = *(_QWORD *)(v5 - 24);
      v72 = v9;
      v70 = v8;
      LODWORD(v40) = memcmp(v64, v38, v39);
      v8 = v70;
      v9 = v72;
      v37 = v74;
      if ( (_DWORD)v40 )
        goto LABEL_69;
    }
    v40 = v9 - v37;
    if ( (__int64)(v9 - v37) < 0x80000000LL )
    {
      if ( v40 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_22;
LABEL_69:
      if ( (int)v40 < 0 )
        goto LABEL_22;
    }
    v41 = v37;
    if ( v8 <= v37 )
      v41 = v8;
    if ( v41 )
      memcmp(s1, v38, v41);
LABEL_22:
    std::string::swap();
    v18 = (const void **)v5;
    v65 = (void *)v5;
    v5 = a1 + 32;
    s2 = v6;
    v19 = v18;
    while ( 2 )
    {
      v20 = *(_QWORD *)(a1 + 8);
      s1a = *(_BYTE **)a1;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v5 + 8);
        v23 = v20;
        if ( v22 <= v20 )
          v23 = *(_QWORD *)(v5 + 8);
        if ( v23 )
        {
          v21 = memcmp(*(const void **)v5, s1a, v23);
          if ( v21 )
            goto LABEL_26;
        }
        if ( (__int64)(v22 - v20) >= 0x80000000LL )
          break;
        if ( (__int64)(v22 - v20) <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_27;
        v21 = v22 - v20;
LABEL_26:
        if ( v21 >= 0 )
          goto LABEL_36;
LABEL_27:
        v5 += 32LL;
      }
      while ( 1 )
      {
LABEL_36:
        v24 = (size_t)*(v19 - 3);
        v19 -= 4;
        v25 = v24;
        if ( v20 <= v24 )
          v25 = v20;
        if ( v25 )
        {
          LODWORD(v26) = memcmp(s1a, *v19, v25);
          if ( (_DWORD)v26 )
            goto LABEL_35;
        }
        v26 = v20 - v24;
        if ( (__int64)(v20 - v24) >= 0x80000000LL )
          break;
        if ( v26 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        {
LABEL_35:
          if ( (int)v26 >= 0 )
            break;
        }
      }
      if ( v5 < (unsigned __int64)v19 )
      {
        v5 += 32LL;
        std::string::swap();
        continue;
      }
      break;
    }
    v4 = s2;
    sub_71E7D0(v5, v65, s2);
    v3 = v5 - a1;
    if ( (__int64)(v5 - a1) <= 512 )
      return;
  }
  while ( s2 );
LABEL_45:
  sub_71E110(a1, v5, v5);
  v27 = (_QWORD *)v5;
  if ( (__int64)(v5 - a1) > 32 )
  {
    v28 = (char *)(a1 + 16);
    v29 = v27;
    do
    {
      v29 -= 4;
      v75 = v77;
      v32 = v29 + 2;
      if ( (_QWORD *)*v29 == v29 + 2 )
      {
        v33 = v77;
        v34 = v29 + 2;
        v35 = v29[1] + 1;
        if ( v35 >= 8 )
        {
          LODWORD(v57) = 0;
          do
          {
            v58 = (unsigned int)v57;
            v57 = (unsigned int)(v57 + 8);
            *(_QWORD *)((char *)v77 + v58) = *(_QWORD *)((char *)v32 + v58);
          }
          while ( (unsigned int)v57 < (v35 & 0xFFFFFFF8) );
          v33 = (_DWORD *)((char *)v77 + v57);
          v34 = (_DWORD *)((char *)v32 + v57);
        }
        v36 = 0;
        if ( (v35 & 4) != 0 )
        {
          *v33 = *v34;
          v36 = 4;
        }
        if ( (v35 & 2) != 0 )
        {
          *(_WORD *)((char *)v33 + v36) = *(_WORD *)((char *)v34 + v36);
          v36 += 2;
        }
        if ( (v35 & 1) != 0 )
          *((_BYTE *)v33 + v36) = *((_BYTE *)v34 + v36);
      }
      else
      {
        v75 = (_QWORD *)*v29;
        v77[0] = v29[2];
      }
      v30 = (void *)v29[1];
      *v29 = v32;
      v31 = (_BYTE *)(a1 + 16);
      v29[1] = 0;
      v76 = v30;
      *((_BYTE *)v29 + 16) = 0;
      if ( *(char **)a1 == v28 )
      {
        v46 = *(_QWORD *)(a1 + 8);
        v47 = v46;
        if ( (_QWORD *)a1 != v29 )
        {
          if ( v46 )
          {
            if ( v46 == 1 )
            {
              *((_BYTE *)v29 + 16) = *(_BYTE *)(a1 + 16);
              v59 = *v29;
              v60 = *(_QWORD *)(a1 + 8);
              v29[1] = v60;
              *(_BYTE *)(v59 + v60) = 0;
              v31 = *(_BYTE **)a1;
              goto LABEL_50;
            }
            if ( (unsigned int)v46 < 8 )
            {
              if ( (v46 & 4) != 0 )
              {
                *v32 = *(_DWORD *)v28;
                *(_DWORD *)((char *)v32 + (unsigned int)v46 - 4) = *(_DWORD *)&v28[(unsigned int)v46 - 4];
                v47 = *(_QWORD *)(a1 + 8);
              }
              else if ( (_DWORD)v46 )
              {
                *(_BYTE *)v32 = *v28;
                if ( (v46 & 2) == 0 )
                  goto LABEL_90;
                *(_WORD *)((char *)v32 + (unsigned int)v46 - 2) = *(_WORD *)&v28[(unsigned int)v46 - 2];
                v47 = *(_QWORD *)(a1 + 8);
              }
            }
            else
            {
              *(_QWORD *)v32 = *(_QWORD *)v28;
              *(_QWORD *)((char *)v32 + (unsigned int)v46 - 8) = *(_QWORD *)&v28[(unsigned int)v46 - 8];
              v48 = (unsigned __int64)(v29 + 3) & 0xFFFFFFFFFFFFFFF8LL;
              v49 = (char *)v32 - v48;
              v50 = (char *)(v28 - v49);
              if ( (((_DWORD)v47 + (_DWORD)v49) & 0xFFFFFFF8) >= 8 )
              {
                v51 = (v47 + (_DWORD)v49) & 0xFFFFFFF8;
                v52 = 0;
                do
                {
                  v53 = v52;
                  v52 += 8;
                  *(_QWORD *)(v48 + v53) = *(_QWORD *)&v50[v53];
                }
                while ( v52 < v51 );
              }
LABEL_90:
              v47 = *(_QWORD *)(a1 + 8);
            }
            v46 = v47;
          }
          v54 = *v29;
          v29[1] = v46;
          *(_BYTE *)(v54 + v46) = 0;
          v31 = *(_BYTE **)a1;
        }
      }
      else
      {
        *v29 = *(_QWORD *)a1;
        v29[1] = *(_QWORD *)(a1 + 8);
        v29[2] = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v28;
      }
LABEL_50:
      *(_QWORD *)(a1 + 8) = 0;
      *v31 = 0;
      v78[0] = v79;
      if ( v75 == v77 )
      {
        v42 = (_DWORD)v76 + 1;
        v43 = v79;
        v44 = v77;
        if ( (unsigned int)((_DWORD)v76 + 1) >= 8 )
        {
          LODWORD(v55) = 0;
          do
          {
            v56 = (unsigned int)v55;
            v55 = (unsigned int)(v55 + 8);
            *(_QWORD *)((char *)v79 + v56) = *(_QWORD *)((char *)v77 + v56);
          }
          while ( (unsigned int)v55 < (v42 & 0xFFFFFFF8) );
          v43 = (_DWORD *)((char *)v79 + v55);
          v44 = (_DWORD *)((char *)v77 + v55);
        }
        v45 = 0;
        if ( (v42 & 4) != 0 )
        {
          *v43 = *v44;
          v45 = 4;
        }
        if ( (v42 & 2) != 0 )
        {
          *(_WORD *)((char *)v43 + v45) = *(_WORD *)((char *)v44 + v45);
          v45 += 2;
        }
        if ( (v42 & 1) != 0 )
          *((_BYTE *)v43 + v45) = *((_BYTE *)v44 + v45);
      }
      else
      {
        v78[0] = v75;
        v79[0] = v77[0];
      }
      v78[1] = v76;
      LOBYTE(v77[0]) = 0;
      sub_6AFB70(a1, 0, ((__int64)v29 - a1) >> 5, v78);
      if ( v78[0] != v79 )
        operator delete(v78[0], v79[0] + 1LL);
    }
    while ( (__int64)v29 - a1 > 32 );
  }
}

