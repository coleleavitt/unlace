void __fastcall sub_1833690(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __m128i a6, __m128i a7)
{
  __int64 v7; // r15
  const __m128i *v10; // r13
  __int64 v11; // rcx
  __int16 v12; // ax
  __int16 v13; // ax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int32 v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __m128i *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+4h] [rbp-114h]
  __int64 v54; // [rsp+8h] [rbp-110h]
  __int64 v55; // [rsp+8h] [rbp-110h]
  __int64 v56; // [rsp+8h] [rbp-110h]
  unsigned __int64 v57; // [rsp+18h] [rbp-100h] BYREF
  __int64 v58; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+28h] [rbp-F0h] BYREF
  __m128 v60; // [rsp+30h] [rbp-E8h]
  __int64 v61; // [rsp+40h] [rbp-D8h]
  __m128i v62; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 *v64; // [rsp+70h] [rbp-A8h] BYREF
  char v65; // [rsp+C8h] [rbp-50h]
  unsigned int v66; // [rsp+D0h] [rbp-48h]
  char v67; // [rsp+D4h] [rbp-44h]

  v7 = a2;
  v10 = (const __m128i *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
  v60.m128_i32[2] = 0;
  v53 = sub_C00A40((unsigned __int64)v10, a2, (__int64)a3, a4, a5);
  v12 = v10->m128i_i16[0];
  v60.m128_u64[0] = 0;
  v61 = 0;
  v13 = v12 & 0x1FF;
  if ( v13 == 71 )
  {
    if ( (v10->m128i_i64[0] & 0x80000) != 0 )
    {
      a2 = (__int64)(a1 + 1);
      sub_168B9F0((__int64)&v62, a1 + 1, v53, 0x1A0Eu, 0);
      sub_15F7200(&v62);
    }
    v14 = v10[1].m128i_i64[0];
    if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 > 5 )
    {
      v56 = *(_QWORD *)(v14 + 40);
      sub_168B9F0((__int64)&v62, a1 + 1, v53, 0xC61u, 0);
      LODWORD(v58) = 1;
      v45 = sub_1587D10((__int64)&v62, (int *)&v58);
      v59 = v56;
      sub_15894B0(v45, &v59);
      sub_15F7200(&v62);
      return;
    }
    v15 = v10[1].m128i_i64[1];
    v16 = v10->m128i_u32[1];
    v62.m128i_i64[0] = *(_QWORD *)(v14 + 40);
    v62.m128i_i32[2] = v16;
    a6 = _mm_load_si128(&v62);
    v63 = v15;
    v61 = v15;
    v60 = (__m128)a6;
  }
  else
  {
    if ( v13 != 24 )
    {
      sub_168B9F0((__int64)&v62, a1 + 1, v53, 0xC61u, 0);
      LODWORD(v59) = 0;
      sub_1587D10((__int64)&v62, (int *)&v59);
      sub_15F7200(&v62);
      return;
    }
    if ( (v10->m128i_i64[0] & 0x80000) != 0 && v10[4].m128i_i32[2 * v10->m128i_u32[1]] )
    {
      sub_168B9F0((__int64)&v62, a1 + 1, v53, 0x1A0Eu, 0);
      sub_15F7200(&v62);
    }
    a2 = (__int64)v10;
    v18 = sub_1BE70F0(a1, v10, 1, 0, 0, 0);
    a7 = _mm_loadu_si128(v10 + 1);
    v14 = v18;
    v19 = v10[2].m128i_i64[0];
    v60 = (__m128)a7;
    v61 = v19;
    if ( !v14 )
    {
      sub_168B9F0((__int64)&v62, a1 + 1, v53, 0xC61u, 0);
      LODWORD(v58) = 2;
      v20 = sub_1587D10((__int64)&v62, (int *)&v58);
      v59 = v60.m128_u64[0];
      sub_15894B0(v20, &v59);
      sub_15F7200(&v62);
      if ( *(_QWORD *)(a1[31] + 19080) == v10->m128i_i64[1] )
        sub_1BE6FF0(a1, v10, 0, 0);
      return;
    }
  }
  if ( (unsigned int)sub_B76070(v14, a2, v16, v11) != 1 )
  {
    sub_168B9F0((__int64)&v62, a1 + 1, v53, 0xC63u, 0);
    v17 = v60.m128_u64[0];
    if ( v65 )
    {
      sub_AE9DF0(&v64, v60.m128_i64[0], 9u);
    }
    else if ( v67 )
    {
      v50 = sub_168B9E0(&v62);
      v51 = v63;
      if ( v63 )
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v59 = v51;
      v52 = sub_1587BC0(v50, &v59, v46, v47, v48, v49);
      sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v66 + 8), v17, 9u);
    }
    goto LABEL_9;
  }
  v21 = sub_A70010(a1[31], *(_QWORD *)(v7 + 48));
  v22 = *(_QWORD *)(v14 + 120);
  v57 = v21;
  v58 = *(_QWORD *)(*(_QWORD *)v22 + 48LL);
  v23 = sub_18D3BF0(a1, *(unsigned int *)(*(_QWORD *)v22 + 24LL), v58, v21);
  if ( v23 > 9 || ((1LL << v23) & 0x203) == 0 )
  {
    sub_168B9F0((__int64)&v62, a1 + 1, v53, 0xC62u, 0);
    v59 = v60.m128_u64[0];
    v43 = sub_15894B0((__int64)&v62, &v59);
    v44 = sub_1605D30(v43, &v58);
    sub_1605D30(v44, (__int64 *)&v57);
LABEL_9:
    sub_15F7200(&v62);
    return;
  }
  v24 = *(_DWORD *)(v7 + 24);
  v54 = *(_QWORD *)(v7 + 48);
  v62.m128i_i64[0] = *(_QWORD *)(v7 + 40);
  v62.m128i_i32[2] = v24;
  sub_B85890(&v63, v62.m128i_i64[0]);
  v55 = sub_C0C310((_QWORD *)a1[31], 0, 0, *(_DWORD *)(v14 + 24), v7, 0, (__int64)&v62, v54, 1, 0, 0, 0);
  v25 = sub_A70010(a1[31], *(_QWORD *)(v7 + 48));
  v26 = sub_C09D40((_QWORD *)a1[31], v55, 4, v25, 0, 0, v53, 0, 0);
  v27 = (_QWORD *)a1[31];
  v28 = v27[2329];
  v62.m128i_i64[0] = v26;
  v30 = sub_C0BFD0(v27, (__int64)v10, &v62, 1, v28, 0, v53, 0, 0, 0);
  v31 = *(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v32 = *(_QWORD *)v31;
  if ( *(_BYTE *)(*(_QWORD *)v31 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      v32 = sub_F63050(v32, v10, v29, v32);
    else
      v32 = 0;
  }
  if ( !(unsigned __int8)sub_16F8E60(a1, v14, v30, v32, a6, *(double *)a7.m128i_i64) )
  {
    v33 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 56, 3u);
    v34 = a1[31];
    v35 = (__int64)v33;
    sub_B0F790(v33, v34, a3, v14);
    *(_DWORD *)(v35 + 48) = sub_C00A40((unsigned __int64)v10, v34, v36, v37, v38);
    sub_B8CC60(v7, v35, v39, v40, v41, v42);
  }
}
