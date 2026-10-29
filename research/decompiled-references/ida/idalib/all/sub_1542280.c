void __fastcall sub_1542280(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rdi
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  _BYTE *v13; // r14
  signed __int64 v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r12
  _BYTE *v21; // rdi
  __int64 v22; // rax
  void **v23; // rbp
  unsigned __int64 v24; // rax
  void **v25; // r12
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // r13
  void *v39; // rdi
  _QWORD *src; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+8h] [rbp-A0h]
  _QWORD v42[2]; // [rsp+10h] [rbp-98h] BYREF
  void *v43; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+30h] [rbp-78h]
  void *v46; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int16 v48; // [rsp+60h] [rbp-48h]

  v3 = a1[1];
  v4 = (_QWORD *)*a1;
  v5 = v3 - *(_QWORD *)(*(_QWORD *)(*v4 + 24LL * ((unsigned int)sub_2239B50(*a1, v3) - 1)) + 8LL);
  v6 = (4LL * *(_QWORD *)(a2 + 64)) >> 2;
  if ( 4LL * *(_QWORD *)(a2 + 64) <= 0 )
  {
    v7 = *(_DWORD **)(a2 + 56);
  }
  else
  {
    v7 = *(_DWORD **)(a2 + 56);
    do
    {
      while ( 1 )
      {
        v8 = v6 >> 1;
        v9 = &v7[v6 >> 1];
        if ( (unsigned int)v5 <= *v9 )
          break;
        v7 = v9 + 1;
        v6 = v6 - v8 - 1;
        if ( v6 <= 0 )
          goto LABEL_5;
      }
      v6 >>= 1;
    }
    while ( v8 );
  }
LABEL_5:
  v10 = *(unsigned int *)(a2 + 16);
  v11 = (unsigned int)(((__int64)v7 - *(_QWORD *)(a2 + 56)) >> 2);
  if ( v11 < *(_QWORD *)(a2 + 48) )
    v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 40) + 24 * v11) + v5 - *v7);
  sub_1564820(&v43, *(_QWORD *)(a2 + 8), v10, 1706);
  v12 = (unsigned __int8 *)v43;
  v13 = (_BYTE *)a1[8];
  v14 = a1[9];
  if ( !v43 )
  {
    v33 = v44;
    v34 = *(_DWORD *)(v44 + 14976);
    if ( v34 )
    {
      v35 = (unsigned int)(v34 - 1);
      *(_DWORD *)(v44 + 14976) = v35;
      v12 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
      v36 = *((unsigned int *)v12 + 134);
      *v12 = 0;
      v37 = *((_QWORD *)v12 + 66);
      *((_DWORD *)v12 + 106) = 0;
      v38 = v37 + (v36 << 6);
      while ( v37 != v38 )
      {
        while ( 1 )
        {
          v38 -= 64;
          v39 = *(void **)(v38 + 24);
          if ( v39 == (void *)(v38 + 40) )
            break;
          operator delete(v39);
          if ( v37 == v38 )
            goto LABEL_67;
        }
      }
LABEL_67:
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
    v43 = v12;
  }
  v12[*v12 + 1] = 0;
  src = v42;
  if ( &v13[v14] && !v13 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v15 = (_QWORD *)operator new(v14 + 1);
    v42[0] = v14;
    src = v15;
LABEL_49:
    memcpy(v15, v13, v14);
    v15 = src;
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    LOBYTE(v42[0]) = *v13;
    v15 = v42;
    goto LABEL_13;
  }
  v15 = v42;
  if ( v14 )
    goto LABEL_49;
LABEL_13:
  n = v14;
  *((_BYTE *)v15 + v14) = 0;
  v16 = v43;
  v17 = *(unsigned __int8 *)v43;
  *(_BYTE *)v43 = v17 + 1;
  v18 = (unsigned __int8)v17;
  v19 = 4 * (v17 + 3);
  v20 = &v16[v19];
  v21 = (_BYTE *)v16[v19];
  if ( src == v42 )
  {
    v31 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *v21 = v42[0];
        v31 = 1;
      }
      else
      {
        memcpy(v21, src, n);
        v31 = n;
      }
      v21 = (_BYTE *)*v20;
    }
    v20[1] = v31;
    v21[v31] = 0;
    v21 = src;
  }
  else
  {
    if ( v21 == (_BYTE *)&v16[v19 + 2] )
    {
      *v20 = src;
      v20[1] = n;
      v20[2] = v42[0];
    }
    else
    {
      v22 = v16[4 * v18 + 14];
      *v20 = src;
      v20[1] = n;
      v20[2] = v42[0];
      if ( v21 )
      {
        src = v21;
        v42[0] = v22;
        goto LABEL_17;
      }
    }
    v21 = v42;
    src = v42;
  }
LABEL_17:
  *v21 = 0;
  if ( src != v42 )
    operator delete(src);
  if ( (_BYTE)v48 )
  {
    sub_FC7790(v45, (__int64 *)&v43, SHIBYTE(v48));
    v45 = 0;
    v48 = 0;
  }
  if ( v46 != &v47 )
    operator delete(v46);
  v23 = (void **)v43;
  if ( v43 )
  {
    v24 = v44;
    if ( v44 )
    {
      if ( (unsigned __int64)v43 < v44 || (unsigned __int64)v43 > v44 + 14848 )
      {
        v25 = *((void ***)v43 + 66);
        v26 = &v25[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
        if ( v25 != v26 )
        {
          do
          {
            while ( 1 )
            {
              v26 -= 8;
              v27 = (void **)v26[3];
              if ( v27 == v26 + 5 )
                break;
              operator delete(v27);
              if ( v25 == v26 )
                goto LABEL_29;
            }
          }
          while ( v25 != v26 );
LABEL_29:
          v26 = (void **)v23[66];
        }
        if ( v26 != v23 + 68 )
          free(v26);
        v28 = (void **)v23[52];
        if ( v28 != v23 + 54 )
          free(v28);
        v29 = v23 + 48;
        v30 = v23 + 8;
        do
        {
          while ( *v29 != v29 + 2 )
          {
            operator delete(*v29);
            v29 -= 4;
            if ( v29 == v30 )
              goto LABEL_37;
          }
          v29 -= 4;
        }
        while ( v29 != v30 );
LABEL_37:
        operator delete(v23, 0x3A0u);
      }
      else
      {
        v32 = *(unsigned int *)(v44 + 14976);
        *(_DWORD *)(v44 + 14976) = v32 + 1;
        *(_QWORD *)(v24 + 8 * v32 + 14848) = v23;
      }
    }
  }
}
