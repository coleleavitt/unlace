__int64 __fastcall sub_254C60(
        _DWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __m128i *v14; // rbx
  int v15; // eax
  int v17; // [rsp+0h] [rbp-78h] BYREF
  const char *v18; // [rsp+8h] [rbp-70h]
  __m128i v19; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int128 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-30h]
  int v25; // [rsp+50h] [rbp-28h]
  unsigned __int64 v26; // [rsp+58h] [rbp-20h]

  LODWORD(v14) = (unsigned __int8)byte_8BA544;
  v26 = __readfsqword(0x28u);
  if ( byte_8BA544 )
  {
    v14 = &v19;
    v20 = a3;
    v21 = a4;
    v17 = 16;
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&srcdbg_get_local_vars, (__m128i)(unsigned __int64)&v17);
    v18 = a2;
    v22 = 0;
    v24 = 0;
    v25 = -1;
    v23 = 0;
    v15 = sub_24EC60(a1, (__int64)a2, 2u, (__int64)&v19, 1);
    v19.m128i_i64[0] = (__int64)&srcdbg_get_local_vars;
    LOBYTE(v14) = v15 == 1;
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22, a2);
    }
  }
  else if ( !byte_8CC068 )
  {
    byte_8CC068 = 1;
    sub_169630(
      (int)"The source level debugger has been disabled.\nTo enable it, use Debugger, Use source-level debugging",
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v17);
  }
  return (unsigned int)v14;
}
