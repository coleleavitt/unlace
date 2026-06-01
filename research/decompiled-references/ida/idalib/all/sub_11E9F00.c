__int64 __fastcall sub_11E9F00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __m128 v10; // [rsp+10h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+20h] [rbp-D8h] BYREF
  void *v12; // [rsp+30h] [rbp-C8h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp-C0h]
  _BYTE v14[16]; // [rsp+40h] [rbp-B8h] BYREF
  void *v15; // [rsp+50h] [rbp-A8h] BYREF
  signed __int64 v16; // [rsp+58h] [rbp-A0h]
  _BYTE v17[16]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int8 *v18[17]; // [rsp+70h] [rbp-88h] BYREF

  v10.m128_u64[0] = a2;
  v10 = _mm_loadh_ps((const double *)v10.m128_u64);
  v3 = sub_10DCD30(a2, 0x9AEu);
  v4 = sub_10DE660(a2, 0x97Du, 0x97Cu);
  v5 = sub_10DE660(a2, 0xB66u, 0xB65u);
  v6 = sub_10DE660(a2, 0xB97u, 0xB96u);
  si128 = _mm_load_si128((const __m128i *)&v10);
  if ( v3 )
  {
    if ( v5 | v4 )
    {
      v10.m128_u64[0] = v6;
      sub_FC70B0((__int64)v18, *a3, 0, 323);
      sub_21B5FF0(&v12, v3, a2);
      sub_AEC220(v18, v12, v13);
      v7 = v10.m128_u64[0];
      if ( !v4 )
      {
        if ( v5 )
          v7 = v5;
        v4 = v7;
      }
    }
    else
    {
      if ( !v6 )
      {
LABEL_11:
        sub_11E64E0(a1, (__int64)&si128, 0, v3, 0);
        return a1;
      }
      v10.m128_u64[0] = v6;
      sub_FC70B0((__int64)v18, *a3, 0, 323);
      sub_21B5FF0(&v12, v3, a2);
      sub_AEC220(v18, v12, v13);
      v4 = v10.m128_u64[0];
    }
    sub_21B5FF0(&v15, v4, a2);
    sub_AEC220(v18, v15, v16);
    if ( v15 != v17 )
      operator delete(v15);
    if ( v12 != v14 )
      operator delete(v12);
    sub_AEA040((__int64)v18);
    goto LABEL_11;
  }
  if ( v4 )
  {
    if ( v6 | v5 )
    {
      v10.m128_u64[0] = v6;
      sub_FC70B0((__int64)v18, *a3, 0, 323);
      sub_21B5FF0(&v12, v4, a2);
      sub_AEC220(v18, v12, v13);
      if ( !v5 )
        v5 = v10.m128_u64[0];
      sub_21B5FF0(&v15, v5, a2);
      sub_AEC220(v18, v15, v16);
      if ( v15 != v17 )
        operator delete(v15);
      if ( v12 != v14 )
        operator delete(v12);
      sub_AEA040((__int64)v18);
    }
    sub_11E64E0(a1, (__int64)&si128, 1, v4, *(_DWORD *)(*(_QWORD *)v4 + 40LL) == 2428);
  }
  else if ( v5 )
  {
    v10.m128_u64[0] = v6;
    if ( v6 )
    {
      sub_FC70B0((__int64)v18, *a3, 0, 323);
      sub_21B5FF0(&v12, v5, a2);
      sub_AEC220(v18, v12, v13);
      sub_21B5FF0(&v15, v10.m128_u64[0], a2);
      sub_AEC220(v18, v15, v16);
      if ( v15 != v17 )
        operator delete(v15);
      if ( v12 != v14 )
        operator delete(v12);
      sub_AEA040((__int64)v18);
    }
    sub_11E64E0(a1, (__int64)&si128, 2, v5, *(_DWORD *)(*(_QWORD *)v5 + 40LL) == 2917);
  }
  else if ( v6 )
  {
    sub_11E64E0(a1, (__int64)&si128, 3, v6, *(_DWORD *)(*(_QWORD *)v6 + 40LL) == 2966);
  }
  else
  {
    *(_BYTE *)(a1 + 192) = 0;
  }
  return a1;
}
