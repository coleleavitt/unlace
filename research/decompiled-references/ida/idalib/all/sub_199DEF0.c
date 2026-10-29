unsigned __int64 __fastcall sub_199DEF0(unsigned __int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // r9
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int16 *v35; // rsi
  __int64 v36; // rax
  unsigned __int16 *v37; // rsi
  __int64 v38; // rax
  unsigned __int16 *v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int16 *v42; // rsi
  unsigned __int64 v43; // rax
  unsigned __int16 *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-188h]
  unsigned __int64 v48; // [rsp+0h] [rbp-188h]
  unsigned __int64 v49; // [rsp+8h] [rbp-180h]
  __m128i v50; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-C8h]
  unsigned __int16 *v56; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+D8h] [rbp-B0h]
  char v59; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v61; // [rsp+120h] [rbp-68h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 40);
  if ( (_DWORD)v6 )
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6 - 8);
  v7 = *(_QWORD *)(v5 + 544);
  if ( !v7 )
    JUMPOUT(0x2E9CF6);
  *(_BYTE *)(v4 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0(*a1, *(unsigned int *)(v7 - 48), (__m128i)a3) )
    return 1;
  v16 = sub_1786260((__int64 *)*a1, *(unsigned int *)(v7 - 48), *(double *)a3.m128_u64, v9, v10);
  if ( !v16 )
    return 1;
  v50.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  *sub_1742A40((__int64)(a1 + 1), v50.m128i_i64, v12, v13, v14, v15) = v16;
  *(_QWORD *)(v4 + 184) = v16;
  v47 = sub_1998500((__int64 *)a1, *(unsigned __int16 **)(a2 + 32), 0, a3, a4, v17, v18, v19);
  if ( v47 == 1 )
    return 1;
  v23 = sub_1998500((__int64 *)a1, *(unsigned __int16 **)(a2 + 40), 0, a3, a4, v20, v21, v22);
  if ( v23 == 1 )
    return 1;
  v49 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( !(unsigned __int8)sub_1783690(*a1, v23 & 0xFFFFFFFFFFFFFFFELL) )
    return 1;
  *(_BYTE *)(v4 + 10) &= ~2u;
  *(_QWORD *)(v4 + 344) = v47 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v4 + 352) = v49;
  v26 = sub_1998500((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a4, v47 & 0xFFFFFFFFFFFFFFFELL, v24, v25);
  if ( v26 == 1 )
    return 1;
  sub_1783C30((__int64)&v50, (_QWORD *)*a1, v7 - 72, v4, (unsigned __int16 *)(v26 & 0xFFFFFFFFFFFFFFFELL), v27);
  if ( !v59 )
    goto LABEL_15;
  v32 = *(unsigned __int16 **)(a2 + 88);
  if ( v32 )
  {
    v33 = sub_197B880((__int64)a1, (unsigned __int64)v32, 0, v29, v30, v31, a3, a4);
    if ( v33 == 1 )
    {
LABEL_15:
      result = 1;
      goto LABEL_16;
    }
    v32 = (unsigned __int16 *)(v33 & 0xFFFFFFFFFFFFFFFELL);
  }
  v34 = *(_QWORD *)(a2 + 24);
  v56 = v32;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(&v50, (__int64)v32) )
    {
      goto LABEL_15;
    }
  }
  else
  {
    v35 = *(unsigned __int16 **)(a2 + 56);
    if ( v35 )
    {
      v36 = sub_1998500((__int64 *)a1, v35, 0, a3, a4, v29, v30, v31);
      if ( v36 == 1 )
        goto LABEL_15;
      v52 = v36 & 0xFFFFFFFFFFFFFFFELL;
    }
    v37 = *(unsigned __int16 **)(a2 + 48);
    if ( v37 )
    {
      v38 = sub_1998500((__int64 *)a1, v37, 0, a3, a4, v29, v30, v31);
      if ( v38 == 1 )
        goto LABEL_15;
      v51 = v38 & 0xFFFFFFFFFFFFFFFELL;
    }
    v39 = *(unsigned __int16 **)(a2 + 104);
    if ( v39 )
    {
      v40 = sub_1998500((__int64 *)a1, v39, 0, a3, a4, v29, v30, v31);
      if ( v40 == 1 )
        goto LABEL_15;
      v58 = v40 & 0xFFFFFFFFFFFFFFFELL;
    }
    v41 = sub_190CCA0((__int64 *)a1, *(unsigned __int16 **)(a2 + 64), *(double *)a3.m128_u64, a4);
    if ( v41 == 1 )
      goto LABEL_15;
    v42 = *(unsigned __int16 **)(a2 + 72);
    v53 = v41 & 0xFFFFFFFFFFFFFFFELL;
    v43 = sub_190CCA0((__int64 *)a1, v42, *(double *)a3.m128_u64, a4);
    if ( v43 == 1 )
      goto LABEL_15;
    v44 = *(unsigned __int16 **)(a2 + 80);
    v54 = v43 & 0xFFFFFFFFFFFFFFFELL;
    if ( v44 )
    {
      v45 = sub_1998500((__int64 *)a1, v44, 0, a3, a4, v29, v30, v31);
      if ( v45 == 1 )
        goto LABEL_15;
      v55 = v45 & 0xFFFFFFFFFFFFFFFELL;
    }
    v32 = *(unsigned __int16 **)(a2 + 96);
    if ( v32 )
    {
      v46 = sub_1998500((__int64 *)a1, v32, 0, a3, a4, v29, v30, v31);
      if ( v46 == 1 )
        goto LABEL_15;
      v57 = v46 & 0xFFFFFFFFFFFFFFFELL;
    }
  }
  result = sub_1783EC0(*a1, (__int64)v32, v28, v29, v30, v31, v50.m128i_i8[0]);
LABEL_16:
  if ( ptr != &v61 )
  {
    v48 = result;
    free(ptr);
    return v48;
  }
  return result;
}
