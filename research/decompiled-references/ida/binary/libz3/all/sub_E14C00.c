void __fastcall sub_E14C00(__int64 a1, __int64 a2, const char *a3)
{
  const char *v3; // r13
  __int64 (__fastcall *v4)(__int64); // rax
  char v5; // r14
  _QWORD *v6; // rbx
  size_t v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rax
  _BYTE *v11; // r10
  __int64 v12; // r15
  std::ostream *v13; // rbx
  _BYTE *v14; // rbp
  char v15; // si
  std::ostream *v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  std::ostream *v19; // rbx
  _BYTE *v20; // rbp
  char v21; // si
  std::ostream *v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  _BYTE *v26; // r10
  __int64 (__fastcall *v27)(__int64, unsigned int); // rax
  __int64 (__fastcall *v28)(__int64, unsigned int); // rax
  __int64 v29; // rax
  _BYTE *v30; // [rsp+8h] [rbp-70h]
  void *v31; // [rsp+8h] [rbp-70h]
  void *v32; // [rsp+8h] [rbp-70h]
  void *v33; // [rsp+8h] [rbp-70h]
  _BYTE *v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-60h]
  _QWORD *src; // [rsp+20h] [rbp-58h]
  _QWORD v38[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( !*(_BYTE *)(a2 + 193) )
  {
    if ( v4 == sub_305010 )
    {
      v13 = *(std::ostream **)(a2 + 408);
      if ( a3 )
      {
LABEL_19:
        strlen(v3);
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_20:
        v14 = *(_BYTE **)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 240);
        if ( !v14 )
          std::__throw_bad_cast();
        if ( v14[56] )
        {
          v15 = v14[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v15 = 10;
          v27 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 48LL);
          if ( v27 != sub_26BE90 )
            v15 = v27((__int64)v14, 10u);
        }
        v16 = (std::ostream *)std::ostream::put(v13, v15);
        std::ostream::flush(v16);
        return;
      }
    }
    else
    {
      v13 = (std::ostream *)v4(a2);
      if ( v3 )
        goto LABEL_19;
    }
    std::ios::clear();
    goto LABEL_20;
  }
  if ( v4 != sub_305010 )
    v4(a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *v3;
  src = v38;
  v6 = v38;
  LOBYTE(v38[0]) = 0;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      ++v3;
      if ( v5 != 34 )
      {
        v8 = v7 + 1;
        if ( v6 == v38 )
          goto LABEL_13;
        goto LABEL_7;
      }
      v9 = v7 + 1;
      if ( v6 == v38 )
      {
        if ( v7 != 15 )
          goto LABEL_12;
        v29 = operator new(0x1Fu);
        v26 = src;
        v9 = 16;
        v6 = (_QWORD *)v29;
        v23 = 30;
      }
      else
      {
        if ( v38[0] >= (unsigned __int64)v9 )
          goto LABEL_12;
        if ( v9 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v23 = 2LL * v38[0];
        if ( v9 < (unsigned __int64)(2LL * v38[0]) )
        {
          if ( (v38[0] & 0x4000000000000000LL) != 0 )
LABEL_62:
            std::__throw_bad_alloc();
          v24 = v23 + 1;
        }
        else
        {
          v24 = v7 + 2;
          if ( (__int64)(v7 + 2) < 0 )
            goto LABEL_62;
          v23 = v7 + 1;
        }
        v25 = operator new(v24);
        v26 = src;
        v9 = v7 + 1;
        v6 = (_QWORD *)v25;
        if ( !v7 )
          goto LABEL_43;
      }
      if ( v7 == 1 )
      {
        *(_BYTE *)v6 = *v26;
      }
      else
      {
        v36 = v9;
        v34 = v26;
        memcpy(v6, v26, v7);
        v9 = v36;
        v26 = v34;
      }
LABEL_43:
      if ( v26 != (_BYTE *)v38 )
      {
        v33 = (void *)v9;
        operator delete(v26, v38[0] + 1LL);
        v9 = (__int64)v33;
      }
      src = v6;
      v38[0] = v23;
LABEL_12:
      *((_BYTE *)v6 + v7) = 34;
      *((_BYTE *)src + v9) = 0;
      v7 = v9;
      v6 = src;
      v8 = v9 + 1;
      if ( src == v38 )
      {
LABEL_13:
        if ( v8 == 16 )
        {
          v10 = operator new(0x1Fu);
          v11 = src;
          v8 = 16;
          v6 = (_QWORD *)v10;
          v12 = 30;
          goto LABEL_15;
        }
        goto LABEL_8;
      }
LABEL_7:
      if ( v38[0] < (unsigned __int64)v8 )
      {
        if ( v8 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v12 = 2LL * v38[0];
        if ( v8 < (unsigned __int64)(2LL * v38[0]) )
        {
          if ( (v38[0] & 0x4000000000000000LL) != 0 )
LABEL_58:
            std::__throw_bad_alloc();
          v17 = v12 + 1;
        }
        else
        {
          v17 = v7 + 2;
          if ( (__int64)(v7 + 2) < 0 )
            goto LABEL_58;
          v12 = v8;
        }
        v31 = (void *)v8;
        v18 = operator new(v17);
        v11 = src;
        v8 = (__int64)v31;
        v6 = (_QWORD *)v18;
        if ( v7 )
        {
LABEL_15:
          if ( v7 == 1 )
          {
            *(_BYTE *)v6 = *v11;
          }
          else
          {
            v35 = v8;
            v30 = v11;
            memcpy(v6, v11, v7);
            v8 = v35;
            v11 = v30;
          }
        }
        if ( v11 != (_BYTE *)v38 )
        {
          v32 = (void *)v8;
          operator delete(v11, v38[0] + 1LL);
          v8 = (__int64)v32;
        }
        src = v6;
        v38[0] = v12;
      }
LABEL_8:
      *((_BYTE *)v6 + v7) = v5;
      *((_BYTE *)src + v8) = 0;
      v5 = *v3;
      v7 = v8;
      v6 = src;
    }
    while ( *v3 );
  }
  v19 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v20 = *(_BYTE **)((char *)v19 + *(_QWORD *)(*(_QWORD *)v19 - 24LL) + 240);
  if ( !v20 )
    std::__throw_bad_cast();
  if ( v20[56] )
  {
    v21 = v20[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v21 = 10;
    v28 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v20 + 48LL);
    if ( v28 != sub_26BE90 )
      v21 = v28((__int64)v20, 10u);
  }
  v22 = (std::ostream *)std::ostream::put(v19, v21);
  std::ostream::flush(v22);
  if ( src != v38 )
    operator delete(src, v38[0] + 1LL);
}

