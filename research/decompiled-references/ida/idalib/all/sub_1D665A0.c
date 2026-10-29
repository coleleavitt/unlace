unsigned __int64 __fastcall sub_1D665A0(_QWORD **a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbp
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r11d
  __int64 *v36; // r10
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rdi
  __int64 v46; // rcx
  __m128i *v47; // rsi
  __int64 *v48; // rsi
  char *v49; // rdi
  __int64 i; // rcx
  _WORD *v51; // rsi
  __int64 v52; // rax
  _WORD *v53; // rsi
  __int64 v54; // rax
  _WORD *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int16 *v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rcx
  _WORD *v64; // rsi
  __int64 v65; // rax
  _WORD *v66; // rsi
  __int64 v67; // rax
  char v68; // [rsp-70h] [rbp-1F8h] BYREF
  unsigned __int64 v69; // [rsp+8h] [rbp-180h]
  __int64 v70[14]; // [rsp+10h] [rbp-178h] BYREF
  __m128i v71[2]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v72; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v76; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+D8h] [rbp-B0h]
  char v80; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v82; // [rsp+120h] [rbp-68h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = *((unsigned int *)*a1 + 10);
  if ( (_DWORD)v6 )
    v4 = *(_QWORD *)(v5[4] + 8 * v6 - 8);
  v7 = v5[68];
  if ( !v7 )
  {
    *(_BYTE *)(v4 + 10) &= ~2u;
    BUG();
  }
  *(_BYTE *)(v4 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0((unsigned __int64)*a1, *(unsigned int *)(v7 - 48), (__m128i)a3) )
    return 1;
  v16 = sub_1786260(*a1, *(unsigned int *)(v7 - 48), *(double *)a3.m128_u64, v10, v11);
  if ( !v16 )
    return 1;
  v17 = *((_DWORD *)a1 + 6);
  v18 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  v70[0] = v18;
  if ( !v17 )
  {
    v71[0].m128i_i64[0] = 0;
    goto LABEL_25;
  }
  v15 = v17 - 1;
  v14 = (__int64)a1[1];
  v13 = (unsigned int)v15 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
  v19 = (__int64 *)(v14 + 16 * v13);
  v20 = *v19;
  if ( v18 == *v19 )
    goto LABEL_10;
  v35 = 1;
  v36 = nullptr;
  if ( v20 == -4096 )
  {
LABEL_19:
    v37 = *((_DWORD *)a1 + 4);
    v71[0].m128i_i64[0] = (__int64)v19;
    v13 = (unsigned int)(v37 + 1);
    v14 = (unsigned int)(4 * v13);
    if ( (unsigned int)v14 < 3 * v17 )
    {
      v14 = v17 >> 3;
      if ( v17 - *((_DWORD *)a1 + 5) - (unsigned int)v13 > (unsigned int)v14 )
      {
LABEL_21:
        v38 = *v19 == -4096;
        *((_DWORD *)a1 + 4) = v13;
        if ( !v38 )
          --*((_DWORD *)a1 + 5);
        *v19 = v18;
        v19[1] = 0;
        goto LABEL_10;
      }
LABEL_26:
      sub_1748150((__int64)(a1 + 1), v17, v18, v13, v14, v15);
      sub_1C740A0((__int64 *)a1 + 1, v70, v71);
      v18 = v70[0];
      v13 = (unsigned int)(*((_DWORD *)a1 + 4) + 1);
      v19 = (__int64 *)v71[0].m128i_i64[0];
      goto LABEL_21;
    }
LABEL_25:
    v17 *= 2;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( !v36 && v20 == -8192 )
      v36 = v19;
    v13 = (unsigned int)v15 & (v35 + (_DWORD)v13);
    LODWORD(v69) = v35 + 1;
    v19 = (__int64 *)(v14 + 16LL * (unsigned int)v13);
    v20 = *v19;
    if ( v18 == *v19 )
      break;
    if ( v20 == -4096 )
    {
      if ( v36 )
        v19 = v36;
      goto LABEL_19;
    }
    v35 = v69;
  }
LABEL_10:
  v19[1] = v16;
  *(_QWORD *)(v4 + 184) = v16;
  v24 = sub_1D42130((__int64 *)a1, *(_WORD **)(a2 + 32), 0, a3, a4, v13, v14, v15);
  if ( v24 == 1 )
    return 1;
  v25 = sub_1D42130((__int64 *)a1, *(_WORD **)(a2 + 40), 0, a3, a4, v21, v22, v23);
  if ( v25 == 1 )
    return 1;
  v26 = (__int64)*a1;
  v69 = v25 & 0xFFFFFFFFFFFFFFFELL;
  if ( !(unsigned __int8)sub_1783690(v26, v25 & 0xFFFFFFFFFFFFFFFELL) )
    return 1;
  *(_BYTE *)(v4 + 10) &= ~2u;
  v29 = v69;
  *(_QWORD *)(v4 + 344) = v24 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v4 + 352) = v29;
  v30 = sub_1D42130((__int64 *)a1, *(_WORD **)(a2 + 16), 0, a3, a4, v24 & 0xFFFFFFFFFFFFFFFELL, v27, v28);
  if ( v30 == 1 )
    return 1;
  sub_1783C30((__int64)v71, *a1, v7 - 72, v4, (unsigned __int16 *)(v30 & 0xFFFFFFFFFFFFFFFELL), v31);
  if ( !v80 )
    goto LABEL_15;
  v39 = *(_QWORD *)(a2 + 88);
  v40 = sub_1D440A0((__int64 *)a1, v39, 0, a3, a4, v32, v33, v34);
  if ( v40 == 1 )
    goto LABEL_15;
  v77 = v40 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
      & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(v71, v39) )
    {
      goto LABEL_15;
    }
LABEL_30:
    v45 = v70;
    v46 = 28;
    v47 = v71;
    while ( v46 )
    {
      *(_DWORD *)v45 = v47->m128i_i32[0];
      v47 = (__m128i *)((char *)v47 + 4);
      v45 = (__int64 *)((char *)v45 + 4);
      --v46;
    }
    v48 = v70;
    v49 = &v68;
    for ( i = 28; i; --i )
    {
      *(_DWORD *)v49 = *(_DWORD *)v48;
      v48 = (__int64 *)((char *)v48 + 4);
      v49 += 4;
    }
    result = sub_1783EC0((__int64)*a1, (__int64)v48, v41, 0, v43, v44, v68);
    goto LABEL_16;
  }
  v51 = *(_WORD **)(a2 + 56);
  if ( v51 )
  {
    v52 = sub_1D42130((__int64 *)a1, v51, 0, a3, a4, v42, v43, v44);
    if ( v52 == 1 )
      goto LABEL_15;
    v73 = v52 & 0xFFFFFFFFFFFFFFFELL;
  }
  v53 = *(_WORD **)(a2 + 48);
  if ( v53 )
  {
    v54 = sub_1D42130((__int64 *)a1, v53, 0, a3, a4, v42, v43, v44);
    if ( v54 == 1 )
      goto LABEL_15;
    v72 = v54 & 0xFFFFFFFFFFFFFFFELL;
  }
  v55 = *(_WORD **)(a2 + 104);
  if ( v55 )
  {
    v56 = sub_1D42130((__int64 *)a1, v55, 0, a3, a4, v42, v43, v44);
    if ( v56 == 1 )
      goto LABEL_15;
    v79 = v56 & 0xFFFFFFFFFFFFFFFELL;
  }
  v57 = sub_1D434A0((__int64 *)a1, *(unsigned __int16 **)(a2 + 64), a3, a4, v41, v42, v43);
  if ( v57 == 1 )
    goto LABEL_15;
  v61 = *(unsigned __int16 **)(a2 + 72);
  v74 = v57 & 0xFFFFFFFFFFFFFFFELL;
  v62 = sub_1D434A0((__int64 *)a1, v61, a3, a4, v58, v59, v60);
  if ( v62 == 1 )
    goto LABEL_15;
  v64 = *(_WORD **)(a2 + 80);
  v75 = v62 & 0xFFFFFFFFFFFFFFFELL;
  if ( v64 )
  {
    v65 = sub_1D42130((__int64 *)a1, v64, 0, a3, a4, v63, v43, v44);
    if ( v65 == 1 )
      goto LABEL_15;
    v76 = v65 & 0xFFFFFFFFFFFFFFFELL;
  }
  v66 = *(_WORD **)(a2 + 96);
  if ( !v66 )
    goto LABEL_30;
  v67 = sub_1D42130((__int64 *)a1, v66, 0, a3, a4, v63, v43, v44);
  if ( v67 != 1 )
  {
    v78 = v67 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_30;
  }
LABEL_15:
  result = 1;
LABEL_16:
  if ( ptr != &v82 )
  {
    v69 = result;
    free(ptr);
    return v69;
  }
  return result;
}
