unsigned __int64 __fastcall sub_176E5A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __m128 si128)
{
  __int64 *v8; // rbx
  unsigned int v9; // eax
  _BOOL8 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r9
  __int64 v17; // rdi
  __int64 *v18; // rdx
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
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned __int8 v42; // [rsp+8h] [rbp-100h]
  __int64 v43; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v44; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v45; // [rsp+18h] [rbp-F0h]
  __int64 v46; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v47; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v49[2]; // [rsp+30h] [rbp-D8h] BYREF
  void *v50; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v51; // [rsp+48h] [rbp-C0h]
  char v52; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+78h] [rbp-90h]
  char v55; // [rsp+7Ch] [rbp-8Ch]
  char v56; // [rsp+B8h] [rbp-50h]
  unsigned int v57; // [rsp+C0h] [rbp-48h]
  char v58; // [rsp+C4h] [rbp-44h]

  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v10 = v8 != nullptr;
  v11 = (unsigned __int64)v8 - v10;
  v14 = sub_17687F0(a1, a2, *(_QWORD *)(a3 + 40), (const __m128i *)(v9 * (v11 / v9 + v10)), v12, v13);
  v47 = v14;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v14;
  v16 = a3;
  v17 = *(_QWORD *)(a3 + 40);
  v43 = *a4;
  if ( !*(_DWORD *)(*a1 + 12632LL) && v14 == v17 )
    goto LABEL_4;
  sub_F6C520(v17);
  v46 = *(_QWORD *)(a3 + 48);
  sub_F6C520(*(_QWORD *)(a3 + 40));
  if ( v46 == *(_QWORD *)(a3 + 40) )
  {
LABEL_8:
    v20 = sub_F5E940(a3);
    v45 = v20;
    if ( !BYTE1(v20) || (unsigned __int8)sub_F61C90(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), 1, v21, v22, v23, v20) )
    {
      v16 = sub_A71850(*(_QWORD *)(*a1 + 248LL), *(_WORD *)(a3 + 18) >> 3, v47, v15, *a4);
LABEL_4:
      v44 = v16;
      sub_1EA6140(a2, v16, 8, 8);
      *v18 = v43;
      return v44;
    }
    v24 = v45;
    v25 = (__int64 *)(*a1 + 8LL);
    if ( *a4 )
    {
      v26 = *(_DWORD *)(*a4 + 24);
    }
    else
    {
      v40 = sub_F6C520(*(_QWORD *)(a3 + 40));
      v49[0] = *(_QWORD *)(a3 + 40);
      v49[1] = v40 * (v10 + v11 / v40);
      v41 = sub_F6CCB0(v49, si128);
      v24 = v45;
      v26 = v41;
    }
    v42 = v24;
    sub_168B9F0((__int64)&v50, v25, v26, 0x10F2u, 0);
    if ( v56 )
    {
      sub_FC65C0(&v53, v42, v27, v28);
    }
    else if ( v58 )
    {
      v34 = sub_168B9E0(&v50);
      v37 = v51.m128_i64[1];
      if ( v51.m128_u64[1] )
        v37 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v51.m128_u64[1] + 32LL))(v51.m128_u64[1]);
      v48 = v37;
      v38 = sub_1587BC0(v34, &v48, v32, v33, v35, v36);
      sub_FC65C0((unsigned __int8 **)(*v38 + 32LL * v57 + 8), v42, *v38 + 32LL * v57, v39);
    }
    sub_1605D30((__int64)&v50, (__int64 *)&v47);
    sub_15F7200(&v50);
    return 0;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v54 = 0;
  v50 = &v52;
  v51 = si128;
  v55 = 0;
  if ( (unsigned int)sub_F6C560(a3) > si128.m128_u64[0] )
    sub_1EA60C0(&v50);
  v29 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v15 = sub_17687F0(a1, (__int64)&v50, *(_QWORD *)(a3 + 48), (const __m128i *)(v29 * (v11 / v29 + v10)), v30, v31);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( v50 != &v52 && v50 )
      operator delete[](v50);
    goto LABEL_8;
  }
  result = 0;
  if ( v50 )
  {
    if ( v50 != &v52 )
    {
      operator delete[](v50);
      return 0;
    }
  }
  return result;
}
