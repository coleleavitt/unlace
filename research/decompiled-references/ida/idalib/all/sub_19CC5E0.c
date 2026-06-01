__int64 __fastcall sub_19CC5E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        __m128i *a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        _DWORD *a10,
        __int64 a11)
{
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  __m128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  bool v30; // [rsp+8h] [rbp-220h]
  __int64 v32; // [rsp+10h] [rbp-218h] BYREF
  __int64 v33; // [rsp+18h] [rbp-210h] BYREF
  __m128i v34; // [rsp+20h] [rbp-208h] BYREF
  __int64 v35; // [rsp+30h] [rbp-1F8h]
  __m128 v36; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-1D8h]
  unsigned __int8 *v38; // [rsp+60h] [rbp-1C8h] BYREF
  char v39; // [rsp+B8h] [rbp-170h]
  unsigned int v40; // [rsp+C0h] [rbp-168h]
  char v41; // [rsp+C4h] [rbp-164h]
  void *ptr[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v43[41]; // [rsp+E0h] [rbp-148h] BYREF

  if ( **(char **)(a1 + 232) < 0 && *a10 == 4 )
  {
    sub_168B9F0((__int64)ptr, (__int64 *)(a1 + 8), a10[6], 0x15F2u, 0);
    sub_15F7200(ptr);
  }
  ptr[0] = v43;
  ptr[1] = (void *)0x800000000LL;
  v43[32] = 0;
  v34.m128i_i64[0] = 0;
  v34.m128i_i32[2] = 0;
  v35 = 0;
  sub_18C1280((__int64 *)a1, (__int64)a10, (__int64)ptr, &v34, &v32, (__int64)a6, *(double *)a7.m128_u64);
  v30 = a5 == 37;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 && a5 == 37 )
  {
    sub_168B9F0((__int64)&v36, (__int64 *)(a1 + 8), a4, 0xF43u, 0);
    if ( v39 )
    {
      sub_AE9DF0(&v38, 2, 2u);
    }
    else if ( v41 )
    {
      v24 = sub_168B9E0(&v36);
      v27 = v37;
      if ( v37 )
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      v33 = v27;
      v28 = sub_1587BC0(v24, &v33, v22, v23, v25, v26);
      sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v40 + 8), 2, 2u);
    }
    v15 = 1;
    sub_15F7200(&v36);
  }
  else
  {
    v13 = a6->m128i_i64[1];
    if ( v13 )
      v13 = sub_169D590((_QWORD *)a1, a2, a6->m128i_u64[1]);
    v14 = sub_192A5C0(a1, a2, a3, a7, a8);
    if ( v14 == 1 )
    {
      v15 = 1;
    }
    else
    {
      v17 = _mm_loadh_ps((const double *)&a10);
      v37 = a11;
      v36 = v17;
      v18 = (__int64)sub_19CC2F0(
                       (__m128 *)a1,
                       (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFFELL),
                       *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8),
                       a4,
                       v30,
                       a6,
                       a9,
                       v13,
                       &v34,
                       v32,
                       a2,
                       &v36);
      v15 = v18;
      if ( v18 != 1 )
      {
        v21 = *(unsigned __int16 *)(v18 & 0xFFFFFFFFFFFFFFFELL);
        LOWORD(v21) = v21 & 0x1FF;
        if ( (_WORD)v21 == 46 )
          sub_19C4E30(a1, (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL), v21, v19, v20);
      }
    }
  }
  if ( ptr[0] != v43 )
    free(ptr[0]);
  return v15;
}
