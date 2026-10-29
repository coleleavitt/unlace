void __fastcall sub_11EFF80(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  size_t v6; // rcx
  __m128 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 *v12; // rsi
  unsigned __int64 v13; // r15
  __int64 *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  unsigned int v20; // r8d
  __int64 *v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _OWORD *v27; // rdx
  __m128 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  __m128i si128; // xmm0
  size_t v39; // [rsp+28h] [rbp-100h]
  __int64 v40; // [rsp+28h] [rbp-100h]
  __m128i v41; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v42; // [rsp+40h] [rbp-E8h] BYREF
  char v43; // [rsp+50h] [rbp-D8h]
  void *v44; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-C0h]
  _BYTE v46[16]; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v47[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int16 v48; // [rsp+A0h] [rbp-88h]
  __m128 v49; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-68h]
  void *dest; // [rsp+D0h] [rbp-58h]
  char v52; // [rsp+D8h] [rbp-50h]
  int v53; // [rsp+DCh] [rbp-4Ch]
  void **v54; // [rsp+E0h] [rbp-48h]

  v5 = *(_DWORD *)(a1 + 3932);
  if ( v5 != 1 || *(_DWORD *)(a1 + 3936) != 2 )
  {
    v46[0] = 0;
    v44 = v46;
    v50 = 0;
    v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
    v45 = 0;
    v49.m128_i32[2] = 0;
    v52 = 0;
    v53 = 1;
    dest = nullptr;
    v54 = &v44;
    sub_227B8B0(&v49, 0, 0, 0);
    v6 = j__strlen("-target-sdk-version=");
    if ( v6 > *((_QWORD *)&v50 + 1) - (_QWORD)dest )
    {
      v7 = (__m128 *)sub_227BF10(&v49, "-target-sdk-version=", v6);
    }
    else
    {
      v7 = &v49;
      if ( v6 )
      {
        v39 = v6;
        memcpy(dest, "-target-sdk-version=", v6);
        v7 = &v49;
        dest = (char *)dest + v39;
      }
    }
    sub_2257710(v7, a1 + 3976);
    v47[0].m128i_i64[0] = (__int64)&v44;
    v48 = 260;
    v8 = sub_10DA6C0(a2, (__int64)v47);
    sub_10DC5D0(a3, v8);
    goto LABEL_6;
  }
  v17 = *(unsigned int *)(a1 + 4032);
  v18 = a1 + 4016;
  v19 = *(_QWORD *)(a1 + 4016);
  if ( (_DWORD)v17 )
  {
    v20 = (v17 - 1) & 0x2ABAD31C;
    v21 = (__int64 *)(v19 + 104LL * v20);
    v22 = *v21;
    if ( *v21 == 0x171000000EDLL )
    {
LABEL_20:
      sub_11EF550(&v49, v21, (__int64 *)(v19 + 104 * v17), v18, 1);
      v23 = v49.m128_u64[0];
      goto LABEL_21;
    }
    while ( v22 != -1 )
    {
      v20 = (v17 - 1) & (v5 + v20);
      v21 = (__int64 *)(v19 + 104LL * v20);
      v22 = *v21;
      if ( *v21 == 0x171000000EDLL )
        goto LABEL_20;
      ++v5;
    }
  }
  sub_11EF550(&v49, (__int64 *)(v19 + 104 * v17), (__int64 *)(v19 + 104 * v17), v18, 1);
  v23 = v49.m128_u64[0];
LABEL_21:
  v24 = (__int64 *)(*(_QWORD *)(a1 + 4016) + 104LL * *(unsigned int *)(a1 + 4032));
  sub_11EF550(&v49, v24, v24, v18, 1);
  if ( v49.m128_u64[0] == v23 || !*(_BYTE *)(v23 + 96) )
    goto LABEL_8;
  LOBYTE(v50) = 0;
  v47[0] = (__m128i)0x800000010000000DLL;
  sub_FC0010(
    &v42,
    v23 + 8,
    (unsigned int *)(a1 + 3976),
    v47,
    v25,
    v26,
    (__int128)_mm_load_si128((const __m128i *)&v49),
    v50);
  if ( v43 )
    v41 = _mm_load_si128(&v42);
  else
    v41 = (__m128i)0x800000010000000DLL;
  v44 = v46;
  v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
  v45 = 0;
  v46[0] = 0;
  v49.m128_i32[2] = 0;
  v52 = 0;
  v53 = 1;
  dest = nullptr;
  v50 = 0;
  v54 = &v44;
  sub_227B8B0(&v49, 0, 0, 0);
  v27 = dest;
  if ( *((_QWORD *)&v50 + 1) - (_QWORD)dest > 0x13u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BF0);
    *((_DWORD *)dest + 4) = 1030647657;
    v28 = &v49;
    *v27 = si128;
    dest = (char *)dest + 20;
  }
  else
  {
    v28 = (__m128 *)sub_227BF10(&v49, "-target-sdk-version=", 20);
  }
  sub_2257710(v28, &v41);
  v48 = 260;
  v47[0].m128i_i64[0] = (__int64)&v44;
  v29 = sub_10DA6C0(a2, (__int64)v47);
  v30 = *(unsigned int *)(a3 + 8);
  if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v40 = v29;
    sub_2237220(a3, a3 + 16, v30 + 1, 8);
    v30 = *(unsigned int *)(a3 + 8);
    v29 = v40;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v30) = v29;
  ++*(_DWORD *)(a3 + 8);
LABEL_6:
  v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
  sub_227B7A0(&v49);
  if ( v44 != v46 )
    operator delete(v44);
LABEL_8:
  if ( !*(_BYTE *)(a1 + 4104) )
    return;
  if ( *(_DWORD *)(a1 + 3932) == 1 && *(_DWORD *)(a1 + 3936) == 2 )
  {
    v46[0] = 0;
    v50 = 0;
    v44 = v46;
    v45 = 0;
    v49.m128_i32[2] = 0;
    v52 = 0;
    v53 = 1;
    dest = nullptr;
    v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
    v54 = &v44;
    sub_227B8B0(&v49, 0, 0, 0);
    v34 = sub_995540((__int64)&v49, "-darwin-target-variant-sdk-version=");
    sub_2257710(v34, a1 + 3976);
    v48 = 260;
    v47[0].m128i_i64[0] = (__int64)&v44;
    v35 = sub_10DA6C0(a2, (__int64)v47);
    sub_10DC5D0(a3, v35);
    v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
    sub_227B7A0(&v49);
    v33 = v44;
    if ( v44 == v46 )
      return;
LABEL_32:
    operator delete(v33);
    return;
  }
  v9 = *(unsigned int *)(a1 + 4032);
  v10 = *(_QWORD *)(a1 + 4016);
  if ( !(_DWORD)v9 )
    goto LABEL_40;
  v11 = (v9 - 1) & 0x2ABAD31C;
  v12 = (__int64 *)(v10 + 104LL * v11);
  if ( *v12 != 0x171000000EDLL )
  {
    if ( *v12 != -1 )
    {
      v36 = 1;
      do
      {
        v11 = (v9 - 1) & (v36 + v11);
        v12 = (__int64 *)(v10 + 104LL * v11);
        if ( *v12 == 0x171000000EDLL )
          goto LABEL_12;
        ++v36;
      }
      while ( *v12 != -1 );
    }
LABEL_40:
    sub_11EF550(&v49, (__int64 *)(v10 + 104 * v9), (__int64 *)(v10 + 104 * v9), a1 + 4016, 1);
    v13 = v49.m128_u64[0];
    goto LABEL_13;
  }
LABEL_12:
  sub_11EF550(&v49, v12, (__int64 *)(v10 + 104 * v9), a1 + 4016, 1);
  v13 = v49.m128_u64[0];
LABEL_13:
  v14 = (__int64 *)(*(_QWORD *)(a1 + 4016) + 104LL * *(unsigned int *)(a1 + 4032));
  sub_11EF550(&v49, v14, v14, a1 + 4016, 1);
  if ( v13 != v49.m128_u64[0] )
  {
    if ( *(_BYTE *)(v13 + 96) )
    {
      LOBYTE(v50) = 0;
      v47[0] = (__m128i)0x800000010000000DLL;
      sub_FC0010(
        &v42,
        v13 + 8,
        (unsigned int *)(a1 + 3976),
        v47,
        v15,
        v16,
        (__int128)_mm_load_si128((const __m128i *)&v49),
        v50);
      if ( v43 )
      {
        v46[0] = 0;
        v50 = 0;
        v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
        v44 = v46;
        v45 = 0;
        v49.m128_i32[2] = 0;
        v52 = 0;
        v53 = 1;
        dest = nullptr;
        v54 = &v44;
        sub_227B8B0(&v49, 0, 0, 0);
        v31 = sub_995540((__int64)&v49, "-darwin-target-variant-sdk-version=");
        sub_2257710(v31, &v42);
        v48 = 260;
        v47[0].m128i_i64[0] = (__int64)&v44;
        v32 = sub_10DA6C0(a2, (__int64)v47);
        sub_10DC5D0(a3, v32);
        v49.m128_u64[0] = (unsigned __int64)&off_2BEBE68;
        sub_227B7A0(&v49);
        v33 = v44;
        if ( v44 != v46 )
          goto LABEL_32;
      }
    }
  }
}
