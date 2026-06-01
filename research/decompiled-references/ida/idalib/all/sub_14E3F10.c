__int64 __fastcall sub_14E3F10(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  __int64 v8; // rbp
  int v9; // eax
  unsigned __int8 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  void **v14; // r12
  __int64 v15; // rax
  void **v16; // r13
  void **v17; // rbp
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbp
  void **v21; // r13
  unsigned __int8 v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v27; // xmm3
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  void *v32; // rdi
  void **v33; // rbp
  __int64 v34; // rax
  void **v35; // r12
  void **v36; // rbx
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // rbx
  void **v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // r13
  void *v49; // rdi
  __int64 v50; // [rsp+0h] [rbp-B8h]
  char v51; // [rsp+Bh] [rbp-ADh]
  __m128i v52; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+20h] [rbp-98h]
  __m128i v54; // [rsp+30h] [rbp-88h] BYREF
  __int64 v55; // [rsp+40h] [rbp-78h]
  void *v56; // [rsp+50h] [rbp-68h]
  _BYTE v57[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v58; // [rsp+70h] [rbp-48h]

  v3 = a1 + 24;
  v54.m128i_i32[0] = 2;
  if ( sub_14E3360(a1, &v54, 1) )
  {
    sub_13DF9D0(&v52, v3);
    v27 = _mm_loadu_si128(&v52);
    *(_QWORD *)(a1 + 104) = v53;
    *(__m128i *)(a1 + 88) = v27;
    v28 = sub_14E15D0(a1);
    if ( BYTE4(v28) && !(_DWORD)v28 )
      return 0x100000000LL;
    v29 = *(_QWORD **)(a1 + 80);
    v30 = v29[6];
    v31 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v29[11], v29[7], v29[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v54, v30, v31, 1693);
    if ( (_BYTE)v58 )
    {
      sub_FC7790(v55, v54.m128i_i64, SHIBYTE(v58));
      v32 = v56;
      v55 = 0;
      v58 = 0;
      if ( v56 == v57 )
        goto LABEL_49;
    }
    else
    {
      v32 = v56;
      if ( v56 == v57 )
      {
LABEL_49:
        v33 = (void **)v54.m128i_i64[0];
        if ( v54.m128i_i64[0] )
        {
          v34 = v54.m128i_i64[1];
          if ( v54.m128i_i64[1] )
          {
            if ( v54.m128i_i64[0] >= (unsigned __int64)v54.m128i_i64[1]
              && v54.m128i_i64[0] <= (unsigned __int64)(v54.m128i_i64[1] + 14848) )
            {
              v42 = *(unsigned int *)(v54.m128i_i64[1] + 14976);
              *(_DWORD *)(v54.m128i_i64[1] + 14976) = v42 + 1;
              *(_QWORD *)(v34 + 8 * v42 + 14848) = v33;
              return 0;
            }
            v35 = *(void ***)(v54.m128i_i64[0] + 528);
            v36 = &v35[8 * (unsigned __int64)*(unsigned int *)(v54.m128i_i64[0] + 536)];
            if ( v35 != v36 )
            {
              do
              {
                while ( 1 )
                {
                  v36 -= 8;
                  v37 = (void **)v36[3];
                  if ( v37 == v36 + 5 )
                    break;
                  operator delete(v37);
                  if ( v35 == v36 )
                    goto LABEL_55;
                }
              }
              while ( v35 != v36 );
LABEL_55:
              v36 = (void **)v33[66];
            }
            if ( v36 != v33 + 68 )
              free(v36);
            v38 = (void **)v33[52];
            if ( v38 != v33 + 54 )
              free(v38);
            v39 = v33 + 48;
            v40 = v33 + 8;
            do
            {
              while ( *v39 != v39 + 2 )
              {
                operator delete(*v39);
                v39 -= 4;
                if ( v40 == v39 )
                  goto LABEL_63;
              }
              v39 -= 4;
            }
            while ( v39 != v40 );
LABEL_63:
            operator delete(v33, 0x3A0u);
          }
        }
        return 0;
      }
    }
    operator delete(v32);
    goto LABEL_49;
  }
  v51 = 0;
  v4 = 0;
  while ( 1 )
  {
    sub_13DFA10(&v54, v3);
    if ( (unsigned int)(v54.m128i_i32[0] - 54) > 4 )
      break;
    sub_13DF9D0(&v52, v3);
    v23 = v53;
    v24 = (unsigned int)(v52.m128i_i32[0] - 54);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v52);
    *(_QWORD *)(a1 + 104) = v23;
    switch ( v24 )
    {
      case 0LL:
        v4 = (unsigned int)v4 | 2;
        if ( !v51 )
          v4 = 2;
        break;
      case 1LL:
        v4 = (unsigned int)v4 | 4;
        if ( !v51 )
          v4 = 4;
        break;
      case 2LL:
        v4 = (unsigned int)v4 | 8;
        if ( !v51 )
          v4 = 8;
        break;
      case 3LL:
        v4 = (unsigned int)v4 | 1;
        if ( !v51 )
          v4 = 1;
        break;
      case 4LL:
        v4 = (unsigned int)v4 | 0x10000;
        if ( !v51 )
          v4 = (__int64)&stru_10000;
        break;
      default:
        BUG();
    }
    v54.m128i_i32[0] = 11;
    if ( !sub_14E3360(a1, &v54, 1) )
    {
      v22 = 1;
      v50 = v4 | 0x100000000LL;
      return ((unsigned __int64)v22 << 32) | v50 & 0xFFFFFF0000000000LL | v4 & 0xFFFFFF00FFFFFFFFLL;
    }
    sub_13DF9D0(&v52, v3);
    v25 = v53;
    v51 = 1;
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v52);
    *(_QWORD *)(a1 + 104) = v25;
  }
  sub_13DF9D0(&v52, v3);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = _mm_loadu_si128(&v52);
  *(_QWORD *)(a1 + 104) = v53;
  v7 = *(_QWORD **)(a1 + 80);
  *(__m128i *)(a1 + 88) = v6;
  v8 = v7[6];
  v9 = sub_C07A10(v5, *(_DWORD *)(a1 + 92), v7[11], v7[7], v7[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v54, v8, v9, 1688);
  v10 = (unsigned __int8 *)v54.m128i_i64[0];
  if ( !v54.m128i_i64[0] )
  {
    v43 = v54.m128i_i64[1];
    v44 = *(_DWORD *)(v54.m128i_i64[1] + 14976);
    if ( v44 )
    {
      v45 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v54.m128i_i64[1] + 14976) = v45;
      v10 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
      v46 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v47 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v48 = v47 + (v46 << 6);
      while ( v47 != v48 )
      {
        while ( 1 )
        {
          v48 -= 64;
          v49 = *(void **)(v48 + 24);
          if ( v49 == (void *)(v48 + 40) )
            break;
          operator delete(v49);
          if ( v47 == v48 )
            goto LABEL_86;
        }
      }
LABEL_86:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v54.m128i_i64[0] = (__int64)v10;
  }
  v10[*v10 + 1] = 2;
  v11 = v54.m128i_i64[0];
  v12 = *(unsigned __int8 *)v54.m128i_i64[0];
  *(_BYTE *)v54.m128i_i64[0] = v12 + 1;
  *(_QWORD *)(v11 + 8 * v12 + 16) = 1;
  sub_14DC730(&v54, a2);
  if ( (_BYTE)v58 )
  {
    sub_FC7790(v55, v54.m128i_i64, SHIBYTE(v58));
    v13 = v56;
    v55 = 0;
    v58 = 0;
    if ( v56 == v57 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v13 = v56;
  if ( v56 != v57 )
LABEL_7:
    operator delete(v13);
LABEL_8:
  v14 = (void **)v54.m128i_i64[0];
  if ( !v54.m128i_i64[0] || (v15 = v54.m128i_i64[1]) == 0 )
  {
LABEL_23:
    v22 = 0;
    return ((unsigned __int64)v22 << 32) | v50 & 0xFFFFFF0000000000LL | v4 & 0xFFFFFF00FFFFFFFFLL;
  }
  if ( v54.m128i_i64[0] < (unsigned __int64)v54.m128i_i64[1]
    || v54.m128i_i64[0] > (unsigned __int64)(v54.m128i_i64[1] + 14848) )
  {
    v16 = *(void ***)(v54.m128i_i64[0] + 528);
    v17 = &v16[8 * (unsigned __int64)*(unsigned int *)(v54.m128i_i64[0] + 536)];
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
            goto LABEL_14;
        }
      }
      while ( v16 != v17 );
LABEL_14:
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
          goto LABEL_22;
      }
      v20 -= 4;
    }
    while ( v21 != v20 );
LABEL_22:
    operator delete(v14, 0x3A0u);
    goto LABEL_23;
  }
  v41 = *(unsigned int *)(v54.m128i_i64[1] + 14976);
  *(_DWORD *)(v54.m128i_i64[1] + 14976) = v41 + 1;
  *(_QWORD *)(v15 + 8 * v41 + 14848) = v14;
  v22 = 0;
  return ((unsigned __int64)v22 << 32) | v50 & 0xFFFFFF0000000000LL | v4 & 0xFFFFFF00FFFFFFFFLL;
}
