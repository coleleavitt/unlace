void __fastcall sub_1232E70(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r12
  _BYTE *v4; // rsi
  void *v5; // r14
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  void **v10; // r13
  _BYTE *v11; // rdi
  __int64 v12; // rax
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  size_t v21; // rdx
  unsigned __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r13
  void *v28; // rdi
  __int64 v29; // rdx
  _BYTE *v30; // [rsp+0h] [rbp-E0h]
  __int64 v31; // [rsp+10h] [rbp-D0h] BYREF
  void *v32[2]; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+28h] [rbp-B8h] BYREF
  void *src; // [rsp+38h] [rbp-A8h] BYREF
  size_t n; // [rsp+40h] [rbp-A0h]
  _QWORD v36[2]; // [rsp+48h] [rbp-98h] BYREF
  void *v37; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-80h]
  __int64 v39; // [rsp+68h] [rbp-78h]
  void *v40; // [rsp+78h] [rbp-68h]
  __int64 v41; // [rsp+88h] [rbp-58h] BYREF
  __int16 v42; // [rsp+98h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 20) )
    return;
  sub_FC70B0((__int64)&v37, ***(_QWORD ***)a1, 0, *(_DWORD *)(a1 + 16));
  v2 = *a2;
  *a2 = 0;
  v31 = v2;
  sub_2221210(v32, &v31);
  v3 = (unsigned __int8 *)v37;
  v4 = v32[0];
  v5 = v32[1];
  if ( !v37 )
  {
    v22 = v38;
    v23 = *(_DWORD *)(v38 + 14976);
    if ( v23 )
    {
      v24 = (unsigned int)(v23 - 1);
      *(_DWORD *)(v38 + 14976) = v24;
      v3 = *(unsigned __int8 **)(v22 + 8 * v24 + 14848);
      v25 = *((unsigned int *)v3 + 134);
      v26 = *((_QWORD *)v3 + 66);
      *v3 = 0;
      *((_DWORD *)v3 + 106) = 0;
      v27 = v26 + (v25 << 6);
      while ( v26 != v27 )
      {
        while ( 1 )
        {
          v27 -= 64;
          v28 = *(void **)(v27 + 24);
          if ( v28 == (void *)(v27 + 40) )
            break;
          operator delete(v28);
          if ( v26 == v27 )
            goto LABEL_50;
        }
      }
LABEL_50:
      *((_DWORD *)v3 + 134) = 0;
    }
    else
    {
      v30 = v32[0];
      v3 = (unsigned __int8 *)operator new(0x3A0u);
      *v3 = 0;
      *((_QWORD *)v3 + 12) = v3 + 112;
      *((_QWORD *)v3 + 16) = v3 + 144;
      *((_QWORD *)v3 + 20) = v3 + 176;
      *((_QWORD *)v3 + 24) = v3 + 208;
      *((_QWORD *)v3 + 28) = v3 + 240;
      *((_QWORD *)v3 + 32) = v3 + 272;
      *((_QWORD *)v3 + 36) = v3 + 304;
      *((_QWORD *)v3 + 40) = v3 + 336;
      *((_QWORD *)v3 + 44) = v3 + 368;
      *((_QWORD *)v3 + 48) = v3 + 400;
      *((_QWORD *)v3 + 52) = v3 + 432;
      *((_QWORD *)v3 + 13) = 0;
      v3[112] = 0;
      *((_QWORD *)v3 + 17) = 0;
      v3[144] = 0;
      *((_QWORD *)v3 + 21) = 0;
      v3[176] = 0;
      *((_QWORD *)v3 + 25) = 0;
      v3[208] = 0;
      *((_QWORD *)v3 + 29) = 0;
      v3[240] = 0;
      *((_QWORD *)v3 + 33) = 0;
      v3[272] = 0;
      *((_QWORD *)v3 + 37) = 0;
      v3[304] = 0;
      *((_QWORD *)v3 + 41) = 0;
      v3[336] = 0;
      *((_QWORD *)v3 + 45) = 0;
      v3[368] = 0;
      *((_QWORD *)v3 + 49) = 0;
      v3[400] = 0;
      *((_QWORD *)v3 + 53) = 0x800000000LL;
      v4 = v30;
      *((_QWORD *)v3 + 66) = v3 + 544;
      *((_QWORD *)v3 + 67) = 0x600000000LL;
    }
    v37 = v3;
  }
  v3[*v3 + 1] = 0;
  src = v36;
  sub_1232590(&src, v4, (__int64)v5 + (_QWORD)v4);
  v6 = v37;
  v7 = *(unsigned __int8 *)v37;
  *(_BYTE *)v37 = v7 + 1;
  v8 = (unsigned __int8)v7;
  v9 = 4 * (v7 + 3);
  v10 = (void **)&v6[v9];
  v11 = (_BYTE *)v6[v9];
  if ( src == v36 )
  {
    v21 = n;
    if ( n )
    {
      if ( n == 1 )
        *v11 = v36[0];
      else
        memcpy(v11, src, n);
      v21 = n;
      v11 = *v10;
    }
    v10[1] = (void *)v21;
    v11[v21] = 0;
    v11 = src;
  }
  else
  {
    if ( v11 == (_BYTE *)&v6[v9 + 2] )
    {
      *v10 = src;
      v10[1] = (void *)n;
      v10[2] = (void *)v36[0];
    }
    else
    {
      v12 = v6[4 * v8 + 14];
      *v10 = src;
      v10[1] = (void *)n;
      v10[2] = (void *)v36[0];
      if ( v11 )
      {
        src = v11;
        v36[0] = v12;
        goto LABEL_7;
      }
    }
    v11 = v36;
    src = v36;
  }
LABEL_7:
  n = 0;
  *v11 = 0;
  if ( src != v36 )
    operator delete(src);
  if ( v32[0] != &v33 )
    operator delete(v32[0]);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  if ( (_BYTE)v42 )
  {
    sub_FC7790(v39, (__int64 *)&v37, SHIBYTE(v42));
    v39 = 0;
    v42 = 0;
  }
  if ( v40 != &v41 )
    operator delete(v40);
  v13 = (void **)v37;
  if ( v37 )
  {
    v14 = v38;
    if ( v38 )
    {
      if ( (unsigned __int64)v37 >= v38 && (unsigned __int64)v37 <= v38 + 14848 )
      {
        v29 = *(unsigned int *)(v38 + 14976);
        *(_DWORD *)(v38 + 14976) = v29 + 1;
        *(_QWORD *)(v14 + 8 * v29 + 14848) = v13;
      }
      else
      {
        v15 = *((void ***)v37 + 66);
        v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v37 + 134)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 8;
              v17 = (void **)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_24;
            }
          }
          while ( v15 != v16 );
LABEL_24:
          v16 = (void **)v13[66];
        }
        if ( v16 != v13 + 68 )
          free(v16);
        v18 = (void **)v13[52];
        if ( v18 != v13 + 54 )
          free(v18);
        v19 = v13 + 48;
        v20 = v13 + 8;
        do
        {
          while ( *v19 != v19 + 2 )
          {
            operator delete(*v19);
            v19 -= 4;
            if ( v19 == v20 )
              goto LABEL_32;
          }
          v19 -= 4;
        }
        while ( v19 != v20 );
LABEL_32:
        operator delete(v13, 0x3A0u);
      }
    }
  }
}
