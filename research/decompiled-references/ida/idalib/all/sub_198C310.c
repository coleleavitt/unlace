unsigned __int64 __fastcall sub_198C310(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rdi
  __int64 *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // r14
  __m128 si128; // xmm0
  unsigned int v18; // eax
  __int64 *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int16 v28; // r13
  __int64 *v29; // rsi
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rbp
  __int64 *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __m128i v43; // rax
  unsigned int v44; // eax
  __m128i v45; // [rsp+0h] [rbp-118h] BYREF
  __int64 v46; // [rsp+18h] [rbp-100h]
  __int64 v47; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v48; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v49; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-E0h] BYREF
  __m128 v51; // [rsp+40h] [rbp-D8h] BYREF
  void *v52; // [rsp+50h] [rbp-C8h] BYREF
  __m128 v53; // [rsp+58h] [rbp-C0h]
  __int64 v54; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v55; // [rsp+70h] [rbp-A8h] BYREF
  int v56; // [rsp+88h] [rbp-90h]
  char v57; // [rsp+8Ch] [rbp-8Ch]
  char v58; // [rsp+C8h] [rbp-50h]
  unsigned int v59; // [rsp+D0h] [rbp-48h]
  char v60; // [rsp+D4h] [rbp-44h]

  v8 = *(_QWORD *)(a3 + 40);
  v48 = a4;
  v47 = a3;
  v9 = a4 + 1;
  v10 = sub_F6C520(v8);
  v13 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v47 + 40),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  v49 = v13;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = *v48;
  if ( v13 == *(_QWORD *)(a3 + 40) )
  {
    v33 = v47;
    goto LABEL_23;
  }
  v15 = v13;
  sub_F6C520(*(_QWORD *)(v47 + 40));
  v45.m128i_i64[0] = (__int64)&v47;
  v16 = *(_QWORD *)(v47 + 48);
  if ( v16 == sub_18C4400((__int64)&v47) )
  {
LABEL_13:
    v28 = sub_F5E940(a3);
    if ( HIBYTE(v28) && !(unsigned __int8)sub_F61C90(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), 1, v24, v25, v26, v27) )
    {
      v29 = (__int64 *)(*a1 + 8);
      if ( *v48 )
      {
        v30 = *(_DWORD *)(*v48 + 24);
      }
      else
      {
        v46 = *a1 + 8;
        v43.m128i_i64[0] = sub_18C4400(v45.m128i_i64[0]);
        v45 = v43;
        v51 = (__m128)_mm_load_si128(&v45);
        v44 = sub_F6CCB0((__int64 *)&v51, v51);
        v29 = (__int64 *)v46;
        v30 = v44;
      }
      sub_168B9F0((__int64)&v52, v29, v30, 0x10F2u, 0);
      if ( v58 )
      {
        sub_FC65C0(&v55, (unsigned __int8)v28, v31, v32);
      }
      else if ( v60 )
      {
        v37 = sub_168B9E0(&v52);
        v40 = v53.m128_i64[1];
        if ( v53.m128_u64[1] )
          v40 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v53.m128_u64[1] + 32LL))(v53.m128_u64[1]);
        v50 = v40;
        v41 = sub_1587BC0(v37, &v50, v35, v36, v38, v39);
        sub_FC65C0((unsigned __int8 **)(*v41 + 32LL * v59 + 8), (unsigned __int8)v28, *v41 + 32LL * v59, v42);
      }
      sub_1605D30((__int64)&v52, (__int64 *)&v49);
      sub_15F7200(&v52);
      return 0;
    }
    v33 = sub_A71850(*(_QWORD *)(*a1 + 248), *(_WORD *)(v47 + 18) >> 3, v49, v15, *v48);
LABEL_23:
    sub_1EA6140(a2, v33, 8, 8);
    *v34 = v14;
    return v33;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v56 = 0;
  v57 = 0;
  v52 = &v54;
  v53 = si128;
  v18 = sub_F6C560(v47);
  if ( v18 > v53.m128_u64[0] )
    sub_1EA60C0(&v52);
  v19 = v48 + 1;
  v20 = sub_F6C520(*(_QWORD *)(v47 + 40));
  v15 = sub_1986980(
          a1,
          (__int64)&v52,
          *(_QWORD *)(v47 + 48),
          (__m128i *)(v20 * (((unsigned __int64)v19 - (v19 != nullptr)) / v20 + (v19 != nullptr))),
          v21,
          v22,
          si128,
          a6);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v52 && v52 != &v54 )
      operator delete[](v52);
    goto LABEL_13;
  }
  result = 0;
  if ( v52 != &v54 )
  {
    if ( v52 )
    {
      operator delete[](v52);
      return 0;
    }
  }
  return result;
}
