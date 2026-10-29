__int64 __fastcall sub_6845E0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __m128i v8; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    v2 = *(_QWORD *)(v2 + 8);
  v8 = _mm_loadu_si128(a2);
  *a2 = 0;
  result = sub_FEF580(v2, &v8);
  v4 = (volatile signed __int32 *)v8.m128i_i64[1];
  if ( v8.m128i_i64[1] )
  {
    v5 = (volatile signed __int32 *)(v8.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v8.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v8.m128i_i64[1];
      v7 = v8.m128i_i64[1];
      *(_QWORD *)(v8.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v6 + 16))(v7, &v8, v5);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v5, 0xFFFFFFFF);
      }
      else
      {
        result = *(unsigned int *)(v8.m128i_i64[1] + 8);
        *(_DWORD *)(v8.m128i_i64[1] + 8) = result - 1;
      }
      if ( (_DWORD)result == 1 )
        return sub_6111C0(v4);
    }
  }
  return result;
}

