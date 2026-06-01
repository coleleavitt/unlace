unsigned __int64 __fastcall sub_1DD8310(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v11; // al
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rdi
  unsigned __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  const __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // zf
  char v27; // al
  __m128i v28[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-40h] BYREF
  __m128i v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-28h]

  if ( !a3 )
    return 0;
  v11 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v11 != 68 )
  {
    v16 = *(_QWORD *)a1;
    if ( v11 == 43 )
    {
      v24 = *(_QWORD *)(v16 + 11280);
      if ( v24 )
      {
        v25 = *(unsigned int *)(v16 + 11320);
        if ( (_DWORD)v25 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v16 + 11312) + (v25 << 6) - 59) )
          {
            if ( !sub_1DBE010(*(_QWORD *)(v16 + 11280), a3, v24, a4) )
            {
              v27 = sub_B799A0(a3) ? sub_1DD8110((__int64 *)a1, a3, a7, a8) : sub_1DD80B0(a1, a3, 0, 0, 0, a7, a8) == 0;
              if ( v27 )
                return 0;
            }
            v16 = *(_QWORD *)a1;
          }
        }
      }
    }
    v12 = *(_QWORD *)(a1 + 32);
    return sub_1E38470(v16, a2, a3, v12, 0);
  }
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_DWORD *)(v12 + 112);
  v14 = *(_DWORD *)(a3 + 64) & 0xFFFFF;
  v15 = v13 + *(_DWORD *)(v12 + 8);
  if ( v14 >= v15 )
  {
    v16 = *(_QWORD *)a1;
    return sub_1E38470(v16, a2, a3, v12, 0);
  }
  if ( v14 >= v13
    && (v18 = *(_QWORD *)v12 + 24LL * (v15 - 1 - v14), v19 = *(_WORD *)(a3 + 66) >> 4, v19 < *(_QWORD *)(v18 + 16))
    && (v20 = (const __m128i *)(*(_QWORD *)(v18 + 8) + 24 * v19), (v20->m128i_i32[0] & 0x7FFFFFFF) != 0) )
  {
    v21 = _mm_loadu_si128(v20);
    v22 = v20[1].m128i_i64[0];
    v30 = v21;
    v31 = v22;
    if ( (*(_BYTE *)(a3 + 80) & 2) != 0 )
    {
      sub_1DB7720(v28, *(_QWORD *)a1, v22, v12, a5, a6, v21, v30.m128i_i64[0]);
      v30 = _mm_loadu_si128(v28);
      v23 = v30.m128i_i64[1];
    }
    else
    {
      v23 = v20->m128i_i64[1];
    }
    sub_F22A90(&v29, v23);
    return sub_F22BD0(&v29, 0);
  }
  else
  {
    v26 = *(_BYTE *)(a1 + 58) == 0;
    result = 0;
    *(_BYTE *)(a1 + 57) = 1;
    if ( v26 )
      return a3;
  }
  return result;
}
