std::ostream *__fastcall sub_1442350(std::ostream *a1, __int64 a2, const char *a3)
{
  char *v5; // rbx
  __int64 v6; // rdi
  const char *v8; // r13
  __int64 v9; // r14
  char *v10; // rcx
  __int64 v11; // r8
  char v12; // dl
  _BYTE *v13; // r15
  char v14; // al
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, unsigned int); // rdx
  char *v17; // [rsp+8h] [rbp-60h]
  _BYTE v18[8]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v19[8]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-40h]

  std::ostream::sentry::sentry((std::ostream::sentry *)v19, a1);
  if ( v19[0] )
  {
    v8 = &a3[strlen(a3)];
    std::locale::locale((std::locale *)v18, (std::ostream *)((char *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL) + 208));
    v9 = std::use_facet<std::time_put<char,std::ostreambuf_iterator<char>>>(v18);
    std::locale::~locale((std::locale *)v18);
    v10 = (char *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL);
    if ( v10[225] )
    {
      v11 = (unsigned int)v10[224];
    }
    else
    {
      v13 = *((_BYTE **)v10 + 30);
      if ( !v13 )
        std::__throw_bad_cast();
      if ( v13[56] )
      {
        v11 = (unsigned int)(char)v13[89];
        v14 = v13[89];
      }
      else
      {
        v17 = (char *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL);
        std::ctype<char>::_M_widen_init(*((_QWORD *)v10 + 30));
        v11 = 32;
        v10 = v17;
        v16 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13 + 48LL);
        v14 = 32;
        if ( v16 != sub_124D700 )
        {
          v14 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64 (__fastcall *)(__int64, unsigned int), char *, __int64))v16)(
                  v13,
                  32,
                  v16,
                  v17,
                  32);
          v10 = v17;
          v11 = (unsigned int)v14;
        }
      }
      v10[224] = v14;
      v15 = *(_QWORD *)a1;
      v10[225] = 1;
      v10 = (char *)a1 + *(_QWORD *)(v15 - 24);
    }
    std::time_put<char,std::ostreambuf_iterator<char>>::put(
      v9,
      *((_QWORD *)v10 + 29),
      *((_QWORD *)v10 + 29) == 0,
      v10,
      v11,
      a2,
      a3,
      v8);
    if ( v12 )
      std::ios::clear(
        (char *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL),
        *(_DWORD *)((char *)a1 + *(_QWORD *)(*(_QWORD *)a1 - 24LL) + 32) | 1u);
  }
  v5 = (char *)v20 + *(_QWORD *)(*v20 - 24LL);
  if ( (v5[25] & 0x20) != 0 && !(unsigned __int8)std::uncaught_exception() )
  {
    v6 = *((_QWORD *)v5 + 29);
    if ( v6 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6) == -1 )
        std::ios::clear(
          (char *)v20 + *(_QWORD *)(*v20 - 24LL),
          *(_DWORD *)((char *)v20 + *(_QWORD *)(*v20 - 24LL) + 32) | 1u);
    }
  }
  return a1;
}
