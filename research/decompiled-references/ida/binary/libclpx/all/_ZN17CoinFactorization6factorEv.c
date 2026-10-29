__int64 __fastcall CoinFactorization::factor(CoinFactorization *this)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  std::ostream *v8; // r12
  _BYTE *v9; // rbp
  char v10; // si
  std::ostream *v11; // rax
  bool v12; // cc
  __int64 v13; // r14
  int v14; // esi
  int *v15; // rdx
  __int64 v16; // rax
  int *v17; // rcx
  __int64 v18; // r15
  int *v19; // rax
  int i; // ecx
  __int64 v21; // rdx
  CoinArrayWithLength *v22; // rcx
  __int64 v23; // rax
  CoinArrayWithLength *v24; // r8
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // edx
  bool v33; // cf
  int v34; // edx
  __int64 v35; // rax
  int v36; // edx
  std::ostream *v37; // rbp
  _BYTE *v38; // r12
  char v39; // si
  std::ostream *v40; // rax
  __int64 (__fastcall *v41)(__int64, unsigned int); // rax
  std::ostream *v42; // rbp
  _BYTE *v43; // r12
  char v44; // si
  std::ostream *v45; // rax
  __int64 (__fastcall *v46)(__int64, unsigned int); // rax
  __int64 (__fastcall *v47)(__int64, unsigned int); // rax
  CoinArrayWithLength *v48; // [rsp+8h] [rbp-40h]

  v2 = *((_QWORD *)this + 47);
  v3 = *((_QWORD *)this + 53);
  if ( *((int *)this + 96) <= -2 )
    v2 = 0;
  if ( *((int *)this + 108) <= -2 )
    v3 = 0;
  v4 = CoinFactorization::factorSparse(this);
  v5 = v4;
  *((_DWORD *)this + 44) = v4;
  if ( !v4 )
  {
    v12 = *((_DWORD *)this + 22) <= -2;
    v13 = *((_QWORD *)this + 10);
    v14 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 18) = 0;
    if ( v12 )
      v13 = 0;
    if ( *((_DWORD *)this + 14) < v14 )
    {
      v15 = *((int **)this + 50);
      if ( *((int *)this + 102) <= -2 )
        v15 = nullptr;
      v16 = v15[*((int *)this + 10)];
      if ( *((_DWORD *)this + 10) != (_DWORD)v16 && (int)v16 >= 0 )
      {
        do
        {
          v17 = &v15[v16];
          v16 = *v17;
          *v17 = -1;
        }
        while ( *((_DWORD *)this + 10) != (_DWORD)v16 && (int)v16 >= 0 );
        v14 = *((_DWORD *)this + 8);
      }
      v18 = *((_QWORD *)this + 13);
      if ( *((int *)this + 28) <= -2 )
        v18 = 0;
      if ( v14 > 0 )
      {
        v19 = v15;
        for ( i = 0; i < v14; ++i )
        {
          while ( 1 )
          {
            v21 = *v19;
            if ( (int)v21 < 0 )
              break;
            *(_DWORD *)(v18 + 4 * v21) = i;
            v14 = *((_DWORD *)this + 8);
            ++i;
            ++v19;
            if ( i >= v14 )
              goto LABEL_37;
          }
          ++v19;
        }
      }
LABEL_37:
      CoinArrayWithLength::swap((CoinFactorization *)((char *)this + 104), (CoinFactorization *)((char *)this + 400));
      v22 = *((CoinArrayWithLength **)this + 13);
      if ( *((int *)this + 28) <= -2 )
        v22 = nullptr;
      v23 = 1;
      v24 = (CoinFactorization *)((char *)this + 400);
      if ( *((int *)this + 8) > 0 )
      {
        do
        {
          *(_DWORD *)(v3 + 4 * v23 - 4) = -1;
          v25 = v23++;
        }
        while ( *((_DWORD *)this + 8) > v25 );
      }
      if ( *((int *)this + 11) > 0 )
      {
        v26 = 1;
        do
        {
          *(_DWORD *)(v2 + 4 * v26 - 4) = -1;
          v27 = v26++;
        }
        while ( *((_DWORD *)this + 11) > v27 );
      }
      if ( *((int *)this + 14) > 0 )
      {
        v28 = 1;
        do
        {
          v29 = *(int *)(v13 + 4 * v28 - 4);
          v30 = *(int *)(v18 + 4 * v28 - 4);
          *(_DWORD *)(v3 + 4 * v30) = v29;
          *(_DWORD *)(v2 + 4 * v29) = v30;
          LODWORD(v29) = v28++;
        }
        while ( *((_DWORD *)this + 14) > (int)v29 );
      }
      v48 = v22;
      CoinArrayWithLength::conditionalDelete(v24);
      v31 = 1;
      if ( *((int *)this + 8) > 0 )
      {
        do
        {
          v32 = *(_DWORD *)(v3 + 4 * v31 - 4);
          v33 = v32 < 0x80000000;
          *((_DWORD *)v48 + v31 - 1) = v32;
          v34 = v31;
          v5 += v33;
          ++v31;
        }
        while ( *((_DWORD *)this + 8) > v34 );
      }
      if ( *((int *)this + 11) > 0 )
      {
        v35 = 1;
        do
        {
          *(_DWORD *)(v13 + 4 * v35 - 4) = *(_DWORD *)(v2 + 4 * v35 - 4);
          v36 = v35++;
        }
        while ( *((_DWORD *)this + 11) > v36 );
      }
      if ( (*((_BYTE *)this + 496) & 4) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v42 = (std::ostream *)std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        v43 = *(_BYTE **)((char *)v42 + *(_QWORD *)(*(_QWORD *)v42 - 24LL) + 240);
        if ( !v43 )
          goto LABEL_70;
        if ( v43[56] )
        {
          v44 = v43[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v44 = 10;
          v46 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v43 + 48LL);
          if ( v46 != std::ctype<char>::do_widen )
            v44 = v46((__int64)v43, 10u);
        }
        v45 = (std::ostream *)std::ostream::put(v42, v44);
        std::ostream::flush(v45);
      }
      *((_DWORD *)this + 44) = -1;
      return (unsigned int)-1;
    }
LABEL_8:
    v6 = *((_DWORD *)this + 230);
    if ( (*((_BYTE *)this + 496) & 0x10) != 0 )
      goto LABEL_9;
    goto LABEL_18;
  }
  if ( v4 == 2 )
  {
    v5 = CoinFactorization::factorDense(this);
    *((_DWORD *)this + 44) = v5;
    if ( !v5 )
      goto LABEL_8;
  }
  if ( (*((_BYTE *)this + 496) & 4) == 0 )
    return v5;
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = (std::ostream *)std::ostream::operator<<();
  v9 = *(_BYTE **)((char *)v8 + *(_QWORD *)(*(_QWORD *)v8 - 24LL) + 240);
  if ( !v9 )
    goto LABEL_70;
  if ( v9[56] )
  {
    v10 = v9[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v10 = 10;
    v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v9 + 48LL);
    if ( v41 != std::ctype<char>::do_widen )
      v10 = v41((__int64)v9, 10u);
  }
  v11 = (std::ostream *)std::ostream::put(v8, v10);
  std::ostream::flush(v11);
  v5 = *((_DWORD *)this + 44);
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 230);
    if ( (*((_BYTE *)this + 496) & 0x10) != 0 )
    {
LABEL_9:
      if ( !v6 )
      {
LABEL_10:
        *((_DWORD *)this + 230) = 0;
        CoinFactorization::cleanup(this);
        return *((unsigned int *)this + 44);
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v37 = (std::ostream *)std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v38 = *(_BYTE **)((char *)v37 + *(_QWORD *)(*(_QWORD *)v37 - 24LL) + 240);
      if ( v38 )
      {
        if ( v38[56] )
        {
          v39 = v38[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v39 = 10;
          v47 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v38 + 48LL);
          if ( v47 != std::ctype<char>::do_widen )
            v39 = v47((__int64)v38, 10u);
        }
        v40 = (std::ostream *)std::ostream::put(v37, v39);
        std::ostream::flush(v40);
        v6 = *((_DWORD *)this + 230);
        goto LABEL_18;
      }
LABEL_70:
      std::__throw_bad_cast();
    }
LABEL_18:
    if ( v6 > 10 )
      *((double *)this + 2) = 1.1 * *((double *)this + 2);
    goto LABEL_10;
  }
  return v5;
}

