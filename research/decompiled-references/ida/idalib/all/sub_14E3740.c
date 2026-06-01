__int64 __fastcall sub_14E3740(__int64 a1, unsigned int a2)
{
  __int64 v3; // r12
  char v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // r12
  int v10; // eax
  unsigned __int8 *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  void **v15; // r12
  __int64 v16; // rax
  void **v17; // r13
  void **v18; // rbp
  void **v19; // rdi
  void **v20; // rdi
  void **v21; // rbp
  void **v22; // r13
  __int64 v23; // rdx
  __int32 v24; // eax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  void *v30; // rdi
  void **v31; // rbp
  __int64 v32; // rax
  void **v33; // r12
  void **v34; // rbx
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // rbx
  void **v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // r12
  void *v47; // rdi
  __int64 v48; // [rsp+0h] [rbp-B8h]
  __m128i v50; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+20h] [rbp-98h]
  __m128i v52; // [rsp+30h] [rbp-88h] BYREF
  __int64 v53; // [rsp+40h] [rbp-78h]
  void *v54; // [rsp+50h] [rbp-68h]
  _BYTE v55[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v56; // [rsp+70h] [rbp-48h]

  v3 = a1 + 24;
  v52.m128i_i32[0] = 2;
  if ( sub_14E3360(a1, &v52, 1) )
  {
    sub_13DF9D0(&v50, v3);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v50);
    *(_QWORD *)(a1 + 104) = v51;
    v26 = sub_14E15D0(a1);
    if ( BYTE4(v26) && !(_DWORD)v26 )
      return 0x100000000LL;
    v27 = *(_QWORD **)(a1 + 80);
    v28 = v27[6];
    v29 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v27[11], v27[7], v27[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v52, v28, v29, 1693);
    if ( (_BYTE)v56 )
    {
      sub_FC7790(v53, v52.m128i_i64, SHIBYTE(v56));
      v30 = v54;
      v53 = 0;
      v56 = 0;
      if ( v54 == v55 )
        goto LABEL_46;
    }
    else
    {
      v30 = v54;
      if ( v54 == v55 )
      {
LABEL_46:
        v31 = (void **)v52.m128i_i64[0];
        if ( v52.m128i_i64[0] )
        {
          v32 = v52.m128i_i64[1];
          if ( v52.m128i_i64[1] )
          {
            if ( v52.m128i_i64[0] >= (unsigned __int64)v52.m128i_i64[1]
              && v52.m128i_i64[0] <= (unsigned __int64)(v52.m128i_i64[1] + 14848) )
            {
              v40 = *(unsigned int *)(v52.m128i_i64[1] + 14976);
              *(_DWORD *)(v52.m128i_i64[1] + 14976) = v40 + 1;
              *(_QWORD *)(v32 + 8 * v40 + 14848) = v31;
              return 0;
            }
            v33 = *(void ***)(v52.m128i_i64[0] + 528);
            v34 = &v33[8 * (unsigned __int64)*(unsigned int *)(v52.m128i_i64[0] + 536)];
            if ( v33 != v34 )
            {
              do
              {
                while ( 1 )
                {
                  v34 -= 8;
                  v35 = (void **)v34[3];
                  if ( v35 == v34 + 5 )
                    break;
                  operator delete(v35);
                  if ( v33 == v34 )
                    goto LABEL_52;
                }
              }
              while ( v33 != v34 );
LABEL_52:
              v34 = (void **)v31[66];
            }
            if ( v34 != v31 + 68 )
              free(v34);
            v36 = (void **)v31[52];
            if ( v36 != v31 + 54 )
              free(v36);
            v37 = v31 + 48;
            v38 = v31 + 8;
            do
            {
              while ( *v37 != v37 + 2 )
              {
                operator delete(*v37);
                v37 -= 4;
                if ( v38 == v37 )
                  goto LABEL_60;
              }
              v37 -= 4;
            }
            while ( v38 != v37 );
LABEL_60:
            operator delete(v31, 0x3A0u);
          }
        }
        return 0;
      }
    }
    operator delete(v30);
    goto LABEL_46;
  }
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    sub_13DFA10(&v52, v3);
    if ( v52.m128i_i32[0] != 54 && v52.m128i_i32[0] != 55 && v52.m128i_i32[0] != 56 )
      break;
    sub_13DF9D0(&v50, v3);
    v24 = v50.m128i_i32[0];
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v50);
    *(_QWORD *)(a1 + 104) = v51;
    if ( v24 == 55 )
    {
      v5 = (unsigned int)v5 | 4;
      if ( !v4 )
        v5 = 4;
    }
    else if ( v24 == 56 )
    {
      v5 = (unsigned int)v5 | 8;
      if ( !v4 )
        v5 = 8;
    }
    else
    {
      v5 = (unsigned int)v5 | 2;
      if ( !v4 )
        v5 = 2;
    }
    v52.m128i_i32[0] = 11;
    if ( !sub_14E3360(a1, &v52, 1) )
    {
      v23 = 1;
      v48 = v5 | 0x100000000LL;
      return (v23 << 32) | v48 & 0xFFFFFF0000000000LL | v5 & 0xFFFFFF00FFFFFFFFLL;
    }
    v4 = 1;
    sub_13DF9D0(&v50, v3);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v50);
    *(_QWORD *)(a1 + 104) = v51;
  }
  sub_13DF9D0(&v50, v3);
  v6 = *(_QWORD *)(a1 + 16);
  *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v50);
  v7 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)(a1 + 104) = v51;
  v8 = *(_QWORD **)(a1 + 80);
  v9 = v8[6];
  v10 = sub_C07A10(v6, v7, v8[11], v8[7], v8[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v52, v9, v10, 1688);
  v11 = (unsigned __int8 *)v52.m128i_i64[0];
  if ( !v52.m128i_i64[0] )
  {
    v41 = v52.m128i_i64[1];
    v42 = *(_DWORD *)(v52.m128i_i64[1] + 14976);
    if ( v42 )
    {
      v43 = (unsigned int)(v42 - 1);
      *(_DWORD *)(v52.m128i_i64[1] + 14976) = v43;
      v11 = *(unsigned __int8 **)(v41 + 8 * v43 + 14848);
      v44 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v45 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v46 = v45 + (v44 << 6);
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
            goto LABEL_83;
        }
      }
LABEL_83:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v52.m128i_i64[0] = (__int64)v11;
  }
  v11[*v11 + 1] = 2;
  v12 = v52.m128i_i64[0];
  v13 = *(unsigned __int8 *)v52.m128i_i64[0];
  *(_BYTE *)v52.m128i_i64[0] = v13 + 1;
  *(_QWORD *)(v12 + 8 * v13 + 16) = 1;
  sub_14DC730(&v52, a2);
  if ( (_BYTE)v56 )
  {
    sub_FC7790(v53, v52.m128i_i64, SHIBYTE(v56));
    v14 = v54;
    v53 = 0;
    v56 = 0;
    if ( v54 == v55 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v14 = v54;
  if ( v54 != v55 )
LABEL_9:
    operator delete(v14);
LABEL_10:
  v15 = (void **)v52.m128i_i64[0];
  if ( !v52.m128i_i64[0] || (v16 = v52.m128i_i64[1]) == 0 )
  {
LABEL_25:
    v23 = 0;
    return (v23 << 32) | v48 & 0xFFFFFF0000000000LL | v5 & 0xFFFFFF00FFFFFFFFLL;
  }
  if ( v52.m128i_i64[0] < (unsigned __int64)v52.m128i_i64[1]
    || v52.m128i_i64[0] > (unsigned __int64)(v52.m128i_i64[1] + 14848) )
  {
    v17 = *(void ***)(v52.m128i_i64[0] + 528);
    v18 = &v17[8 * (unsigned __int64)*(unsigned int *)(v52.m128i_i64[0] + 536)];
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
            goto LABEL_16;
        }
      }
      while ( v17 != v18 );
LABEL_16:
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
          goto LABEL_24;
      }
    }
    while ( v21 != v22 );
LABEL_24:
    operator delete(v15, 0x3A0u);
    goto LABEL_25;
  }
  v39 = *(unsigned int *)(v52.m128i_i64[1] + 14976);
  *(_DWORD *)(v52.m128i_i64[1] + 14976) = v39 + 1;
  *(_QWORD *)(v16 + 8 * v39 + 14848) = v15;
  v23 = 0;
  return (v23 << 32) | v48 & 0xFFFFFF0000000000LL | v5 & 0xFFFFFF00FFFFFFFFLL;
}
