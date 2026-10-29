__int64 __fastcall indexer_match_all_async(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 *a4,
        double a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v7; // r9
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v7 = *(__int64 **)(qword_2CCB598 + 1672);
  v14.m128i_i64[0] = *a4;
  v8 = a4[1];
  if ( v8 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    else
      ++*(_DWORD *)(v8 + 8);
  }
  v14.m128i_i64[1] = v8;
  sub_438110(v7, a1, a2, a3, &v14, a5, a6, a7);
  v9 = (volatile signed __int32 *)v14.m128i_i64[1];
  if ( !v14.m128i_i64[1] )
    return v15 - __readfsqword(0x28u);
  v10 = (volatile signed __int32 *)(v14.m128i_i64[1] + 8);
  if ( *(_QWORD *)(v14.m128i_i64[1] + 8) == 0x100000001LL )
  {
    v13 = *(_QWORD *)v14.m128i_i64[1];
    *(_QWORD *)(v14.m128i_i64[1] + 8) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, __m128i *, volatile signed __int32 *))(v13 + 16))(v9, a1, v10);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v11 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
    }
    else
    {
      v11 = *(_DWORD *)(v14.m128i_i64[1] + 8);
      *(_DWORD *)(v14.m128i_i64[1] + 8) = v11 - 1;
    }
    if ( v11 != 1 )
      return v15 - __readfsqword(0x28u);
    return sub_434350(v9);
  }
}
