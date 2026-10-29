unsigned __int64 __fastcall sub_1CB2A60(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __m128 *a10)
{
  __int64 v14; // rdx
  __int64 *v15; // rbp
  __int64 *v16; // rbx
  char v17; // si
  __int64 v18; // r8
  unsigned __int64 result; // rax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  bool v29; // al
  bool v30; // al
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rax
  char v34; // r8
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  char v45; // al
  int v46; // [rsp+4h] [rbp-44h]
  char v47; // [rsp+4h] [rbp-44h]
  int v48; // [rsp+4h] [rbp-44h]
  unsigned __int8 v49; // [rsp+4h] [rbp-44h]
  char v50; // [rsp+4h] [rbp-44h]
  int v51; // [rsp+8h] [rbp-40h]
  unsigned __int8 v52; // [rsp+8h] [rbp-40h]
  int v53; // [rsp+8h] [rbp-40h]
  int v54; // [rsp+Ch] [rbp-3Ch]
  unsigned int v55; // [rsp+Ch] [rbp-3Ch]

  v14 = (unsigned int)a4;
  v15 = (__int64 *)a9;
  v16 = (__int64 *)a10;
  v17 = (*(_BYTE *)(a9 + 1) >> 3) & 7;
  if ( a10 )
  {
    if ( (unsigned int)(a2 - 37) <= 1 )
    {
      if ( v17 != 3 )
      {
        v18 = 1;
        if ( (((unsigned __int8)a10->m128_i8[1] >> 3) & 7) != 3 )
          goto LABEL_12;
LABEL_37:
        v54 = v14;
        v51 = a2;
        v47 = v18;
        v33 = sub_1907C70(*a1, a10, (__m128i)a7, a8, v14, a4, v18, a6);
        if ( v33 == 1 )
          return 1;
        LODWORD(v14) = v54;
        a2 = v51;
        v16 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFFELL);
        LOBYTE(v18) = v47;
        goto LABEL_6;
      }
      v34 = 1;
      goto LABEL_40;
    }
    if ( v17 != 3 )
    {
      v18 = 0;
LABEL_5:
      if ( (((unsigned __int8)a10->m128_i8[1] >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_37;
    }
LABEL_39:
    v34 = 0;
LABEL_40:
    v55 = a4;
    v52 = v34;
    v48 = a2;
    v35 = sub_BFAB60(a2);
    v37 = v52;
    v38 = v35 - 21;
    if ( (unsigned int)v38 <= 0xA )
      return sub_1C214B0(*(__int64 **)(*a1 + 776), 0, a3, v35, (_DWORD *)a9, a10, a7, a8);
    v53 = v48;
    v49 = v37;
    v43 = sub_1907C70(*a1, (_QWORD *)a9, (__m128i)a7, a8, v55, v38, v37, v36);
    v18 = v49;
    a2 = v53;
    v14 = v55;
    if ( v43 == 1 )
      return 1;
    v15 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFFELL);
    if ( !a10 )
    {
LABEL_6:
      if ( a2 != 43 )
        goto LABEL_7;
LABEL_18:
      v24 = *(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL);
      v25 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v24 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v25 > 0x2Au )
          goto LABEL_33;
        v26 = 0x4040600007CLL;
        if ( !_bittest64(&v26, v25) && (_BYTE)v25 != 33 )
          goto LABEL_33;
      }
      else if ( (unsigned __int8)(v25 - 47) <= 1u )
      {
        goto LABEL_33;
      }
      v27 = *(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL);
      v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v27 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v28 <= 0x2Au )
        {
          v44 = 0x4040600007CLL;
          if ( _bittest64(&v44, v28) || (_BYTE)v28 == 33 )
            return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
        }
      }
      else if ( (unsigned __int8)(v28 - 47) > 1u )
      {
        return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
      }
LABEL_33:
      if ( v16 && !(_BYTE)v18 )
      {
LABEL_35:
        v32 = sub_BFAB60(a2);
        result = sub_1C07820((__m128 *)*a1, a3, v32, a6, v15, (__int64)v16, *(double *)a7.m128_u64, a8, a5, 1, 0);
        if ( result == 1 )
          return 1;
        return result;
      }
LABEL_15:
      v23 = sub_BF9700(a2, v18);
      return sub_1C09DA0((__m128 *)*a1, a3, v23, a6, v15, a5, a7, a8);
    }
    goto LABEL_5;
  }
  if ( v17 == 3 )
    goto LABEL_39;
  LOBYTE(v18) = 0;
  if ( a2 == 43 )
    goto LABEL_18;
LABEL_7:
  if ( a2 != 41 )
  {
    if ( v16 && !(_BYTE)v18 )
    {
      if ( (*(_DWORD *)v15 & 0x10000) == 0 && (*(_DWORD *)v16 & 0x10000) == 0 )
      {
        v46 = a2;
        v29 = sub_1741750(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL));
        a2 = v46;
        if ( !v29 )
        {
          v30 = sub_1741750(*(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL));
          a2 = v46;
          if ( !v30 )
          {
            v31 = sub_BFAB60(v46);
            return sub_1928110(*a1, a3, v31, (unsigned __int64)v15, (unsigned __int64)v16, 0, a7, a8);
          }
        }
      }
      goto LABEL_35;
    }
LABEL_12:
    v20 = *(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL);
    v21 = (*(_BYTE *)(v20 + 17) & 4) == 0;
    v22 = *(_QWORD *)(v20 + 8);
    if ( v21 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
        goto LABEL_45;
    }
    else
    {
      v39 = *(unsigned __int8 *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)v39 <= 0x2Au )
      {
        v40 = 0x4040600007CLL;
        if ( _bittest64(&v40, v39) || (_BYTE)v39 == 33 )
          goto LABEL_45;
      }
    }
    if ( a2 != 11 )
      goto LABEL_15;
    v50 = v18;
    v45 = sub_18C3500(*a1, (__int64)v15);
    LOBYTE(v18) = v50;
    a2 = 11;
    if ( !v45 )
      goto LABEL_15;
LABEL_45:
    v41 = sub_BF9700(a2, v18);
    return sub_19249E0(*a1, a3, v41, (unsigned __int64)v15, 0, v42, a7, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0((__m128 *)*a1, a7, a8, 0, (__int64)v15, a3, nullptr, a6);
}
