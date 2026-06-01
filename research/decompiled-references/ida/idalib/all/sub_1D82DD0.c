unsigned __int64 __fastcall sub_1D82DD0(
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
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rax
  char v36; // r8
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // [rsp+4h] [rbp-44h]
  int v53; // [rsp+4h] [rbp-44h]
  unsigned __int8 v54; // [rsp+4h] [rbp-44h]
  char v55; // [rsp+4h] [rbp-44h]
  int v56; // [rsp+8h] [rbp-40h]
  unsigned __int8 v57; // [rsp+8h] [rbp-40h]
  int v58; // [rsp+8h] [rbp-40h]
  int v59; // [rsp+Ch] [rbp-3Ch]
  unsigned int v60; // [rsp+Ch] [rbp-3Ch]

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
LABEL_39:
        v59 = v14;
        v56 = a2;
        v52 = v18;
        v35 = sub_1907C70(*a1, a10, (__m128i)a7, a8, v14, a4, v18, a6);
        if ( v35 == 1 )
          return 1;
        LODWORD(v14) = v59;
        a2 = v56;
        v16 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFFELL);
        LOBYTE(v18) = v52;
        goto LABEL_6;
      }
      v36 = 1;
      goto LABEL_42;
    }
    if ( v17 != 3 )
    {
      v18 = 0;
LABEL_5:
      if ( (((unsigned __int8)a10->m128_i8[1] >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_39;
    }
LABEL_41:
    v36 = 0;
LABEL_42:
    v60 = a4;
    v57 = v36;
    v53 = a2;
    v37 = sub_BFAB60(a2);
    v39 = v57;
    v40 = v37 - 21;
    if ( (unsigned int)v40 <= 0xA )
      return sub_1C214B0(*(__int64 **)(*a1 + 776), 0, a3, v37, (_DWORD *)a9, a10, a7, a8);
    v58 = v53;
    v54 = v39;
    v45 = sub_1907C70(*a1, (_QWORD *)a9, (__m128i)a7, a8, v60, v40, v39, v38);
    v18 = v54;
    a2 = v58;
    v14 = v60;
    if ( v45 == 1 )
      return 1;
    v15 = (__int64 *)(v45 & 0xFFFFFFFFFFFFFFFELL);
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
          goto LABEL_35;
        v26 = 0x4040600007CLL;
        if ( !_bittest64(&v26, v25) && (_BYTE)v25 != 33 )
          goto LABEL_35;
      }
      else if ( (unsigned __int8)(v25 - 47) <= 1u )
      {
        goto LABEL_35;
      }
      v27 = *(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL);
      v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v27 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v28 <= 0x2Au )
        {
          v46 = 0x4040600007CLL;
          if ( _bittest64(&v46, v28) || (_BYTE)v28 == 33 )
            return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
        }
      }
      else if ( (unsigned __int8)(v28 - 47) > 1u )
      {
        return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
      }
LABEL_35:
      if ( v16 && !(_BYTE)v18 )
        goto LABEL_37;
LABEL_15:
      v23 = sub_BF9700(a2, v18);
      return sub_1C09DA0((__m128 *)*a1, a3, v23, a6, v15, a5, a7, a8);
    }
    goto LABEL_5;
  }
  if ( v17 == 3 )
    goto LABEL_41;
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
        v29 = *(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL);
        v21 = (*(_BYTE *)(v29 + 17) & 4) == 0;
        v30 = *(_QWORD *)(v29 + 8);
        if ( v21 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) <= 1u )
            goto LABEL_37;
        }
        else
        {
          v48 = *(unsigned __int8 *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)v48 > 0x2Au )
            goto LABEL_37;
          v49 = 0x4040600007CLL;
          if ( !_bittest64(&v49, v48) && (_BYTE)v48 != 33 )
            goto LABEL_37;
        }
        v31 = *(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL);
        v21 = (*(_BYTE *)(v31 + 17) & 4) == 0;
        v32 = *(_QWORD *)(v31 + 8);
        if ( v21 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
          {
LABEL_33:
            v33 = sub_BFAB60(a2);
            return sub_1928110(*a1, a3, v33, (unsigned __int64)v15, (unsigned __int64)v16, 0, a7, a8);
          }
        }
        else
        {
          v50 = *(unsigned __int8 *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)v50 <= 0x2Au )
          {
            v51 = 0x4040600007CLL;
            if ( _bittest64(&v51, v50) || (_BYTE)v50 == 33 )
              goto LABEL_33;
          }
        }
      }
LABEL_37:
      v34 = sub_BFAB60(a2);
      result = sub_1C07820((__m128 *)*a1, a3, v34, a6, v15, (__int64)v16, *(double *)a7.m128_u64, a8, a5, 1, 0);
      if ( result == 1 )
        return 1;
      return result;
    }
LABEL_12:
    v20 = *(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL);
    v21 = (*(_BYTE *)(v20 + 17) & 4) == 0;
    v22 = *(_QWORD *)(v20 + 8);
    if ( v21 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
        goto LABEL_47;
    }
    else
    {
      v41 = *(unsigned __int8 *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)v41 <= 0x2Au )
      {
        v42 = 0x4040600007CLL;
        if ( _bittest64(&v42, v41) || (_BYTE)v41 == 33 )
          goto LABEL_47;
      }
    }
    if ( a2 != 11 )
      goto LABEL_15;
    v55 = v18;
    v47 = sub_18C3500(*a1, (__int64)v15);
    LOBYTE(v18) = v55;
    a2 = 11;
    if ( !v47 )
      goto LABEL_15;
LABEL_47:
    v43 = sub_BF9700(a2, v18);
    return sub_19249E0(*a1, a3, v43, (unsigned __int64)v15, 0, v44, a7, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0((__m128 *)*a1, a7, a8, 0, (__int64)v15, a3, nullptr, a6);
}
