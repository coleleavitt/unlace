unsigned __int64 __fastcall sub_1B1BE10(
        __int64 *a1,
        unsigned int a2,
        signed int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // bp
  char v19; // r12
  const char *v20; // rdi
  void **v21; // rsi
  __int64 v22; // r12
  void *v23; // rdi
  char *v24; // rax
  unsigned int v25; // r13d
  __int64 v26; // r13
  char *v27; // rax
  __int64 v28; // r13
  __int64 v29; // rbx
  _QWORD v32[2]; // [rsp+10h] [rbp-108h] BYREF
  void *v33; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-F0h]
  _BYTE v35[16]; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v36; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v37[16]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v38[184]; // [rsp+60h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u )
  {
    if ( a3 == 4 )
    {
      if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x31u || a7 )
      {
        v18 = a2 != 4;
        v19 = 0;
        goto LABEL_22;
      }
      if ( a2 != 4 )
      {
        v11 = (_DWORD *)sub_1AE5FF0(a1[1]);
        if ( v11[236] == 4 && v11[234] == 4 && v11[238] == 4 )
          goto LABEL_11;
LABEL_18:
        sub_168B9F0((__int64)v38, a1, a4, 0x11D7u, 0);
LABEL_19:
        sub_15F7200(v38);
        return 0;
      }
    }
    else if ( a2 != 4 )
    {
      v11 = (_DWORD *)sub_1AE5FF0(a1[1]);
      v12 = a3;
      if ( v11[2 * a3 + 234] == 4 )
      {
        if ( (unsigned int)(a3 - 3) > 1 )
          goto LABEL_5;
LABEL_11:
        v11[236] = a2;
        v11[237] = a4;
        v16 = sub_1AE5FF0(a1[1]);
        *(_DWORD *)(v16 + 936) = a2;
        *(_DWORD *)(v16 + 940) = a4;
        v17 = sub_1AE5FF0(a1[1]);
        *(_DWORD *)(v17 + 952) = a2;
        *(_DWORD *)(v17 + 956) = a4;
        goto LABEL_6;
      }
      goto LABEL_18;
    }
    v19 = 1;
    v18 = 0;
LABEL_22:
    v20 = "'scalar', 'aggregate', 'pointer'";
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) >= 0x34u )
      v20 = "'scalar', 'aggregate', 'pointer', 'all'";
    v32[0] = v20;
    v32[1] = j__strlen(v20);
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) == 50 )
    {
      v34 = 66;
      v33 = "'alloc', 'from', 'to', 'tofrom', 'firstprivate', 'none', 'default'";
    }
    else
    {
      v34 = 77;
      v33 = "'alloc', 'from', 'to', 'tofrom', 'firstprivate', 'none', 'default', 'present'";
    }
    if ( v18 )
    {
      sub_168B9F0((__int64)v38, a1, a7, 0x1217u, 0);
      v21 = (void **)v32;
    }
    else
    {
      if ( !v19 )
      {
        sub_168B9F0((__int64)v38, a1, a6, 0x1217u, 0);
        v28 = sub_1682BA0((__int64)v38, (__int64)&v33);
        sub_1AF81E0(&v36, 0x15u);
        sub_1682AF0(v28, (__int64)&v36);
        if ( (_BYTE *)v36.m128i_i64[0] != v37 )
          operator delete((void *)v36.m128i_i64[0]);
        sub_15F7200(v38);
        sub_168B9F0((__int64)v38, a1, a7, 0x1217u, 0);
        v29 = sub_1682BA0((__int64)v38, (__int64)v32);
        sub_1AF81E0(&v36, 0x15u);
        sub_1682AF0(v29, (__int64)&v36);
        v23 = (void *)v36.m128i_i64[0];
        if ( (_BYTE *)v36.m128i_i64[0] == v37 )
          goto LABEL_19;
        goto LABEL_30;
      }
      sub_168B9F0((__int64)v38, a1, a6, 0x1217u, 0);
      v21 = &v33;
    }
    v22 = sub_1682BA0((__int64)v38, (__int64)v21);
    sub_1AF81E0(&v36, 0x15u);
    sub_1682AF0(v22, (__int64)&v36);
    v23 = (void *)v36.m128i_i64[0];
    if ( (_BYTE *)v36.m128i_i64[0] == v37 )
      goto LABEL_19;
LABEL_30:
    operator delete(v23);
    goto LABEL_19;
  }
  if ( a2 == 8 && !a3 )
  {
    v11 = (_DWORD *)sub_1AE5FF0(a1[1]);
    v12 = 0;
LABEL_5:
    v13 = v12 + 116;
    v11[2 * v13 + 2] = a2;
    v11[2 * v13 + 3] = a4;
LABEL_6:
    v14 = sub_168B6C0((__int64)a1);
    result = sub_1AF83B0((__int64 *)(v14 + 2352), 32, 3u);
    *(_DWORD *)result = a4;
    *(_DWORD *)(result + 4) = a8;
    *(_DWORD *)(result + 8) = 21;
    *(_DWORD *)(result + 28) = a7;
    *(__m128i *)(result + 12) = _mm_unpacklo_epi64(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a2)),
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a3)));
    return result;
  }
  v35[0] = 0;
  v34 = 0;
  v33 = v35;
  sub_9EE7C0(&v33, "'");
  if ( a2 == 8 )
  {
    v27 = sub_FFDD70(21, 0);
    sub_9EE7C0(&v33, v27);
    v25 = a7;
  }
  else
  {
    v24 = sub_FFDD70(21, 8);
    sub_9EE7C0(&v33, v24);
    v25 = a6;
  }
  sub_9EE7C0(&v33, "'");
  sub_168B9F0((__int64)v38, a1, v25, 0x1217u, 0);
  v26 = sub_1682A40((__int64)v38, (__int64)&v33);
  sub_1AF81E0(&v36, 0x15u);
  sub_1682AF0(v26, (__int64)&v36);
  if ( (_BYTE *)v36.m128i_i64[0] != v37 )
    operator delete((void *)v36.m128i_i64[0]);
  sub_15F7200(v38);
  if ( v33 == v35 )
    return 0;
  operator delete(v33);
  return 0;
}
