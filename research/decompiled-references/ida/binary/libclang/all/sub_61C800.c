__int64 __fastcall sub_61C800(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  const __m128i *v6; // rbp
  __int64 v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a3;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 && a2[2].m128i_i64[0] && (unsigned __int8)sub_61B740(a1, a2[2].m128i_u64[0], v4) )
    return 1;
  v5 = a2[1].m128i_u32[1];
  if ( (_DWORD)v5 )
  {
    v6 = a2 + 3;
    v7 = v3 + 8 * v5;
    while ( 1 )
    {
      v8 = _mm_loadu_si128(v6);
      v9 = v6[1].m128i_i64[0];
      v13 = *(_QWORD *)(v3 + 32);
      v12 = v9;
      v11 = v8;
      if ( (unsigned __int8)sub_61C470(a1, (__int64)&v11) )
        break;
      v3 += 8;
      v6 = (const __m128i *)((char *)v6 + 24);
      if ( v3 == v7 )
        return 0;
    }
    return 1;
  }
  return 0;
}

