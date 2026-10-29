__int64 __fastcall sub_6806C0(__int64 a1, __int64 *a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  _DWORD *v10; // rax
  char v11; // bp
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // r12
  _QWORD *i; // rbp
  __int64 v22; // rbp
  bool v23; // zf
  char *v24; // rdi
  int v25; // ecx
  __int64 v26; // rsi
  char *v27; // rax
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rsi
  __int64 v32; // rdi
  char v33; // al
  unsigned int **v34; // rbx
  int v35; // eax
  unsigned int **v36; // r12
  void *v37; // rsi
  void *v38; // rdi
  unsigned int *v39; // rbp
  unsigned int v40; // esi
  unsigned int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 (__fastcall *v49)(__int64); // rax
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // [rsp+8h] [rbp-120h]
  __int64 v53; // [rsp+8h] [rbp-120h]
  unsigned int v55; // [rsp+20h] [rbp-108h]
  char v56; // [rsp+27h] [rbp-101h]
  __int64 v57; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int *v58; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v59[48]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v60[64]; // [rsp+70h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-78h] BYREF

  sub_6758D0((_QWORD *)(a1 + 416), (__int64 *)(a1 + 1592));
  v4 = *a2;
  v58 = nullptr;
  v57 = v4;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = *(_DWORD **)(v5 + 8LL * v6);
      ptr[0] = v7;
      if ( v7 )
        ++v7[2];
      sub_6761A0(&v58, ptr);
      ++v6;
      v5 = a2[1];
    }
    while ( v5 );
  }
  v8 = *(_QWORD *)(a1 + 1552);
  if ( v8 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= *(_DWORD *)(v8 - 4) )
        break;
      v10 = *(_DWORD **)(v8 + 8LL * v9);
      ptr[0] = v10;
      if ( v10 )
        ++v10[2];
      sub_6761A0(&v58, ptr);
      v8 = *(_QWORD *)(a1 + 1552);
      ++v9;
    }
    while ( v8 );
  }
  sub_167E970(v59, a2, 0, 0, 0);
  sub_167F5F0(v60, v59);
  sub_167F5B0(ptr, v59);
  v56 = 0;
  while ( 1 )
  {
    v11 = sub_167E490(v60, ptr);
    if ( !v11 )
      break;
    v12 = sub_167E460(v60);
    if ( *(_WORD *)(v12 + 4) == 2 )
    {
      v13 = *(_DWORD *)(v12 + 16);
      if ( v13 )
        v56 |= v13 == 1;
      else
        v56 = v11;
    }
    sub_167EA90(v60);
  }
  sub_6642B0((__int64)ptr);
  sub_6642B0((__int64)v60);
  sub_677270((__int64)v59);
  sub_167E970(v59, &v57, 0, 0, 0);
  sub_167F5F0(v60, v59);
  sub_167F5B0(ptr, v59);
  v55 = 1;
  while ( (unsigned __int8)sub_167E490(v60, ptr) )
  {
    v14 = sub_167E460(v60);
    v15 = v14;
    if ( *(_WORD *)(v14 + 4) != 2 || *(_DWORD *)(v14 + 16) > 1u )
    {
      v16 = *(_QWORD **)(a1 + 472);
      if ( !v16 )
        goto LABEL_29;
      v17 = &v16[*((unsigned int *)v16 - 1)];
      if ( v16 == v17 )
        goto LABEL_29;
      v18 = *(_QWORD **)(a1 + 472);
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 48LL))(*v18, v15) )
      {
        if ( v17 == ++v18 )
          goto LABEL_29;
      }
      v19 = sub_15D1F10(v15);
      if ( !(unsigned __int8)sub_6759B0(a1 + 416, v19) )
LABEL_29:
        v55 = -1;
    }
    sub_167EA90(v60);
  }
  sub_6642B0((__int64)ptr);
  sub_6642B0((__int64)v60);
  sub_677270((__int64)v59);
  v20 = *(_QWORD **)(a1 + 472);
  if ( v20 )
  {
    for ( i = &v20[*((unsigned int *)v20 - 1)]; i != v20; ++v20 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*v20 + 72LL))(*v20, a1 + 1592, &v57);
  }
  if ( v56 )
  {
    v22 = *(_QWORD *)(a1 + 1592);
    if ( v22 )
      ++*(_DWORD *)(v22 + 16);
    sub_675410(*(void (****)(void))(a1 + 1408));
    v23 = *(_QWORD *)(a1 + 1416) == 0;
    *(_QWORD *)(a1 + 1408) = v22;
    if ( v23 )
    {
      v48 = sub_186B270(0x660u);
      v49 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 104LL);
      if ( v49 == sub_2B1DE0 )
        v50 = a1 + 80;
      else
        v50 = v49(a1);
      sub_67D690(v48, *(_DWORD *)(a1 + 408) + 1, *(_QWORD *)(a1 + 136), v50);
      ++*(_DWORD *)(v48 + 48);
      sub_6753E0(*(void (****)(void))(a1 + 1416));
      *(_QWORD *)(a1 + 1416) = v48;
    }
    sub_2FCDE0((__int64 *)(a1 + 1448));
    if ( !*(_DWORD *)(a1 + 1436) && !*(_DWORD *)(a1 + 1440) )
    {
LABEL_44:
      sub_167E970(v59, a2, 0, 0, 0);
      sub_167F5F0(v60, v59);
      sub_167F5B0(ptr, v59);
      while ( (unsigned __int8)sub_167E490(v60, ptr) )
      {
        v29 = sub_167E460(v60);
        sub_67C280(a1 + 1368, v29);
        sub_167EA90(v60);
      }
      sub_6642B0((__int64)ptr);
      sub_6642B0((__int64)v60);
      sub_677270((__int64)v59);
      sub_167E970(v59, a1 + 1512, 0, 0, 0);
      sub_167F5F0(v60, v59);
      sub_167F5B0(ptr, v59);
      while ( (unsigned __int8)sub_167E490(v60, ptr) )
      {
        v30 = sub_167E460(v60);
        sub_67C280(a1 + 1368, v30);
        sub_167EA90(v60);
      }
      sub_6642B0((__int64)ptr);
      sub_6642B0((__int64)v60);
      sub_677270((__int64)v59);
      v31 = (unsigned int *)a2;
      v32 = a1 + 1368;
      v33 = sub_67FD80((_QWORD *)(a1 + 1368), (char *)a2, *(double *)a3.m128_u64);
      v34 = *(unsigned int ***)(a1 + 440);
      if ( v33 )
      {
        if ( !v34 )
          goto LABEL_91;
        v35 = *((_DWORD *)v34 - 1);
      }
      else if ( !v34 || (v35 = *((_DWORD *)v34 - 1)) == 0 )
      {
        v55 = -1;
        goto LABEL_79;
      }
      v36 = &v34[v35];
      if ( v34 == v36 )
        goto LABEL_82;
      do
      {
        v39 = *v34;
        if ( (unsigned int)sub_180B130(v32) > 9 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
          {
            sub_186A4C0(*(double *)a3.m128_u64);
            sub_180B150(v32, v31);
            std::__ostream_insert<char,std::char_traits<char>>();
            v52 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            a3 = _mm_loadh_ps((const double *)(a1 + 136));
            ++v39[2];
            *(__m128 *)ptr = a3;
            sub_160EBE0(v52, ptr);
            std::__ostream_insert<char,std::char_traits<char>>();
            v37 = ptr[1];
            v38 = ptr[0];
            sub_675460((__int64)ptr[0], (__int64)ptr[1]);
            sub_186A500(v38, v37);
          }
          else
          {
            sub_180B150(v32, v31);
            std::__ostream_insert<char,std::char_traits<char>>();
            v53 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            a3 = _mm_loadh_ps((const double *)(a1 + 136));
            ++v39[2];
            *(__m128 *)ptr = a3;
            sub_160EBE0(v53, ptr);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_675460((__int64)ptr[0], (__int64)ptr[1]);
          }
        }
        v31 = v39;
        v32 = a1;
        sub_67BEB0(a1, v39);
        ++v34;
      }
      while ( v36 != v34 );
      v46 = *(_QWORD *)(a1 + 440);
      if ( v46 )
      {
        v35 = *(_DWORD *)(v46 - 4);
LABEL_82:
        *(_DWORD *)(a1 + 128) += v35;
        if ( (unsigned int)sub_180B130(v32) > 9 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
          {
            sub_186A4C0(*(double *)a3.m128_u64);
            sub_180B150(v32, v31);
            std::__ostream_insert<char,std::char_traits<char>>();
            v51 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v51, "\n");
          }
          else
          {
            sub_180B150(v32, v31);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        v47 = *(_QWORD *)(a1 + 440);
        if ( v47 && *(_DWORD *)(v47 - 4) )
          v55 = 0;
        goto LABEL_79;
      }
LABEL_91:
      v35 = 0;
      goto LABEL_82;
    }
    v24 = *(char **)(a1 + 1424);
    v25 = 0;
    v26 = *(unsigned int *)(a1 + 1432);
    v27 = v24;
    v28 = &v24[32 * v26];
    if ( v24 == v28 )
      goto LABEL_43;
    do
    {
      while ( *(_QWORD *)v27 )
      {
        *(_QWORD *)v27 = 0;
        v27 += 32;
        if ( v28 == v27 )
          goto LABEL_63;
      }
      v27 += 32;
      ++v25;
    }
    while ( v28 != v27 );
LABEL_63:
    if ( (unsigned int)v26 <= 0x10 || 3 * (int)v26 >= (unsigned int)(4 * v25) )
    {
LABEL_43:
      *(_QWORD *)(a1 + 1436) = 0;
      goto LABEL_44;
    }
    if ( v24 )
    {
      sub_186B220(v24);
      v40 = *(_DWORD *)(a1 + 1432);
      *(_QWORD *)(a1 + 1424) = 0;
      v41 = v40 >> 1;
      *(_DWORD *)(a1 + 1432) = v41;
      v42 = sub_186B270(32LL * v41);
      if ( !v41 )
        goto LABEL_75;
    }
    else
    {
      *(_QWORD *)(a1 + 1424) = 0;
      v41 = (unsigned int)v26 >> 1;
      *(_DWORD *)(a1 + 1432) = v41;
      v42 = sub_186B270(32LL * v41);
    }
    v43 = v42;
    if ( v41 - 1 <= 2 )
    {
LABEL_72:
      a3.m128_u64[0] = 0;
      *(_DWORD *)(v43 + 24) = 0;
      *(_OWORD *)v43 = 0;
      if ( v41 != 1 )
      {
        *(_DWORD *)(v43 + 56) = 0;
        *(_OWORD *)(v43 + 32) = 0;
        if ( v41 != 2 )
        {
          *(_DWORD *)(v43 + 88) = 0;
          *(_OWORD *)(v43 + 64) = 0;
        }
      }
      goto LABEL_75;
    }
    a3.m128_u64[0] = 0;
    do
    {
      *(_DWORD *)(v43 + 24) = 0;
      v43 += 128;
      *(_OWORD *)(v43 - 128) = 0;
      *(_OWORD *)(v43 - 96) = 0;
      *(_OWORD *)(v43 - 64) = 0;
      *(_OWORD *)(v43 - 32) = 0;
      *(_DWORD *)(v43 - 72) = 0;
      *(_DWORD *)(v43 - 40) = 0;
      *(_DWORD *)(v43 - 8) = 0;
    }
    while ( v43 != v42 + ((unsigned __int64)(v41 >> 2) << 7) );
    if ( (v41 & 3) != 0 )
    {
      v44 = v41 & 0xFFFFFFFC;
      v41 -= v44;
      v43 = v42 + 32 * v44;
      goto LABEL_72;
    }
LABEL_75:
    *(_QWORD *)(a1 + 1424) = v42;
    goto LABEL_43;
  }
LABEL_79:
  sub_2334C0(&v57);
  return v55;
}

