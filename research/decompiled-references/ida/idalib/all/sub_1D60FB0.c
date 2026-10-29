unsigned __int64 __fastcall sub_1D60FB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 si128, __m128 a6)
{
  __int64 *v9; // rbx
  unsigned int v10; // eax
  _BOOL8 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r9
  __int64 v18; // rdi
  __int64 *v19; // rdx
  unsigned __int64 result; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // r9
  __int64 *v26; // rsi
  unsigned int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
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
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned __int8 v43; // [rsp+8h] [rbp-100h]
  __int64 v44; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v45; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v46; // [rsp+18h] [rbp-F0h]
  __int64 v47; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v48; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v50[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *v51; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v52; // [rsp+48h] [rbp-C0h]
  char v53; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v54; // [rsp+60h] [rbp-A8h] BYREF
  int v55; // [rsp+78h] [rbp-90h]
  char v56; // [rsp+7Ch] [rbp-8Ch]
  char v57; // [rsp+B8h] [rbp-50h]
  unsigned int v58; // [rsp+C0h] [rbp-48h]
  char v59; // [rsp+C4h] [rbp-44h]

  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v11 = v9 != nullptr;
  v12 = (unsigned __int64)v9 - v11;
  v15 = sub_1D4F8E0(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v10 * (v12 / v10 + v11)), v13, v14, si128, a6);
  v48 = v15;
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = v15;
  v17 = a3;
  v18 = *(_QWORD *)(a3 + 40);
  v44 = *a4;
  if ( !*(_DWORD *)(*a1 + 12632LL) && v15 == v18 )
    goto LABEL_4;
  sub_F6C520(v18);
  v47 = *(_QWORD *)(a3 + 48);
  sub_F6C520(*(_QWORD *)(a3 + 40));
  if ( v47 == *(_QWORD *)(a3 + 40) )
  {
LABEL_8:
    v21 = sub_F5E940(a3);
    v46 = v21;
    if ( !BYTE1(v21) || (unsigned __int8)sub_F61C90(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), 1, v22, v23, v24, v21) )
    {
      v17 = sub_A71850(*(_QWORD *)(*a1 + 248LL), *(_WORD *)(a3 + 18) >> 3, v48, v16, *a4);
LABEL_4:
      v45 = v17;
      sub_1EA6140(a2, v17, 8, 8);
      *v19 = v44;
      return v45;
    }
    v25 = v46;
    v26 = (__int64 *)(*a1 + 8LL);
    if ( *a4 )
    {
      v27 = *(_DWORD *)(*a4 + 24);
    }
    else
    {
      v41 = sub_F6C520(*(_QWORD *)(a3 + 40));
      v50[0] = *(_QWORD *)(a3 + 40);
      v50[1] = v41 * (v11 + v12 / v41);
      v42 = sub_F6CCB0(v50, si128);
      v25 = v46;
      v27 = v42;
    }
    v43 = v25;
    sub_168B9F0((__int64)&v51, v26, v27, 0x10F2u, 0);
    if ( v57 )
    {
      sub_FC65C0(&v54, v43, v28, v29);
    }
    else if ( v59 )
    {
      v35 = sub_168B9E0(&v51);
      v38 = v52.m128_i64[1];
      if ( v52.m128_u64[1] )
        v38 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v52.m128_u64[1] + 32LL))(v52.m128_u64[1]);
      v49 = v38;
      v39 = sub_1587BC0(v35, &v49, v33, v34, v36, v37);
      sub_FC65C0((unsigned __int8 **)(*v39 + 32LL * v58 + 8), v43, *v39 + 32LL * v58, v40);
    }
    sub_1605D30((__int64)&v51, (__int64 *)&v48);
    sub_15F7200(&v51);
    return 0;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v55 = 0;
  v51 = &v53;
  v52 = si128;
  v56 = 0;
  if ( (unsigned int)sub_F6C560(a3) > si128.m128_u64[0] )
    sub_1EA60C0(&v51);
  v30 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v16 = sub_1D4F8E0(
          a1,
          (__int64)&v51,
          *(_QWORD *)(a3 + 48),
          (const __m128i *)(v30 * (v12 / v30 + v11)),
          v31,
          v32,
          si128,
          a6);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v51 != &v53 && v51 )
      operator delete[](v51);
    goto LABEL_8;
  }
  result = 0;
  if ( v51 )
  {
    if ( v51 != &v53 )
    {
      operator delete[](v51);
      return 0;
    }
  }
  return result;
}
