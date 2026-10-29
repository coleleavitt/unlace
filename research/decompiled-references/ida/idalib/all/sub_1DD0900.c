unsigned __int64 __fastcall sub_1DD0900(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i **a4,
        __m128 si128,
        __m128 a6)
{
  const __m128i **v9; // rbx
  unsigned int v10; // eax
  _BOOL8 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v21; // r10
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i **v30; // rdx
  unsigned __int8 v31; // r10
  __int64 *v32; // rsi
  unsigned int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned __int8 v53; // [rsp+8h] [rbp-110h]
  unsigned __int64 v54; // [rsp+10h] [rbp-108h]
  __m128i *v55; // [rsp+18h] [rbp-100h]
  __int64 v56; // [rsp+20h] [rbp-F8h]
  unsigned __int16 v57; // [rsp+20h] [rbp-F8h]
  __int64 v58; // [rsp+28h] [rbp-F0h]
  __int64 v59; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v60[2]; // [rsp+40h] [rbp-D8h] BYREF
  void *v61; // [rsp+50h] [rbp-C8h] BYREF
  __m128 v62; // [rsp+58h] [rbp-C0h]
  char v63; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int8 *v64[3]; // [rsp+70h] [rbp-A8h] BYREF
  int v65; // [rsp+88h] [rbp-90h]
  char v66; // [rsp+8Ch] [rbp-8Ch]
  char v67; // [rsp+C8h] [rbp-50h]
  unsigned int v68; // [rsp+D0h] [rbp-48h]
  char v69; // [rsp+D4h] [rbp-44h]

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v11 = v9 != nullptr;
  v12 = (unsigned __int64)v9 - v11;
  v19 = sub_1DCE820(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v10 * (v12 / v10 + v11)), si128, a6, v13, v14);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v55 = (__m128i *)*a4;
  if ( *a4 )
  {
    v55 = sub_1DC8780(a1, *a4, si128, a6, v15, v16, v17, v18);
    if ( !v55 )
      return 0;
  }
  v21 = a3;
  v22 = *(_QWORD *)(a3 + 40);
  if ( !*(_DWORD *)(*a1 + 12632) && v19 == v22 )
  {
LABEL_19:
    v54 = v21;
    sub_1EA6140(a2, v21, 8, 8);
    *v30 = v55;
    return v54;
  }
  sub_F6C520(v22);
  v56 = *(_QWORD *)(a3 + 48);
  sub_F6C520(*(_QWORD *)(a3 + 40));
  if ( *(_QWORD *)(a3 + 40) == v56 )
  {
    v58 = v19;
    goto LABEL_16;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v65 = 0;
  v61 = &v63;
  v62 = si128;
  v66 = 0;
  if ( (unsigned int)sub_F6C560(a3) > si128.m128_u64[0] )
    sub_1EA60C0(&v61);
  v23 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v58 = sub_1DCE820(
          a1,
          (__int64)&v61,
          *(_QWORD *)(a3 + 48),
          (const __m128i *)(v23 * (v12 / v23 + v11)),
          si128,
          a6,
          v24,
          v25);
  if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v61 && v61 != &v63 )
      operator delete[](v61);
LABEL_16:
    v57 = sub_F5E940(a3);
    if ( !HIBYTE(v57) || (unsigned __int8)sub_F61C90(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), 1, v26, v27, v28, v29) )
    {
      v21 = sub_A71850(*(_QWORD *)(*a1 + 248), *(_WORD *)(a3 + 18) >> 3, v19, v58, (__int64)*a4);
      goto LABEL_19;
    }
    v31 = v57;
    v32 = (__int64 *)(*a1 + 8);
    if ( *a4 )
    {
      v33 = (*a4)[1].m128i_u32[2];
    }
    else
    {
      v51 = sub_F6C520(*(_QWORD *)(a3 + 40));
      v60[0] = *(_QWORD *)(a3 + 40);
      v60[1] = v51 * (v11 + v12 / v51);
      v52 = sub_F6CCB0(v60, si128);
      v31 = v57;
      v33 = v52;
    }
    v53 = v31;
    sub_168B9F0((__int64)&v61, v32, v33, 0x10F2u, 0);
    if ( v67 )
    {
      sub_FC65C0(v64, v53, v34, v35);
    }
    else
    {
      if ( !v69 )
      {
LABEL_27:
        sub_15F7200(&v61);
        return 0;
      }
      v38 = sub_168B9E0(&v61);
      v41 = v62.m128_i64[1];
      if ( v62.m128_u64[1] )
        v41 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v62.m128_u64[1] + 32LL))(v62.m128_u64[1]);
      v59 = v41;
      v42 = sub_1587BC0(v38, &v59, v36, v37, v39, v40);
      sub_FC65C0((unsigned __int8 **)(*v42 + 32LL * v68 + 8), v53, *v42 + 32LL * v68, v43);
    }
    if ( v67 )
    {
      sub_AE9DF0(v64, v19, 8u);
    }
    else if ( v69 )
    {
      v46 = sub_168B9E0(&v61);
      v49 = v62.m128_i64[1];
      if ( v62.m128_u64[1] )
        v49 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v62.m128_u64[1] + 32LL))(v62.m128_u64[1]);
      v59 = v49;
      v50 = sub_1587BC0(v46, &v59, v44, v45, v47, v48);
      sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v68 + 8), v19, 8u);
    }
    goto LABEL_27;
  }
  result = 0;
  if ( v61 != &v63 )
  {
    if ( v61 )
    {
      operator delete[](v61);
      return 0;
    }
  }
  return result;
}
