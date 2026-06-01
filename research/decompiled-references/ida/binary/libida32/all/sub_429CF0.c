unsigned __int64 __fastcall sub_429CF0(__int64 *a1, __int64 a2)
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
  int v16; // edx
  __m128i *exception; // r13
  __int64 v18; // rax
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  char *v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v2 = *a1;
  v28 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v6 = (std::__future_base::_Result_base *)a1[2];
LABEL_4:
    if ( v6 )
    {
      v7 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v6;
      if ( v7 == sub_4258A0 )
      {
        v8 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v6 + 16LL);
        if ( v8 == sub_425850 )
        {
          v9 = *((_BYTE *)v6 + 40) == 0;
          *(_QWORD *)v6 = off_2AFE938;
          if ( !v9 )
          {
            v20 = *((void **)v6 + 2);
            if ( v20 )
            {
              *((_QWORD *)v6 + 3) = 0;
              qfree(v20);
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
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v14 + 24LL))(&v23, v14, 4);
    v15 = (__int64 *)std::string::insert((std::string *)&v23, 0, "std::future_error: ", 0x13u);
    v24 = *v15;
    *v15 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::logic_error::logic_error((std::logic_error *)&v25, (const std::string *)&v24);
    if ( (_UNKNOWN *)(v24 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 - 8), 0xFFFFFFFF);
      }
      else
      {
        v22 = *(_DWORD *)(v24 - 8);
        *(_DWORD *)(v24 - 8) = v22 - 1;
      }
      if ( v22 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (_UNKNOWN *)(v23 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 - 8), 0xFFFFFFFF);
      }
      else
      {
        v16 = *(_DWORD *)(v23 - 8);
        *(_DWORD *)(v23 - 8) = v16 - 1;
      }
      if ( v16 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    v27.m128i_i64[1] = v14;
    v27.m128i_i32[0] = 4;
    v25 = (char *)&`vtable for'std::future_error + 16;
    exception = (__m128i *)__cxa_allocate_exception(0x20u);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::logic_error + 16;
    v18 = v26;
    if ( *(int *)(v26 - 8) >= 0 )
    {
      if ( (_UNKNOWN *)(v26 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v26 - 8), 1u);
        else
          ++*(_DWORD *)(v26 - 8);
      }
    }
    else
    {
      v18 = std::string::_Rep::_M_clone();
    }
    exception->m128i_i64[1] = v18;
    v19 = _mm_load_si128(&v27);
    exception->m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
    exception[1] = v19;
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
      v21 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v21 + 16))(v10, a2, v11);
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
        sub_420480(v10);
    }
  }
  return v28 - __readfsqword(0x28u);
}

