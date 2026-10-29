__int64 __fastcall sub_1781690(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // r9
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 *v37; // rsi
  _DWORD *v38; // rsi
  char *v39; // rdi
  __int64 i; // rcx
  unsigned __int16 *v41; // rsi
  __int64 v42; // rax
  unsigned __int16 *v43; // rsi
  __int64 v44; // rax
  unsigned __int16 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int16 *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int16 *v51; // rsi
  __int64 v52; // rax
  unsigned __int16 *v53; // rsi
  __int64 v54; // rax
  char v55; // [rsp-70h] [rbp-1F8h] BYREF
  __int64 v56; // [rsp+0h] [rbp-188h]
  unsigned __int64 v57; // [rsp+8h] [rbp-180h]
  _BYTE v58[112]; // [rsp+10h] [rbp-178h] BYREF
  __int64 v59[17]; // [rsp+80h] [rbp-108h] BYREF
  char v60; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v62; // [rsp+120h] [rbp-68h] BYREF

  v3 = 0;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 40);
  if ( (_DWORD)v5 )
    v3 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5 - 8);
  v6 = *(_QWORD *)(v4 + 544);
  if ( !v6 )
    JUMPOUT(0x2E9582);
  *(_BYTE *)(v3 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0(*a1, *(unsigned int *)(v6 - 48)) )
    return 1;
  v14 = sub_1786260(*a1, *(unsigned int *)(v6 - 48));
  if ( !v14 )
    return 1;
  v59[0] = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  *sub_1742A40((__int64)(a1 + 1), v59, v10, v11, v12, v13) = v14;
  *(_QWORD *)(v3 + 184) = v14;
  v56 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 32), 0, a3, v15, v16, v17);
  if ( v56 == 1 )
    return 1;
  v21 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 40), 0, a3, v18, v19, v20);
  if ( v21 == 1 )
    return 1;
  v22 = *a1;
  v57 = v21 & 0xFFFFFFFFFFFFFFFELL;
  v23 = sub_1783690(v22, v21 & 0xFFFFFFFFFFFFFFFELL);
  v26 = v56;
  if ( !v23 )
    return 1;
  *(_BYTE *)(v3 + 10) &= ~2u;
  v27 = v57;
  v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v3 + 344) = v28;
  *(_QWORD *)(v3 + 352) = v27;
  v29 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, v28, v24, v25);
  if ( v29 == 1 )
    return 1;
  sub_1783C30(v59, *a1, v6 - 72, v3, v29 & 0xFFFFFFFFFFFFFFFELL);
  if ( !v60 )
    goto LABEL_13;
  v30 = sub_175C980(a1, *(_QWORD *)(a2 + 88), 0, a3);
  if ( v30 == 1 )
    goto LABEL_13;
  v59[9] = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
      & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(v59) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v35 = v58;
    v36 = 28;
    v37 = v59;
    while ( v36 )
    {
      *v35 = *(_DWORD *)v37;
      v37 = (__int64 *)((char *)v37 + 4);
      ++v35;
      --v36;
    }
    v38 = v58;
    v39 = &v55;
    for ( i = 28; i; --i )
    {
      *(_DWORD *)v39 = *v38++;
      v39 += 4;
    }
    result = sub_1783EC0(*a1, (_DWORD)v38, v31, 0, v33, v34, v55);
    goto LABEL_14;
  }
  v41 = *(unsigned __int16 **)(a2 + 56);
  if ( v41 )
  {
    v42 = sub_177B9C0(a1, v41, 0, a3, v32, v33, v34);
    if ( v42 == 1 )
      goto LABEL_13;
    v59[5] = v42 & 0xFFFFFFFFFFFFFFFELL;
  }
  v43 = *(unsigned __int16 **)(a2 + 48);
  if ( v43 )
  {
    v44 = sub_177B9C0(a1, v43, 0, a3, v32, v33, v34);
    if ( v44 == 1 )
      goto LABEL_13;
    v59[4] = v44 & 0xFFFFFFFFFFFFFFFELL;
  }
  v45 = *(unsigned __int16 **)(a2 + 104);
  if ( v45 )
  {
    v46 = sub_177B9C0(a1, v45, 0, a3, v32, v33, v34);
    if ( v46 == 1 )
      goto LABEL_13;
    v59[11] = v46 & 0xFFFFFFFFFFFFFFFELL;
  }
  v47 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 64));
  if ( v47 == 1 )
    goto LABEL_13;
  v48 = *(unsigned __int16 **)(a2 + 72);
  v59[6] = v47 & 0xFFFFFFFFFFFFFFFELL;
  v49 = sub_175B800(a1, v48);
  if ( v49 == 1 )
    goto LABEL_13;
  v51 = *(unsigned __int16 **)(a2 + 80);
  v59[7] = v49 & 0xFFFFFFFFFFFFFFFELL;
  if ( v51 )
  {
    v52 = sub_177B9C0(a1, v51, 0, a3, v50, v33, v34);
    if ( v52 == 1 )
      goto LABEL_13;
    v59[8] = v52 & 0xFFFFFFFFFFFFFFFELL;
  }
  v53 = *(unsigned __int16 **)(a2 + 96);
  if ( !v53 )
    goto LABEL_19;
  v54 = sub_177B9C0(a1, v53, 0, a3, v50, v33, v34);
  if ( v54 != 1 )
  {
    v59[10] = v54 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_19;
  }
LABEL_13:
  result = 1;
LABEL_14:
  if ( ptr != &v62 )
  {
    v56 = result;
    free(ptr);
    return v56;
  }
  return result;
}
