__int64 __fastcall sub_15CA60(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v3 = qword_252E48;
  v12 = 0;
  if ( !qword_252E48 )
  {
    v10 = operator new(0x18u);
    *(_QWORD *)v10 = 0;
    v3 = (__int64 *)v10;
    qword_252E48 = (_QWORD *)v10;
    *(_OWORD *)(v10 + 8) = 0;
  }
  v4 = sub_120C70(v3, (__int64)&v11, *(_QWORD *)(a1 + 96), 1);
  v5 = v11;
  v6 = v4;
  if ( a2 )
  {
    v5 = *a2;
    v7 = a2[2];
    *a2 = v11;
    v8 = _mm_loadu_si128(&v12);
    v11 = v5;
    v12.m128i_i64[1] = v7;
    *(__m128i *)(a2 + 1) = v8;
  }
  if ( v5 )
  {
    v12.m128i_i64[0] = 0;
    qfree();
  }
  return v6;
}

