__int64 __fastcall sub_BED3B0(__int64 *a1, unsigned int a2, double a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __m128 v10; // xmm0
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int *v24; // r13
  unsigned int v25; // eax
  __m128 v26; // kr00_16
  int v27; // esi
  _DWORD *v28; // rdx
  __int64 v29; // rdx
  _DWORD *v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-80h]
  __int64 v34; // [rsp+8h] [rbp-78h]
  void *v35; // [rsp+10h] [rbp-70h]
  __int64 v36; // [rsp+18h] [rbp-68h]
  unsigned int v37; // [rsp+20h] [rbp-60h]
  __int64 v38; // [rsp+20h] [rbp-60h]
  unsigned int v39; // [rsp+2Ch] [rbp-54h] BYREF
  __m128 v40; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v41[8]; // [rsp+40h] [rbp-40h] BYREF

  v4 = a1[1];
  v39 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8840) + 8LL * (a2 >> 1));
  if ( *(_WORD *)(v5 + 4)
    || (v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) == nullptr
    || *v6 != *(_DWORD *)(*a1 + 1744)
    || v6[1] != 16
    || *(_DWORD *)(v5 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 96);
  }
  v31 = *(_QWORD *)(v5 + 32);
  v38 = *(_QWORD *)(v5 + 40);
  if ( (a2 & 1) != 0 )
  {
    v7 = *a1;
    v8 = a1[2];
    sub_15E1A70(*(_QWORD *)(*a1 + 1760));
    v9 = sub_15E1B70(*(_QWORD *)(v7 + 1760));
    v10 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v8);
    v40 = v10;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    sub_14B9B80(*a1 + 1192, &v40);
    v11 = sub_966440(*a1, (unsigned int *)v40.m128_u64[0]);
    if ( v39 == v11 )
      sub_BB81F0(*a1, v40.m128_i64[0]);
    result = sub_BC37F0(*a1, 0, 1, &v39, v11, *(double *)v10.m128_u64);
    v13 = v40.m128_u64[0];
    if ( v40.m128_u64[0] )
    {
      v14 = v40.m128_u64[1];
      v15 = (*(_DWORD *)(v40.m128_u64[0] + 8))-- == 1;
      if ( v15 )
        return sub_15D7BC0(v14, v13);
    }
  }
  else
  {
    result = sub_BECB70(a1, v39);
    if ( !(_BYTE)result )
    {
      v34 = a1[2];
      if ( (unsigned __int8)sub_15D26C0(v34, v31) )
      {
        v16 = 0;
      }
      else
      {
        sub_BE81C0(&v40, a1, v31);
        v26 = v40;
        v27 = *(_DWORD *)(*a1 + 1768);
        if ( !*(_WORD *)(v40.m128_u64[0] + 4)
          && (v28 = *(_DWORD **)(*(_QWORD *)(v40.m128_u64[0] + 16) + 24LL)) != nullptr
          && v27 == *v28
          && (v28[1] == 36
           || v28[1] == 25
           && *(_DWORD *)(v40.m128_u64[0] + 24) == 1
           && (v29 = *(_QWORD *)(v40.m128_u64[0] + 32), !*(_WORD *)(v29 + 4))
           && (v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL)) != nullptr
           && v27 == *v30
           && v30[1] == 37) )
        {
          v16 = 0;
        }
        else
        {
          v32 = sub_15E1B70(*(_QWORD *)(*a1 + 1760));
          LODWORD(v38) = v32;
          if ( v32 )
            ++*(_DWORD *)(v32 + 8);
          v16 = v32;
        }
        v15 = (*(_DWORD *)(v26.m128_u64[0] + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v26.m128_u64[1], v26.m128_u64[0]);
      }
      v17 = a1[2];
      v40 = 0u;
      v18 = *a1;
      v33 = v17;
      v41[0] = 1;
      v41[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v41);
      v22 = *(_QWORD *)(v18 + 1840);
      BYTE4(v41[0]) &= ~1u;
      LODWORD(v41[0]) = 1;
      if ( !v22 )
      {
        sub_16669E0(v18 + 1832);
        v22 = *(_QWORD *)(v18 + 1840);
      }
      v23 = sub_166A700(v22, (unsigned int)&v40, 1, v19, v20, v21);
      v35 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v40);
      sub_182CBA0(v35, v41);
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v36 = a1[2];
      sub_1407560(
        (unsigned int)&v40,
        *(_DWORD *)a1 + 1848,
        *a1 + 2112,
        v31,
        v23,
        v38,
        0,
        *(_QWORD *)(*(_QWORD *)(*a1 + 1848) + 840LL),
        1);
      v24 = (unsigned int *)v40.m128_u64[0];
      if ( v40.m128_u64[0] && !*(_DWORD *)(v40.m128_u64[0] + 8) )
        sub_15D7BC0(v40.m128_u64[1], v40.m128_u64[0]);
      v25 = sub_966440(*a1, v24);
      result = sub_BBF3C0((_QWORD *)*a1, v39 ^ 1, v25, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a3);
      if ( v24 )
      {
        v37 = v24[2];
        result = v37 - 1;
        v24[2] = result;
        if ( v37 == 1 )
          result = sub_15D7BC0(v36, v24);
      }
      if ( v23 )
      {
        v15 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v15 )
          result = sub_15D7BC0(v33, v23);
      }
      if ( v16 )
      {
        v15 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v15 )
          return sub_15D7BC0(v34, v16);
      }
    }
  }
  return result;
}

