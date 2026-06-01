void __fastcall sub_1514F60(const __m128i *a1, __int64 a2, unsigned int a3, __int64 a4, __m128i a5)
{
  unsigned int v10; // ecx
  unsigned __int32 v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  _BYTE *v15; // rax
  signed __int64 v16; // rdx
  _BYTE *v17; // rax
  signed __int64 v18; // rdx
  _BYTE *v19; // rax
  signed __int64 v20; // rdx
  _BYTE *v21; // rax
  signed __int64 v22; // rdx
  unsigned int v23; // eax
  _BYTE *v24; // rax
  signed __int64 v25; // rdx
  unsigned int v26; // eax
  _BYTE *v27; // rax
  signed __int64 v28; // rdx
  unsigned int *v29; // rax
  unsigned int *v30; // r8
  _BYTE *v31; // r13
  size_t v32; // rdx
  size_t v33; // r12
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  const __m128i *v41; // rbx
  unsigned __int64 v42; // rdx
  __m128i *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r9d
  __int64 *v46; // r8
  __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned int *v52; // [rsp+8h] [rbp-C0h]
  unsigned int v53; // [rsp+8h] [rbp-C0h]
  __int64 *v54; // [rsp+10h] [rbp-B8h]
  __int64 v55; // [rsp+18h] [rbp-B0h]
  unsigned int v56; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-A0h]
  __int64 v58; // [rsp+30h] [rbp-98h]
  __int64 *v59[17]; // [rsp+40h] [rbp-88h] BYREF

  v10 = *(_DWORD *)(a2 + 8);
  v11 = a1[1].m128i_u32[0];
  v56 = 0;
  v57 = 0;
  v58 = 0;
  sub_1514390(a1, (__int64)&v56, a3, v10, a4, a5);
  v12 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v12 == 12 )
  {
    v13 = v56;
    v14 = a1[1].m128i_u32[0];
    if ( !v56 )
    {
LABEL_19:
      v56 = 0;
LABEL_4:
      if ( v11 == (_DWORD)v14 )
        return;
      goto LABEL_5;
    }
    if ( v56 - 66 <= 2 )
      goto LABEL_7;
    v29 = *(unsigned int **)(a2 + 16);
    v30 = &v29[6 * *(unsigned int *)(a2 + 24)];
    if ( v29 == v30 )
      goto LABEL_7;
    while ( *v29 - 63 > 2 )
    {
      v29 += 6;
      if ( v30 == v29 )
        goto LABEL_7;
    }
    v52 = v29;
    sub_1564820(v59, a1, v14, 1828);
    sub_AEA040((__int64)v59);
    v31 = (_BYTE *)sub_20F7F10(*v52, *((_QWORD *)v52 + 1), *((_QWORD *)v52 + 2));
    v33 = v32;
    v34 = sub_2244B30(v31, v32);
    v35 = (unsigned int)sub_2244CB0(a4, v31, v33, v34);
    v37 = (__int64 *)(*(_QWORD *)a4 + 8 * v35);
    if ( *v37 )
    {
      if ( *v37 != -8 )
      {
        sub_12E03C0(v59, v37, 0);
        v38 = v59[0];
LABEL_18:
        sub_1564820(v59, a1, *(unsigned int *)(*v38 + 8), 2048);
        sub_1503AF0((unsigned __int8 **)v59, 2);
        sub_AEC220((unsigned __int8 **)v59, v31, v33);
        sub_AEA040((__int64)v59);
        v14 = a1[1].m128i_u32[0];
        goto LABEL_19;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v54 = v37;
    v53 = v35;
    v44 = sub_22300B0(v33 + 17, 8, v35, v36, v37, v35);
    v45 = v53;
    v46 = v54;
    v47 = v44;
    if ( v33 )
    {
      v55 = v44;
      memcpy((void *)(v44 + 16), v31, v33);
      v47 = v55;
      v46 = v54;
      v45 = v53;
    }
    *(_BYTE *)(v47 + v33 + 16) = 0;
    *(_QWORD *)v47 = v33;
    *(_DWORD *)(v47 + 8) = 0;
    *v46 = v47;
    ++*(_DWORD *)(a4 + 12);
    v48 = sub_22450D0(a4, v45);
    sub_12E03C0(v59, (__int64 *)(*(_QWORD *)a4 + 8LL * v48), 0);
    v38 = v59[0];
    goto LABEL_18;
  }
  v13 = v56;
  if ( !v56 )
  {
    v14 = a1[1].m128i_u32[0];
    goto LABEL_4;
  }
LABEL_7:
  if ( !(unsigned __int8)sub_20F8610(v13, v12, a3) )
  {
    sub_1564820(v59, a1, v11, 2159);
    v15 = (_BYTE *)sub_20F7F10(v56, v57, v58);
    sub_AEC220((unsigned __int8 **)v59, v15, v16);
    v17 = (_BYTE *)sub_20F4520(*(unsigned int *)(a2 + 8));
    sub_AEC220((unsigned __int8 **)v59, v17, v18);
    v19 = (_BYTE *)sub_20F3F70(a3);
    sub_AEC220((unsigned __int8 **)v59, v19, v20);
    sub_AEA040((__int64)v59);
    sub_1564820(v59, a1, v11, 2042);
    v21 = (_BYTE *)sub_20F7F10(v56, v57, v58);
    sub_AEC220((unsigned __int8 **)v59, v21, v22);
    v23 = sub_20F4510(v56);
    v24 = (_BYTE *)sub_20F4520(v23);
    sub_AEC220((unsigned __int8 **)v59, v24, v25);
    v26 = sub_20F3F60(v56);
    v27 = (_BYTE *)sub_20F3F70(v26);
    sub_AEC220((unsigned __int8 **)v59, v27, v28);
    sub_AEA040((__int64)v59);
    v14 = a1[1].m128i_u32[0];
LABEL_5:
    sub_1564820(v59, a1, v14, 2044);
    sub_1503AF0((unsigned __int8 **)v59, 2);
    sub_AEA040((__int64)v59);
    return;
  }
  v39 = *(unsigned int *)(a2 + 24);
  v40 = *(_QWORD *)(a2 + 16);
  v41 = (const __m128i *)&v56;
  v42 = v39 + 1;
  v43 = (__m128i *)(v40 + 24 * v39);
  if ( v42 > *(unsigned int *)(a2 + 28) )
  {
    v49 = a2 + 16;
    v50 = a2 + 32;
    if ( v40 > (unsigned __int64)&v56 || v43 <= (__m128i *)&v56 )
    {
      sub_2237220(v49, v50, v42, 24);
      v41 = (const __m128i *)&v56;
      v43 = (__m128i *)(*(_QWORD *)(a2 + 16) + 24LL * *(unsigned int *)(a2 + 24));
    }
    else
    {
      sub_2237220(v49, v50, v42, 24);
      v51 = *(_QWORD *)(a2 + 16);
      v41 = (const __m128i *)((char *)&v56 + v51 - v40);
      v43 = (__m128i *)(v51 + 24LL * *(unsigned int *)(a2 + 24));
    }
  }
  *v43 = _mm_loadu_si128(v41);
  v43[1].m128i_i64[0] = v41[1].m128i_i64[0];
  ++*(_DWORD *)(a2 + 24);
}
