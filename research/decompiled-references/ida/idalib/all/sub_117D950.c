void __fastcall sub_117D950(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  size_t v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rax
  void *v17; // rdi
  void **v18; // rbp
  size_t v19; // rax
  void **v20; // r15
  void **v21; // rbx
  void **v22; // rdi
  void **v23; // rdi
  void **v24; // rbx
  void **v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  void *v31; // r12
  __int64 v32; // rbp
  __int64 *v33; // rax
  size_t v34; // rbp
  unsigned __int64 v35; // rdx
  char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __m128i *v40; // rax
  __m128i *v41; // rdx
  __int64 *v42; // rdi
  unsigned __int64 v43; // rbp
  __int64 v44; // rdi
  void *src; // [rsp+0h] [rbp-A8h] BYREF
  size_t n; // [rsp+8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+10h] [rbp-98h] BYREF
  void *v48; // [rsp+20h] [rbp-88h] BYREF
  size_t v49; // [rsp+28h] [rbp-80h]
  __int64 v50[2]; // [rsp+30h] [rbp-78h] BYREF
  void *v51; // [rsp+40h] [rbp-68h]
  _BYTE v52[16]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v53; // [rsp+60h] [rbp-48h]

  sub_121FCF0(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 4984) = 0;
  *(_QWORD *)a1 = off_2C37548;
  *(_QWORD *)(a1 + 4992) = 0;
  sub_122CEF0(a1 + 2384, a3, a4);
  sub_11C8180(&v48, a2, a4, a3, 0);
  v7 = v49;
  if ( v48 != v50 )
    operator delete(v48);
  if ( v7 )
    goto LABEL_4;
  sub_FC70B0((__int64)&v48, *a2, 0, 538);
  if ( (_BYTE)v53 )
  {
    sub_FC7790(v50[0], (__int64 *)&v48, SHIBYTE(v53));
    v17 = v51;
    v50[0] = 0;
    v53 = 0;
    if ( v51 == v52 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v17 = v51;
  if ( v51 != v52 )
LABEL_26:
    operator delete(v17);
LABEL_27:
  v18 = (void **)v48;
  if ( v48 )
  {
    v19 = v49;
    if ( v49 )
    {
      if ( (unsigned __int64)v48 < v49 || (unsigned __int64)v48 > v49 + 14848 )
      {
        v20 = *((void ***)v48 + 66);
        v21 = &v20[8 * (unsigned __int64)*((unsigned int *)v48 + 134)];
        if ( v20 != v21 )
        {
          do
          {
            while ( 1 )
            {
              v21 -= 8;
              v22 = (void **)v21[3];
              if ( v22 == v21 + 5 )
                break;
              operator delete(v22);
              if ( v20 == v21 )
                goto LABEL_33;
            }
          }
          while ( v20 != v21 );
LABEL_33:
          v21 = (void **)v18[66];
        }
        if ( v21 != v18 + 68 )
          free(v21);
        v23 = (void **)v18[52];
        if ( v23 != v18 + 54 )
          free(v23);
        v24 = v18 + 48;
        v25 = v18 + 8;
        do
        {
          while ( *v24 != v24 + 2 )
          {
            operator delete(*v24);
            v24 -= 4;
            if ( v25 == v24 )
              goto LABEL_41;
          }
          v24 -= 4;
        }
        while ( v25 != v24 );
LABEL_41:
        operator delete(v18, 0x3A0u);
      }
      else
      {
        v27 = *(unsigned int *)(v49 + 14976);
        *(_DWORD *)(v49 + 14976) = v27 + 1;
        *(_QWORD *)(v19 + 8 * v27 + 14848) = v18;
      }
    }
  }
LABEL_4:
  LODWORD(v48) = 3056;
  v8 = sub_21B6DA0(a4, &v48, 1);
  v9 = *(_QWORD *)(a4 + 8);
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  if ( v10 == v11 )
    goto LABEL_8;
  while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3056) )
  {
    if ( v11 == ++v10 )
      goto LABEL_8;
  }
  if ( v11 == v10 )
  {
LABEL_8:
    LODWORD(v48) = 3037;
    v12 = sub_21B6DA0(a4, &v48, 1);
    v13 = *(_QWORD *)(a4 + 8);
    v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
    v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
    if ( v14 != v15 )
    {
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3037) )
      {
        if ( v15 == ++v14 )
          goto LABEL_12;
      }
      if ( v15 != v14 )
      {
        do
        {
          v26 = *(_QWORD *)(*v14 + 16LL);
          if ( !v26 )
            v26 = *v14;
          ++v14;
          *(_BYTE *)(v26 + 44) |= 1u;
          if ( v14 == v15 )
            break;
          while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3037) )
          {
            if ( v15 == ++v14 )
              return;
          }
        }
        while ( v15 != v14 );
        return;
      }
    }
LABEL_12:
    if ( !*(_BYTE *)(a1 + 2384) )
      return;
    v28 = *(_QWORD *)(a1 + 2464);
    v29 = *(_BYTE **)(a1 + 2488);
    *(_QWORD *)(a1 + 4984) = *(_QWORD *)(a1 + 2456);
    v30 = *(_QWORD *)(a1 + 2496);
    *(_QWORD *)(a1 + 4992) = v28;
    src = v47;
    sub_1179C40(&src, v29, (__int64)&v29[v30]);
    v31 = src;
    v32 = n;
    v48 = v50;
    if ( (char *)src + n && !src )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v33 = (__int64 *)operator new(n + 1);
      v50[0] = v32;
      v48 = v33;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v50[0]) = *(_BYTE *)src;
        v33 = v50;
LABEL_65:
        v49 = v32;
        *((_BYTE *)v33 + v32) = 0;
        v34 = v49;
        if ( 0x7FFFFFFFFFFFFFFFLL - v49 <= 6 )
          std::__throw_length_error("basic_string::append");
        if ( v48 == v50 )
          v35 = 15;
        else
          v35 = v50[0];
        if ( v49 + 7 > v35 )
        {
          sub_998B30((__int64)&v48, v49, 0, "/../bin", 7u);
        }
        else
        {
          v36 = (char *)v48 + v49;
          *(_DWORD *)v36 = 791555631;
          *((_WORD *)v36 + 2) = 26978;
          v36[6] = 110;
        }
        v49 = v34 + 7;
        *((_BYTE *)v48 + v34 + 7) = 0;
        v37 = *(unsigned int *)(a1 + 1160);
        v38 = v37 + 1;
        if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
        {
          v43 = *(_QWORD *)(a1 + 1152);
          v44 = a1 + 1152;
          if ( v43 > (unsigned __int64)&v48 || (unsigned __int64)&v48 >= v43 + 32 * v37 )
          {
            sub_A8C1F0(v44, v38);
            v37 = *(unsigned int *)(a1 + 1160);
            v40 = (__m128i *)&v48;
            v39 = *(_QWORD *)(a1 + 1152);
          }
          else
          {
            sub_A8C1F0(v44, v38);
            v39 = *(_QWORD *)(a1 + 1152);
            v37 = *(unsigned int *)(a1 + 1160);
            v40 = (__m128i *)((char *)&v48 + v39 - v43);
          }
        }
        else
        {
          v39 = *(_QWORD *)(a1 + 1152);
          v40 = (__m128i *)&v48;
        }
        v41 = (__m128i *)(v39 + 32 * v37);
        v41->m128i_i64[0] = (__int64)v41[1].m128i_i64;
        if ( (__m128i *)v40->m128i_i64[0] == &v40[1] )
        {
          v41[1] = _mm_loadu_si128(v40 + 1);
        }
        else
        {
          v41->m128i_i64[0] = v40->m128i_i64[0];
          v41[1].m128i_i64[0] = v40[1].m128i_i64[0];
        }
        v41->m128i_i64[1] = v40->m128i_i64[1];
        v40->m128i_i64[0] = (__int64)v40[1].m128i_i64;
        v40->m128i_i64[1] = 0;
        v40[1].m128i_i8[0] = 0;
        v42 = (__int64 *)v48;
        ++*(_DWORD *)(a1 + 1160);
        if ( v42 != v50 )
          operator delete(v42);
        if ( src != v47 )
          operator delete(src);
        return;
      }
      v33 = v50;
      if ( !n )
        goto LABEL_65;
    }
    memcpy(v33, v31, v32);
    v33 = (__int64 *)v48;
    goto LABEL_65;
  }
  do
  {
    v16 = *v10;
    if ( *(_QWORD *)(*v10 + 16LL) )
      v16 = *(_QWORD *)(*v10 + 16LL);
    ++v10;
    *(_BYTE *)(v16 + 44) |= 1u;
    if ( v10 == v11 )
      break;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3056) )
    {
      if ( v11 == ++v10 )
        return;
    }
  }
  while ( v11 != v10 );
}
