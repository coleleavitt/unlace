unsigned __int64 __fastcall sub_1C8EA10(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 si128, __m128 a6)
{
  __int64 *v8; // rbx
  unsigned int v9; // eax
  _BOOL8 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 result; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int8 v24; // r9
  __int64 *v25; // rsi
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned __int8 v41; // [rsp+8h] [rbp-100h]
  __int64 v42; // [rsp+8h] [rbp-100h]
  __int64 v43; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v44; // [rsp+10h] [rbp-F8h]
  __int64 v45; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v46; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v48[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *v49; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v50; // [rsp+48h] [rbp-C0h]
  char v51; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v52; // [rsp+60h] [rbp-A8h] BYREF
  int v53; // [rsp+78h] [rbp-90h]
  char v54; // [rsp+7Ch] [rbp-8Ch]
  char v55; // [rsp+B8h] [rbp-50h]
  unsigned int v56; // [rsp+C0h] [rbp-48h]
  char v57; // [rsp+C4h] [rbp-44h]

  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v10 = v8 != nullptr;
  v11 = (unsigned __int64)v8 - v10;
  v14 = sub_1C892C0(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v9 * (v11 / v9 + v10)), v12, v13, si128, a6);
  v46 = v14;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v14;
  v45 = *a4;
  sub_F6C520(*(_QWORD *)(a3 + 40));
  v43 = *(_QWORD *)(a3 + 48);
  sub_F6C520(*(_QWORD *)(a3 + 40));
  if ( *(_QWORD *)(a3 + 40) == v43 )
  {
LABEL_12:
    v20 = sub_F5E940(a3);
    v44 = v20;
    if ( !BYTE1(v20) || (unsigned __int8)sub_F61C90(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL), 1, v21, v22, v23, v20) )
    {
      v29 = sub_A71850(*(_QWORD *)(*a1 + 248), *(_WORD *)(a3 + 18) >> 3, v46, v15, *a4);
      sub_1EA6140(a2, v29, 8, 8);
      *v30 = v45;
      return v29;
    }
    v24 = v44;
    v25 = (__int64 *)(*a1 + 8);
    if ( *a4 )
    {
      v26 = *(_DWORD *)(*a4 + 24);
    }
    else
    {
      v42 = *a1 + 8;
      v39 = sub_F6C520(*(_QWORD *)(a3 + 40));
      v48[0] = *(_QWORD *)(a3 + 40);
      v48[1] = v39 * (v10 + v11 / v39);
      v40 = sub_F6CCB0(v48, si128);
      v24 = v44;
      v25 = (__int64 *)v42;
      v26 = v40;
    }
    v41 = v24;
    sub_168B9F0((__int64)&v49, v25, v26, 0x10F2u, 0);
    if ( v55 )
    {
      sub_FC65C0(&v52, v41, v27, v28);
    }
    else if ( v57 )
    {
      v33 = sub_168B9E0(&v49);
      v36 = v50.m128_i64[1];
      if ( v50.m128_u64[1] )
        v36 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v50.m128_u64[1] + 32LL))(v50.m128_u64[1]);
      v47 = v36;
      v37 = sub_1587BC0(v33, &v47, v31, v32, v34, v35);
      sub_FC65C0((unsigned __int8 **)(*v37 + 32LL * v56 + 8), v41, *v37 + 32LL * v56, v38);
    }
    sub_1605D30((__int64)&v49, (__int64 *)&v46);
    sub_15F7200(&v49);
    return 0;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v53 = 0;
  v49 = &v51;
  v50 = si128;
  v54 = 0;
  if ( (unsigned int)sub_F6C560(a3) > si128.m128_u64[0] )
    sub_1EA60C0(&v49);
  v16 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v15 = sub_1C892C0(
          a1,
          (__int64)&v49,
          *(_QWORD *)(a3 + 48),
          (const __m128i *)(v16 * (v11 / v16 + v10)),
          v17,
          v18,
          si128,
          a6);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v49 != &v51 && v49 )
      operator delete[](v49);
    goto LABEL_12;
  }
  result = 0;
  if ( v49 )
  {
    if ( v49 != &v51 )
    {
      operator delete[](v49);
      return 0;
    }
  }
  return result;
}
