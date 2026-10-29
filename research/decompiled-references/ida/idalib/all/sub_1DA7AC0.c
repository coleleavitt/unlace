unsigned __int64 __fastcall sub_1DA7AC0(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 si128, __m128 a6)
{
  __int64 *v9; // rbx
  unsigned int v10; // eax
  _BOOL8 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r10
  __int64 v17; // rdi
  __int64 *v18; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rcx
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // al
  unsigned __int8 v27; // r10
  __int64 *v28; // rsi
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned __int8 v52; // [rsp+8h] [rbp-110h]
  unsigned __int64 v53; // [rsp+10h] [rbp-108h]
  __int64 v54; // [rsp+18h] [rbp-100h]
  unsigned __int64 v55; // [rsp+20h] [rbp-F8h]
  __int64 v56; // [rsp+20h] [rbp-F8h]
  __int64 v57; // [rsp+20h] [rbp-F8h]
  unsigned __int8 v58; // [rsp+2Ch] [rbp-ECh]
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
  v15 = sub_1D97F40(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v10 * (v12 / v10 + v11)), v13, v14, si128, a6);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = a3;
  v17 = *(_QWORD *)(a3 + 40);
  v54 = *a4;
  if ( !*(_DWORD *)(*a1 + 12632) && v15 == v17 )
    goto LABEL_4;
  sub_F6C520(v17);
  v57 = *(_QWORD *)(a3 + 48);
  sub_F6C520(*(_QWORD *)(a3 + 40));
  v20 = v15;
  if ( v57 == *(_QWORD *)(a3 + 40) )
  {
LABEL_8:
    v56 = v20;
    v21 = sub_F5E940(a3);
    v25 = v56;
    v58 = v21;
    if ( !HIBYTE(v21)
      || (v26 = sub_F61C90(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), 1, v22, v56, v23, v24), v25 = v56, v26) )
    {
      v16 = sub_A71850(*(_QWORD *)(*a1 + 248), *(_WORD *)(a3 + 18) >> 3, v15, v25, *a4);
LABEL_4:
      v53 = v16;
      sub_1EA6140(a2, v16, 8, 8);
      *v18 = v54;
      return v53;
    }
    v27 = v58;
    v28 = (__int64 *)(*a1 + 8);
    if ( *a4 )
    {
      v29 = *(_DWORD *)(*a4 + 24);
    }
    else
    {
      v50 = sub_F6C520(*(_QWORD *)(a3 + 40));
      v60[0] = *(_QWORD *)(a3 + 40);
      v60[1] = v50 * (v11 + v12 / v50);
      v51 = sub_F6CCB0(v60, si128);
      v27 = v58;
      v29 = v51;
    }
    v52 = v27;
    sub_168B9F0((__int64)&v61, v28, v29, 0x10F2u, 0);
    if ( v67 )
    {
      sub_FC65C0(v64, v52, v30, v31);
    }
    else
    {
      if ( !v69 )
      {
LABEL_14:
        sub_15F7200(&v61);
        return 0;
      }
      v37 = sub_168B9E0(&v61);
      v40 = v62.m128_i64[1];
      if ( v62.m128_u64[1] )
        v40 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v62.m128_u64[1] + 32LL))(v62.m128_u64[1]);
      v59 = v40;
      v41 = sub_1587BC0(v37, &v59, v35, v36, v38, v39);
      sub_FC65C0((unsigned __int8 **)(*v41 + 32LL * v68 + 8), v52, *v41 + 32LL * v68, v42);
    }
    if ( v67 )
    {
      sub_AE9DF0(v64, v15, 8u);
    }
    else if ( v69 )
    {
      v45 = sub_168B9E0(&v61);
      v48 = v62.m128_i64[1];
      if ( v62.m128_u64[1] )
        v48 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v62.m128_u64[1] + 32LL))(v62.m128_u64[1]);
      v59 = v48;
      v49 = sub_1587BC0(v45, &v59, v43, v44, v46, v47);
      sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v68 + 8), v15, 8u);
    }
    goto LABEL_14;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v65 = 0;
  v61 = &v63;
  v62 = si128;
  v66 = 0;
  if ( (unsigned int)sub_F6C560(a3) > si128.m128_u64[0] )
    sub_1EA60C0(&v61);
  v32 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v20 = sub_1D97F40(
          a1,
          (__int64)&v61,
          *(_QWORD *)(a3 + 48),
          (const __m128i *)(v32 * (v12 / v32 + v11)),
          v33,
          v34,
          si128,
          a6);
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v61 != &v63 && v61 )
    {
      v55 = v20;
      operator delete[](v61);
      v20 = v55;
    }
    goto LABEL_8;
  }
  result = 0;
  if ( v61 )
  {
    if ( v61 != &v63 )
    {
      operator delete[](v61);
      return 0;
    }
  }
  return result;
}
