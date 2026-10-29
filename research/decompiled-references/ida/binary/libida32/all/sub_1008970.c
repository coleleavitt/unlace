__int64 __fastcall sub_1008970(__int64 a1, int a2, __int64 a3)
{
  char *v4; // rax
  _BYTE *v5; // rsi
  void *v6; // r14
  unsigned __int8 *v7; // r12
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void **v12; // r13
  _BYTE *v13; // rdi
  __int64 v14; // rax
  void **v15; // rbp
  unsigned __int64 v16; // rax
  void **v17; // r12
  void **v18; // rbx
  void **v19; // rdi
  void **v20; // rdi
  void **v21; // rbx
  void **v22; // r12
  size_t v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r13
  void *v31; // rdi
  _BYTE *v32; // [rsp+0h] [rbp-100h]
  void *v33[2]; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-E8h] BYREF
  void *src; // [rsp+28h] [rbp-D8h] BYREF
  size_t n; // [rsp+30h] [rbp-D0h]
  _QWORD v37[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v38[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v39; // [rsp+68h] [rbp-98h]
  void *v40; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  void *v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v45; // [rsp+B8h] [rbp-48h]

  if ( !a2 )
    return 0;
  sub_FA3370((__int64)&v40, a3, 0, 51);
  if ( a2 == 1 )
  {
    v4 = "unlabeled";
  }
  else
  {
    if ( a2 != 2 )
      sub_21FDF30("invalid scheme", 1);
    v4 = "func-sig";
  }
  v38[2] = v4;
  v39 = 771;
  v38[0] = "mcf-branch-label-scheme=";
  sub_222F820(v33, v38);
  v5 = v33[0];
  v6 = v33[1];
  v7 = (unsigned __int8 *)v40;
  if ( !v40 )
  {
    v25 = v41;
    v26 = *(_DWORD *)(v41 + 14976);
    if ( v26 )
    {
      v27 = (unsigned int)(v26 - 1);
      *(_DWORD *)(v41 + 14976) = v27;
      v7 = *(unsigned __int8 **)(v25 + 8 * v27 + 14848);
      v28 = *((unsigned int *)v7 + 134);
      v29 = *((_QWORD *)v7 + 66);
      *v7 = 0;
      *((_DWORD *)v7 + 106) = 0;
      v30 = v29 + (v28 << 6);
      while ( v29 != v30 )
      {
        while ( 1 )
        {
          v30 -= 64;
          v31 = *(void **)(v30 + 24);
          if ( v31 == (void *)(v30 + 40) )
            break;
          operator delete(v31);
          if ( v29 == v30 )
            goto LABEL_54;
        }
      }
LABEL_54:
      *((_DWORD *)v7 + 134) = 0;
    }
    else
    {
      v32 = v33[0];
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
      v5 = v32;
      *((_QWORD *)v7 + 66) = v7 + 544;
      *((_QWORD *)v7 + 67) = 0x600000000LL;
    }
    v40 = v7;
  }
  v7[*v7 + 1] = 0;
  src = v37;
  sub_10080E0(&src, v5, (__int64)v6 + (_QWORD)v5);
  v8 = v40;
  v9 = *(unsigned __int8 *)v40;
  *(_BYTE *)v40 = v9 + 1;
  v10 = (unsigned __int8)v9;
  v11 = 4 * (v9 + 3);
  v12 = (void **)&v8[v11];
  v13 = (_BYTE *)v8[v11];
  if ( src == v37 )
  {
    v23 = n;
    if ( n )
    {
      if ( n == 1 )
        *v13 = v37[0];
      else
        memcpy(v13, src, n);
      v23 = n;
      v13 = *v12;
    }
    v12[1] = (void *)v23;
    v13[v23] = 0;
    v13 = src;
    goto LABEL_11;
  }
  if ( v13 == (_BYTE *)&v8[v11 + 2] )
  {
    *v12 = src;
    v12[1] = (void *)n;
    v12[2] = (void *)v37[0];
    goto LABEL_36;
  }
  v14 = v8[4 * v10 + 14];
  *v12 = src;
  v12[1] = (void *)n;
  v12[2] = (void *)v37[0];
  if ( !v13 )
  {
LABEL_36:
    v13 = v37;
    src = v37;
    goto LABEL_11;
  }
  src = v13;
  v37[0] = v14;
LABEL_11:
  n = 0;
  *v13 = 0;
  if ( src != v37 )
    operator delete(src);
  if ( v33[0] != &v34 )
    operator delete(v33[0]);
  if ( (_BYTE)v45 )
  {
    sub_FA3A50(v42, (__int64)&v40, SHIBYTE(v45));
    v42 = 0;
    v45 = 0;
  }
  if ( v43 != &v44 )
    operator delete(v43);
  v15 = (void **)v40;
  if ( v40 )
  {
    v16 = v41;
    if ( v41 )
    {
      if ( (unsigned __int64)v40 < v41 || (unsigned __int64)v40 > v41 + 14848 )
      {
        v17 = *((void ***)v40 + 66);
        v18 = &v17[8 * (unsigned __int64)*((unsigned int *)v40 + 134)];
        if ( v17 != v18 )
        {
          do
          {
            while ( 1 )
            {
              v18 -= 8;
              v19 = (void **)v18[3];
              if ( v19 == v18 + 5 )
                break;
              operator delete(v19);
              if ( v17 == v18 )
                goto LABEL_25;
            }
          }
          while ( v17 != v18 );
LABEL_25:
          v18 = (void **)v15[66];
        }
        if ( v18 != v15 + 68 )
          free(v18);
        v20 = (void **)v15[52];
        v21 = v15 + 52;
        if ( v20 != v15 + 54 )
          free(v20);
        v22 = v15 + 12;
        do
        {
          while ( 1 )
          {
            v21 -= 4;
            if ( *v21 == v21 + 2 )
              break;
            operator delete(*v21);
            if ( v21 == v22 )
              goto LABEL_33;
          }
        }
        while ( v21 != v22 );
LABEL_33:
        operator delete(v15, 0x3A0u);
      }
      else
      {
        v24 = *(unsigned int *)(v41 + 14976);
        *(_DWORD *)(v41 + 14976) = v24 + 1;
        *(_QWORD *)(v16 + 8 * v24 + 14848) = v15;
      }
    }
  }
  return 0;
}

