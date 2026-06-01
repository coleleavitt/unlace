__int64 __fastcall sub_12AFFF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 **v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // r14
  const char *v11; // rax
  __int64 v12; // rdx
  char *v13; // rbp
  __int64 v15; // r13
  __int64 v16; // rax
  const char **v17; // rax
  char *v18; // r15
  size_t v19; // rax
  char v20; // al
  size_t v21; // rdx
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  unsigned __int8 *v24; // rbp
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  void **v28; // rcx
  _BYTE *v29; // rdi
  __int64 v30; // rax
  void **v31; // r13
  unsigned __int64 v32; // rax
  void **v33; // r15
  void **v34; // rbp
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbp
  void **v38; // r15
  char v39; // al
  size_t v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  void *v48; // rdi
  size_t v49; // [rsp+10h] [rbp-108h]
  void **v50; // [rsp+20h] [rbp-F8h]
  _BYTE *v51; // [rsp+20h] [rbp-F8h]
  __int64 v52; // [rsp+28h] [rbp-F0h]
  __int64 v53; // [rsp+28h] [rbp-F0h]
  __int64 v54; // [rsp+30h] [rbp-E8h]
  __int64 v55; // [rsp+38h] [rbp-E0h]
  void *v56; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-D0h]
  __int64 v58; // [rsp+50h] [rbp-C8h] BYREF
  void *src; // [rsp+60h] [rbp-B8h] BYREF
  size_t n; // [rsp+68h] [rbp-B0h]
  _QWORD v61[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int16 v62; // [rsp+80h] [rbp-98h]
  void *v63; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-80h]
  __int64 v65; // [rsp+A0h] [rbp-78h]
  void *v66; // [rsp+B0h] [rbp-68h]
  __int64 v67; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v68; // [rsp+D0h] [rbp-48h]

  v5 = *(__int64 ***)(a2 + 24);
  LODWORD(v63) = 1916;
  v6 = sub_21B6DA0(a3, &v63, 1);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1916) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v9 == v8 )
  {
LABEL_5:
    v10 = a1 + 16;
  }
  else
  {
    do
    {
      v15 = *v8;
      v16 = *(_QWORD *)(*v8 + 16LL);
      if ( !v16 )
        v16 = *v8;
      ++v8;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v8 == v9 )
        break;
      while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1916) )
      {
        if ( v9 == ++v8 )
          goto LABEL_17;
      }
    }
    while ( v9 != v8 );
LABEL_17:
    v17 = *(const char ***)(v15 + 48);
    v10 = a1 + 16;
    v18 = (char *)*v17;
    if ( !*v17 )
      goto LABEL_6;
    v19 = strlen(*v17);
    if ( !v19 )
      goto LABEL_6;
    n = v19;
    v49 = v19;
    v62 = 261;
    src = v18;
    v20 = sub_228B020(&src, 0);
    v21 = v49;
    if ( v20 )
    {
      v64 = v49;
      LOWORD(v66) = 261;
      v63 = v18;
      v39 = sub_228C2C0(&v63);
      v21 = v49;
      if ( v39 )
      {
        *(_QWORD *)a1 = v10;
        sub_12AF1C0((_QWORD *)a1, v18, (__int64)&v18[v49]);
        return a1;
      }
    }
    if ( v21 == 3 )
    {
      if ( *(_WORD *)v18 == 26210 && v18[2] == 100 || *(_WORD *)v18 == 27751 && v18[2] == 100 )
      {
        *(_QWORD *)a1 = v10;
        strcpy((char *)(a1 + 16), "/usr/gnu/bin/ld");
        *(_QWORD *)(a1 + 8) = 15;
        return a1;
      }
LABEL_23:
      sub_FC70B0((__int64)&v63, *v5[1], 0, 383);
      sub_21B5FF0(&v56, v15, a3);
      v22 = v56;
      v23 = v57;
      v24 = (unsigned __int8 *)v63;
      if ( !v63 )
      {
        v42 = v64;
        v43 = *(_DWORD *)(v64 + 14976);
        if ( v43 )
        {
          v44 = (unsigned int)(v43 - 1);
          *(_DWORD *)(v64 + 14976) = v44;
          v24 = *(unsigned __int8 **)(v42 + 8 * v44 + 14848);
          v45 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v46 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v47 = v46 + (v45 << 6);
          while ( v46 != v47 )
          {
            while ( 1 )
            {
              v47 -= 64;
              v48 = *(void **)(v47 + 24);
              if ( v48 == (void *)(v47 + 40) )
                break;
              v55 = v47;
              v54 = v46;
              v53 = v23;
              operator delete(v48);
              v46 = v54;
              v47 = v55;
              v23 = v53;
              if ( v54 == v55 )
                goto LABEL_80;
            }
          }
LABEL_80:
          *((_DWORD *)v24 + 134) = 0;
        }
        else
        {
          v52 = v57;
          v51 = v56;
          v24 = (unsigned __int8 *)operator new(0x3A0u);
          *v24 = 0;
          *((_QWORD *)v24 + 12) = v24 + 112;
          *((_QWORD *)v24 + 16) = v24 + 144;
          *((_QWORD *)v24 + 20) = v24 + 176;
          *((_QWORD *)v24 + 24) = v24 + 208;
          *((_QWORD *)v24 + 28) = v24 + 240;
          *((_QWORD *)v24 + 32) = v24 + 272;
          *((_QWORD *)v24 + 36) = v24 + 304;
          *((_QWORD *)v24 + 40) = v24 + 336;
          *((_QWORD *)v24 + 44) = v24 + 368;
          *((_QWORD *)v24 + 48) = v24 + 400;
          *((_QWORD *)v24 + 52) = v24 + 432;
          *((_QWORD *)v24 + 13) = 0;
          v24[112] = 0;
          *((_QWORD *)v24 + 17) = 0;
          v24[144] = 0;
          *((_QWORD *)v24 + 21) = 0;
          v24[176] = 0;
          *((_QWORD *)v24 + 25) = 0;
          v24[208] = 0;
          *((_QWORD *)v24 + 29) = 0;
          v24[240] = 0;
          *((_QWORD *)v24 + 33) = 0;
          v24[272] = 0;
          *((_QWORD *)v24 + 37) = 0;
          v24[304] = 0;
          *((_QWORD *)v24 + 41) = 0;
          v24[336] = 0;
          *((_QWORD *)v24 + 45) = 0;
          v24[368] = 0;
          *((_QWORD *)v24 + 49) = 0;
          v24[400] = 0;
          *((_QWORD *)v24 + 53) = 0x800000000LL;
          v22 = v51;
          *((_QWORD *)v24 + 66) = v24 + 544;
          v23 = v52;
          *((_QWORD *)v24 + 67) = 0x600000000LL;
        }
        v63 = v24;
      }
      v24[*v24 + 1] = 0;
      src = v61;
      sub_12AF1C0(&src, v22, (__int64)&v22[v23]);
      v25 = v63;
      v26 = *(unsigned __int8 *)v63;
      *(_BYTE *)v63 = v26 + 1;
      v27 = 4 * (v26 + 3);
      v28 = (void **)&v25[v27];
      v29 = (_BYTE *)v25[v27];
      if ( src == v61 )
      {
        v40 = n;
        if ( n )
        {
          if ( n == 1 )
          {
            *v29 = v61[0];
            v40 = n;
            v29 = *v28;
          }
          else
          {
            v50 = v28;
            memcpy(v29, src, n);
            v28 = v50;
            v40 = n;
            v29 = *v50;
          }
        }
        v28[1] = (void *)v40;
        v29[v40] = 0;
        v29 = src;
      }
      else
      {
        if ( v29 == (_BYTE *)&v25[v27 + 2] )
        {
          *v28 = src;
          v28[1] = (void *)n;
          v28[2] = (void *)v61[0];
        }
        else
        {
          v30 = v25[4 * (int)v26 + 14];
          *v28 = src;
          v28[1] = (void *)n;
          v28[2] = (void *)v61[0];
          if ( v29 )
          {
            src = v29;
            v61[0] = v30;
            goto LABEL_28;
          }
        }
        v29 = v61;
        src = v61;
      }
LABEL_28:
      n = 0;
      *v29 = 0;
      if ( src != v61 )
        operator delete(src);
      if ( v56 != &v58 )
        operator delete(v56);
      if ( (_BYTE)v68 )
      {
        sub_FC7790(v65, (__int64 *)&v63, SHIBYTE(v68));
        v65 = 0;
        v68 = 0;
      }
      if ( v66 != &v67 )
        operator delete(v66);
      v31 = (void **)v63;
      if ( v63 )
      {
        v32 = v64;
        if ( v64 )
        {
          if ( (unsigned __int64)v63 < v64 || (unsigned __int64)v63 > v64 + 14848 )
          {
            v33 = *((void ***)v63 + 66);
            v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v63 + 134)];
            if ( v33 != v34 )
            {
              do
              {
                while ( 1 )
                {
                  v34 -= 8;
                  v35 = (void **)v34[3];
                  if ( v35 == v34 + 5 )
                    break;
                  operator delete(v35);
                  if ( v33 == v34 )
                    goto LABEL_42;
                }
              }
              while ( v33 != v34 );
LABEL_42:
              v34 = (void **)v31[66];
            }
            if ( v34 != v31 + 68 )
              free(v34);
            v36 = (void **)v31[52];
            if ( v36 != v31 + 54 )
              free(v36);
            v37 = v31 + 48;
            v38 = v31 + 8;
            do
            {
              while ( *v37 != v37 + 2 )
              {
                operator delete(*v37);
                v37 -= 4;
                if ( v37 == v38 )
                  goto LABEL_50;
              }
              v37 -= 4;
            }
            while ( v38 != v37 );
LABEL_50:
            operator delete(v31, 0x3A0u);
          }
          else
          {
            v41 = *(unsigned int *)(v64 + 14976);
            *(_DWORD *)(v64 + 14976) = v41 + 1;
            *(_QWORD *)(v32 + 8 * v41 + 14848) = v31;
          }
        }
      }
      goto LABEL_6;
    }
    if ( v21 != 2 || *(_WORD *)v18 != 25708 )
      goto LABEL_23;
  }
LABEL_6:
  v11 = (const char *)((__int64 (__fastcall *)(__int64 **))(*v5)[33])(v5);
  *(_QWORD *)a1 = v10;
  v12 = -1;
  v13 = (char *)v11;
  if ( v11 )
    v12 = (__int64)&v11[strlen(v11)];
  sub_12AF1C0((_QWORD *)a1, v13, v12);
  return a1;
}
