__int64 __fastcall sub_124B60(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  bool v10; // al
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  __m128i v22; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = *(_QWORD *)(a3 + 16);
  if ( !v6 || v6 == a4 )
    return 0;
  while ( 1 )
  {
    sub_124680((__int64)&v19, a1, v6, a6);
    v10 = sub_64930(&v19, a2);
    v11 = v21;
    if ( v10 )
      break;
    if ( v21 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v21);
    }
    qfree(v19);
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 || a4 == v6 )
      return 0;
  }
  if ( a5 )
  {
    v12 = *(_QWORD *)a5;
    v13 = _mm_loadu_si128(&v22);
    *(_QWORD *)a5 = v19;
    v19 = v12;
    v14 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 8) = v20;
    v15 = *(_QWORD *)(a5 + 32);
    v20 = v14;
    v16 = *(_QWORD *)(a5 + 16);
    v22.m128i_i64[1] = v15;
    v21 = v16;
    *(_QWORD *)(a5 + 16) = v11;
    v11 = v16;
    *(__m128i *)(a5 + 24) = v13;
  }
  if ( v11 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v11);
  }
  qfree(v19);
  return v6;
}
