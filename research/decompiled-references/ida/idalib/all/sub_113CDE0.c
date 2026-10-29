void __fastcall sub_113CDE0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v4; // r12
  _BYTE *v5; // rsi
  void *v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void **v11; // r13
  _BYTE *v12; // rdi
  __int64 v13; // rax
  void **v14; // rbp
  unsigned __int64 v15; // rax
  void **v16; // r12
  void **v17; // rbx
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbx
  void **v21; // r12
  size_t v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // r13
  void *v30; // rdi
  _BYTE *v31; // [rsp+8h] [rbp-D0h]
  void *v32[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-B8h] BYREF
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v37; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-78h]
  void *v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+80h] [rbp-58h] BYREF
  __int16 v42; // [rsp+90h] [rbp-48h]

  sub_FC70B0((__int64)&v37, *a1, 0, 333);
  sub_21B5FF0(v32, a2, a3);
  v4 = (unsigned __int8 *)v37;
  v5 = v32[0];
  v6 = v32[1];
  if ( !v37 )
  {
    v24 = v38;
    v25 = *(_DWORD *)(v38 + 14976);
    if ( v25 )
    {
      v26 = (unsigned int)(v25 - 1);
      *(_DWORD *)(v38 + 14976) = v26;
      v4 = *(unsigned __int8 **)(v24 + 8 * v26 + 14848);
      v27 = *((unsigned int *)v4 + 134);
      v28 = *((_QWORD *)v4 + 66);
      *v4 = 0;
      *((_DWORD *)v4 + 106) = 0;
      v29 = v28 + (v27 << 6);
      while ( v28 != v29 )
      {
        while ( 1 )
        {
          v29 -= 64;
          v30 = *(void **)(v29 + 24);
          if ( v30 == (void *)(v29 + 40) )
            break;
          operator delete(v30);
          if ( v28 == v29 )
            goto LABEL_50;
        }
      }
LABEL_50:
      *((_DWORD *)v4 + 134) = 0;
    }
    else
    {
      v31 = v32[0];
      v4 = (unsigned __int8 *)operator new(0x3A0u);
      *v4 = 0;
      *((_QWORD *)v4 + 12) = v4 + 112;
      *((_QWORD *)v4 + 16) = v4 + 144;
      *((_QWORD *)v4 + 20) = v4 + 176;
      *((_QWORD *)v4 + 24) = v4 + 208;
      *((_QWORD *)v4 + 28) = v4 + 240;
      *((_QWORD *)v4 + 32) = v4 + 272;
      *((_QWORD *)v4 + 36) = v4 + 304;
      *((_QWORD *)v4 + 40) = v4 + 336;
      *((_QWORD *)v4 + 44) = v4 + 368;
      *((_QWORD *)v4 + 48) = v4 + 400;
      *((_QWORD *)v4 + 52) = v4 + 432;
      *((_QWORD *)v4 + 13) = 0;
      v4[112] = 0;
      *((_QWORD *)v4 + 17) = 0;
      v4[144] = 0;
      *((_QWORD *)v4 + 21) = 0;
      v4[176] = 0;
      *((_QWORD *)v4 + 25) = 0;
      v4[208] = 0;
      *((_QWORD *)v4 + 29) = 0;
      v4[240] = 0;
      *((_QWORD *)v4 + 33) = 0;
      v4[272] = 0;
      *((_QWORD *)v4 + 37) = 0;
      v4[304] = 0;
      *((_QWORD *)v4 + 41) = 0;
      v4[336] = 0;
      *((_QWORD *)v4 + 45) = 0;
      v4[368] = 0;
      *((_QWORD *)v4 + 49) = 0;
      v4[400] = 0;
      *((_QWORD *)v4 + 53) = 0x800000000LL;
      v5 = v31;
      *((_QWORD *)v4 + 66) = v4 + 544;
      *((_QWORD *)v4 + 67) = 0x600000000LL;
    }
    v37 = v4;
  }
  v4[*v4 + 1] = 0;
  src = v36;
  sub_113C3F0(&src, v5, (__int64)v6 + (_QWORD)v5);
  v7 = v37;
  v8 = *(unsigned __int8 *)v37;
  *(_BYTE *)v37 = v8 + 1;
  v9 = (unsigned __int8)v8;
  v10 = 4 * (v8 + 3);
  v11 = (void **)&v7[v10];
  v12 = (_BYTE *)v7[v10];
  if ( src == v36 )
  {
    v22 = n;
    if ( n )
    {
      if ( n == 1 )
        *v12 = v36[0];
      else
        memcpy(v12, src, n);
      v22 = n;
      v12 = *v11;
    }
    v11[1] = (void *)v22;
    v12[v22] = 0;
    v12 = src;
  }
  else
  {
    if ( v12 == (_BYTE *)&v7[v10 + 2] )
    {
      *v11 = src;
      v11[1] = (void *)n;
      v11[2] = (void *)v36[0];
    }
    else
    {
      v13 = v7[4 * v9 + 14];
      *v11 = src;
      v11[1] = (void *)n;
      v11[2] = (void *)v36[0];
      if ( v12 )
      {
        src = v12;
        v36[0] = v13;
        goto LABEL_6;
      }
    }
    v12 = v36;
    src = v36;
  }
LABEL_6:
  n = 0;
  *v12 = 0;
  if ( src != v36 )
    operator delete(src);
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
  if ( (_BYTE)v42 )
  {
    sub_FC7790(v39, (__int64 *)&v37, SHIBYTE(v42));
    v39 = 0;
    v42 = 0;
  }
  if ( v40 != &v41 )
    operator delete(v40);
  v14 = (void **)v37;
  if ( v37 )
  {
    v15 = v38;
    if ( v38 )
    {
      if ( (unsigned __int64)v37 < v38 || (unsigned __int64)v37 > v38 + 14848 )
      {
        v16 = *((void ***)v37 + 66);
        v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v37 + 134)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 8;
              v18 = (void **)v17[3];
              if ( v18 == v17 + 5 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_20;
            }
          }
          while ( v16 != v17 );
LABEL_20:
          v17 = (void **)v14[66];
        }
        if ( v17 != v14 + 68 )
          free(v17);
        v19 = (void **)v14[52];
        if ( v19 != v14 + 54 )
          free(v19);
        v20 = v14 + 48;
        v21 = v14 + 8;
        do
        {
          while ( *v20 != v20 + 2 )
          {
            operator delete(*v20);
            v20 -= 4;
            if ( v20 == v21 )
              goto LABEL_28;
          }
          v20 -= 4;
        }
        while ( v20 != v21 );
LABEL_28:
        operator delete(v14, 0x3A0u);
      }
      else
      {
        v23 = *(unsigned int *)(v38 + 14976);
        *(_DWORD *)(v38 + 14976) = v23 + 1;
        *(_QWORD *)(v15 + 8 * v23 + 14848) = v14;
      }
    }
  }
}
