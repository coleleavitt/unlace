__int64 __fastcall sub_55960(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-88h] BYREF
  __m128i v16; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-68h]
  __m128i v18; // [rsp+30h] [rbp-58h] BYREF
  __m128i v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v3 = *a2;
  v21 = __readfsqword(0x28u);
  v5 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  while ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2) < v5 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __m128i *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, &v15, 40);
    if ( !(_BYTE)result )
      return result;
    v11 = a1[80];
    v12 = a1[79];
    v18 = _mm_load_si128(&v15);
    v13 = _mm_load_si128(&v16);
    v20 = v17;
    v19 = v13;
    if ( a1[81] < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 79, v12, v11 + 1, 40);
      v11 = a1[80];
      a1[79] = v14;
      v12 = v14;
    }
    v6 = 5 * v11;
    v7 = v20;
    v8 = (__m128i *)(v12 + 8 * v6);
    *v8 = _mm_load_si128(&v18);
    v9 = _mm_load_si128(&v19);
    v8[2].m128i_i64[0] = v7;
    v8[1] = v9;
    ++a1[80];
  }
  return 1;
}
