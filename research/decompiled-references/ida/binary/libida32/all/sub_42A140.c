__int64 __fastcall sub_42A140(__int64 a1, struct _Unwind_Exception **a2)
{
  struct _Unwind_Exception *v2; // rbx
  struct _Unwind_Exception **v3; // rbp
  volatile signed __int32 *p_private_1; // r13
  int v5; // edx
  char v6; // al
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // eax
  __int64 v14; // rax
  volatile signed __int32 *v15; // rdi
  _QWORD v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *a2;
  v16[1] = __readfsqword(0x28u);
  v3 = a2;
  if ( !v2 )
  {
    std::__throw_future_error(3);
    goto LABEL_21;
  }
  (*(void (__fastcall **)(struct _Unwind_Exception *))(v2->exception_class + 16))(v2);
  p_private_1 = (volatile signed __int32 *)&v2->private_1;
  v5 = v2->private_1 & 0x7FFFFFFF;
  do
  {
    if ( v5 == 1 )
      break;
    _InterlockedOr(p_private_1, 0x80000000);
    a2 = (struct _Unwind_Exception **)&v2->private_1;
    v6 = std::__atomic_futex_unsigned_base::_M_futex_wait_until();
    v5 = *p_private_1 & 0x7FFFFFFF;
  }
  while ( v6 == 1 );
  exception_cleanup = v2->exception_cleanup;
  if ( *((_QWORD *)exception_cleanup + 1) )
  {
    v16[0] = *((_QWORD *)exception_cleanup + 1);
    sub_22A8660(v16, a2);
    std::rethrow_exception();
    if ( v16[0] )
      sub_22A8680(v16);
    v15 = (volatile signed __int32 *)v3[1];
    *(_OWORD *)v3 = 0;
    if ( v15 )
      sub_4204D0(v15);
LABEL_21:
    _Unwind_Resume(v2);
  }
  v8 = _mm_loadu_si128((const __m128i *)((char *)exception_cleanup + 24));
  v9 = *((_QWORD *)exception_cleanup + 2);
  *((_QWORD *)exception_cleanup + 2) = 0;
  *(__m128i *)(a1 + 8) = v8;
  *(_QWORD *)a1 = v9;
  *(_OWORD *)((char *)exception_cleanup + 24) = 0;
  v10 = (volatile signed __int32 *)v3[1];
  *(_OWORD *)v3 = 0;
  if ( v10 )
  {
    v11 = v10 + 2;
    if ( *((_QWORD *)v10 + 1) == 0x100000001LL )
    {
      v14 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, struct _Unwind_Exception **, volatile signed __int32 *))(v14 + 16))(
        v10,
        a2,
        v11);
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
  return a1;
}

