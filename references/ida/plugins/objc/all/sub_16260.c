unsigned __int64 __fastcall sub_16260(__int64 *a1, __int64 a2, __int64 a3, int a4, const __m128i *a5)
{
  __int64 v7; // rax
  __m128i v9; // xmm0
  __int64 v11; // [rsp+0h] [rbp-98h] BYREF
  __int128 v12; // [rsp+8h] [rbp-90h]
  _QWORD v13[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 *v16; // [rsp+48h] [rbp-50h]
  int v17; // [rsp+50h] [rbp-48h]
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v7 = *a1;
  v18 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v7 + 408))(a1, &v11);
  v9 = _mm_loadl_epi64(a5);
  v15 = a2;
  v13[0] = &off_3C1E8;
  v13[1] = 127;
  v16 = &v11;
  v17 = a4;
  v14 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)a1);
  sub_161A0(a1, (__int64)v13, a3);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}
