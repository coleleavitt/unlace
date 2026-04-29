__int64 __fastcall sub_3E4D90(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // eax
  int v8; // r13d
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 *v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 112) = 0;
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v3 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v4 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v6 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v7 = *(_DWORD *)(a1 + 64);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 272, v7 - 272);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 104), &v10);
  sub_30F930((__int64 *)(a1 + 120), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 0, 5);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 264), &v10);
  sub_30F930((__int64 *)(a1 + 280), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v10 = 0;
  v11 = 0;
  v12 = nullptr;
  v13 = 0;
  v12 = (__int64 *)qvector_reserve(&v12, 0, 1, 16);
  *(__m128i *)&v12[2 * v13] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  *(_QWORD *)&v13 = v13 + 1;
  sub_5DD00((__int64 *)(a1 + 264), &v10);
  sub_30F930((__int64 *)(a1 + 280), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 7, 1);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 264), &v10);
  sub_30F930((__int64 *)(a1 + 280), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v8 = *(_DWORD *)(a1 + 80);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 8, 8 * v8);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 144), &v10);
  sub_30F930((__int64 *)(a1 + 160), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 40, 5 * v8);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 184), &v10);
  sub_30F930((__int64 *)(a1 + 200), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  v10 = 0;
  v11 = 0;
  sub_5D900(&v10, 60, 13 * v8);
  v12 = nullptr;
  v13 = 0;
  sub_5DD00((__int64 *)(a1 + 224), &v10);
  sub_30F930((__int64 *)(a1 + 240), &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v10);
  sub_5DD00((__int64 *)(a1 + 264), (__int64 *)(a1 + 144));
  sub_30F930((__int64 *)(a1 + 280), (__int64 **)(a1 + 160));
  sub_5DD00((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  return sub_30F930((__int64 *)(a1 + 280), (__int64 **)(a1 + 200));
}
