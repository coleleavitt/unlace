void __fastcall sub_117A160(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r14
  __int64 *v6; // r13
  void *v7; // r9
  char *v8; // r15
  int v9; // eax
  char *v10; // rax
  char v11; // r14
  size_t v12; // rdx
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 *v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  void **v19; // r8
  _BYTE *v20; // rdi
  __int64 v21; // rax
  unsigned __int8 *v22; // r15
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rdi
  void **v26; // r14
  unsigned __int64 v27; // rax
  void **v28; // r15
  void **v29; // r13
  void **v30; // rdi
  void **v31; // rdi
  void **v32; // r13
  void **v33; // r15
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rcx
  char *v43; // rax
  char *v44; // rdi
  unsigned __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  void *v51; // rdi
  void *s1; // [rsp+0h] [rbp-108h]
  void **s1a; // [rsp+0h] [rbp-108h]
  char *s1b; // [rsp+0h] [rbp-108h]
  _BYTE *s1c; // [rsp+0h] [rbp-108h]
  char *v56; // [rsp+8h] [rbp-100h]
  char *v57; // [rsp+8h] [rbp-100h]
  __int64 v58; // [rsp+8h] [rbp-100h]
  __int64 v59; // [rsp+8h] [rbp-100h]
  char *v60; // [rsp+10h] [rbp-F8h]
  __int64 v61; // [rsp+10h] [rbp-F8h]
  __int64 v62; // [rsp+18h] [rbp-F0h]
  void *s2[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+30h] [rbp-D8h] BYREF
  void *v65; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+48h] [rbp-C0h]
  __int64 v67; // [rsp+50h] [rbp-B8h] BYREF
  void *src; // [rsp+60h] [rbp-A8h] BYREF
  size_t v69; // [rsp+68h] [rbp-A0h]
  _QWORD v70[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v71; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp-80h]
  __int64 v73; // [rsp+90h] [rbp-78h]
  void *v74; // [rsp+A0h] [rbp-68h]
  __int64 v75; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v76; // [rsp+C0h] [rbp-48h]

  v3 = &off_2BA9C40;
  v6 = *(__int64 **)(a1 + 8);
  sub_11C8180(s2, v6, a2, a1 + 16, 0);
  v7 = s2[0];
  v8 = (char *)s2[1];
  do
  {
    if ( v8 == v3[1] )
    {
      if ( !v8 || (s1 = v7, v9 = memcmp(*v3, v7, (size_t)v8), v7 = s1, !v9) )
      {
        v60 = v3[4];
        v10 = v3[5];
        v11 = 1;
        v56 = v10;
        goto LABEL_7;
      }
    }
    v3 += 7;
  }
  while ( v3 != (char **)&unk_2BAEB70 );
  v11 = 0;
LABEL_7:
  v12 = 4;
  if ( (unsigned __int64)v8 <= 4 )
    v12 = (size_t)v8;
  if ( (!v8 || !memcmp(v7, "avr1", v12))
    && (__int64)(v8 - 4) <= 0x7FFFFFFF
    && (__int64)(v8 - 4) >= (__int64)0xFFFFFFFF80000000LL
    && (_DWORD)v8 == 4
    || v11 && v56 == &byte_4 && *(_DWORD *)v60 == 829584993 )
  {
    sub_FC70B0((__int64)&v71, *v6, 0, 453);
    sub_C05100((__int64)&v65, "-mmcu=", (__int64)s2);
    v13 = v65;
    v14 = v66;
    v15 = (unsigned __int8 *)v71;
    if ( !v71 )
    {
      v45 = v72;
      v46 = *(_DWORD *)(v72 + 14976);
      if ( v46 )
      {
        v47 = (unsigned int)(v46 - 1);
        *(_DWORD *)(v72 + 14976) = v47;
        v15 = *(unsigned __int8 **)(v45 + 8 * v47 + 14848);
        v48 = *((unsigned int *)v15 + 134);
        *v15 = 0;
        v49 = *((_QWORD *)v15 + 66);
        *((_DWORD *)v15 + 106) = 0;
        v50 = v49 + (v48 << 6);
        while ( v49 != v50 )
        {
          while ( 1 )
          {
            v50 -= 64;
            v51 = *(void **)(v50 + 24);
            if ( v51 == (void *)(v50 + 40) )
              break;
            v62 = v50;
            v61 = v49;
            v58 = v14;
            operator delete(v51);
            v49 = v61;
            v50 = v62;
            v14 = v58;
            if ( v61 == v62 )
              goto LABEL_80;
          }
        }
LABEL_80:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        v59 = v66;
        s1c = v65;
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
        v13 = s1c;
        *((_QWORD *)v15 + 66) = v15 + 544;
        v14 = v59;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      v71 = v15;
    }
    v15[*v15 + 1] = 0;
    src = v70;
    sub_1179C40(&src, v13, (__int64)&v13[v14]);
    v16 = v71;
    v17 = *(unsigned __int8 *)v71;
    *(_BYTE *)v71 = v17 + 1;
    v18 = 4 * (v17 + 3);
    v19 = (void **)&v16[v18];
    v20 = (_BYTE *)v16[v18];
    if ( src == v70 )
    {
      v36 = v69;
      if ( v69 )
      {
        if ( v69 == 1 )
        {
          *v20 = v70[0];
          v36 = v69;
          v20 = *v19;
        }
        else
        {
          s1a = v19;
          memcpy(v20, src, v69);
          v19 = s1a;
          v36 = v69;
          v20 = *s1a;
        }
      }
      v19[1] = (void *)v36;
      v20[v36] = 0;
      v20 = src;
      goto LABEL_27;
    }
    if ( v20 == (_BYTE *)&v16[v18 + 2] )
    {
      *v19 = src;
      v19[1] = (void *)v69;
      v19[2] = (void *)v70[0];
    }
    else
    {
      v21 = v16[4 * (int)v17 + 14];
      *v19 = src;
      v19[1] = (void *)v69;
      v19[2] = (void *)v70[0];
      if ( v20 )
      {
        src = v20;
        v70[0] = v21;
LABEL_27:
        v69 = 0;
        *v20 = 0;
        if ( src != v70 )
          operator delete(src);
        v22 = (unsigned __int8 *)v71;
        if ( !v71 )
        {
          v38 = v72;
          v39 = *(_DWORD *)(v72 + 14976);
          if ( v39 )
          {
            v40 = (unsigned int)(v39 - 1);
            *(_DWORD *)(v72 + 14976) = v40;
            v22 = *(unsigned __int8 **)(v38 + 8 * v40 + 14848);
            v41 = *((unsigned int *)v22 + 134);
            *v22 = 0;
            v42 = *((char **)v22 + 66);
            *((_DWORD *)v22 + 106) = 0;
            v43 = &v42[64 * v41];
            while ( v42 != v43 )
            {
              while ( 1 )
              {
                v43 -= 64;
                v44 = *((char **)v43 + 3);
                if ( v44 == v43 + 40 )
                  break;
                v57 = v43;
                s1b = v42;
                operator delete(v44);
                v42 = s1b;
                v43 = v57;
                if ( s1b == v57 )
                  goto LABEL_74;
              }
            }
LABEL_74:
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
          v71 = v22;
        }
        v22[*v22 + 1] = 1;
        v23 = v71;
        v24 = *(unsigned __int8 *)v71;
        *(_BYTE *)v71 = v24 + 1;
        v25 = (__int64 *)v65;
        v23[v24 + 2] = "c/c++";
        if ( v25 != &v67 )
          operator delete(v25);
        if ( (_BYTE)v76 )
        {
          sub_FC7790(v73, (__int64 *)&v71, SHIBYTE(v76));
          v73 = 0;
          v76 = 0;
        }
        if ( v74 != &v75 )
          operator delete(v74);
        v26 = (void **)v71;
        if ( v71 )
        {
          v27 = v72;
          if ( v72 )
          {
            if ( (unsigned __int64)v71 < v72 || (unsigned __int64)v71 > v72 + 14848 )
            {
              v28 = *((void ***)v71 + 66);
              v29 = &v28[8 * (unsigned __int64)*((unsigned int *)v71 + 134)];
              if ( v28 != v29 )
              {
                do
                {
                  while ( 1 )
                  {
                    v29 -= 8;
                    v30 = (void **)v29[3];
                    if ( v30 == v29 + 5 )
                      break;
                    operator delete(v30);
                    if ( v28 == v29 )
                      goto LABEL_42;
                  }
                }
                while ( v28 != v29 );
LABEL_42:
                v29 = (void **)v26[66];
              }
              if ( v29 != v26 + 68 )
                free(v29);
              v31 = (void **)v26[52];
              if ( v31 != v26 + 54 )
                free(v31);
              v32 = v26 + 48;
              v33 = v26 + 8;
              do
              {
                while ( *v32 != v32 + 2 )
                {
                  operator delete(*v32);
                  v32 -= 4;
                  if ( v32 == v33 )
                    goto LABEL_50;
                }
                v32 -= 4;
              }
              while ( v33 != v32 );
LABEL_50:
              operator delete(v26, 0x3A0u);
            }
            else
            {
              v37 = *(unsigned int *)(v72 + 14976);
              *(_DWORD *)(v72 + 14976) = v37 + 1;
              *(_QWORD *)(v27 + 8 * v37 + 14848) = v26;
            }
          }
        }
        goto LABEL_15;
      }
    }
    v20 = v70;
    src = v70;
    goto LABEL_27;
  }
LABEL_15:
  if ( !(unsigned __int8)sub_21B7850(a2, 1915, 1463, 0) )
  {
    v34 = *(unsigned int *)(a3 + 8);
    if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v34 + 1, 8);
      v34 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v34) = "-fno-use-init-array";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( !(unsigned __int8)sub_21B7850(a2, 1914, 1462, 0) )
  {
    v35 = *(unsigned int *)(a3 + 8);
    if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v35 + 1, 8);
      v35 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v35) = "-fno-use-cxa-atexit";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( s2[0] != &v64 )
    operator delete(s2[0]);
}
