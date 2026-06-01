__int64 __fastcall sub_417D10(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rsi
  std::ostream *v6; // rdi
  unsigned __int16 v7; // r13
  __int64 v8; // rdi
  char v9; // al
  unsigned int **v10; // rsi
  int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // r13d
  _QWORD *v15; // r13
  char *v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  unsigned int **v19; // rax
  unsigned int **v20; // r14
  __int64 *v21; // r14
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 *v26; // rsi
  unsigned __int16 **v27; // rax
  unsigned __int16 *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  char v31; // al
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rsi
  std::ostream *v36; // rdi
  _QWORD *v37; // r13
  char *v38; // rdx
  int v39; // eax
  char *v40; // rcx
  int v41; // edx
  __int64 v42; // rdi
  struct _Unwind_Exception *v43; // r15
  __int64 private_2_high; // rdx
  _Unwind_Word private_1; // rsi
  _Unwind_Word private_2; // rdi
  char *v48; // rcx
  int v49; // edx
  struct _Unwind_Exception *v50; // [rsp+8h] [rbp-A8h]
  struct _Unwind_Exception *v51; // [rsp+8h] [rbp-A8h]
  struct _Unwind_Exception *v52; // [rsp+8h] [rbp-A8h]
  __int64 v53; // [rsp+10h] [rbp-A0h]
  unsigned __int8 v55; // [rsp+2Fh] [rbp-81h] BYREF
  int v56; // [rsp+30h] [rbp-80h] BYREF
  int v57; // [rsp+34h] [rbp-7Ch] BYREF
  char *v58; // [rsp+38h] [rbp-78h] BYREF
  __int64 v59; // [rsp+40h] [rbp-70h] BYREF
  __int64 v60; // [rsp+48h] [rbp-68h] BYREF
  __int64 v61; // [rsp+58h] [rbp-58h] BYREF
  __int128 v62; // [rsp+60h] [rbp-50h] BYREF
  char v63; // [rsp+70h] [rbp-40h]

  v53 = a1 + 72;
  if ( !*(_BYTE *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 72) = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 88) = 1;
  }
  ++*(_DWORD *)a2;
  v63 = 0;
  v62 = 0;
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      v3 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v3, *(const char **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = std::operator<<<std::char_traits<char>>();
      v5 = **((unsigned int **)a2 + 3);
      std::ostream::_M_insert<unsigned long>();
      v6 = (std::ostream *)sub_180B150(v4, v5);
      std::ostream::flush(v6);
      v63 = 1;
      *(_QWORD *)&v62 = std::chrono::_V2::steady_clock::now(v6);
      sub_186A500(v6, v5);
    }
    else
    {
      v33 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v33, *(const char **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v34 = std::operator<<<std::char_traits<char>>();
      v35 = **((unsigned int **)a2 + 3);
      std::ostream::_M_insert<unsigned long>();
      v36 = (std::ostream *)sub_180B150(v34, v35);
      std::ostream::flush(v36);
      v63 = 1;
      *(_QWORD *)&v62 = std::chrono::_V2::steady_clock::now(v36);
    }
  }
  v7 = a2[36];
  v56 = -1;
  a2[36] = -1;
  v8 = *((_QWORD *)a2 + 2);
  v9 = *(_BYTE *)(a1 + 674);
  v57 = 0;
  v58 = nullptr;
  v10 = (unsigned int **)a2;
  v59 = 0;
  v60 = 0;
  v11 = sub_409D10(v8, (__int64)a2, nullptr, (__int64 *)&v58, &v56, &v55, &v59, &v60, &v57, v9);
  v12 = v60;
  a2[36] = v7;
  if ( v11 != 1 || (v13 = v55) == 0 )
  {
    if ( (unsigned int)sub_180B130(v8) )
    {
      if ( (unsigned __int8)sub_186A530(0.0) )
      {
        sub_186A4C0(0.0);
        v15 = (_QWORD *)sub_180B150(v8, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v16 = (char *)v15 + *(_QWORD *)(*v15 - 24LL);
        v17 = *((_DWORD *)v16 + 6);
        *((_QWORD *)v16 + 1) = 2;
        *((_DWORD *)v16 + 6) = v17 & 0xFFFFFEFB | 4;
        sub_41C7A0(&v62);
        v18 = std::ostream::_M_insert<double>();
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v18, "\n");
      }
      else
      {
        v37 = (_QWORD *)sub_180B150(v8, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v38 = (char *)v37 + *(_QWORD *)(*v37 - 24LL);
        v39 = *((_DWORD *)v38 + 6);
        *((_QWORD *)v38 + 1) = 2;
        *((_DWORD *)v38 + 6) = v39 & 0xFFFFFEFB | 4;
        sub_41C7A0(&v62);
        std::ostream::_M_insert<double>();
        std::operator<<<std::char_traits<char>>();
      }
    }
    v13 = 0;
    goto LABEL_10;
  }
  if ( v59 && *(_DWORD *)(v59 + 68) )
  {
    v19 = (unsigned int **)sub_411B80(*((_QWORD *)a2 + 2), (__int64)a2, v58, v59);
    ++*(_DWORD *)v19;
    v10 = v19;
    v20 = v19;
    sub_413A90(*((_QWORD *)a2 + 2), (__int64)v19, 0);
    v8 = (__int64)v20;
    sub_41D2B0(v20);
  }
  v21 = *((__int64 **)a2 + 11);
  v22 = a2[39] & 1;
  if ( !v21 )
  {
    if ( v22 )
    {
      v8 = (__int64)a2;
      sub_400AD0((__int64)a2);
      if ( !(unsigned int)sub_180B130(a2) )
        goto LABEL_10;
      if ( !(unsigned __int8)sub_186A530(0.0) )
        goto LABEL_64;
    }
    else
    {
      if ( !(unsigned int)sub_180B130(v8) )
        goto LABEL_10;
      if ( !(unsigned __int8)sub_186A530(0.0) )
        goto LABEL_64;
    }
LABEL_38:
    sub_186A4C0(0.0);
    sub_180B150(v8, v10);
    v24 = 0;
LABEL_39:
    v50 = (struct _Unwind_Exception *)std::operator<<<std::char_traits<char>>();
    v40 = (char *)v50 + *(_QWORD *)(v50->exception_class - 24);
    v41 = *((_DWORD *)v40 + 6);
    *((_QWORD *)v40 + 1) = 2;
    *((_DWORD *)v40 + 6) = v41 & 0xFFFFFEFB | 4;
    sub_41C7A0(&v62);
    v42 = std::ostream::_M_insert<double>();
    std::operator<<<std::char_traits<char>>();
    sub_186A500(v42, "\n");
    goto LABEL_40;
  }
  *((_QWORD *)a2 + 11) = 0;
  if ( v22 )
    sub_400AD0((__int64)a2);
  v8 = (__int64)v21;
  v23 = sub_4177A0(v21, 0.0);
  v24 = v23;
  if ( !v23 )
  {
    if ( !(unsigned int)sub_180B130(v21) )
    {
LABEL_43:
      sub_2B4F40(v21 + 6);
      sub_3FCDF0(v21[4], v21[5]);
      v43 = (struct _Unwind_Exception *)v21[2];
      if ( v43 )
      {
        private_2_high = HIDWORD(v43[-1].private_2);
        if ( (_DWORD)private_2_high )
        {
          v51 = (struct _Unwind_Exception *)((char *)v43 + 56 * private_2_high);
          do
          {
            sub_2B4F40((__int64 *)&v43[1].exception_cleanup);
            private_1 = v43->private_1;
            if ( private_1 )
            {
              private_2 = v43->private_2;
              if ( (*(_DWORD *)(private_1 + 8))-- == 1 )
                sub_15D7BC0(private_2, private_1);
            }
            v43 = (struct _Unwind_Exception *)((char *)v43 + 56);
          }
          while ( v43 != v51 );
          v43 = (struct _Unwind_Exception *)v21[2];
        }
        sub_186B220(&v43[-1].private_2);
      }
      sub_186B220(v21);
      goto LABEL_10;
    }
    if ( (unsigned __int8)sub_186A530(0.0) )
      goto LABEL_38;
LABEL_64:
    sub_180B150(v8, v10);
    v24 = 0;
    goto LABEL_65;
  }
  v25 = v23 + 88;
  v26 = v21;
  sub_400A10((__int64 **)(v23 + 88), v21);
  v27 = *(unsigned __int16 ***)(a1 + 328);
  if ( *(unsigned __int16 ***)(a1 + 336) != v27 )
  {
    v28 = *v27;
    v29 = *(_DWORD *)(a1 + 320);
    v30 = v28[36];
    if ( v29 >= v30 && (v30 != v29 || *(_DWORD *)(a1 + 324) >= (unsigned int)v28[37]) && a2 == v28 )
    {
      v25 = a1 + 312;
      sub_3FDE60(a1 + 312, 0.0);
    }
  }
  v31 = *(_BYTE *)(v24 + 78);
  if ( (v31 & 4) != 0 )
  {
    v32 = sub_180B130(v25);
  }
  else
  {
    v26 = &v61;
    *(_BYTE *)(v24 + 78) = v31 | 4;
    v61 = v24;
    v25 = a1 + 328;
    sub_41D8A0(a1 + 328, &v61);
    v32 = sub_180B130(a1 + 328);
  }
  if ( !v32 )
  {
    v13 = sub_417D10(a1, v24);
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_186A530(0.0) )
  {
    sub_186A4C0(0.0);
    sub_180B150(v25, v26);
    v21 = nullptr;
    goto LABEL_39;
  }
  sub_180B150(v25, v26);
  v21 = nullptr;
LABEL_65:
  v52 = (struct _Unwind_Exception *)std::operator<<<std::char_traits<char>>();
  v48 = (char *)v52 + *(_QWORD *)(v52->exception_class - 24);
  v49 = *((_DWORD *)v48 + 6);
  *((_QWORD *)v48 + 1) = 2;
  *((_DWORD *)v48 + 6) = v49 & 0xFFFFFEFB | 4;
  sub_41C7A0(&v62);
  std::ostream::_M_insert<double>();
  std::operator<<<std::char_traits<char>>();
LABEL_40:
  if ( v24 )
    v13 = sub_417D10(a1, v24);
  if ( v21 )
    goto LABEL_43;
LABEL_10:
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_3FCDA0((void (***)(void))v58);
  sub_41CD50(a2);
  if ( *(_BYTE *)(a1 + 88) )
    sub_3FCC40(v53);
  return v13;
}

