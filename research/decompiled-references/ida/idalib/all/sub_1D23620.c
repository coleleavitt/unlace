unsigned __int64 __fastcall sub_1D23620(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rdi
  __int64 *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 result; // rax
  __int64 *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // r13
  __int64 *v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r14
  __m128 si128; // xmm0
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __m128i v41; // rax
  unsigned int v42; // eax
  __m128i v43; // [rsp+0h] [rbp-118h] BYREF
  __int64 v44; // [rsp+18h] [rbp-100h]
  __int64 v45; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v46; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v47; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+38h] [rbp-E0h] BYREF
  __m128 v49; // [rsp+40h] [rbp-D8h] BYREF
  void *v50; // [rsp+50h] [rbp-C8h] BYREF
  __m128 v51; // [rsp+58h] [rbp-C0h]
  __int64 v52; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v53; // [rsp+70h] [rbp-A8h] BYREF
  int v54; // [rsp+88h] [rbp-90h]
  char v55; // [rsp+8Ch] [rbp-8Ch]
  char v56; // [rsp+C8h] [rbp-50h]
  unsigned int v57; // [rsp+D0h] [rbp-48h]
  char v58; // [rsp+D4h] [rbp-44h]

  v8 = *(_QWORD *)(a3 + 40);
  v46 = a4;
  v45 = a3;
  v9 = a4 + 1;
  v10 = sub_F6C520(v8);
  v13 = sub_1D190C0(
          a1,
          a2,
          *(_QWORD *)(v45 + 40),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  v47 = v13;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = v13;
  v15 = *v46;
  if ( !*(_DWORD *)(*a1 + 12632LL) && v13 == *(_QWORD *)(a3 + 40) )
  {
    v16 = v45;
LABEL_5:
    sub_1EA6140(a2, v16, 8, 8);
    *v18 = v15;
    return v16;
  }
  sub_F6C520(*(_QWORD *)(v45 + 40));
  v28 = *(_QWORD *)(v45 + 48);
  sub_F6C520(*(_QWORD *)(v45 + 40));
  if ( v28 == *(_QWORD *)(v45 + 40) )
  {
LABEL_9:
    v23 = sub_F5E940(a3);
    if ( !HIBYTE(v23) || (unsigned __int8)sub_F61C90(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), 1, v19, v20, v21, v22) )
    {
      v16 = sub_A71850(*(_QWORD *)(*a1 + 248LL), *(_WORD *)(v45 + 18) >> 3, v47, v14, *v46);
      goto LABEL_5;
    }
    v24 = (__int64 *)(*a1 + 8LL);
    if ( *v46 )
    {
      v25 = *(_DWORD *)(*v46 + 24);
    }
    else
    {
      v44 = *a1 + 8LL;
      v41.m128i_i64[0] = sub_18C4400((__int64)&v45);
      v43 = v41;
      v49 = (__m128)_mm_load_si128(&v43);
      v42 = sub_F6CCB0((__int64 *)&v49, v49);
      v24 = (__int64 *)v44;
      v25 = v42;
    }
    sub_168B9F0((__int64)&v50, v24, v25, 0x10F2u, 0);
    if ( v56 )
    {
      sub_FC65C0(&v53, (unsigned __int8)v23, v26, v27);
    }
    else if ( v58 )
    {
      v35 = sub_168B9E0(&v50);
      v38 = v51.m128_i64[1];
      if ( v51.m128_u64[1] )
        v38 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v51.m128_u64[1] + 32LL))(v51.m128_u64[1]);
      v48 = v38;
      v39 = sub_1587BC0(v35, &v48, v33, v34, v36, v37);
      sub_FC65C0((unsigned __int8 **)(*v39 + 32LL * v57 + 8), (unsigned __int8)v23, *v39 + 32LL * v57, v40);
    }
    sub_1605D30((__int64)&v50, (__int64 *)&v47);
    sub_15F7200(&v50);
    return 0;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v54 = 0;
  v55 = 0;
  v50 = &v52;
  v51 = si128;
  if ( (unsigned int)sub_F6C560(v45) > si128.m128_u64[0] )
    sub_1EA60C0(&v50);
  v30 = sub_F6C520(*(_QWORD *)(v45 + 40));
  v14 = sub_1D190C0(
          a1,
          (__int64)&v50,
          *(_QWORD *)(v45 + 48),
          (__m128i *)(v30 * (((unsigned __int64)v46 - (v46 + 1 != nullptr) + 8) / v30 + (v46 + 1 != nullptr))),
          v31,
          v32,
          si128,
          a6);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v50 && v50 != &v52 )
      operator delete[](v50);
    goto LABEL_9;
  }
  result = 0;
  if ( v50 != &v52 )
  {
    if ( v50 )
    {
      operator delete[](v50);
      return 0;
    }
  }
  return result;
}
