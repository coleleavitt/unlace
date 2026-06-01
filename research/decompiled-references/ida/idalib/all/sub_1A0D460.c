__int64 __fastcall sub_1A0D460(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 *a4, __int64 a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // [rsp+1h] [rbp-61h] BYREF
  __int64 v19; // [rsp+2h] [rbp-60h] BYREF
  __m128i v20; // [rsp+Ah] [rbp-58h] BYREF
  char v21; // [rsp+1Ah] [rbp-48h]
  __int64 v22; // [rsp+22h] [rbp-40h]
  __int64 v23; // [rsp+2Ah] [rbp-38h]

  result = 0;
  if ( (*(_QWORD *)&byte_8[*a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[*a4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*a4) & 7) == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) )
  {
    v18 = 0;
    v11 = sub_1BE7B70(a1, a2, a5, 0, &v19, &v18);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 48);
      v20.m128i_i32[0] = 0;
      v22 = v12;
      v20.m128i_i64[1] = v13;
      v21 = v18;
      v23 = v19;
      sub_1A0C040((__int64)(a6 + 2), &v20);
      v15 = *(_QWORD *)(v12 + 48);
      *a3 = v15;
      v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      v17 = *(_QWORD *)(v16 + 8) & 7LL;
      if ( v17 | (*(__int64 *)(v16 + 8) >> 3) & 1 )
        v16 = sub_F64F00(v15, (__int64)&v20, v17, v17 | (*(__int64 *)(v16 + 8) >> 3) & 1, v14);
      *a4 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL) != 48 )
    {
      *a6 = 0;
      a6[46] = 12;
      return 1;
    }
    return 0;
  }
  return result;
}
