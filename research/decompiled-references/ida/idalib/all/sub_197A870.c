unsigned __int64 __fastcall sub_197A870(unsigned __int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdi
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _DWORD *v43; // rdi
  __int64 v44; // rcx
  __m128i *v45; // rsi
  _DWORD *v46; // rsi
  char *v47; // rdi
  __int64 i; // rcx
  _WORD *v49; // rsi
  __int64 v50; // rax
  _WORD *v51; // rsi
  __int64 v52; // rax
  _WORD *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rcx
  _WORD *v59; // rsi
  __int64 v60; // rax
  _WORD *v61; // rsi
  __int64 v62; // rax
  char v63; // [rsp-70h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+0h] [rbp-188h]
  unsigned __int64 v65; // [rsp+8h] [rbp-180h]
  _BYTE v66[112]; // [rsp+10h] [rbp-178h] BYREF
  __m128i v67[2]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v70; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v72; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v74; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+D8h] [rbp-B0h]
  char v76; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v78; // [rsp+120h] [rbp-68h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 40);
  if ( (_DWORD)v6 )
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6 - 8);
  v7 = *(_QWORD *)(v5 + 544);
  if ( !v7 )
    JUMPOUT(0x2E9CB8);
  *(_BYTE *)(v4 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0(*a1, *(unsigned int *)(v7 - 48), (__m128i)a3) )
    return 1;
  v17 = sub_1786260((__int64 *)*a1, *(unsigned int *)(v7 - 48), *(double *)a3.m128_u64, v10, v11);
  if ( !v17 )
    return 1;
  v67[0].m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  *sub_1742A40((__int64)(a1 + 1), v67[0].m128i_i64, v13, v14, v15, v16) = v17;
  *(_QWORD *)(v4 + 184) = v17;
  v64 = sub_1975200((__int64 *)a1, *(_WORD **)(a2 + 32), 0, a3, a4, v18, v19, v20);
  if ( v64 == 1 )
    return 1;
  v24 = sub_1975200((__int64 *)a1, *(_WORD **)(a2 + 40), 0, a3, a4, v21, v22, v23);
  if ( v24 == 1 )
    return 1;
  v25 = *a1;
  v65 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v26 = sub_1783690(v25, v24 & 0xFFFFFFFFFFFFFFFELL);
  v29 = v64;
  if ( !v26 )
    return 1;
  *(_BYTE *)(v4 + 10) &= ~2u;
  v30 = v65;
  v31 = v29 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v4 + 344) = v31;
  *(_QWORD *)(v4 + 352) = v30;
  v32 = sub_1975200((__int64 *)a1, *(_WORD **)(a2 + 16), 0, a3, a4, v31, v27, v28);
  if ( v32 == 1 )
    return 1;
  sub_1783C30((__int64)v67, (_QWORD *)*a1, v7 - 72, v4, (unsigned __int16 *)(v32 & 0xFFFFFFFFFFFFFFFELL), v33);
  if ( !v76 )
    goto LABEL_13;
  v37 = *(_QWORD *)(a2 + 88);
  v38 = sub_1934A90((__int64 *)a1, v37, 0, a3, a4, v34, v35, v36);
  if ( v38 == 1 )
    goto LABEL_13;
  v73 = v38 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
      & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(v67, v37) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v43 = v66;
    v44 = 28;
    v45 = v67;
    while ( v44 )
    {
      *v43 = v45->m128i_i32[0];
      v45 = (__m128i *)((char *)v45 + 4);
      ++v43;
      --v44;
    }
    v46 = v66;
    v47 = &v63;
    for ( i = 28; i; --i )
    {
      *(_DWORD *)v47 = *v46++;
      v47 += 4;
    }
    result = sub_1783EC0(*a1, (__int64)v46, v39, 0, v41, v42, v63);
    goto LABEL_14;
  }
  v49 = *(_WORD **)(a2 + 56);
  if ( v49 )
  {
    v50 = sub_1975200((__int64 *)a1, v49, 0, a3, a4, v40, v41, v42);
    if ( v50 == 1 )
      goto LABEL_13;
    v69 = v50 & 0xFFFFFFFFFFFFFFFELL;
  }
  v51 = *(_WORD **)(a2 + 48);
  if ( v51 )
  {
    v52 = sub_1975200((__int64 *)a1, v51, 0, a3, a4, v40, v41, v42);
    if ( v52 == 1 )
      goto LABEL_13;
    v68 = v52 & 0xFFFFFFFFFFFFFFFELL;
  }
  v53 = *(_WORD **)(a2 + 104);
  if ( v53 )
  {
    v54 = sub_1975200((__int64 *)a1, v53, 0, a3, a4, v40, v41, v42);
    if ( v54 == 1 )
      goto LABEL_13;
    v75 = v54 & 0xFFFFFFFFFFFFFFFELL;
  }
  v55 = sub_1933BC0((__int64 *)a1, *(_QWORD *)(a2 + 64), *(double *)a3.m128_u64, a4);
  if ( v55 == 1 )
    goto LABEL_13;
  v56 = *(_QWORD *)(a2 + 72);
  v70 = v55 & 0xFFFFFFFFFFFFFFFELL;
  v57 = sub_1933BC0((__int64 *)a1, v56, *(double *)a3.m128_u64, a4);
  if ( v57 == 1 )
    goto LABEL_13;
  v59 = *(_WORD **)(a2 + 80);
  v71 = v57 & 0xFFFFFFFFFFFFFFFELL;
  if ( v59 )
  {
    v60 = sub_1975200((__int64 *)a1, v59, 0, a3, a4, v58, v41, v42);
    if ( v60 == 1 )
      goto LABEL_13;
    v72 = v60 & 0xFFFFFFFFFFFFFFFELL;
  }
  v61 = *(_WORD **)(a2 + 96);
  if ( !v61 )
    goto LABEL_19;
  v62 = sub_1975200((__int64 *)a1, v61, 0, a3, a4, v58, v41, v42);
  if ( v62 != 1 )
  {
    v74 = v62 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_19;
  }
LABEL_13:
  result = 1;
LABEL_14:
  if ( ptr != &v78 )
  {
    v64 = result;
    free(ptr);
    return v64;
  }
  return result;
}
