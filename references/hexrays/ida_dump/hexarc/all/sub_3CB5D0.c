__int64 __fastcall sub_3CB5D0(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128 v3; // xmm1
  __int64 v4; // rdx
  unsigned __int64 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-A0h]
  __int64 v8; // [rsp+18h] [rbp-90h]
  __m128i si128; // [rsp+20h] [rbp-88h]
  int v10; // [rsp+30h] [rbp-78h]
  __int16 v11; // [rsp+34h] [rbp-74h]
  _OWORD v12[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+70h] [rbp-38h]
  char v16; // [rsp+74h] [rbp-34h]
  unsigned __int64 v17; // [rsp+78h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v7 = 0;
  v6 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  sub_8AF60(a2, (__int64)&v6);
  v2 = j__qalloc_or_throw(1512);
  sub_32F980(v2, a1);
  v3 = _mm_loadh_ps((const double *)(v2 + 1504));
  v13 = -1;
  v14 = 0;
  v4 = *(_QWORD *)(a2 + 40);
  v16 = 0;
  v15 = 0;
  v12[0] = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + (unsigned __int64)v7));
  v12[1] = v3;
  if ( !(unsigned __int8)sub_859C0(v2, (__int64)v12, v4) )
  {
    if ( v2 )
    {
      sub_7DBD0(v2);
      j__qfree(v2);
    }
    v2 = 0;
  }
  sub_7A490((__int64 *)&v6);
  return v2;
}
