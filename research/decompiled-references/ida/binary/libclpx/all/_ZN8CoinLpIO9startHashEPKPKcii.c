char *__fastcall CoinLpIO::startHash(CoinLpIO *this, const char *const *a2, int a3, int a4)
{
  int v4; // r14d
  char *v5; // r12
  __int64 v7; // rax
  _DWORD *v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rdx
  unsigned int v11; // eax
  std::string *v12; // r13
  const char *v13; // r15
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rsi
  int v17; // edi
  int v18; // eax
  __int64 v19; // r10
  int v20; // edx
  unsigned int v21; // ecx
  _DWORD *v22; // rax
  std::string *v23; // rax
  int v24; // ebx
  __int64 v25; // r13
  int v26; // r12d
  const char *v27; // r14
  int v28; // eax
  __int64 v29; // rsi
  int v30; // edi
  int v31; // edx
  __int64 v32; // r9
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // edx
  int *v36; // r15
  __int64 v37; // rax
  const char **v38; // r15
  int v39; // r12d
  const char *v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // rdx
  const char *v45; // rcx
  char *v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rcx
  char *v49; // rcx
  __int64 v51; // rax
  _DWORD *v52; // rdx
  int v53; // r12d
  const char *v54; // rax
  const char **v55; // rsi
  unsigned int v56; // edi
  __int64 v57; // rdx
  unsigned int v58; // ecx
  __int64 v59; // rdx
  const char *v60; // rcx
  char *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rcx
  char *v64; // rcx
  const char *v65; // rcx
  const char *v66; // rdx
  char v67; // si
  const char *v68; // rcx
  const char *v69; // rdx
  char v70; // r8
  _DWORD *exception; // rbx
  std::ostream *v72; // r15
  _BYTE *v73; // rbp
  char v74; // al
  std::ostream *v75; // rax
  std::ostream *v76; // r15
  _BYTE *v77; // rbp
  char v78; // al
  std::ostream *v79; // rax
  std::string *v80; // [rsp+8h] [rbp-20A0h]
  int v81; // [rsp+14h] [rbp-2094h]
  __int64 v83; // [rsp+20h] [rbp-2088h]
  int v84; // [rsp+20h] [rbp-2088h]
  std::string *v85; // [rsp+28h] [rbp-2080h]
  char *v86; // [rsp+38h] [rbp-2070h]
  __int64 v87; // [rsp+50h] [rbp-2058h] BYREF
  __int64 v88; // [rsp+58h] [rbp-2050h] BYREF
  __int64 v89; // [rsp+60h] [rbp-2048h] BYREF
  __int64 v90; // [rsp+68h] [rbp-2040h] BYREF
  __m128i si128; // [rsp+70h] [rbp-2038h]
  __m128i v92; // [rsp+80h] [rbp-2028h]
  char v93[8216]; // [rsp+90h] [rbp-2018h] BYREF

  v4 = 4 * a3;
  v5 = (char *)this + 8 * a4;
  *((_DWORD *)this + a4 + 76) = 4 * a3;
  v81 = 4 * a3;
  v86 = (char *)this + 4 * a4;
  *((_QWORD *)v5 + 36) = malloc(32LL * a3);
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v7 = operator new[](8LL * v4);
  v8 = (_DWORD *)v7;
  *((_QWORD *)v5 + 40) = v7;
  v9 = *((_QWORD *)v5 + 36);
  if ( v4 > 0 )
  {
    v10 = v7;
    v11 = 0;
    do
    {
      ++v11;
      v10 += 16;
      *(_OWORD *)(v10 - 16) = -1;
    }
    while ( (unsigned int)v81 >> 1 > v11 );
  }
  if ( a3 <= 0 )
  {
    v84 = 0;
  }
  else
  {
    v83 = v9;
    v12 = nullptr;
    do
    {
      v13 = a2[(_QWORD)v12];
      v14 = strlen(v13);
      if ( v14 <= 0 )
      {
        v22 = v8;
      }
      else
      {
        v15 = (unsigned int)(v14 - 1);
        v16 = 1;
        v17 = 0;
        v18 = 262139;
        v19 = v15 + 2;
        while ( 1 )
        {
          v20 = v13[v16 - 1];
          v21 = v16++;
          v17 += v18 * v20;
          if ( v16 == v19 )
            break;
          v18 = *((_DWORD *)qword_295B80 + v21 % 0x51);
        }
        v22 = &v8[2 * ((int)abs32(v17) % v81)];
      }
      if ( *v22 == -1 )
        *v22 = (_DWORD)v12;
      v12 = (std::string *)((char *)v12 + 1);
    }
    while ( v12 != (std::string *)((unsigned int)(a3 - 1) + 1LL) );
    v80 = nullptr;
    v23 = nullptr;
    v24 = -1;
    v85 = v12;
    v25 = v83;
    v84 = 0;
    do
    {
      v26 = (int)v23;
      v27 = a2[(_QWORD)v23];
      v28 = strlen(v27);
      if ( v28 <= 0 )
      {
        v35 = 0;
      }
      else
      {
        v29 = 1;
        v30 = 0;
        v31 = 262139;
        v32 = (unsigned int)(v28 - 1) + 2LL;
        while ( 1 )
        {
          v33 = v27[v29 - 1];
          v34 = v29++;
          v30 += v31 * v33;
          if ( v29 == v32 )
            break;
          v31 = *((_DWORD *)qword_295B80 + v34 % 0x51);
        }
        v35 = (int)abs32(v30) % v81;
      }
      do
      {
        v36 = &v8[2 * v35];
        v37 = *v36;
        if ( (_DWORD)v37 == v26 )
        {
          *v36 = v84;
          v38 = (const char **)(v25 + 8LL * v84);
          v39 = strlen(v27);
          v40 = (const char *)malloc(v39 + 1);
          if ( v39 && v27 != v40 )
          {
            v41 = v39 >> 3;
            if ( v39 >> 3 <= 0 )
            {
              v49 = (char *)v40;
            }
            else
            {
              if ( (v40 >= v27 + 16 || v27 >= v40 + 16) && v41 > 1 )
              {
                v42 = 0;
                v43 = 0;
                do
                {
                  ++v43;
                  *(__m128i *)&v40[v42] = _mm_loadu_si128((const __m128i *)&v27[v42]);
                  v42 += 16;
                }
                while ( v41 >> 1 > v43 );
                v44 = 8LL * (v41 & 0xFFFFFFFE);
                v45 = &v27[v44];
                v46 = (char *)&v40[v44];
                if ( (v41 & 0xFFFFFFFE) != v41 )
                {
                  *v46 = *v45;
                  v46[1] = v45[1];
                  v46[2] = v45[2];
                  v46[3] = v45[3];
                  v46[4] = v45[4];
                  v46[5] = v45[5];
                  v46[6] = v45[6];
                  v46[7] = v45[7];
                }
                LODWORD(v47) = v41 - 1;
              }
              else
              {
                v65 = v27;
                v47 = v41 - 1;
                v66 = v40;
                do
                {
                  v67 = *v65;
                  v66 += 8;
                  v65 += 8;
                  *((_BYTE *)v66 - 8) = v67;
                  *((_BYTE *)v66 - 7) = *(v65 - 7);
                  *((_BYTE *)v66 - 6) = *(v65 - 6);
                  *((_BYTE *)v66 - 5) = *(v65 - 5);
                  *((_BYTE *)v66 - 4) = *(v65 - 4);
                  *((_BYTE *)v66 - 3) = *(v65 - 3);
                  *((_BYTE *)v66 - 2) = *(v65 - 2);
                  *((_BYTE *)v66 - 1) = *(v65 - 1);
                }
                while ( &v40[8 * v47 + 8] != v66 );
              }
              v48 = 8LL * (int)v47 + 8;
              v27 += v48;
              v49 = (char *)&v40[v48];
            }
            switch ( v39 % 8 )
            {
              case 1:
                goto LABEL_42;
              case 2:
                goto LABEL_41;
              case 3:
                goto LABEL_40;
              case 4:
                goto LABEL_39;
              case 5:
                goto LABEL_38;
              case 6:
                goto LABEL_37;
              case 7:
                v49[6] = v27[6];
LABEL_37:
                v49[5] = v27[5];
LABEL_38:
                v49[4] = v27[4];
LABEL_39:
                v49[3] = v27[3];
LABEL_40:
                v49[2] = v27[2];
LABEL_41:
                v49[1] = v27[1];
LABEL_42:
                *v49 = *v27;
                break;
              default:
                break;
            }
          }
          ++v84;
          v40[v39] = 0;
          *v38 = v40;
          goto LABEL_44;
        }
        if ( !strcmp(v27, *(const char **)(v25 + 8 * v37)) )
          goto LABEL_44;
        v35 = v36[1];
      }
      while ( v35 != -1 );
      v51 = (__int64)&v8[2 * v24 + 2];
      do
      {
        if ( v81 < ++v24 )
        {
          strcpy(v93, "names\n");
          si128 = _mm_load_si128((const __m128i *)&xmmword_296A80);
          v92 = _mm_load_si128((const __m128i *)&xmmword_296A90);
          exception = __cxa_allocate_exception(0x30u);
          std::string::string();
          std::string::string();
          std::string::string();
          std::string::string();
          *(_QWORD *)exception = off_4D0500;
          std::string::string((std::string *)(exception + 2), (const std::string *)&v87);
          std::string::string((std::string *)(exception + 4), (const std::string *)&v88);
          std::string::string((std::string *)(exception + 6), (const std::string *)&v89);
          std::string::string((std::string *)(exception + 8), (const std::string *)&v90);
          exception[10] = 2832;
          if ( CoinError::printErrors_ )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v72 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v73 = *(_BYTE **)((char *)v72 + *(_QWORD *)(*(_QWORD *)v72 - 24LL) + 240);
            if ( !v73 )
              std::__throw_bad_cast();
            if ( v73[56] )
            {
              v74 = v73[67];
            }
            else
            {
              std::ctype<char>::_M_widen_init();
              v74 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v73 + 48LL))(v73, 10);
            }
            v75 = (std::ostream *)std::ostream::put(v72, v74);
            std::ostream::flush(v75);
            if ( (unsigned int)std::string::compare((std::string *)(exception + 6), "") )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v76 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
              v77 = *(_BYTE **)((char *)v76 + *(_QWORD *)(*(_QWORD *)v76 - 24LL) + 240);
              if ( !v77 )
                std::__throw_bad_cast();
              if ( v77[56] )
              {
                v78 = v77[67];
              }
              else
              {
                std::ctype<char>::_M_widen_init();
                v78 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v77 + 48LL))(v77, 10);
              }
              v79 = (std::ostream *)std::ostream::put(v76, v78);
              std::ostream::flush(v79);
            }
          }
          if ( (_UNKNOWN *)(v87 - 24) != &std::string::_Rep::_S_empty_rep_storage )
            sub_5C66A(v87 - 24);
          if ( (_UNKNOWN *)(v88 - 24) != &std::string::_Rep::_S_empty_rep_storage )
            sub_5C66A(v88 - 24);
          if ( (_UNKNOWN *)(v89 - 24) != &std::string::_Rep::_S_empty_rep_storage )
            sub_5C66A(v89 - 24);
          if ( (_UNKNOWN *)(v90 - 24) != &std::string::_Rep::_S_empty_rep_storage )
            sub_5C66A(v90 - 24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
        }
        v52 = (_DWORD *)v51;
        v51 += 8;
      }
      while ( *(_DWORD *)(v51 - 8) != -1 );
      v36[1] = v24;
      *v52 = v84;
      v53 = strlen(v27);
      v54 = (const char *)malloc(v53 + 1);
      v55 = (const char **)(v25 + 8LL * v84);
      if ( v53 && v27 != v54 )
      {
        v56 = v53 >> 3;
        if ( v53 >> 3 <= 0 )
        {
          v64 = (char *)v54;
        }
        else
        {
          if ( (v54 >= v27 + 16 || v27 >= v54 + 16) && v56 > 1 )
          {
            v57 = 0;
            v58 = 0;
            do
            {
              ++v58;
              *(__m128i *)&v54[v57] = _mm_loadu_si128((const __m128i *)&v27[v57]);
              v57 += 16;
            }
            while ( v58 < v56 >> 1 );
            v59 = 8LL * (v56 & 0xFFFFFFFE);
            v60 = &v27[v59];
            v61 = (char *)&v54[v59];
            if ( (v56 & 0xFFFFFFFE) != v56 )
            {
              *v61 = *v60;
              v61[1] = v60[1];
              v61[2] = v60[2];
              v61[3] = v60[3];
              v61[4] = v60[4];
              v61[5] = v60[5];
              v61[6] = v60[6];
              v61[7] = v60[7];
            }
            LODWORD(v62) = v56 - 1;
          }
          else
          {
            v68 = v27;
            v62 = v56 - 1;
            v69 = v54;
            do
            {
              v70 = *v68;
              v69 += 8;
              v68 += 8;
              *((_BYTE *)v69 - 8) = v70;
              *((_BYTE *)v69 - 7) = *(v68 - 7);
              *((_BYTE *)v69 - 6) = *(v68 - 6);
              *((_BYTE *)v69 - 5) = *(v68 - 5);
              *((_BYTE *)v69 - 4) = *(v68 - 4);
              *((_BYTE *)v69 - 3) = *(v68 - 3);
              *((_BYTE *)v69 - 2) = *(v68 - 2);
              *((_BYTE *)v69 - 1) = *(v68 - 1);
            }
            while ( &v54[8 * v62 + 8] != v69 );
          }
          v63 = 8LL * (int)v62 + 8;
          v27 += v63;
          v64 = (char *)&v54[v63];
        }
        switch ( v53 % 8 )
        {
          case 1:
            goto LABEL_67;
          case 2:
            goto LABEL_66;
          case 3:
            goto LABEL_65;
          case 4:
            goto LABEL_64;
          case 5:
            goto LABEL_63;
          case 6:
            goto LABEL_62;
          case 7:
            v64[6] = v27[6];
LABEL_62:
            v64[5] = v27[5];
LABEL_63:
            v64[4] = v27[4];
LABEL_64:
            v64[3] = v27[3];
LABEL_65:
            v64[2] = v27[2];
LABEL_66:
            v64[1] = v27[1];
LABEL_67:
            *v64 = *v27;
            break;
          default:
            break;
        }
      }
      ++v84;
      v54[v53] = 0;
      *v55 = v54;
LABEL_44:
      v80 = (std::string *)((char *)v80 + 1);
      v23 = v80;
    }
    while ( v85 != v80 );
  }
  *((_DWORD *)v86 + 78) = v84;
  return v86;
}

