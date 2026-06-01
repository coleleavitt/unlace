__int64 __fastcall sub_104A5A0(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t a5, char ***a6)
{
  __int64 result; // rax
  _BYTE *v10; // r13
  __int64 v11; // r12
  unsigned __int8 *v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  void **v17; // r12
  _BYTE *v18; // rdi
  __int64 v19; // rax
  void **v20; // rbp
  unsigned __int64 v21; // rax
  void **v22; // r12
  void **v23; // rbx
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // rbx
  void **v27; // r12
  unsigned __int8 *v28; // rbx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  void **v33; // r12
  _BYTE *v34; // rdi
  __int64 v35; // rax
  void **v36; // r12
  void **v37; // rbx
  void **v38; // rdi
  void **v39; // rdi
  void **v40; // rbx
  void **v41; // r12
  void *v42; // rdi
  unsigned __int64 v43; // rdx
  int v44; // eax
  size_t v45; // rdx
  size_t v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // r14
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // r15
  __int64 v58; // r14
  void *v59; // rdi
  unsigned __int8 v61; // [rsp+8h] [rbp-D0h]
  int v62; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE *v63; // [rsp+18h] [rbp-C0h]
  __int64 v64; // [rsp+20h] [rbp-B8h]
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v67[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v68; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-80h]
  __int64 v70; // [rsp+60h] [rbp-78h]
  void *v71; // [rsp+70h] [rbp-68h]
  _BYTE v72[16]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v73; // [rsp+90h] [rbp-48h]

  sub_228D770(a4, a5);
  result = sub_100C260(a1, a2, a3, (__int64)a4, a5, a6);
  if ( (_BYTE)result )
  {
    v61 = result;
    sub_228FE60(&v62, a4, a5, a1 + 216, a2);
    v10 = v63;
    v11 = v64;
    if ( v62 != 1 )
    {
      if ( v62 != 2 )
        return v61;
      sub_FA3370((__int64)&v68, a3, 0, 51);
      v12 = (unsigned __int8 *)v68;
      if ( !v68 )
      {
        v43 = v69;
        v44 = *(_DWORD *)(v69 + 14976);
        if ( v44 )
        {
          v50 = (unsigned int)(v44 - 1);
          *(_DWORD *)(v69 + 14976) = v50;
          v12 = *(unsigned __int8 **)(v43 + 8 * v50 + 14848);
          v51 = *((unsigned int *)v12 + 134);
          *v12 = 0;
          v52 = *((_QWORD *)v12 + 66);
          *((_DWORD *)v12 + 106) = 0;
          v53 = v52 + (v51 << 6);
          while ( v52 != v53 )
          {
            while ( 1 )
            {
              v53 -= 64;
              v54 = *(void **)(v53 + 24);
              if ( v54 == (void *)(v53 + 40) )
                break;
              operator delete(v54);
              if ( v52 == v53 )
                goto LABEL_93;
            }
          }
LABEL_93:
          *((_DWORD *)v12 + 134) = 0;
        }
        else
        {
          v12 = (unsigned __int8 *)operator new(0x3A0u);
          *v12 = 0;
          *((_QWORD *)v12 + 12) = v12 + 112;
          *((_QWORD *)v12 + 16) = v12 + 144;
          *((_QWORD *)v12 + 20) = v12 + 176;
          *((_QWORD *)v12 + 24) = v12 + 208;
          *((_QWORD *)v12 + 28) = v12 + 240;
          *((_QWORD *)v12 + 32) = v12 + 272;
          *((_QWORD *)v12 + 36) = v12 + 304;
          *((_QWORD *)v12 + 40) = v12 + 336;
          *((_QWORD *)v12 + 44) = v12 + 368;
          *((_QWORD *)v12 + 48) = v12 + 400;
          *((_QWORD *)v12 + 52) = v12 + 432;
          *((_QWORD *)v12 + 13) = 0;
          v12[112] = 0;
          *((_QWORD *)v12 + 17) = 0;
          v12[144] = 0;
          *((_QWORD *)v12 + 21) = 0;
          v12[176] = 0;
          *((_QWORD *)v12 + 25) = 0;
          v12[208] = 0;
          *((_QWORD *)v12 + 29) = 0;
          v12[240] = 0;
          *((_QWORD *)v12 + 33) = 0;
          v12[272] = 0;
          *((_QWORD *)v12 + 37) = 0;
          v12[304] = 0;
          *((_QWORD *)v12 + 41) = 0;
          v12[336] = 0;
          *((_QWORD *)v12 + 45) = 0;
          v12[368] = 0;
          *((_QWORD *)v12 + 49) = 0;
          v12[400] = 0;
          *((_QWORD *)v12 + 53) = 0x800000000LL;
          *((_QWORD *)v12 + 66) = v12 + 544;
          *((_QWORD *)v12 + 67) = 0x600000000LL;
        }
        v68 = v12;
      }
      v12[*v12 + 1] = 0;
      src = v67;
      sub_1045340(&src, v10, (__int64)&v10[v11]);
      v13 = v68;
      v14 = *(unsigned __int8 *)v68;
      *(_BYTE *)v68 = v14 + 1;
      v15 = (unsigned __int8)v14;
      v16 = 4 * (v14 + 3);
      v17 = (void **)&v13[v16];
      v18 = (_BYTE *)v13[v16];
      if ( src == v67 )
      {
        v45 = n;
        if ( n )
        {
          if ( n == 1 )
            *v18 = v67[0];
          else
            memcpy(v18, src, n);
          v45 = n;
          v18 = *v17;
        }
        v17[1] = (void *)v45;
        v18[v45] = 0;
        v18 = src;
      }
      else
      {
        if ( v18 == (_BYTE *)&v13[v16 + 2] )
        {
          *v17 = src;
          v17[1] = (void *)n;
          v17[2] = (void *)v67[0];
        }
        else
        {
          v19 = v13[4 * v15 + 14];
          *v17 = src;
          v17[1] = (void *)n;
          v17[2] = (void *)v67[0];
          if ( v18 )
          {
            src = v18;
            v67[0] = v19;
            goto LABEL_9;
          }
        }
        v18 = v67;
        src = v67;
      }
LABEL_9:
      n = 0;
      *v18 = 0;
      if ( src != v67 )
        operator delete(src);
      if ( (_BYTE)v73 )
      {
        sub_FA3A50(v70, (__int64)&v68, SHIBYTE(v73));
        v70 = 0;
        v73 = 0;
      }
      if ( v71 != v72 )
        operator delete(v71);
      v20 = (void **)v68;
      if ( !v68 )
        return 0;
      v21 = v69;
      if ( !v69 )
        return 0;
      if ( (unsigned __int64)v68 < v69 || (unsigned __int64)v68 > v69 + 14848 )
      {
        v22 = *((void ***)v68 + 66);
        v23 = &v22[8 * (unsigned __int64)*((unsigned int *)v68 + 134)];
        if ( v22 != v23 )
        {
          do
          {
            while ( 1 )
            {
              v23 -= 8;
              v24 = (void **)v23[3];
              if ( v24 == v23 + 5 )
                break;
              operator delete(v24);
              if ( v22 == v23 )
                goto LABEL_22;
            }
          }
          while ( v22 != v23 );
LABEL_22:
          v23 = (void **)v20[66];
        }
        if ( v23 != v20 + 68 )
          free(v23);
        v25 = (void **)v20[52];
        if ( v25 != v20 + 54 )
          free(v25);
        v26 = v20 + 48;
        v27 = v20 + 8;
        do
        {
          while ( *v26 != v26 + 2 )
          {
            operator delete(*v26);
            v26 -= 4;
            if ( v26 == v27 )
              goto LABEL_30;
          }
          v26 -= 4;
        }
        while ( v27 != v26 );
LABEL_30:
        operator delete(v20, 0x3A0u);
        return 0;
      }
LABEL_85:
      v47 = *(unsigned int *)(v21 + 14976);
      *(_DWORD *)(v21 + 14976) = v47 + 1;
      *(_QWORD *)(v21 + 8 * v47 + 14848) = v20;
      return 0;
    }
    sub_FA3370((__int64)&v68, a3, 0, 25);
    v28 = (unsigned __int8 *)v68;
    if ( !v68 )
    {
      v48 = v69;
      v49 = *(_DWORD *)(v69 + 14976);
      if ( v49 )
      {
        v55 = (unsigned int)(v49 - 1);
        *(_DWORD *)(v69 + 14976) = v55;
        v28 = *(unsigned __int8 **)(v48 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v28 + 134);
        *v28 = 0;
        v57 = *((_QWORD *)v28 + 66);
        *((_DWORD *)v28 + 106) = 0;
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
              goto LABEL_98;
          }
        }
LABEL_98:
        *((_DWORD *)v28 + 134) = 0;
      }
      else
      {
        v28 = (unsigned __int8 *)operator new(0x3A0u);
        *v28 = 0;
        *((_QWORD *)v28 + 12) = v28 + 112;
        *((_QWORD *)v28 + 16) = v28 + 144;
        *((_QWORD *)v28 + 20) = v28 + 176;
        *((_QWORD *)v28 + 24) = v28 + 208;
        *((_QWORD *)v28 + 28) = v28 + 240;
        *((_QWORD *)v28 + 32) = v28 + 272;
        *((_QWORD *)v28 + 36) = v28 + 304;
        *((_QWORD *)v28 + 40) = v28 + 336;
        *((_QWORD *)v28 + 44) = v28 + 368;
        *((_QWORD *)v28 + 48) = v28 + 400;
        *((_QWORD *)v28 + 52) = v28 + 432;
        *((_QWORD *)v28 + 13) = 0;
        v28[112] = 0;
        *((_QWORD *)v28 + 17) = 0;
        v28[144] = 0;
        *((_QWORD *)v28 + 21) = 0;
        v28[176] = 0;
        *((_QWORD *)v28 + 25) = 0;
        v28[208] = 0;
        *((_QWORD *)v28 + 29) = 0;
        v28[240] = 0;
        *((_QWORD *)v28 + 33) = 0;
        v28[272] = 0;
        *((_QWORD *)v28 + 37) = 0;
        v28[304] = 0;
        *((_QWORD *)v28 + 41) = 0;
        v28[336] = 0;
        *((_QWORD *)v28 + 45) = 0;
        v28[368] = 0;
        *((_QWORD *)v28 + 49) = 0;
        v28[400] = 0;
        *((_QWORD *)v28 + 53) = 0x800000000LL;
        *((_QWORD *)v28 + 66) = v28 + 544;
        *((_QWORD *)v28 + 67) = 0x600000000LL;
      }
      v68 = v28;
    }
    v28[*v28 + 1] = 0;
    src = v67;
    sub_1045340(&src, v10, (__int64)&v10[v11]);
    v29 = v68;
    v30 = *(unsigned __int8 *)v68;
    *(_BYTE *)v68 = v30 + 1;
    v31 = (unsigned __int8)v30;
    v32 = 4 * (v30 + 3);
    v33 = (void **)&v29[v32];
    v34 = (_BYTE *)v29[v32];
    if ( src == v67 )
    {
      v46 = n;
      if ( n )
      {
        if ( n == 1 )
          *v34 = v67[0];
        else
          memcpy(v34, src, n);
        v46 = n;
        v34 = *v33;
      }
      v33[1] = (void *)v46;
      v34[v46] = 0;
      v34 = src;
    }
    else
    {
      if ( v34 == (_BYTE *)&v29[v32 + 2] )
      {
        *v33 = src;
        v33[1] = (void *)n;
        v33[2] = (void *)v67[0];
      }
      else
      {
        v35 = v29[4 * v31 + 14];
        *v33 = src;
        v33[1] = (void *)n;
        v33[2] = (void *)v67[0];
        if ( v34 )
        {
          src = v34;
          v67[0] = v35;
          goto LABEL_38;
        }
      }
      v34 = v67;
      src = v67;
    }
LABEL_38:
    n = 0;
    *v34 = 0;
    if ( src != v67 )
      operator delete(src);
    if ( (_BYTE)v73 )
    {
      sub_FA3A50(v70, (__int64)&v68, SHIBYTE(v73));
      v70 = 0;
      v73 = 0;
    }
    if ( v71 != v72 )
      operator delete(v71);
    v20 = (void **)v68;
    if ( !v68 )
      return 0;
    v21 = v69;
    if ( !v69 )
      return 0;
    if ( (unsigned __int64)v68 < v69 || (unsigned __int64)v68 > v69 + 14848 )
    {
      v36 = *((void ***)v68 + 66);
      v37 = &v36[8 * (unsigned __int64)*((unsigned int *)v68 + 134)];
      if ( v36 != v37 )
      {
        do
        {
          while ( 1 )
          {
            v37 -= 8;
            v38 = (void **)v37[3];
            if ( v38 == v37 + 5 )
              break;
            operator delete(v38);
            if ( v36 == v37 )
              goto LABEL_51;
          }
        }
        while ( v36 != v37 );
LABEL_51:
        v37 = (void **)v20[66];
      }
      if ( v37 != v20 + 68 )
        free(v37);
      v39 = (void **)v20[52];
      v40 = v20 + 52;
      if ( v39 != v20 + 54 )
        free(v39);
      v41 = v20 + 12;
      while ( 1 )
      {
        v40 -= 4;
        v42 = *v40;
        if ( *v40 != v40 + 2 )
          break;
LABEL_60:
        if ( v40 == v41 )
          goto LABEL_30;
      }
      while ( 1 )
      {
        operator delete(v42);
        if ( v40 == v41 )
          goto LABEL_30;
        v40 -= 4;
        v42 = *v40;
        if ( *v40 == v40 + 2 )
          goto LABEL_60;
      }
    }
    goto LABEL_85;
  }
  return result;
}

