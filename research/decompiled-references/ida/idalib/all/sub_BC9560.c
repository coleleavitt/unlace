__int64 __fastcall sub_BC9560(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r12d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rbp
  __int64 v14; // r13
  __m128i v16; // [rsp+0h] [rbp-48h]

  v3 = *a1;
  v4 = *(unsigned __int8 (**)(void))(*a1 + 200);
  if ( (char *)v4 != (char *)sub_BC58C0 )
  {
    if ( !v4() )
      return 0;
    v3 = *a1;
  }
  v5 = *a2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v3 + 88))(a1, v5, a2[1]) )
    return 0;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 64))(
          a1,
          v5,
          v6,
          v7,
          v8,
          v9,
          v16.m128i_i64[0],
          v16.m128i_i64[1],
          a2[5]);
  if ( !(_BYTE)v10 )
    return 0;
  v11 = a2[8];
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 )
    {
      v13 = v11 + 16;
      v14 = v11 + 32LL * (unsigned int)(v12 - 1) + 48;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 112))(a1, v13) )
      {
        v13 += 32;
        if ( v14 == v13 )
          return v10;
      }
      return 0;
    }
  }
  return v10;
}
