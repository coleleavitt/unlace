__int64 __fastcall sub_1965F0(__int64 *a1, __int64 *a2, char a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128 v13; // xmm1
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v20[24]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  __int128 v24; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+50h] [rbp-38h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  sub_180520((__int64)(a1 + 20));
  v7 = *a1;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v22 = 0;
  v24 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))(v7 + 352))(a1, &v21, a3 & 3);
  v19 = 0;
  *(_OWORD *)v20 = 0;
  *(_QWORD *)&v20[16] = -1;
  sub_194520(0.0, a5, a6, (__int64)a1, (__int64)&v19, (__int64)&v21, (a3 & 4) == 0 ? 1 : 5);
  v8 = *(_QWORD *)v20;
  v9 = v19;
  if ( a2 )
  {
    v10 = *a2;
    v11 = *(_QWORD *)&v20[16];
    *a2 = v19;
    v12 = _mm_loadu_si128((const __m128i *)a2 + 1);
    v13 = _mm_loadh_ps((const double *)&v20[8]);
    v19 = v10;
    v9 = v10;
    a2[3] = v11;
    *(__m128 *)(a2 + 1) = v13;
    *(__m128i *)&v20[8] = v12;
  }
  if ( v9 )
  {
    *(_QWORD *)v20 = 0;
    qfree();
  }
  sub_17E9E0(&v23);
  v14 = v21;
  if ( v21 )
  {
    v15 = v22;
    if ( (_QWORD)v22 )
    {
      v16 = 0;
      do
      {
        v17 = v16++;
        sub_17E9E0((__int64 *)(32 * v17 + v14));
        v14 = v21;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v8;
}

