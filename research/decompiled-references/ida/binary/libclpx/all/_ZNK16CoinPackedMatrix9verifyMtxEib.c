__int64 __fastcall CoinPackedMatrix::verifyMtx(CoinPackedMatrix *this, int a2, unsigned __int8 a3)
{
  int v4; // ebp
  bool v5; // zf
  int *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  _DWORD *v9; // rax
  int v10; // esi
  _BYTE *v11; // rax
  int v12; // edx
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // r13d
  int v17; // r15d
  std::ostream *v18; // rbx
  _BYTE *v19; // r15
  char v20; // si
  std::ostream *v21; // rax
  std::ostream *v22; // rbx
  _BYTE *v23; // r13
  char v24; // si
  std::ostream *v25; // rax
  __int64 v26; // rbp
  int v27; // eax
  std::ostream *v28; // rbx
  _BYTE *v29; // r14
  char v30; // si
  std::ostream *v31; // rax
  __int64 (__fastcall *v33)(__int64, unsigned int); // rax
  __int64 (__fastcall *v34)(__int64, unsigned int); // rax
  __int64 (__fastcall *v35)(__int64, unsigned int); // rax
  int v36; // eax
  __int64 v37; // r15
  double v38; // xmm1_8
  int v39; // r13d
  std::ostream *v40; // rbx
  __int64 v41; // rax
  char v42; // si
  std::ostream *v43; // rax
  unsigned int v44; // esi
  _BYTE *v45; // rcx
  unsigned int v46; // eax
  _BYTE *v47; // rax
  _BYTE *v48; // rcx
  __int64 (__fastcall *v49)(__int64, unsigned int); // rax
  int *v50; // [rsp+0h] [rbp-D8h]
  void *v51; // [rsp+8h] [rbp-D0h]
  _BYTE *v52; // [rsp+10h] [rbp-C8h]
  __int64 v54; // [rsp+20h] [rbp-B8h]
  int v55; // [rsp+28h] [rbp-B0h]
  double v56; // [rsp+28h] [rbp-B0h]
  int v57; // [rsp+30h] [rbp-A8h]
  int v58; // [rsp+34h] [rbp-A4h]
  __int64 v59; // [rsp+38h] [rbp-A0h]
  int v60; // [rsp+40h] [rbp-98h]
  int v61; // [rsp+44h] [rbp-94h]
  __int64 v62; // [rsp+48h] [rbp-90h]
  __int64 v63; // [rsp+50h] [rbp-88h]
  int v65; // [rsp+5Ch] [rbp-7Ch]
  int v66; // [rsp+60h] [rbp-78h]
  int v67; // [rsp+64h] [rbp-74h]
  unsigned __int64 v68; // [rsp+68h] [rbp-70h]
  __int64 v69; // [rsp+70h] [rbp-68h]
  int v70; // [rsp+7Ch] [rbp-5Ch]
  char *v71; // [rsp+90h] [rbp-48h] BYREF
  _QWORD v72[8]; // [rsp+98h] [rbp-40h] BYREF

  v4 = *((_DWORD *)this + 16);
  v58 = *((_DWORD *)this + 17);
  v5 = *((_BYTE *)this + 8) == 0;
  v71 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  v72[0] = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( v5 )
  {
    std::string::assign((std::string *)&v71, "row", 3u);
    std::string::assign((std::string *)v72, "col", 3u);
  }
  else
  {
    std::string::assign((std::string *)&v71, "col", 3u);
    std::string::assign((std::string *)v72, "row", 3u);
  }
  v6 = *((int **)this + 6);
  v7 = *((int *)this + 20);
  v66 = *((_DWORD *)this + 18);
  v8 = v6[v4];
  v67 = v8;
  if ( v8 > (int)v7 )
    v8 = v7;
  v57 = v8;
  v60 = v8 - 1;
  if ( a2 > 2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::endl<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    if ( v66 < v67 )
      std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::endl<char,std::char_traits<char>>();
    v7 = *((int *)this + 20);
    v6 = *((int **)this + 6);
  }
  v59 = *((_QWORD *)this + 7);
  v62 = *((_QWORD *)this + 5);
  v63 = *((_QWORD *)this + 4);
  if ( v7 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v9 = (_DWORD *)operator new[](4 * v7);
  v10 = *((_DWORD *)this + 20);
  v51 = v9;
  if ( v10 )
  {
    sub_223D80(v9, v10);
    v10 = *((_DWORD *)this + 20);
  }
  v11 = (_BYTE *)operator new[](v10);
  v12 = *((_DWORD *)this + 20);
  v52 = v11;
  if ( v12 )
  {
    v44 = v12 / 8;
    if ( v12 / 8 <= 0 )
    {
      v48 = v11;
    }
    else
    {
      if ( v44 == 1 )
        goto LABEL_124;
      v45 = v11;
      v46 = 0;
      do
      {
        ++v46;
        v45 += 16;
        *((_OWORD *)v45 - 1) = 0;
      }
      while ( v46 < v44 >> 1 );
      v11 = &v52[8 * (v44 & 0xFFFFFFFE)];
      if ( v44 == (v44 & 0xFFFFFFFE) )
      {
        v47 = v52;
      }
      else
      {
LABEL_124:
        *v11 = 0;
        v11[1] = 0;
        v11[2] = 0;
        v11[3] = 0;
        v11[4] = 0;
        v11[5] = 0;
        v11[6] = 0;
        v11[7] = 0;
        v47 = v52;
      }
      v48 = &v47[8 * (v44 - 1) + 8];
    }
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_133;
      case 2:
        goto LABEL_132;
      case 3:
        goto LABEL_131;
      case 4:
        goto LABEL_130;
      case 5:
        goto LABEL_129;
      case 6:
        goto LABEL_128;
      case 7:
        v48[6] = 0;
LABEL_128:
        v48[5] = 0;
LABEL_129:
        v48[4] = 0;
LABEL_130:
        v48[3] = 0;
LABEL_131:
        v48[2] = 0;
LABEL_132:
        v48[1] = 0;
LABEL_133:
        *v48 = 0;
        break;
      default:
        break;
    }
  }
  if ( v4 <= 0 )
  {
    v13 = 0;
    v61 = 0;
    if ( v60 < 0 )
    {
      operator delete[](v51);
      if ( !a3 )
      {
        if ( a2 <= 1 )
          goto LABEL_54;
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_73:
        std::__ostream_insert<char,std::char_traits<char>>();
        std::endl<char,std::char_traits<char>>();
        v13 = 0;
        goto LABEL_54;
      }
      v61 = 0;
      goto LABEL_69;
    }
LABEL_27:
    v26 = 0;
    while ( 1 )
    {
      v27 = *((_DWORD *)v51 + v26);
      if ( v27 != 1 )
        break;
      if ( !v52[v26] )
        goto LABEL_32;
      if ( a2 > 0 )
        goto LABEL_36;
LABEL_31:
      ++v13;
LABEL_32:
      if ( ++v26 == (unsigned int)v60 + 1LL )
        goto LABEL_51;
    }
    if ( !v27 && v52[v26] )
      goto LABEL_32;
    if ( a2 <= 0 )
      goto LABEL_31;
LABEL_36:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v28 = (std::ostream *)std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v29 = *(_BYTE **)((char *)v28 + *(_QWORD *)(*(_QWORD *)v28 - 24LL) + 240);
    if ( !v29 )
      std::__throw_bad_cast();
    if ( v29[56] )
    {
      v30 = v29[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v30 = 10;
      v34 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v29 + 48LL);
      if ( v34 != std::ctype<char>::do_widen )
        v30 = v34((__int64)v29, 10u);
    }
    v31 = (std::ostream *)std::ostream::put(v28, v30);
    std::ostream::flush(v31);
    goto LABEL_31;
  }
  v50 = v6;
  v61 = 0;
  v13 = 0;
  v14 = (unsigned int)(v4 - 1);
  v15 = 0;
  v54 = v14 + 1;
  do
  {
    while ( 1 )
    {
      v16 = *v50;
      if ( *v50 < 0 )
        goto LABEL_17;
      v17 = *(_DWORD *)(v59 + 4 * v15);
      if ( v16 == v57 )
        break;
      if ( v16 > v57 )
        goto LABEL_17;
      if ( v17 < 0 || v58 < v17 )
      {
LABEL_42:
        if ( a2 > 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::endl<char,std::char_traits<char>>();
        }
        ++v13;
        goto LABEL_13;
      }
      v65 = v17 + v16;
      if ( v17 + v16 >= 0 )
      {
        if ( v17 + v16 <= v57 )
          goto LABEL_89;
        if ( a2 > 0 )
        {
LABEL_117:
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::endl<char,std::char_traits<char>>();
          ++v13;
          if ( *((_DWORD *)this + 20) > v65 )
            goto LABEL_13;
LABEL_50:
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::endl<char,std::char_traits<char>>();
          goto LABEL_13;
        }
      }
      else if ( a2 > 0 )
      {
        goto LABEL_117;
      }
      ++v13;
      if ( *((_DWORD *)this + 20) <= v65 )
        goto LABEL_50;
LABEL_13:
      ++v15;
      ++v50;
      if ( v54 == v15 )
        goto LABEL_26;
    }
    if ( !v17 )
    {
      if ( v58 < 0 )
        goto LABEL_42;
      v65 = v57;
LABEL_89:
      v36 = v50[1];
      v70 = v36;
      if ( v36 < 0 || v36 > v57 )
      {
        if ( a2 > 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::endl<char,std::char_traits<char>>();
        }
        ++v13;
        if ( *((_DWORD *)this + 20) <= v70 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::endl<char,std::char_traits<char>>();
        }
        goto LABEL_94;
      }
      v55 = v36 - v16;
      if ( v36 - v16 < 0 || v58 < v36 - v16 && v66 >= v67 )
      {
        if ( a2 > 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
LABEL_140:
          std::endl<char,std::char_traits<char>>();
        }
      }
      else
      {
        if ( v17 > v55 )
        {
          if ( a2 > 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::endl<char,std::char_traits<char>>();
          }
          goto LABEL_87;
        }
        if ( v17 == v55 || v66 < v67 )
          goto LABEL_94;
        if ( a2 > 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_140;
        }
      }
LABEL_87:
      ++v13;
LABEL_94:
      if ( v65 <= v16 )
      {
LABEL_143:
        if ( v66 < v67 && v65 < v70 )
          memset(&v52[v65], 1, (unsigned int)(v70 - 1 - v65) + 1LL);
        goto LABEL_13;
      }
      v37 = v16;
      v68 = v16 + (unsigned __int64)(unsigned int)(~v16 + v65) + 1;
      while ( 1 )
      {
        ++*((_DWORD *)v51 + v37);
        v39 = *(_DWORD *)(v62 + 4 * v37);
        if ( v39 < 0 || v58 <= v39 )
        {
          if ( a2 > 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::endl<char,std::char_traits<char>>();
          }
          ++v13;
        }
        v56 = *(double *)(v63 + 8 * v37);
        if ( !(unsigned __int8)CoinIsnan(v56) )
        {
          if ( v56 < 0.0 )
          {
            if ( v56 >= -1.0e50 )
            {
LABEL_98:
              v38 = -v56;
              goto LABEL_99;
            }
          }
          else if ( v56 <= 1.0e50 )
          {
            goto LABEL_97;
          }
        }
        if ( a2 > 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          std::__ostream_insert<char,std::char_traits<char>>();
          v40 = (std::ostream *)std::ostream::_M_insert<double>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v41 = *(_QWORD *)((char *)v40 + *(_QWORD *)(*(_QWORD *)v40 - 24LL) + 240);
          v69 = v41;
          if ( !v41 )
            std::__throw_bad_cast();
          if ( *(_BYTE *)(v41 + 56) )
          {
            v42 = *(_BYTE *)(v41 + 67);
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v42 = 10;
            v49 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v69 + 48LL);
            if ( v49 != std::ctype<char>::do_widen )
              v42 = ((__int64 (__fastcall *)(__int64, __int64, double))v49)(v69, 10, v56);
          }
          v43 = (std::ostream *)std::ostream::put(v40, v42);
          std::ostream::flush(v43);
        }
        ++v13;
LABEL_97:
        v38 = v56;
        if ( v56 < 0.0 )
          goto LABEL_98;
LABEL_99:
        if ( v38 < 1.0e-50 )
        {
          if ( a3 | (a2 > 3) )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<double>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::endl<char,std::char_traits<char>>();
          }
          ++v61;
        }
        if ( ++v37 == v68 )
          goto LABEL_143;
      }
    }
LABEL_17:
    if ( a2 <= 0 )
    {
      ++v13;
      if ( *((_DWORD *)this + 20) <= v16 )
        goto LABEL_22;
      goto LABEL_13;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v18 = (std::ostream *)std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v19 = *(_BYTE **)((char *)v18 + *(_QWORD *)(*(_QWORD *)v18 - 24LL) + 240);
    if ( !v19 )
      std::__throw_bad_cast();
    if ( v19[56] )
    {
      v20 = v19[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v20 = 10;
      v33 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v19 + 48LL);
      if ( v33 != std::ctype<char>::do_widen )
        v20 = v33((__int64)v19, 10u);
    }
    v21 = (std::ostream *)std::ostream::put(v18, v20);
    std::ostream::flush(v21);
    ++v13;
    if ( *((_DWORD *)this + 20) > v16 )
      goto LABEL_13;
LABEL_22:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v22 = (std::ostream *)std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v23 = *(_BYTE **)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
    if ( !v23 )
      std::__throw_bad_cast();
    if ( v23[56] )
    {
      v24 = v23[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v24 = 10;
      v35 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v23 + 48LL);
      if ( v35 != std::ctype<char>::do_widen )
        v24 = v35((__int64)v23, 10u);
    }
    v25 = (std::ostream *)std::ostream::put(v22, v24);
    std::ostream::flush(v25);
    ++v15;
    ++v50;
  }
  while ( v54 != v15 );
LABEL_26:
  if ( v60 >= 0 )
    goto LABEL_27;
LABEL_51:
  operator delete[](v51);
  if ( a3 )
  {
LABEL_69:
    v13 += v61;
    if ( v13 )
      goto LABEL_53;
    goto LABEL_70;
  }
  if ( !v13 )
  {
LABEL_70:
    if ( a2 <= 1 )
      goto LABEL_54;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v61 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    goto LABEL_73;
  }
LABEL_53:
  if ( a2 > 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v61 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::endl<char,std::char_traits<char>>();
  }
LABEL_54:
  if ( (_UNKNOWN *)(v72[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    sub_223D40(v72[0] - 24LL);
  if ( v71 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    sub_223D40((__int64)(v71 - 24));
  return v13;
}

