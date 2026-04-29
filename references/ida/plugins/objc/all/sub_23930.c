__int64 __fastcall sub_23930(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  const __m128i *v5; // roff
  __m128i v6; // xmm0
  __int64 v7; // rdi
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h]
  __m128i v11; // [rsp+10h] [rbp-38h]
  const __m128i *v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 24);
  v13 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_23680(v3, a2, 1) )
    return 0xFFFFFFFFLL;
  create_data();
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 296LL))(*(_QWORD *)(a1 + 16), a2);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 176LL))(
    *(_QWORD *)(a1 + 16),
    a2,
    1,
    *(_QWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(const __m128i **)(a1 + 24);
  v6 = _mm_loadl_epi64(v5);
  v9 = &off_3C2B0;
  v12 = v5;
  v10 = 7;
  v11 = _mm_unpacklo_epi64(v6, (__m128i)v4);
  (*(void (__fastcall **)(unsigned __int64, __int64 (__fastcall ***)(), __int64))(*(_QWORD *)v4 + 56LL))(v4, &v9, a2);
  v7 = *(_QWORD *)(a1 + 16);
  v10 = 1;
  v9 = &off_3C0F0;
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(*(_QWORD *)v7 + 80LL))(v7, &v9, a2);
  ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
  return 0;
}
