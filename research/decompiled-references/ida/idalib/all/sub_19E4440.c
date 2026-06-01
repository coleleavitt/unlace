__int64 __fastcall sub_19E4440(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        char a9,
        int a10,
        char a11)
{
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdi
  char v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // r10d
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r10d
  char v43; // al
  char v44; // al
  _QWORD *v45; // [rsp+0h] [rbp-F8h]
  __int64 *v46; // [rsp+8h] [rbp-F0h]
  unsigned int v47; // [rsp+8h] [rbp-F0h]
  char v49; // [rsp+14h] [rbp-E4h]
  unsigned __int64 v50; // [rsp+18h] [rbp-E0h]
  unsigned int v52; // [rsp+28h] [rbp-D0h]
  _QWORD *v53; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-C0h]
  unsigned int v55; // [rsp+3Ch] [rbp-BCh]
  char v56; // [rsp+40h] [rbp-B8h]

  v50 = a2;
  v45 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = *(_QWORD *)(*a4 + 8);
  v46 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 43;
  if ( (unsigned int)v17 <= 1
    || (v18 = a3,
        v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v17 <= 1)
    && (v16 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v17, v14)) != 0 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v16 + 32);
      if ( (*(_BYTE *)(v16 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        v16 = *(_QWORD *)v19;
        v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
        if ( (unsigned int)v17 <= 1 )
          break;
        v20 = sub_F63050(v16, a2, v17, v14);
        v18 = *(_QWORD *)(v20 + 32);
        if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  v21 = sub_19CF160(v15, a2, v17, v14);
  v24 = sub_19CF160(v18, a2, v22, v23);
  if ( v21 != v24 )
  {
    v52 = v24;
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 )
      return 0;
    v38 = v52;
    LOBYTE(v34) = v21 == 0;
    if ( v21 - 3 > 1 && v21 )
    {
      if ( !v52 )
      {
        v43 = sub_F60F80(*v46, (__int64)v45, v34, v35, v36, v37);
        v38 = 0;
        LOBYTE(v34) = v21 == 0;
        if ( v43 )
          return 0;
        if ( v21 != 2 )
          goto LABEL_31;
        goto LABEL_41;
      }
    }
    else if ( v52 - 3 <= 1 || !v52 )
    {
      return 0;
    }
    if ( v21 != 2 )
    {
      if ( v52 != 2 )
        goto LABEL_31;
      if ( v21 - 3 <= 1 && (unsigned int)(a5 - 1) <= 2 )
        return 0;
      if ( !a11 )
        goto LABEL_31;
      goto LABEL_44;
    }
    if ( v52 == 3 || v52 == 4 && (unsigned int)(a5 - 1) <= 2 )
      return 0;
LABEL_41:
    if ( a11 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x22 )
        return 0;
      if ( v38 == 2 )
      {
LABEL_44:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) == 0x22 )
          return 0;
      }
    }
LABEL_31:
    v39 = *a4;
    v49 = v34;
    v55 = v38;
    v47 = v38;
    v53 = v45;
    v54 = v21;
    v56 = 0;
    v40 = sub_BFB9F0(v39);
    v41 = sub_19CDB40((__int64)&v53, v40, *(double *)a7.m128_u64);
    v42 = v47;
    if ( v41 )
    {
      if ( v41 <= 2 )
        return 0;
      if ( v41 == 3 )
      {
        *a4 = sub_C0A3E0(v45, *(_QWORD *)(*a4 + 8), 55, *a4, 0, 0, 0);
        *(_WORD *)(*a1 + 4512) = 257;
        return 0;
      }
    }
    if ( v21 == 1 )
    {
      if ( (v47 - 3 <= 1 || v47 == 1) && (unsigned int)(a5 - 1) <= 2 )
        return v21;
      if ( a9 && v47 == 4 )
        return 0;
    }
    else if ( v49 && v47 == 1 )
    {
      v44 = sub_19DC760(a1, a3, (unsigned __int64 *)a4, a6, a7, a8);
      v42 = 1;
      if ( v44 )
        return 2;
    }
    else if ( v21 == 3 && v47 == 1 && (unsigned int)(a10 - 14) <= 1 )
    {
      return 0;
    }
    if ( a6 )
      sub_19E3560((__int64 *)*a1, a2, a3, v42, *a4, *a4, (__m128i)a7, *(double *)a8.m128_u64, v21, a5);
    return 2;
  }
  if ( v21 != 1 || (a5 & 0xFFFFFFFD) != 1 || a3 == v15 )
    return 0;
  v29 = *v46;
  v30 = *(_BYTE *)(*v46 + 16);
  if ( v30 != 40 )
  {
    if ( v30 == 52 )
    {
      v31 = sub_F64D80(v29, a2, v25, v26, v27);
      goto LABEL_13;
    }
    if ( v30 == 8 )
    {
      v31 = *(_QWORD *)(v29 + 48);
      goto LABEL_13;
    }
    return 0;
  }
  v31 = *(_QWORD *)(v29 + 32);
LABEL_13:
  if ( a3 == v31 )
    return 0;
  v32 = *(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v32 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v32 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    return 0;
  if ( !a6 )
    return 2;
  v33 = a2;
  if ( !(_DWORD)a2 || (a2 >>= 32, !HIDWORD(v50)) )
    v33 = sub_C00A40(*a4, a2, v25, v26, v27);
  v21 = 2;
  sub_168B9F0((__int64)&v53, a1, v33, 0xBDBu, 0);
  sub_15F7200(&v53);
  return v21;
}
