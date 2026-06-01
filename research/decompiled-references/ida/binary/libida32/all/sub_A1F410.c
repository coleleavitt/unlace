__int64 __fastcall sub_A1F410(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  char v8; // al
  _BOOL8 v9; // rcx
  size_t v10; // rdx
  __int64 result; // rax
  char v12; // [rsp+7h] [rbp-31h] BYREF
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 == *(_QWORD *)(a4 + 8) )
    {
      v9 = 1;
      if ( v10 )
        v9 = memcmp(*(const void **)a3, *(const void **)a4, v10) == 0;
    }
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _BOOL8, char *, _QWORD *))(*a1 + 120))(
             a1,
             a2,
             a5,
             v9,
             &v12,
             v13);
  if ( (_BYTE)result )
  {
    sub_A1E350(a1, a3);
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, v13[0]);
  }
  else if ( v12 )
  {
    *(__m128i *)a3 = _mm_loadu_si128((const __m128i *)a4);
  }
  return result;
}

