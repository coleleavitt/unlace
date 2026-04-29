__int64 __fastcall sub_3B4DC0(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // eax
  __int64 v5; // [rsp+4h] [rbp-54h] BYREF
  int v6; // [rsp+Ch] [rbp-4Ch]
  _QWORD v7[9]; // [rsp+10h] [rbp-48h] BYREF

  v7[5] = __readfsqword(0x28u);
  if ( a2 )
  {
    sub_385410(a2, 0);
    v7[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 44)), 225).m128i_u64[0];
    v2 = sub_3891E0((_QWORD *)a2, v7);
    if ( v2 )
    {
      HIDWORD(v5) = 0;
      v6 = 0;
      LODWORD(v5) = v2[1];
      v3 = *v2;
      v6 = 15;
      HIDWORD(v5) = v3;
      sub_38A9B0((__int64)v7, *(_QWORD *)(a2 + 24) + 8LL, &v5);
      sub_38F810((__int64)v7, 1u, a2, 0);
    }
  }
  return 1;
}
