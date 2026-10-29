__int64 __fastcall sub_81B370(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm0
  _QWORD *v7; // rax
  __m128i v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  sub_AC4830(&v10);
  v5 = _mm_load_si128(&v10);
  v9 = v11;
  v8 = v5;
  if ( (v5.m128i_i8[8] & 3) == 0 )
    return sub_AC7460(*(_QWORD *)v5.m128i_i64[0]);
  v7 = (_QWORD *)sub_ACE280(&v8, a1, v1, v2, v3, v4);
  return sub_AC7460(*v7);
}

