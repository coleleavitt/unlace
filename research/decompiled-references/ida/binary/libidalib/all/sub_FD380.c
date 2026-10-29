__int64 __fastcall sub_FD380(const __m128i *a1)
{
  __int64 v1; // rax
  unsigned __int64 (__fastcall *v3)(const __m128i *, void *, char); // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm0
  unsigned __int64 v7; // r12
  void **v8; // rbp
  void *v9; // rdi
  __m128i v10; // xmm4
  __m128i v11; // xmm5
  __m128i v12; // [rsp+0h] [rbp-88h] BYREF
  __m128i v13; // [rsp+10h] [rbp-78h] BYREF
  _OWORD v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-20h]

  v1 = a1->m128i_i64[0];
  v16 = __readfsqword(0x28u);
  v3 = *(unsigned __int64 (__fastcall **)(const __m128i *, void *, char))(v1 + 72);
  if ( v3 != sub_FD250 )
    return v3(a1, nullptr, 0);
  if ( !(unsigned __int8)sub_10E500() )
  {
    sub_91950((__int64)a1, nullptr, 0);
    if ( !a1[20].m128i_i8[9] && !a1[1].m128i_i32[0] && !*(_BYTE *)(a1->m128i_i64[1] + 849) )
    {
      v5 = _mm_loadu_si128(a1 + 17);
      v6 = _mm_loadu_si128(a1 + 19);
      v13 = _mm_loadu_si128(a1 + 16);
      v14[0] = _mm_loadu_si128(a1 + 18);
      v14[1] = v6;
      v15[0] = v13;
      v12 = v5;
      v15[1] = v5;
      sub_FA3B0(v15, v14);
      v7 = a1[19].m128i_i64[1] + 8;
      v8 = (void **)(v5.m128i_i64[1] + 8);
      if ( v5.m128i_i64[1] + 8 < v7 )
      {
        do
        {
          v9 = *v8++;
          operator delete(v9, 0x190u);
        }
        while ( (unsigned __int64)v8 < v7 );
      }
      v10 = _mm_load_si128(&v13);
      v11 = _mm_load_si128(&v12);
      a1[20].m128i_i32[0] = 0;
      a1[18] = v10;
      a1[19] = v11;
    }
  }
  return v16 - __readfsqword(0x28u);
}

