__int64 __fastcall sub_4E5AF0(__int64 *a1, __m128i *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  std::__future_base::_Result_base *v5; // r14
  std::__future_base::_Result_base *v6; // rbp
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD); // rbp
  void (__fastcall *v18)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v19)(std::__future_base::_Result_base *); // rax
  bool v20; // zf
  __int64 v21; // rax
  void *v22; // rdi
  int v23; // edx
  int v24; // edx
  char v25; // [rsp+1Fh] [rbp-79h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h] BYREF
  __m128i v28; // [rsp+30h] [rbp-68h] BYREF
  int v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v2 = *a1;
  v31 = __readfsqword(0x28u);
  if ( !v2 )
    goto LABEL_22;
  v4 = a1[1];
  if ( !v4 )
  {
    v5 = (std::__future_base::_Result_base *)a1[2];
    goto LABEL_12;
  }
  v5 = (std::__future_base::_Result_base *)a1[2];
  v6 = v5;
  if ( *(_DWORD *)(v4 + 8) != 1 )
  {
LABEL_12:
    a1[2] = 0;
    if ( !v5 )
      goto LABEL_5;
    v11 = std::future_category();
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*(_QWORD *)v11 + 24LL))(&v26, v11, 4);
    v12 = (__int64 *)std::string::insert((std::string *)&v26, 0, "std::future_error: ", 0x13u);
    v27 = *v12;
    *v12 = (__int64)&std::string::_Rep::_S_empty_rep_storage + 24;
    std::logic_error::logic_error((std::logic_error *)&v28, (const std::string *)&v27);
    v13 = v27 - 24;
    if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 - 8), 0xFFFFFFFF);
      }
      else
      {
        v24 = *(_DWORD *)(v27 - 8);
        *(_DWORD *)(v27 - 8) = v24 - 1;
      }
      if ( v24 <= 0 )
        std::string::_Rep::_M_destroy(v13, &v25);
    }
    v14 = v26 - 24;
    if ( (_UNKNOWN *)(v26 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 - 8), 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v26 - 8);
        *(_DWORD *)(v26 - 8) = v23 - 1;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy(v14, &v25);
    }
    a2 = &v28;
    v29 = 4;
    v30 = v11;
    v28.m128i_i64[0] = (__int64)&`vtable for'std::future_error + 16;
    sub_4E58B0((std::__exception_ptr::exception_ptr *)&v26, &v28);
    v15 = v26;
    v26 = 0;
    v27 = *((_QWORD *)v5 + 1);
    v16 = v27;
    *((_QWORD *)v5 + 1) = v15;
    if ( v16 )
    {
      sub_5B00A0(&v27);
      if ( v26 )
        sub_5B00A0(&v26);
    }
    std::future_error::~future_error((std::future_error *)&v28);
    v17 = *(void (__fastcall ****)(_QWORD))(v2 + 8);
    *(_QWORD *)(v2 + 8) = v5;
    if ( _InterlockedExchange((volatile __int32 *)(v2 + 16), 1) < 0 )
      std::__atomic_futex_unsigned_base::_M_futex_notify_all(
        (std::__atomic_futex_unsigned_base *)(v2 + 16),
        (unsigned int *)&v28);
    if ( v17 )
      (**v17)(v17);
LABEL_22:
    v6 = (std::__future_base::_Result_base *)a1[2];
    if ( !v6 )
      goto LABEL_5;
    goto LABEL_23;
  }
  if ( !v5 )
    goto LABEL_5;
LABEL_23:
  v18 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v6;
  if ( v18 == std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int_____::vfunc_0 )
  {
    v19 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v6 + 16LL);
    if ( v19 == std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int_____::vfunc_2 )
    {
      v20 = *((_BYTE *)v6 + 40) == 0;
      *(_QWORD *)v6 = std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int______vtable;
      if ( !v20 )
      {
        v22 = *((void **)v6 + 2);
        if ( v22 )
          operator delete(v22, *((_QWORD *)v6 + 4) - (_QWORD)v22);
      }
      std::__future_base::_Result_base::~_Result_base(v6);
      a2 = (__m128i *)&dword_30;
      operator delete(v6, 0x30u);
    }
    else
    {
      v19(v6);
    }
  }
  else
  {
    v18(v6);
  }
LABEL_5:
  v7 = (volatile signed __int32 *)a1[1];
  if ( !v7 )
    return v31 - __readfsqword(0x28u);
  v8 = v7 + 2;
  if ( *((_QWORD *)v7 + 1) == 0x100000001LL )
  {
    v21 = *(_QWORD *)v7;
    *((_QWORD *)v7 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, volatile signed __int32 *))(v21 + 16))(v7, a2, v8);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v9 = _InterlockedExchangeAdd(v8, 0xFFFFFFFF);
    }
    else
    {
      v9 = *((_DWORD *)v7 + 2);
      *((_DWORD *)v7 + 2) = v9 - 1;
    }
    if ( v9 != 1 )
      return v31 - __readfsqword(0x28u);
    return sub_28E9C0(v7);
  }
}
