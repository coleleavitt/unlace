__int64 __fastcall sub_103D550(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void **v4; // rbp
  unsigned __int64 v5; // rax
  void **v6; // r12
  void **v7; // rbx
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rbx
  void **v11; // r12
  __int64 v12; // rax
  unsigned __int8 *v13; // rbp
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r14
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  void **v21; // r13
  _BYTE *v22; // rdi
  __int64 v23; // rax
  void **v24; // r12
  void **v25; // rbx
  void **v26; // rdi
  void **v27; // rdi
  void **v28; // rbx
  void **v29; // r12
  void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // r13
  void *v39; // rdi
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  _QWORD v42[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v43; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-78h]
  void *v46; // [rsp+50h] [rbp-68h]
  _BYTE v47[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v48; // [rsp+70h] [rbp-48h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 584LL))(a1, "fp", 2)
    && !sub_990D60(a1 + 592, "aapcs-soft") )
  {
    sub_FA3370((__int64)&v43, a2, 0, 70);
    sub_AC84E0((unsigned __int8 **)&v43, *(_BYTE **)(a1 + 592), *(_QWORD *)(a1 + 600));
    if ( (_BYTE)v48 )
    {
      sub_FA3A50(v45, (__int64)&v43, SHIBYTE(v48));
      v45 = 0;
      v48 = 0;
    }
    if ( v46 != v47 )
      operator delete(v46);
    v4 = (void **)v43;
    if ( !v43 )
      return 0;
    v5 = v44;
    if ( !v44 )
      return 0;
    if ( (unsigned __int64)v43 >= v44 && (unsigned __int64)v43 <= v44 + 14848 )
      goto LABEL_69;
    v6 = *((void ***)v43 + 66);
    v7 = &v6[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
    if ( v6 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 8;
          v8 = (void **)v7[3];
          if ( v8 == v7 + 5 )
            break;
          operator delete(v8);
          if ( v6 == v7 )
            goto LABEL_15;
        }
      }
      while ( v6 != v7 );
LABEL_15:
      v7 = (void **)v4[66];
    }
    if ( v7 != v4 + 68 )
      free(v7);
    v9 = (void **)v4[52];
    if ( v9 != v4 + 54 )
      free(v9);
    v10 = v4 + 48;
    v11 = v4 + 8;
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 -= 4;
        if ( v10 == v11 )
          goto LABEL_23;
      }
      v10 -= 4;
    }
    while ( v11 != v10 );
LABEL_23:
    operator delete(v4, 0x3A0u);
    return 0;
  }
  result = 1;
  if ( *(_DWORD *)(a1 + 264) == 51 && *(_DWORD *)(a1 + 260) != 7 )
  {
    sub_FA3370((__int64)&v43, a2, 0, 69);
    v12 = sub_2293970(a1 + 216);
    v13 = (unsigned __int8 *)v43;
    v14 = (_BYTE *)v12;
    v16 = v15;
    if ( !v43 )
    {
      v33 = v44;
      v34 = *(_DWORD *)(v44 + 14976);
      if ( v34 )
      {
        v35 = (unsigned int)(v34 - 1);
        *(_DWORD *)(v44 + 14976) = v35;
        v13 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
        v36 = *((unsigned int *)v13 + 134);
        *v13 = 0;
        v37 = *((_QWORD *)v13 + 66);
        *((_DWORD *)v13 + 106) = 0;
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
              goto LABEL_77;
          }
        }
LABEL_77:
        *((_DWORD *)v13 + 134) = 0;
      }
      else
      {
        v13 = (unsigned __int8 *)operator new(0x3A0u);
        *v13 = 0;
        *((_QWORD *)v13 + 12) = v13 + 112;
        *((_QWORD *)v13 + 16) = v13 + 144;
        *((_QWORD *)v13 + 20) = v13 + 176;
        *((_QWORD *)v13 + 24) = v13 + 208;
        *((_QWORD *)v13 + 28) = v13 + 240;
        *((_QWORD *)v13 + 32) = v13 + 272;
        *((_QWORD *)v13 + 36) = v13 + 304;
        *((_QWORD *)v13 + 40) = v13 + 336;
        *((_QWORD *)v13 + 44) = v13 + 368;
        *((_QWORD *)v13 + 48) = v13 + 400;
        *((_QWORD *)v13 + 52) = v13 + 432;
        *((_QWORD *)v13 + 13) = 0;
        v13[112] = 0;
        *((_QWORD *)v13 + 17) = 0;
        v13[144] = 0;
        *((_QWORD *)v13 + 21) = 0;
        v13[176] = 0;
        *((_QWORD *)v13 + 25) = 0;
        v13[208] = 0;
        *((_QWORD *)v13 + 29) = 0;
        v13[240] = 0;
        *((_QWORD *)v13 + 33) = 0;
        v13[272] = 0;
        *((_QWORD *)v13 + 37) = 0;
        v13[304] = 0;
        *((_QWORD *)v13 + 41) = 0;
        v13[336] = 0;
        *((_QWORD *)v13 + 45) = 0;
        v13[368] = 0;
        *((_QWORD *)v13 + 49) = 0;
        v13[400] = 0;
        *((_QWORD *)v13 + 53) = 0x800000000LL;
        *((_QWORD *)v13 + 66) = v13 + 544;
        *((_QWORD *)v13 + 67) = 0x600000000LL;
      }
      v43 = v13;
    }
    v13[*v13 + 1] = 0;
    src = v42;
    sub_103ABE0(&src, v14, (__int64)&v14[v16]);
    v17 = v43;
    v18 = *(unsigned __int8 *)v43;
    *(_BYTE *)v43 = v18 + 1;
    v19 = (unsigned __int8)v18;
    v20 = 4 * (v18 + 3);
    v21 = (void **)&v17[v20];
    v22 = (_BYTE *)v17[v20];
    if ( src == v42 )
    {
      v31 = n;
      if ( n )
      {
        if ( n == 1 )
          *v22 = v42[0];
        else
          memcpy(v22, src, n);
        v31 = n;
        v22 = *v21;
      }
      v21[1] = (void *)v31;
      v22[v31] = 0;
      v22 = src;
      goto LABEL_31;
    }
    if ( v22 == (_BYTE *)&v17[v20 + 2] )
    {
      *v21 = src;
      v21[1] = (void *)n;
      v21[2] = (void *)v42[0];
    }
    else
    {
      v23 = v17[4 * v19 + 14];
      *v21 = src;
      v21[1] = (void *)n;
      v21[2] = (void *)v42[0];
      if ( v22 )
      {
        src = v22;
        v42[0] = v23;
LABEL_31:
        n = 0;
        *v22 = 0;
        if ( src != v42 )
          operator delete(src);
        sub_AC84E0((unsigned __int8 **)&v43, *(_BYTE **)(a1 + 216), *(_QWORD *)(a1 + 224));
        if ( (_BYTE)v48 )
        {
          sub_FA3A50(v45, (__int64)&v43, SHIBYTE(v48));
          v45 = 0;
          v48 = 0;
        }
        if ( v46 != v47 )
          operator delete(v46);
        v4 = (void **)v43;
        if ( !v43 )
          return 0;
        v5 = v44;
        if ( !v44 )
          return 0;
        if ( (unsigned __int64)v43 >= v44 && (unsigned __int64)v43 <= v44 + 14848 )
        {
LABEL_69:
          v32 = *(unsigned int *)(v5 + 14976);
          *(_DWORD *)(v5 + 14976) = v32 + 1;
          *(_QWORD *)(v5 + 8 * v32 + 14848) = v4;
          return 0;
        }
        v24 = *((void ***)v43 + 66);
        v25 = &v24[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
        if ( v24 != v25 )
        {
          do
          {
            while ( 1 )
            {
              v25 -= 8;
              v26 = (void **)v25[3];
              if ( v26 == v25 + 5 )
                break;
              operator delete(v26);
              if ( v24 == v25 )
                goto LABEL_44;
            }
          }
          while ( v24 != v25 );
LABEL_44:
          v25 = (void **)v4[66];
        }
        if ( v25 != v4 + 68 )
          free(v25);
        v27 = (void **)v4[52];
        if ( v27 != v4 + 54 )
          free(v27);
        v28 = v4 + 48;
        v29 = v4 + 8;
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 != v28 + 2 )
            break;
LABEL_53:
          v28 -= 4;
          if ( v29 == v28 )
            goto LABEL_23;
        }
        while ( 1 )
        {
          operator delete(v30);
          v28 -= 4;
          if ( v28 == v29 )
            goto LABEL_23;
          v30 = *v28;
          if ( *v28 == v28 + 2 )
            goto LABEL_53;
        }
      }
    }
    v22 = v42;
    src = v42;
    goto LABEL_31;
  }
  return result;
}

