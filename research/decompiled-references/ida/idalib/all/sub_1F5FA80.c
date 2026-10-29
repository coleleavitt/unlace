__int64 __fastcall sub_1F5FA80(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]

  v2 = a2;
  sub_1F58FC0((__int64 *)a1, (__int64)a2);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(unsigned int *)(a1 + 16);
  v7 = v5 + 1;
  if ( _bittest((const int *)&v6, v5) )
  {
    a2 = (__m128i *)((char *)a2 + 56);
    *(_DWORD *)(a1 + 20) = v5 + 17;
    sub_1F57350(
      (__int64 *)a1,
      a2,
      (__int64)&v2[(((unsigned __int32)v2->m128i_i32[0] >> 19) & 1) + 3].m128i_i64[1],
      (unsigned __int16)((unsigned int)v6 >> (v5 + 1)));
  }
  else
  {
    *(_DWORD *)(a1 + 20) = v7;
  }
  v2[1].m128i_i64[0] = sub_1F194E0(*(_QWORD *)a1, (__int64)a2, v6, v7, v3, v4);
  v2[1].m128i_i64[1] = v8;
  sub_1F194A0((__int64)&v10, *(_QWORD *)a1);
  result = v11;
  v2[2] = _mm_loadu_si128(&v10);
  v2[3].m128i_i64[0] = result;
  return result;
}
