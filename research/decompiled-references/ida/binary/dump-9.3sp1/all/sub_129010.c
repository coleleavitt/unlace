__int64 __fastcall sub_129010(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  bool v10; // al
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  __m128i v21; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v6 = a3;
  if ( a3 != a4 && a3 )
  {
    while ( 1 )
    {
      sub_127A20((__int64)&v18, a1, v6, 257, a5, a6);
      v10 = sub_64930(&v18, a2);
      v11 = v20;
      if ( v10 )
        break;
      if ( v20 )
      {
        v21.m128i_i64[0] = 0;
        qfree(v20);
      }
      qfree(v18);
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v6 || a4 == v6 )
        return v6;
    }
    if ( a5 )
    {
      v12 = *(_QWORD *)a5;
      v13 = _mm_loadu_si128(&v21);
      *(_QWORD *)a5 = v18;
      v18 = v12;
      v14 = *(_QWORD *)(a5 + 8);
      *(_QWORD *)(a5 + 8) = v19;
      v15 = *(_QWORD *)(a5 + 32);
      v19 = v14;
      v16 = *(_QWORD *)(a5 + 16);
      v21.m128i_i64[1] = v15;
      v20 = v16;
      *(_QWORD *)(a5 + 16) = v11;
      v11 = v16;
      *(__m128i *)(a5 + 24) = v13;
    }
    if ( v11 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v11);
    }
    qfree(v18);
  }
  return v6;
}
