__int64 __fastcall sub_17840A0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        __m128i a7)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v18; // rcx
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+18h] [rbp-30h]

  v10 = *(_QWORD *)(a2 + 48);
  v19 = _mm_loadu_si128(&a7);
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
  if ( (unsigned int)v12 <= 1
    || (v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v18 <= 1)
    && (v20 = v10, v11 = sub_F63050(v11, a2, v10, v18), v10 = v20, v11) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v11 + 32);
      if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
        v13 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
        if ( (unsigned int)v13 <= 1 )
          break;
        v14 = sub_F63050(v11, a2, v13, v12);
        v10 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v15 = sub_190BDA0(a1, a2, v10, 1, a3, 0, v19.m128i_i64[0], v19.m128i_i64[1]);
  if ( v15 == 1 )
    return 1;
  a7 = _mm_load_si128(&v19);
  return sub_1783F70(a1, v15 & 0xFFFFFFFFFFFFFFFELL, a3, a4, a5, v16, a7.m128i_i64[0], a7.m128i_i64[1]);
}
