__int64 __fastcall sub_3D2ED0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __m128 v5; // xmm1
  __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+8h] [rbp-A0h]
  __int64 v10; // [rsp+18h] [rbp-90h]
  __m128i si128; // [rsp+20h] [rbp-88h]
  int v12; // [rsp+30h] [rbp-78h]
  __int16 v13; // [rsp+34h] [rbp-74h]
  _OWORD v14[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+70h] [rbp-38h]
  char v18; // [rsp+74h] [rbp-34h]
  unsigned __int64 v19; // [rsp+78h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  v10 = 0;
  v12 = 0;
  v13 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  sub_91620(a2, (__int64)&v8);
  v4 = j__qalloc_or_throw(1512, (__int64)&v8, v2, v3);
  sub_336F00(v4, a1);
  v5 = _mm_loadh_ps((const double *)(v4 + 1504));
  v15 = -1;
  v16 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v18 = 0;
  v17 = 0;
  v14[0] = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(v8 + (unsigned __int64)v9));
  v14[1] = v5;
  if ( !(unsigned __int8)sub_8C080(v4, (__int64)v14, v6) )
  {
    if ( v4 )
    {
      sub_84290(v4);
      j__qfree(v4);
    }
    v4 = 0;
  }
  sub_80A90((__int64 *)&v8);
  return v4;
}
