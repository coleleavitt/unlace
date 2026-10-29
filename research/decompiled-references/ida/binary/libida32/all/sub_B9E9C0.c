__int64 (__fastcall **__fastcall sub_B9E9C0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11))()
{
  unsigned __int64 v15; // r15
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int16 v28; // ax
  __int64 v30; // rax
  __int64 *v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 *v34; // r15
  unsigned __int64 v35; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-60h] BYREF
  __m128 v39; // [rsp+30h] [rbp-58h] BYREF
  __m128 v40; // [rsp+40h] [rbp-48h]

  if ( a5 == 1 )
  {
    v34 = sub_A5DBD0(a2, a2[2346], 0);
    v35 = sub_B9A8E0(a2, a3, 0, 0, 0, 0, 0, *v34, 0, (__int64)v34);
    v36 = sub_B9A8E0(a2, a3, 0, 0, 0, 1, 0, *v34, 0, (__int64)v34);
    v35 = sub_B9A8E0(a2, a3, 0, 0, 0, 2, 0, *v34, 0, (__int64)v34);
    v37 = sub_B9A490(a2, a3, 0, 0, 0, 3u, 0, 0, 1u, 0, 0);
    v39 = _mm_loadh_ps((const double *)&v36);
    v40 = _mm_loadh_ps((const double *)&v37);
    v22 = sub_B9E460(a2, 0, 0, (__int64)&v39, 4, 0, nullptr);
  }
  else
  {
    if ( a5 > 1 )
    {
      if ( a5 == 2 )
      {
        v15 = sub_B9A490(a2, a3, 0, 0, 1u, 0, 0, 0, 0, 0, 0);
        v16 = sub_A5DBD0(a2, *(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL, 0);
        v17 = sub_B9A8E0(a2, a3, 0, 0, 1, 1, 0, *v16, 1, (__int64)v16);
        v36 = v15;
        v35 = v17;
        v39 = _mm_loadh_ps((const double *)&v35);
        v18 = sub_B9E460(a2, 0, 0, (__int64)&v39, 2, 0, nullptr);
        v35 = sub_B9AEA0(a2, a3, 0, 0, 0, 0, 0, 0, v18);
        v19 = sub_B9A490(a2, a3, 0, 0, 0, 1u, 0, 0, 0, 0, 0);
        v20 = *(_QWORD *)(v19 + 48);
        v36 = v19;
        v21 = sub_A5DBD0(a2, v20 & 0xFFFFFFFFFFFFFFF0LL, 0);
        v40.m128_u64[0] = sub_B9A8E0(a2, a3, 0, 0, 0, 2, 0, *v21, 0, (__int64)v21);
        v35 = v36;
        v39 = _mm_loadh_ps((const double *)&v35);
        v22 = sub_B9E460(a2, 0, 0, (__int64)&v39, 3, 0, nullptr);
        goto LABEL_5;
      }
      if ( a5 == 3 )
      {
        v30 = sub_A3FFA0(a2);
        v31 = sub_A5DBD0(a2, v30, 0);
        v36 = sub_B9A8E0(a2, a3, 0, 0, 0, 0, 0, *v31, 0, (__int64)v31);
        v35 = sub_B9A490(a2, a3, 0, 0, 0, 1u, 0, 0, 1u, 0, 0);
        v39 = _mm_loadh_ps((const double *)&v35);
        v22 = sub_B9E460(a2, 0, 0, (__int64)&v39, 2, 0, nullptr);
        goto LABEL_5;
      }
      return (__int64 (__fastcall **)())sub_B9EF70(a1, (_DWORD)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    if ( a5 )
      return (__int64 (__fastcall **)())sub_B9EF70(a1, (_DWORD)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    v39.m128_u64[0] = sub_B9A490(a2, a3, 0, 0, 1u, 0, 0, 0, 1u, 0, 0);
    v32 = sub_B9E460(a2, 0, 0, (__int64)&v39, 1, 0, nullptr);
    v35 = sub_B9AEA0(a2, a3, 0, 0, 0, 0, 0, 0, v32);
    v39.m128_u64[0] = sub_B9A490(a2, a3, 0, 0, 1u, 0, 0, 0, 0, 0, 0);
    v33 = sub_B9E460(a2, 0, 0, (__int64)&v39, 1, 0, nullptr);
    v36 = sub_B9AEA0(a2, a3, 0, 0, 1, 0, 0, 0, v33);
    v37 = sub_B9A490(a2, a3, 0, 0, 0, 2u, 0, 0, 0, 0, 0);
    v38 = sub_B9A490(a2, a3, 0, 0, 0, 3u, 0, 0, 1u, 0, 0);
    v39 = _mm_loadh_ps((const double *)&v36);
    v40 = _mm_loadh_ps((const double *)&v38);
    v22 = sub_B9E460(a2, 0, 0, (__int64)&v39, 4, 0, nullptr);
  }
LABEL_5:
  v23 = v22;
  *(_QWORD *)a1 = off_2BD8B30;
  if ( a3
    && (v24 = sub_B68470(a3), v25 = *(_QWORD *)(v24 + 8) & 7LL, (*(_QWORD *)(v24 + 8) & 7) != 0)
    && (*(char *)(v24 + 29) >= 0 || (unsigned __int8)sub_B688D0(v24)) )
  {
    v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  *(_QWORD *)(a1 + 8) = v26;
  v27 = *(_QWORD *)(a1 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(a1 + 24) = v27 | 0x604A00000000LL;
  v28 = sub_B68380(74);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v28 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(74);
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 56) = v23;
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_2BDA9F0;
  return &off_2BDA9F0;
}

