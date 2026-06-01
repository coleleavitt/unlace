unsigned __int64 __fastcall sub_43DBF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  std::__future_base::_Result_base *v5; // r12
  std::__future_base::_Result_base *v6; // r13
  void (__fastcall *v7)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v8)(std::__future_base::_Result_base *); // rax
  bool v9; // zf
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // eax
  __int64 v14; // r13
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  int v18; // edx
  __m128i *exception; // r13
  __int64 v20; // rax
  void *v21; // rdi
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  char v26; // [rsp+1Fh] [rbp-79h] BYREF
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h] BYREF
  char *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __m128i v31; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v2 = *a1;
  v32 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v6 = (std::__future_base::_Result_base *)a1[2];
LABEL_4:
    if ( v6 )
    {
      v7 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v6;
      if ( v7 == sub_4397C0 )
      {
        v8 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v6 + 16LL);
        if ( v8 == sub_439770 )
        {
          v9 = *((_BYTE *)v6 + 40) == 0;
          *(_QWORD *)v6 = off_2B288F8;
          if ( !v9 )
          {
            v23 = *((void **)v6 + 2);
            if ( v23 )
            {
              *((_QWORD *)v6 + 3) = 0;
              qfree(v23);
            }
          }
          std::__future_base::_Result_base::~_Result_base(v6);
          a2 = 48;
          operator delete(v6, 0x30u);
        }
        else
        {
          v8(v6);
        }
      }
      else
      {
        v7(v6);
      }
    }
    goto LABEL_9;
  }
  v4 = a1[1];
  if ( v4 )
  {
    v5 = (std::__future_base::_Result_base *)a1[2];
    v6 = v5;
    if ( *(_DWORD *)(v4 + 8) == 1 )
      goto LABEL_4;
  }
  else
  {
    v5 = (std::__future_base::_Result_base *)a1[2];
  }
  a1[2] = 0;
  if ( v5 )
  {
    v14 = std::future_category();
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v14 + 24LL))(&v27, v14, 4);
    v15 = (__int64 *)std::string::insert((std::string *)&v27, 0, "std::future_error: ", 0x13u);
    v28 = *v15;
    *v15 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::logic_error::logic_error((std::logic_error *)&v29, (const std::string *)&v28);
    v16 = v28 - 24;
    if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28 - 8), 0xFFFFFFFF);
      }
      else
      {
        v25 = *(_DWORD *)(v28 - 8);
        *(_DWORD *)(v28 - 8) = v25 - 1;
      }
      if ( v25 <= 0 )
        std::string::_Rep::_M_destroy(v16, &v26);
    }
    v17 = v27 - 24;
    if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 - 8), 0xFFFFFFFF);
      }
      else
      {
        v18 = *(_DWORD *)(v27 - 8);
        *(_DWORD *)(v27 - 8) = v18 - 1;
      }
      if ( v18 <= 0 )
        std::string::_Rep::_M_destroy(v17, &v26);
    }
    v31.m128i_i64[1] = v14;
    v31.m128i_i32[0] = 4;
    v29 = (char *)&`vtable for'std::future_error + 16;
    exception = (__m128i *)__cxa_allocate_exception(0x20u);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::logic_error + 16;
    v20 = v30;
    v21 = (void *)(v30 - 24);
    if ( *(int *)(v30 - 8) >= 0 )
    {
      if ( v21 != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v30 - 8), 1u);
        else
          ++*(_DWORD *)(v30 - 8);
      }
    }
    else
    {
      v20 = std::string::_Rep::_M_clone(v21, &v26, 0);
    }
    exception->m128i_i64[1] = v20;
    v22 = _mm_load_si128(&v31);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
    exception[1] = v22;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::future_error,
      (void (*)(void *))&std::future_error::~future_error);
  }
LABEL_9:
  v10 = (volatile signed __int32 *)a1[1];
  if ( v10 )
  {
    v11 = v10 + 2;
    if ( *((_QWORD *)v10 + 1) == 0x100000001LL )
    {
      v24 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v24 + 16))(v10, a2, v11);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v12 = _InterlockedExchangeAdd(v11, 0xFFFFFFFF);
      }
      else
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 2) = v12 - 1;
      }
      if ( v12 == 1 )
        sub_434350(v10);
    }
  }
  return v32 - __readfsqword(0x28u);
}
