__int64 __fastcall sub_FA100(__int64 a1, char a2)
{
  const __m128i *v2; // rax
  unsigned int v3; // edx
  __int16 v4; // ax
  __int64 v5; // rdi
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_91A70((unsigned __int8 *)a1);
  v2 = (const __m128i *)sub_15D8F0(*(_QWORD *)(a1 + 8) + 440LL);
  v7 = _mm_loadu_si128(v2);
  v8 = _mm_loadu_si128(v2 + 1);
  v9 = v2[2].m128i_i64[0];
  if ( !a2 )
  {
    v4 = v8.m128i_i16[6] + 1;
    goto LABEL_5;
  }
  v3 = 0;
  if ( v8.m128i_i16[6] > 0 )
  {
    v4 = v8.m128i_i16[6] - 1;
LABEL_5:
    v5 = *(_QWORD *)(a1 + 8);
    v8.m128i_i16[6] = v4;
    ((void (__fastcall *)(__int64, __m128i *, _QWORD))sub_16B4D0)(v5, &v7, 0);
    return 1;
  }
  return v3;
}

