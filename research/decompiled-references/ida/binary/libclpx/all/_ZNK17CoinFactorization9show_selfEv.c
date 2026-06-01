__int64 __fastcall CoinFactorization::show_self(CoinFactorization *this)
{
  __int64 result; // rax
  __int64 v3; // rbp
  char v4; // si
  std::ostream *v5; // rax
  __int64 v6; // rax
  double v7; // xmm0_8
  _BYTE *v8; // r14
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax
  __int64 v10; // r15
  __int64 v11; // r14
  std::ostream *v12; // r13
  _BYTE *v13; // r12
  char v14; // si
  std::ostream *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // r12
  char v28; // si
  std::ostream *v29; // rax
  bool v30; // cc
  __int64 v31; // rdx
  __int64 v32; // rax
  std::ostream *v33; // r8
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(__int64, unsigned int); // rax
  char v36; // al
  __int64 v37; // r12
  std::ostream *v38; // r14
  _BYTE *v39; // r13
  char v40; // si
  std::ostream *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // r14
  __int64 v53; // r12
  char v54; // si
  std::ostream *v55; // rax
  __int64 v56; // rax
  double v57; // xmm0_8
  std::ostream *v58; // r8
  __int64 v59; // rdx
  __int64 (__fastcall *v60)(__int64, unsigned int); // rax
  char v61; // al
  __int64 (__fastcall *v62)(__int64, unsigned int); // rax
  __int64 (__fastcall *v63)(__int64, unsigned int); // rax
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  int v66; // [rsp+10h] [rbp-48h]
  std::ostream *v67; // [rsp+10h] [rbp-48h]
  unsigned int v68; // [rsp+18h] [rbp-40h]
  std::ostream *v69; // [rsp+18h] [rbp-40h]

  result = *((unsigned int *)this + 8);
  if ( (int)result > 0 )
  {
    v3 = 0;
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      if ( *((_QWORD *)this + 19) && *((int *)this + 40) >= -1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      if ( *((int *)this + 34) >= -1 && *((_QWORD *)this + 16) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v6 = *((_QWORD *)this + 69);
      if ( *((int *)this + 140) <= -2 )
        v6 = 0;
      v7 = *(double *)(v6 + 8 * v3);
      std::ostream::_M_insert<double>();
      v8 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v8 )
        goto LABEL_78;
      if ( v8[56] )
      {
        v4 = v8[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v4 = 10;
        v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
        if ( v9 != std::ctype<char>::do_widen )
          v4 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v9)(v8, 10, v7);
      }
      v5 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v4);
      std::ostream::flush(v5);
      result = *((unsigned int *)this + 8);
      ++v3;
    }
    while ( (int)result > (int)v3 );
    if ( (int)result > 0 )
    {
      v11 = 0;
      v66 = 0;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = (std::ostream *)std::ostream::operator<<();
        v13 = *(_BYTE **)((char *)v12 + *(_QWORD *)(*(_QWORD *)v12 - 24LL) + 240);
        if ( !v13 )
          goto LABEL_78;
        if ( v13[56] )
        {
          v14 = v13[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v14 = 10;
          v62 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
          if ( v62 != std::ctype<char>::do_widen )
            v14 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v62)(v13, 10, v7);
        }
        v15 = (std::ostream *)std::ostream::put(v12, v14);
        std::ostream::flush(v15);
        v16 = *((_QWORD *)this + 75);
        v17 = 0;
        v18 = 0;
        if ( *((int *)this + 152) <= -2 )
          v16 = 0;
        if ( *((int *)this + 164) > -2 )
          v17 = *((_QWORD *)this + 81);
        v19 = *(int *)(v17 + v11);
        v20 = v16 + 8 * v19;
        v21 = *((_QWORD *)this + 78);
        if ( *((int *)this + 158) <= -2 )
          v21 = 0;
        if ( *((int *)this + 60) > -2 )
          v18 = *((_QWORD *)this + 29);
        CoinSort_2<int,double>(v21 + 4 * v19, v21 + 4 * (v19 + *(int *)(v18 + v11)), v20);
        v22 = *((_DWORD *)this + 164);
        v23 = *((_QWORD *)this + 81);
        v24 = 0;
        if ( v22 >= -1 )
          v24 = *((_QWORD *)this + 81);
        v25 = *(int *)(v24 + v11);
        v26 = 8 * v25;
        v27 = 4 * v25;
        while ( 1 )
        {
          v30 = v22 <= -2;
          v31 = 0;
          if ( v30 )
            v23 = 0;
          if ( *((int *)this + 60) > -2 )
            v31 = *((_QWORD *)this + 29);
          if ( *(_DWORD *)(v23 + v11) + *(_DWORD *)(v31 + v11) <= (int)v25 )
            break;
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          v32 = 0;
          if ( *((int *)this + 152) > -2 )
            v32 = *((_QWORD *)this + 75);
          v7 = *(double *)(v32 + v26);
          v33 = (std::ostream *)std::ostream::_M_insert<double>();
          v34 = *(_QWORD *)((char *)v33 + *(_QWORD *)(*(_QWORD *)v33 - 24LL) + 240);
          if ( !v34 )
            goto LABEL_78;
          if ( *(_BYTE *)(v34 + 56) )
          {
            v28 = *(_BYTE *)(v34 + 67);
          }
          else
          {
            v69 = v33;
            v64 = *(_QWORD *)((char *)v33 + *(_QWORD *)(*(_QWORD *)v33 - 24LL) + 240);
            std::ctype<char>::_M_widen_init();
            v28 = 10;
            v33 = v69;
            v35 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v64 + 48LL);
            if ( v35 != std::ctype<char>::do_widen )
            {
              v36 = ((__int64 (__fastcall *)(__int64, __int64, double))v35)(v64, 10, v7);
              v33 = v69;
              v28 = v36;
            }
          }
          LODWORD(v25) = v25 + 1;
          v26 += 8;
          v29 = (std::ostream *)std::ostream::put(v33, v28);
          v27 += 4;
          std::ostream::flush(v29);
          v23 = *((_QWORD *)this + 81);
          v22 = *((_DWORD *)this + 164);
        }
        ++v66;
        result = *((unsigned int *)this + 8);
        v11 += 4;
      }
      while ( (int)result > v66 );
      if ( (int)result > 0 )
      {
        v10 = 4;
        v68 = 0;
        while ( 1 )
        {
          v37 = v10 - 4;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          v38 = (std::ostream *)std::ostream::operator<<();
          v39 = *(_BYTE **)((char *)v38 + *(_QWORD *)(*(_QWORD *)v38 - 24LL) + 240);
          if ( !v39 )
            break;
          if ( v39[56] )
          {
            v40 = v39[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v40 = 10;
            v63 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v39 + 48LL);
            if ( v63 != std::ctype<char>::do_widen )
              v40 = v63((__int64)v39, 10u);
          }
          v41 = (std::ostream *)std::ostream::put(v38, v40);
          std::ostream::flush(v41);
          v42 = *((_QWORD *)this + 89);
          v43 = *((_QWORD *)this + 95);
          if ( *((int *)this + 180) <= -2 )
            v42 = 0;
          if ( *((int *)this + 192) <= -2 )
            v43 = 0;
          v44 = *(int *)(v43 + v37);
          v45 = *(int *)(v43 + v10);
          v46 = v42 + 8 * v44;
          v47 = *((_QWORD *)this + 92);
          if ( *((int *)this + 186) <= -2 )
            v47 = 0;
          CoinSort_2<int,double>(v47 + 4 * v44, v47 + 4 * v45, v46);
          v48 = *((_DWORD *)this + 192);
          v49 = *((_QWORD *)this + 95);
          v50 = 0;
          if ( v48 >= -1 )
            v50 = *((_QWORD *)this + 95);
          v51 = *(int *)(v50 + v37);
          v52 = 8 * v51;
          v53 = 4 * v51;
          while ( 1 )
          {
            if ( v48 <= -2 )
              v49 = 0;
            if ( *(_DWORD *)(v49 + v10) <= (int)v51 )
              break;
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            v56 = 0;
            if ( *((int *)this + 180) > -2 )
              v56 = *((_QWORD *)this + 89);
            v57 = *(double *)(v56 + v52);
            v58 = (std::ostream *)std::ostream::_M_insert<double>();
            v59 = *(_QWORD *)((char *)v58 + *(_QWORD *)(*(_QWORD *)v58 - 24LL) + 240);
            if ( !v59 )
              goto LABEL_78;
            if ( *(_BYTE *)(v59 + 56) )
            {
              v54 = *(_BYTE *)(v59 + 67);
            }
            else
            {
              v67 = v58;
              v65 = *(_QWORD *)((char *)v58 + *(_QWORD *)(*(_QWORD *)v58 - 24LL) + 240);
              std::ctype<char>::_M_widen_init();
              v54 = 10;
              v58 = v67;
              v60 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v65 + 48LL);
              if ( v60 != std::ctype<char>::do_widen )
              {
                v61 = ((__int64 (__fastcall *)(__int64, __int64, double))v60)(v65, 10, v57);
                v58 = v67;
                v54 = v61;
              }
            }
            LODWORD(v51) = v51 + 1;
            v52 += 8;
            v55 = (std::ostream *)std::ostream::put(v58, v54);
            v53 += 4;
            std::ostream::flush(v55);
            v49 = *((_QWORD *)this + 95);
            v48 = *((_DWORD *)this + 192);
          }
          ++v68;
          v10 += 4;
          result = v68;
          if ( *((_DWORD *)this + 8) <= (signed int)v68 )
            return result;
        }
LABEL_78:
        std::__throw_bad_cast();
      }
    }
  }
  return result;
}

