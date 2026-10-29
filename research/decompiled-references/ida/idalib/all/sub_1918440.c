__int64 __fastcall sub_1918440(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rsi
  char v20; // al
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rsi
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *v41; // rbp
  bool v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 *v46; // rsi
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rbp
  int v50; // [rsp+0h] [rbp-118h]
  unsigned int v51; // [rsp+Ch] [rbp-10Ch]
  bool v52; // [rsp+17h] [rbp-101h] BYREF
  unsigned __int64 v53; // [rsp+18h] [rbp-100h] BYREF
  unsigned __int64 v54; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v55; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v56; // [rsp+30h] [rbp-E8h] BYREF
  int v57; // [rsp+38h] [rbp-E0h]
  char v58; // [rsp+3Ch] [rbp-DCh]
  __int64 v59; // [rsp+50h] [rbp-C8h] BYREF
  int v60; // [rsp+58h] [rbp-C0h]
  char v61; // [rsp+5Ch] [rbp-BCh]

  v51 = a4;
  v50 = a6;
  if ( !(_BYTE)a5 )
  {
    v11 = sub_19179A0(a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
    *a2 = v11;
    if ( v11 == 1 )
      return 0;
  }
  v12 = sub_19179A0(a1, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
  *a3 = v12;
  if ( v12 == 1 )
    return 0;
  v59 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v53 = sub_6D5440(&v59);
  v59 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v14 = sub_6D5440(&v59);
  v54 = v14;
  v15 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 13 )
    v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)v17;
  if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 13 )
    v18 = 0;
  if ( !v50
    && (v16 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x64 || v18 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x64) )
  {
    v32 = (__int64 *)(a1 + 8);
    v33 = 5284;
  }
  else
  {
    v19 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL];
    v20 = v19 | v14;
    v21 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v53) & 7) == (v21 | v20 & 7) )
      return v53;
    if ( sub_F58380(v15) && !sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v21 = (unsigned __int64)a3;
      if ( !(unsigned __int8)sub_18BEC80(a1, a3, a2, *(double *)a7.m128_u64, *(double *)a8.m128_u64, v22, v23, v24) )
        return v53;
    }
    if ( sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL)) && !sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      if ( ((*(_BYTE *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3) == 1 )
        return v54;
      v21 = (unsigned __int64)a2;
      if ( !(unsigned __int8)sub_18BEC80(a1, a2, a3, *(double *)a7.m128_u64, *(double *)a8.m128_u64, v25, v26, v27) )
        return v54;
    }
    if ( (sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL))
       || sub_F61040(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL), v21, v28, v29, v30, v31))
      && (sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL))
       || sub_F61040(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL), v21, v37, v38, v39, v40)) )
    {
      if ( sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL))
        && sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL))
        && ((sub_A649E0((__int64)&v59, *(_QWORD **)(a1 + 248), v18),
             sub_A649E0((__int64)&v56, *(_QWORD **)(a1 + 248), v16),
             v57 != v60)
         || v58 != v61) )
      {
        v45 = v51;
        v46 = (__int64 *)(a1 + 8);
        v47 = 5319;
      }
      else
      {
        v41 = (__int64 *)(a1 + 8);
        if ( sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL)) || sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          if ( sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL)) )
            v55 = v54;
          else
            v55 = v53;
          if ( sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL)) )
            v56 = v53;
          else
            v56 = v54;
          v42 = sub_F58380(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v42 )
            v42 = sub_F58380(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL));
          v52 = v42;
          sub_168B9F0((__int64)&v59, v41, v51, 0x14C9u, 0);
          v43 = sub_15890D0((__int64)&v59, (unsigned __int8 *)&v52);
          v44 = sub_1605D30(v43, (__int64 *)&v55);
          sub_1605D30(v44, (__int64 *)&v56);
          sub_15F7200(&v59);
          return 0;
        }
        v47 = 5284;
        v45 = v51;
        v46 = v41;
      }
      sub_168B9F0((__int64)&v59, v46, v45, v47, 0);
      v48 = sub_1605D30((__int64)&v59, (__int64 *)&v53);
      v49 = sub_1605D30(v48, (__int64 *)&v54);
      v55 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v54, *(double *)a7.m128_u64);
      v36 = sub_1587DB0(v49, (__int64 *)&v55);
      v56 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v55, *(double *)a7.m128_u64);
      goto LABEL_29;
    }
    v32 = (__int64 *)(a1 + 8);
    v33 = 5322;
  }
  sub_168B9F0((__int64)&v59, v32, v51, v33, 0);
  v34 = sub_1605D30((__int64)&v59, (__int64 *)&v53);
  v35 = sub_1605D30(v34, (__int64 *)&v54);
  v55 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v54, *(double *)a7.m128_u64);
  v36 = sub_1587DB0(v35, (__int64 *)&v55);
  v56 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v55, *(double *)a7.m128_u64);
LABEL_29:
  sub_1587DB0(v36, (__int64 *)&v56);
  sub_15F7200(&v59);
  return 0;
}
