__int64 __fastcall sub_3B5DC0(__int64 a1, __int64 a2)
{
  int *v2; // rax
  int v3; // eax
  int v5; // [rsp+4h] [rbp-54h] BYREF
  int v6; // [rsp+8h] [rbp-50h]
  int v7; // [rsp+Ch] [rbp-4Ch]
  _QWORD v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v8[5] = __readfsqword(0x28u);
  if ( a2 )
  {
    sub_386C90(a2, 0);
    v8[0] = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(a2 + 44)), 225).m128i_u64[0];
    v2 = (int *)sub_38AA60(a2, v8);
    if ( v2 )
    {
      v6 = 0;
      v7 = 0;
      v5 = v2[1];
      v3 = *v2;
      v7 = 15;
      v6 = v3;
      sub_38C230(v8, *(_QWORD *)(a2 + 24) + 8LL, &v5);
      sub_390EE0(v8, 1, a2, 0);
    }
  }
  return 1;
}
