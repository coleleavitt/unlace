__int64 __fastcall sub_1CA50(__int64 a1, __int64 a2, char a3, double a4, double a5, __m128 a6)
{
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  const __m128i *v11; // rdi
  __int64 v12; // rdx
  _QWORD *v14; // rbx
  unsigned int v15; // ebx
  _QWORD v17[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-98h]
  __int128 v19; // [rsp+18h] [rbp-90h]
  int v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int128 v22; // [rsp+38h] [rbp-70h]
  const __m128i *v23; // [rsp+48h] [rbp-60h] BYREF
  __int128 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp-40h]
  unsigned __int64 v27; // [rsp+70h] [rbp-38h]
  __int64 v28; // [rsp+78h] [rbp-30h]
  unsigned __int64 v29; // [rsp+88h] [rbp-20h]

  v6.m128i_i64[0] = 0;
  v29 = __readfsqword(0x28u);
  v17[0] = a1;
  v17[1] = a2;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v23 = nullptr;
  v25 = 0;
  v26 = -1;
  v27 = 0x8000000000000000LL;
  v19 = 0;
  v22 = 0;
  v24 = 0;
  v8 = qvector_reserve(&v23, 0, 1, 16);
  v9 = *((_QWORD *)&v24 + 1);
  v10 = v8;
  *((_QWORD *)&v24 + 1) = 0;
  v11 = v23;
  v12 = v24 - 1;
  if ( (__int64)v24 - 1 >= 0 )
  {
    do
    {
      v6 = _mm_loadu_si128(v11);
      v8 += 16;
      ++v11;
      *(__m128i *)(v8 - 16) = v6;
    }
    while ( v12-- != 0 );
    v11 = v23;
  }
  qfree(v11);
  v23 = (const __m128i *)v10;
  *((_QWORD *)&v24 + 1) = v9;
  v14 = (_QWORD *)(16 * v24 + v10);
  v14[1] = 0;
  *v14 = 0x300000003LL;
  *(_QWORD *)&v24 = v24 + 1;
  v28 = 4293918780LL;
  v15 = sub_1C680((__int64)v17, a3, *(double *)v6.m128i_i64, a5, a6);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v15;
}
