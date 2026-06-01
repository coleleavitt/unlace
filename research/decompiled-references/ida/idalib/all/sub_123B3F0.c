void __fastcall sub_123B3F0(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rax
  unsigned __int8 *v6; // r12
  _BYTE *v7; // r15
  signed __int64 v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r13
  _BYTE *v15; // rdi
  __int64 v16; // rax
  void **v17; // r12
  unsigned __int64 v18; // rax
  void **v19; // r13
  void **v20; // rbp
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbp
  void **v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r14
  void *v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-120h]
  _QWORD *v35; // [rsp+10h] [rbp-118h]
  size_t v36; // [rsp+18h] [rbp-110h]
  _QWORD v37[2]; // [rsp+20h] [rbp-108h] BYREF
  void *v38; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-F0h]
  __int64 v40; // [rsp+40h] [rbp-E8h]
  void *v41; // [rsp+50h] [rbp-D8h]
  __int64 v42; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v43; // [rsp+70h] [rbp-B8h]
  void *src[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+90h] [rbp-98h] BYREF
  char v46; // [rsp+A0h] [rbp-88h]
  void *v47; // [rsp+A8h] [rbp-80h]
  __int64 v48; // [rsp+B8h] [rbp-70h] BYREF
  char v49; // [rsp+C8h] [rbp-60h]
  void *ptr; // [rsp+D0h] [rbp-58h]
  int v51; // [rsp+D8h] [rbp-50h]
  int v52; // [rsp+DCh] [rbp-4Ch]
  char v53; // [rsp+E8h] [rbp-40h]

  sub_116CB50((__m128i **)src, a1, a2);
  if ( !v46 || v49 || !sub_9B4AA0((__int64)src, "amdgcnspirv") )
    goto LABEL_3;
  sub_FC70B0((__int64)&v38, **(_QWORD **)(a1 + 8), 0, 326);
  v6 = (unsigned __int8 *)v38;
  v7 = src[0];
  v8 = (signed __int64)src[1];
  if ( !v38 )
  {
    v27 = v39;
    v28 = *(_DWORD *)(v39 + 14976);
    if ( v28 )
    {
      v29 = (unsigned int)(v28 - 1);
      *(_DWORD *)(v39 + 14976) = v29;
      v6 = *(unsigned __int8 **)(v27 + 8 * v29 + 14848);
      v30 = *((unsigned int *)v6 + 134);
      v31 = *((_QWORD *)v6 + 66);
      *v6 = 0;
      *((_DWORD *)v6 + 106) = 0;
      v32 = v31 + (v30 << 6);
      while ( v31 != v32 )
      {
        while ( 1 )
        {
          v32 -= 64;
          v33 = *(void **)(v32 + 24);
          if ( v33 == (void *)(v32 + 40) )
            break;
          v34 = v31;
          operator delete(v33);
          v31 = v34;
          if ( v34 == v32 )
            goto LABEL_76;
        }
      }
LABEL_76:
      *((_DWORD *)v6 + 134) = 0;
    }
    else
    {
      v6 = (unsigned __int8 *)operator new(0x3A0u);
      *v6 = 0;
      *((_QWORD *)v6 + 12) = v6 + 112;
      *((_QWORD *)v6 + 16) = v6 + 144;
      *((_QWORD *)v6 + 20) = v6 + 176;
      *((_QWORD *)v6 + 24) = v6 + 208;
      *((_QWORD *)v6 + 28) = v6 + 240;
      *((_QWORD *)v6 + 32) = v6 + 272;
      *((_QWORD *)v6 + 36) = v6 + 304;
      *((_QWORD *)v6 + 40) = v6 + 336;
      *((_QWORD *)v6 + 44) = v6 + 368;
      *((_QWORD *)v6 + 48) = v6 + 400;
      *((_QWORD *)v6 + 52) = v6 + 432;
      *((_QWORD *)v6 + 13) = 0;
      v6[112] = 0;
      *((_QWORD *)v6 + 17) = 0;
      v6[144] = 0;
      *((_QWORD *)v6 + 21) = 0;
      v6[176] = 0;
      *((_QWORD *)v6 + 25) = 0;
      v6[208] = 0;
      *((_QWORD *)v6 + 29) = 0;
      v6[240] = 0;
      *((_QWORD *)v6 + 33) = 0;
      v6[272] = 0;
      *((_QWORD *)v6 + 37) = 0;
      v6[304] = 0;
      *((_QWORD *)v6 + 41) = 0;
      v6[336] = 0;
      *((_QWORD *)v6 + 45) = 0;
      v6[368] = 0;
      *((_QWORD *)v6 + 49) = 0;
      v6[400] = 0;
      *((_QWORD *)v6 + 53) = 0x800000000LL;
      *((_QWORD *)v6 + 66) = v6 + 544;
      *((_QWORD *)v6 + 67) = 0x600000000LL;
    }
    v38 = v6;
  }
  v6[*v6 + 1] = 0;
  v35 = v37;
  if ( &v7[v8] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v9 = (_QWORD *)operator new(v8 + 1);
    v37[0] = v8;
    v35 = v9;
LABEL_53:
    memcpy(v9, v7, v8);
    v9 = v35;
    goto LABEL_27;
  }
  if ( v8 == 1 )
  {
    LOBYTE(v37[0]) = *v7;
    v9 = v37;
    goto LABEL_27;
  }
  v9 = v37;
  if ( v8 )
    goto LABEL_53;
LABEL_27:
  v36 = v8;
  *((_BYTE *)v9 + v8) = 0;
  v10 = v38;
  v11 = *(unsigned __int8 *)v38;
  *(_BYTE *)v38 = v11 + 1;
  v12 = (unsigned __int8)v11;
  v13 = 4 * (v11 + 3);
  v14 = &v10[v13];
  v15 = (_BYTE *)v10[v13];
  if ( v35 == v37 )
  {
    v25 = v36;
    if ( v36 )
    {
      if ( v36 == 1 )
      {
        *v15 = v37[0];
        v25 = 1;
      }
      else
      {
        memcpy(v15, v35, v36);
        v25 = v36;
      }
      v15 = (_BYTE *)*v14;
    }
    v14[1] = v25;
    v15[v25] = 0;
    v15 = v35;
  }
  else
  {
    if ( v15 == (_BYTE *)&v10[v13 + 2] )
    {
      *v14 = v35;
      v14[1] = v36;
      v14[2] = v37[0];
    }
    else
    {
      v16 = v10[4 * v12 + 14];
      *v14 = v35;
      v14[1] = v36;
      v14[2] = v37[0];
      if ( v15 )
      {
        v35 = v15;
        v37[0] = v16;
        goto LABEL_31;
      }
    }
    v15 = v37;
    v35 = v37;
  }
LABEL_31:
  *v15 = 0;
  if ( v35 != v37 )
    operator delete(v35);
  if ( (_BYTE)v43 )
  {
    sub_FC7790(v40, (__int64 *)&v38, SHIBYTE(v43));
    v40 = 0;
    v43 = 0;
  }
  if ( v41 != &v42 )
    operator delete(v41);
  v17 = (void **)v38;
  if ( v38 )
  {
    v18 = v39;
    if ( v39 )
    {
      if ( (unsigned __int64)v38 < v39 || (unsigned __int64)v38 > v39 + 14848 )
      {
        v19 = *((void ***)v38 + 66);
        v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v38 + 134)];
        if ( v19 != v20 )
        {
          do
          {
            while ( 1 )
            {
              v20 -= 8;
              v21 = (void **)v20[3];
              if ( v21 == v20 + 5 )
                break;
              operator delete(v21);
              if ( v19 == v20 )
                goto LABEL_43;
            }
          }
          while ( v19 != v20 );
LABEL_43:
          v20 = (void **)v17[66];
        }
        if ( v20 != v17 + 68 )
          free(v20);
        v22 = (void **)v17[52];
        if ( v22 != v17 + 54 )
          free(v22);
        v23 = v17 + 48;
        v24 = v17 + 8;
        do
        {
          while ( *v23 != v23 + 2 )
          {
            operator delete(*v23);
            v23 -= 4;
            if ( v24 == v23 )
              goto LABEL_51;
          }
          v23 -= 4;
        }
        while ( v24 != v23 );
LABEL_51:
        operator delete(v17, 0x3A0u);
      }
      else
      {
        v26 = *(unsigned int *)(v39 + 14976);
        *(_DWORD *)(v39 + 14976) = v26 + 1;
        *(_QWORD *)(v18 + 8 * v26 + 14848) = v17;
      }
    }
  }
LABEL_3:
  if ( v53 )
  {
    v2 = (char *)ptr;
    if ( v52 && v51 )
    {
      v3 = 0;
      v4 = 8LL * (unsigned int)(v51 - 1) + 8;
      do
      {
        v5 = *(_QWORD **)&v2[v3];
        if ( v5 != (_QWORD *)-8LL && v5 )
        {
          operator delete(*(_QWORD *)&v2[v3], *v5 + 17LL, 8);
          v2 = (char *)ptr;
        }
        v3 += 8;
      }
      while ( v3 != v4 );
    }
    free(v2);
  }
  if ( v49 && v47 != &v48 )
    operator delete(v47);
  if ( v46 )
  {
    if ( src[0] != &v45 )
      operator delete(src[0]);
  }
}
