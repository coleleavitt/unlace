unsigned __int64 __fastcall sub_14E6860(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rax
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rax
  void **v7; // rbp
  unsigned __int64 v8; // rax
  void **v9; // r12
  void **v10; // rbx
  void **v11; // rdi
  void **v12; // rdi
  void **v13; // rbx
  void **v14; // r12
  __m128i v16; // xmm3
  __int64 v17; // rdx
  unsigned int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // rdi
  __m128i v21; // xmm2
  _QWORD *v22; // rax
  __int64 v23; // rbp
  int v24; // eax
  unsigned __int8 *v25; // rbp
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void **v28; // rbp
  unsigned __int64 v29; // rax
  void **v30; // r12
  void **v31; // rbx
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // rbx
  void **v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbp
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // rbx
  void *v47; // rdi
  void **v48; // rdi
  void **v49; // rdi
  void **v50; // rbx
  void **v51; // r12
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r12
  void *v59; // rdi
  unsigned int v60; // [rsp+14h] [rbp-E4h]
  __int64 v61; // [rsp+18h] [rbp-E0h]
  __m128i v62; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v63; // [rsp+30h] [rbp-C8h]
  _OWORD v64[3]; // [rsp+40h] [rbp-B8h] BYREF
  void *v65; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-80h]
  __int64 v67; // [rsp+80h] [rbp-78h]
  void *v68; // [rsp+90h] [rbp-68h]
  _BYTE v69[16]; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v70; // [rsp+B0h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 88);
  LODWORD(v65) = 8;
  if ( sub_14E3360(a1, &v65, 1) )
  {
    sub_13DF9D0(&v62, a1 + 24);
    v16 = _mm_loadu_si128(&v62);
    LODWORD(v65) = 9;
    *(_QWORD *)(a1 + 104) = v63;
    *(__m128i *)(a1 + 88) = v16;
    if ( (unsigned __int8)sub_14E53D0(a1, &v65, 1) )
    {
      v60 = 0;
      v17 = 1;
      v61 = 0x100000000LL;
      return (v17 << 32) | v60 | v61 & 0xFFFFFF0000000000LL;
    }
    LODWORD(v65) = 2;
    if ( (unsigned __int8)sub_14E53D0(a1, &v65, 1) )
    {
      v41 = sub_14E15D0(a1);
      if ( BYTE4(v41) )
      {
        v18 = v41;
        if ( !(_DWORD)v41 )
        {
LABEL_57:
          v38 = sub_14E5150(a1, 9u, 17, 0xAu);
          v17 = 0;
          if ( !v38 )
          {
            v60 = v18;
            v17 = 1;
            v61 = v18 | 0x100000000LL;
          }
          return (v17 << 32) | v60 | v61 & 0xFFFFFF0000000000LL;
        }
      }
      v42 = *(_QWORD **)(a1 + 80);
      v43 = v42[6];
      v44 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v42[11], v42[7], v42[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v65, v43, v44, 1693);
      if ( (_BYTE)v70 )
      {
        sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v70));
        v67 = 0;
        v70 = 0;
      }
      if ( v68 != v69 )
        operator delete(v68);
      v28 = (void **)v65;
      if ( !v65 )
        goto LABEL_53;
      v29 = v66;
      if ( !v66 )
        goto LABEL_53;
      if ( (unsigned __int64)v65 >= v66 && (unsigned __int64)v65 <= v66 + 14848 )
        goto LABEL_100;
      v45 = *((_QWORD *)v65 + 66);
      v46 = v45 + ((unsigned __int64)*((unsigned int *)v65 + 134) << 6);
      while ( v45 != v46 )
      {
        while ( 1 )
        {
          v46 -= 64;
          v47 = *(void **)(v46 + 24);
          if ( v47 == (void *)(v46 + 40) )
            break;
          operator delete(v47);
          if ( v45 == v46 )
            goto LABEL_87;
        }
      }
LABEL_87:
      v48 = (void **)v28[66];
      if ( v48 != v28 + 68 )
        free(v48);
      v49 = (void **)v28[52];
      if ( v49 != v28 + 54 )
        free(v49);
      v50 = v28 + 48;
      v51 = v28 + 8;
      do
      {
        while ( *v50 != v50 + 2 )
        {
          operator delete(*v50);
          v50 -= 4;
          if ( v51 == v50 )
            goto LABEL_52;
        }
        v50 -= 4;
      }
      while ( v51 != v50 );
    }
    else
    {
      v18 = 0;
      v64[0] = _mm_load_si128((const __m128i *)&xmmword_23AA720);
      v64[1] = _mm_load_si128((const __m128i *)&xmmword_23A77B0);
      v64[2] = _mm_load_si128((const __m128i *)&xmmword_23AA730);
      while ( 1 )
      {
        v19 = a1 + 24;
        if ( !sub_14E3360(a1, v64, 12) )
          break;
        sub_13DF9D0(&v62, v19);
        v36 = v63;
        v37 = (unsigned int)(v62.m128i_i32[0] - 42);
        *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v62);
        *(_QWORD *)(a1 + 104) = v36;
        switch ( v37 )
        {
          case 0LL:
            v18 |= 1u;
            break;
          case 1LL:
            v18 |= 2u;
            break;
          case 2LL:
            v18 |= 4u;
            break;
          case 3LL:
            v18 |= 8u;
            break;
          case 4LL:
            v18 |= 0x10u;
            break;
          case 5LL:
            v18 |= 0x20u;
            break;
          case 6LL:
            v18 |= 0x100u;
            break;
          case 7LL:
            v18 |= 0x200u;
            break;
          case 8LL:
            v18 |= 0x40u;
            break;
          case 9LL:
            LOBYTE(v18) = v18 | 0x80;
            break;
          case 10LL:
            v18 |= 0x400u;
            break;
          case 11LL:
            v18 |= 0x800u;
            break;
        }
        LODWORD(v65) = 11;
        if ( !sub_14E3360(a1, &v65, 1) )
          goto LABEL_57;
        sub_13DF9D0(&v62, a1 + 24);
        v39 = v63;
        *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v62);
        *(_QWORD *)(a1 + 104) = v39;
      }
      sub_13DF9D0(&v62, v19);
      v20 = *(_QWORD *)(a1 + 16);
      v21 = _mm_loadu_si128(&v62);
      *(_QWORD *)(a1 + 104) = v63;
      v22 = *(_QWORD **)(a1 + 80);
      *(__m128i *)(a1 + 88) = v21;
      v23 = v22[6];
      v24 = sub_C07A10(v20, *(_DWORD *)(a1 + 92), v22[11], v22[7], v22[8], nullptr, nullptr);
      sub_FC70B0((__int64)&v65, v23, v24, 1688);
      v25 = (unsigned __int8 *)v65;
      if ( !v65 )
      {
        v53 = v66;
        v54 = *(_DWORD *)(v66 + 14976);
        if ( v54 )
        {
          v55 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v66 + 14976) = v55;
          v25 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
          v56 = *((unsigned int *)v25 + 134);
          *v25 = 0;
          v57 = *((_QWORD *)v25 + 66);
          *((_DWORD *)v25 + 106) = 0;
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
                goto LABEL_110;
            }
          }
LABEL_110:
          *((_DWORD *)v25 + 134) = 0;
        }
        else
        {
          v25 = (unsigned __int8 *)operator new(0x3A0u);
          *v25 = 0;
          *((_QWORD *)v25 + 12) = v25 + 112;
          *((_QWORD *)v25 + 16) = v25 + 144;
          *((_QWORD *)v25 + 20) = v25 + 176;
          *((_QWORD *)v25 + 24) = v25 + 208;
          *((_QWORD *)v25 + 28) = v25 + 240;
          *((_QWORD *)v25 + 32) = v25 + 272;
          *((_QWORD *)v25 + 36) = v25 + 304;
          *((_QWORD *)v25 + 40) = v25 + 336;
          *((_QWORD *)v25 + 44) = v25 + 368;
          *((_QWORD *)v25 + 48) = v25 + 400;
          *((_QWORD *)v25 + 52) = v25 + 432;
          *((_QWORD *)v25 + 13) = 0;
          v25[112] = 0;
          *((_QWORD *)v25 + 17) = 0;
          v25[144] = 0;
          *((_QWORD *)v25 + 21) = 0;
          v25[176] = 0;
          *((_QWORD *)v25 + 25) = 0;
          v25[208] = 0;
          *((_QWORD *)v25 + 29) = 0;
          v25[240] = 0;
          *((_QWORD *)v25 + 33) = 0;
          v25[272] = 0;
          *((_QWORD *)v25 + 37) = 0;
          v25[304] = 0;
          *((_QWORD *)v25 + 41) = 0;
          v25[336] = 0;
          *((_QWORD *)v25 + 45) = 0;
          v25[368] = 0;
          *((_QWORD *)v25 + 49) = 0;
          v25[400] = 0;
          *((_QWORD *)v25 + 53) = 0x800000000LL;
          *((_QWORD *)v25 + 66) = v25 + 544;
          *((_QWORD *)v25 + 67) = 0x600000000LL;
        }
        v65 = v25;
      }
      v25[*v25 + 1] = 2;
      v26 = v65;
      v27 = *(unsigned __int8 *)v65;
      *(_BYTE *)v65 = v27 + 1;
      v26[v27 + 2] = 1;
      sub_14DC730(&v65, 16);
      if ( (_BYTE)v70 )
      {
        sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v70));
        v67 = 0;
        v70 = 0;
      }
      if ( v68 != v69 )
        operator delete(v68);
      v28 = (void **)v65;
      if ( !v65 )
        goto LABEL_53;
      v29 = v66;
      if ( !v66 )
        goto LABEL_53;
      if ( (unsigned __int64)v65 >= v66 && (unsigned __int64)v65 <= v66 + 14848 )
      {
LABEL_100:
        v52 = *(unsigned int *)(v29 + 14976);
        *(_DWORD *)(v29 + 14976) = v52 + 1;
        *(_QWORD *)(v29 + 8 * v52 + 14848) = v28;
        v17 = 0;
        return (v17 << 32) | v60 | v61 & 0xFFFFFF0000000000LL;
      }
      v30 = *((void ***)v65 + 66);
      v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v65 + 134)];
      if ( v30 != v31 )
      {
        do
        {
          while ( 1 )
          {
            v31 -= 8;
            v32 = (void **)v31[3];
            if ( v32 == v31 + 5 )
              break;
            operator delete(v32);
            if ( v30 == v31 )
              goto LABEL_44;
          }
        }
        while ( v30 != v31 );
LABEL_44:
        v31 = (void **)v28[66];
      }
      if ( v31 != v28 + 68 )
        free(v31);
      v33 = (void **)v28[52];
      v34 = v28 + 52;
      if ( v33 != v28 + 54 )
        free(v33);
      v35 = v28 + 12;
      do
      {
        while ( 1 )
        {
          v34 -= 4;
          if ( *v34 == v34 + 2 )
            break;
          operator delete(*v34);
          if ( v34 == v35 )
            goto LABEL_52;
        }
      }
      while ( v34 != v35 );
    }
LABEL_52:
    operator delete(v28, 0x3A0u);
LABEL_53:
    v17 = 0;
    return (v17 << 32) | v60 | v61 & 0xFFFFFF0000000000LL;
  }
  v3 = *(_QWORD **)(a1 + 80);
  v4 = v3[6];
  v5 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v3[11], v3[7], v3[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v65, v4, v5, 15);
  v6 = sub_14DC730(&v65, v2);
  sub_14DC730(v6, 8);
  if ( (_BYTE)v70 )
  {
    sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v70));
    v67 = 0;
    v70 = 0;
  }
  if ( v68 != v69 )
    operator delete(v68);
  v7 = (void **)v65;
  if ( v65 )
  {
    v8 = v66;
    if ( v66 )
    {
      if ( (unsigned __int64)v65 >= v66 && (unsigned __int64)v65 <= v66 + 14848 )
      {
        v40 = *(unsigned int *)(v66 + 14976);
        *(_DWORD *)(v66 + 14976) = v40 + 1;
        *(_QWORD *)(v8 + 8 * v40 + 14848) = v7;
      }
      else
      {
        v9 = *((void ***)v65 + 66);
        v10 = &v9[8 * (unsigned __int64)*((unsigned int *)v65 + 134)];
        if ( v9 != v10 )
        {
          do
          {
            while ( 1 )
            {
              v10 -= 8;
              v11 = (void **)v10[3];
              if ( v11 == v10 + 5 )
                break;
              operator delete(v11);
              if ( v9 == v10 )
                goto LABEL_13;
            }
          }
          while ( v9 != v10 );
LABEL_13:
          v10 = (void **)v7[66];
        }
        if ( v10 != v7 + 68 )
          free(v10);
        v12 = (void **)v7[52];
        if ( v12 != v7 + 54 )
          free(v12);
        v13 = v7 + 48;
        v14 = v7 + 8;
        do
        {
          while ( *v13 != v13 + 2 )
          {
            operator delete(*v13);
            v13 -= 4;
            if ( v13 == v14 )
              goto LABEL_21;
          }
          v13 -= 4;
        }
        while ( v14 != v13 );
LABEL_21:
        operator delete(v7, 0x3A0u);
      }
    }
  }
  return 0;
}
