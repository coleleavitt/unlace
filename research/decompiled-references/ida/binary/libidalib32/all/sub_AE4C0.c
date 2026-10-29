unsigned __int64 __fastcall sub_AE4C0(__m128 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-88h]
  double v12[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-70h] BYREF
  __m128 v14; // [rsp+40h] [rbp-68h] BYREF
  __m128 v15; // [rsp+50h] [rbp-58h]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = a1[3].m128_u64[0];
    v11 = a1[4].m128_u64[0];
    v4 = ((__int64)(v11 - v3) >> 5) - 1;
    if ( v4 < a2 )
    {
      sub_AE3A0(a1, a2 - v4);
      v3 = a1[3].m128_u64[0];
      v11 = a1[4].m128_u64[0];
    }
    v5 = v11;
    v6 = v3;
    v9 = a1[3].m128_u64[1];
    v10 = a1[4].m128_u64[1];
    v14 = _mm_loadh_ps((const double *)&v9);
    v15 = _mm_loadh_ps((const double *)&v10);
    sub_9BC90(&v14, a2);
    v7 = v14.m128_u64[0];
    v8 = v10;
    v13 = v14.m128_u64[1];
    v12[0] = *(double *)&v15.m128_u64[1];
    v12[1] = *(double *)v15.m128_u64;
    while ( v6 != v7 )
    {
      while ( 1 )
      {
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 12) = 0;
        *(_DWORD *)(v6 + 16) = -1;
        *(_QWORD *)(v6 + 24) = 0;
        *(_QWORD *)v6 = get_nsec_stamp();
        v6 += 32LL;
        if ( v5 != v6 )
          break;
        v6 = *(_QWORD *)(v8 + 8);
        v8 += 8LL;
        v5 = v6 + 512;
        if ( v6 == v7 )
          goto LABEL_9;
      }
    }
LABEL_9:
    a1[3] = _mm_loadh_ps((const double *)&v13);
    a1[4] = _mm_loadh_ps(v12);
  }
  return v16 - __readfsqword(0x28u);
}

