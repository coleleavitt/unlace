__int64 __fastcall sub_FB250(__int64 a1, __m128i *a2, char a3)
{
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edx
  int epi16; // esi
  __m128i v12; // xmm0
  __int32 v13; // eax
  __m128i v14; // xmm0
  __int64 v16; // rax
  int v17; // r12d
  __int64 (*v18)(); // rdx
  __int64 (*v19)(); // rax
  int v20; // edx
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __m128i v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+20h] [rbp-38h]

  sub_91A70((unsigned __int8 *)a1);
  v5 = (const __m128i *)sub_15D8F0(*(_QWORD *)(a1 + 8) + 440LL);
  v9 = v5[2].m128i_i64[0];
  v21 = _mm_loadu_si128(v5);
  v23 = v9;
  v22 = _mm_loadu_si128(v5 + 1);
  if ( a3 )
  {
    v16 = *(_QWORD *)a1;
    v17 = 0xFFFF;
    v18 = *(__int64 (**)())(*(_QWORD *)a1 + 112LL);
    if ( v18 != sub_FA0F0 )
    {
      v17 = ((unsigned __int16 (__fastcall *)(__int64, __m128i *, __int64 (*)(), __int64, __int64, __int64, __int64, __int64, __int64, __int64))v18)(
              a1,
              a2,
              v18,
              v6,
              v7,
              v8,
              v21.m128i_i64[0],
              v21.m128i_i64[1],
              v22.m128i_i64[0],
              v22.m128i_i64[1]);
      v16 = *(_QWORD *)a1;
    }
    v19 = *(__int64 (**)())(v16 + 120);
    epi16 = -1;
    v20 = -1;
    if ( v19 != sub_FA0F0 )
    {
      v20 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v19)(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      epi16 = (__int16)v20;
    }
    v10 = v17 | (v20 << 16);
  }
  else
  {
    v10 = v5[1].m128i_u32[3];
    epi16 = (__int16)_mm_extract_epi16(_mm_cvtsi32_si128(v10), 1);
  }
  if ( a2 )
  {
    v12 = _mm_load_si128(&v21);
    v13 = v23;
    v22.m128i_i32[3] = v10;
    *a2 = v12;
    v14 = _mm_load_si128(&v22);
    a2[2].m128i_i32[0] = v13;
    a2[1] = v14;
  }
  return sub_FB160(a1, epi16);
}

