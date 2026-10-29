__int64 __fastcall CoinFactorization::checkConsistency(CoinFactorization *this)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rsi
  char v8; // si
  __int64 result; // rax
  __int64 v10; // rbx
  int v11; // r15d
  int v12; // eax
  int v13; // edi
  int v14; // eax
  __int64 v15; // rbx
  int *v16; // r14
  __int64 v17; // rax
  int v18; // edx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  std::ostream *v22; // rbp
  __int64 v23; // rax
  char v24; // si
  std::ostream *v25; // rax
  __int64 v26; // r15
  int v27; // r13d
  int v28; // eax
  int v29; // edx
  int v30; // eax
  __int64 v31; // r15
  int *v32; // r12
  __int64 v33; // rax
  int v34; // edx
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rdx
  std::ostream *v38; // rbx
  __int64 v39; // rax
  char v40; // si
  std::ostream *v41; // rax
  __int64 (__fastcall *v42)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v43)(__int64, unsigned int); // rdx
  __int64 v44; // [rsp+0h] [rbp-88h]
  int *v45; // [rsp+8h] [rbp-80h]
  unsigned __int64 v46; // [rsp+8h] [rbp-80h]
  __int64 v48; // [rsp+18h] [rbp-70h]
  __int64 v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+30h] [rbp-58h]
  __int64 v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+38h] [rbp-50h]
  __int64 v54; // [rsp+38h] [rbp-50h]
  __int64 v55; // [rsp+40h] [rbp-48h]
  __int64 v56; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = *((_QWORD *)this + 23);
  v3 = *((_QWORD *)this + 63);
  v4 = *((_QWORD *)this + 78);
  v5 = *((_DWORD *)this + 8);
  if ( *((int *)this + 48) <= -2 )
    v2 = 0;
  v50 = v2;
  v6 = *((_QWORD *)this + 26);
  if ( *((int *)this + 54) <= -2 )
    v6 = 0;
  v48 = v6;
  v7 = *((_QWORD *)this + 29);
  if ( *((int *)this + 60) <= -2 )
    v7 = 0;
  v49 = v7;
  if ( *((int *)this + 128) <= -2 )
    v3 = 0;
  if ( *((int *)this + 158) <= -2 )
    v4 = 0;
  if ( *((int *)this + 164) > -2 )
    v1 = *((_QWORD *)this + 81);
  v8 = 0;
  v44 = v1;
  result = v3 + 4;
  v55 = v3 + 4;
  if ( v5 <= 0 )
  {
    if ( *((int *)this + 11) > 0 )
      goto LABEL_31;
    return result;
  }
  v51 = v3;
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v11 = v10;
      v12 = *(_DWORD *)(v48 + 4 * v10);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v50 + 4 * v10);
        v14 = v13 + v12;
        if ( v13 < v14 )
          break;
      }
      if ( (int)++v10 >= v5 )
        goto LABEL_30;
    }
    v53 = v10;
    v15 = v4;
    v16 = (int *)(v51 + 4LL * v13);
    v45 = (int *)(v55 + 4 * (v13 + (unsigned __int64)(unsigned int)(v14 - v13 - 1)));
    do
    {
      v17 = *v16;
      v18 = *(_DWORD *)(v44 + 4 * v17);
      v19 = v18 + *(_DWORD *)(v49 + 4 * v17);
      if ( v18 < v19 )
      {
        if ( *(_DWORD *)(v15 + 4LL * v18) == v11 )
          goto LABEL_28;
        v20 = v15 + 4LL * v18 + 4;
        v21 = v15 + 4 * ((unsigned int)(v19 - v18 - 1) + (__int64)v18) + 4;
        while ( v21 != v20 )
        {
          v20 += 4;
          if ( *(_DWORD *)(v20 - 4) == v11 )
            goto LABEL_28;
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v22 = (std::ostream *)std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = *(_QWORD *)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
      if ( !v23 )
LABEL_56:
        std::__throw_bad_cast();
      if ( *(_BYTE *)(v23 + 56) )
      {
        v24 = *(_BYTE *)(v23 + 67);
      }
      else
      {
        v56 = *(_QWORD *)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
        std::ctype<char>::_M_widen_init();
        v24 = 10;
        v42 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v56 + 48LL);
        if ( v42 != std::ctype<char>::do_widen )
          v24 = v42(v56, 10u);
      }
      v25 = (std::ostream *)std::ostream::put(v22, v24);
      std::ostream::flush(v25);
      v8 = 1;
LABEL_28:
      ++v16;
    }
    while ( v45 != v16 );
    v4 = v15;
    v5 = *((_DWORD *)this + 8);
    v10 = v53 + 1;
  }
  while ( (int)v53 + 1 < v5 );
LABEL_30:
  v3 = v51;
  result = *((unsigned int *)this + 11);
  if ( (int)result > 0 )
  {
LABEL_31:
    v26 = 0;
    while ( 1 )
    {
      v27 = v26;
      v28 = *(_DWORD *)(v49 + 4 * v26);
      if ( v28 )
      {
        v29 = *(_DWORD *)(v44 + 4 * v26);
        v30 = v29 + v28;
        if ( v29 < v30 )
          break;
      }
LABEL_32:
      result = (unsigned int)++v26;
      if ( *((_DWORD *)this + 11) <= (int)v26 )
        goto LABEL_51;
    }
    v52 = v26;
    v31 = v3;
    v32 = (int *)(v4 + 4LL * v29);
    v46 = v4 + 4 + 4 * (v29 + (unsigned __int64)(unsigned int)(v30 - v29 - 1));
    while ( 2 )
    {
      v33 = *v32;
      v34 = *(_DWORD *)(v50 + 4 * v33);
      v35 = v34 + *(_DWORD *)(v48 + 4 * v33);
      if ( v34 >= v35 )
      {
LABEL_41:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        v38 = (std::ostream *)std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        v39 = *(_QWORD *)((char *)v38 + *(_QWORD *)(*(_QWORD *)v38 - 24LL) + 240);
        if ( !v39 )
          goto LABEL_56;
        if ( *(_BYTE *)(v39 + 56) )
        {
          v40 = *(_BYTE *)(v39 + 67);
        }
        else
        {
          v54 = *(_QWORD *)((char *)v38 + *(_QWORD *)(*(_QWORD *)v38 - 24LL) + 240);
          std::ctype<char>::_M_widen_init();
          v40 = 10;
          v43 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v54 + 48LL);
          if ( v43 != std::ctype<char>::do_widen )
            v40 = v43(v54, 10u);
        }
        v41 = (std::ostream *)std::ostream::put(v38, v40);
        std::ostream::flush(v41);
        v8 = 1;
      }
      else if ( *(_DWORD *)(v31 + 4LL * v34) != v27 )
      {
        v36 = v31 + 4LL * v34 + 4;
        v37 = v31 + 4 * ((unsigned int)(v35 - v34 - 1) + (__int64)v34) + 4;
        while ( v36 != v37 )
        {
          v36 += 4;
          if ( *(_DWORD *)(v36 - 4) == v27 )
            goto LABEL_45;
        }
        goto LABEL_41;
      }
LABEL_45:
      if ( (int *)v46 == ++v32 )
      {
        v3 = v31;
        v26 = v52;
        goto LABEL_32;
      }
      continue;
    }
  }
LABEL_51:
  if ( v8 )
    abort();
  return result;
}

