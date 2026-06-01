unsigned __int64 __fastcall sub_1C739D0(
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
  bool v31; // al
  unsigned int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // rax
  char v35; // r8
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // al
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // [rsp+4h] [rbp-44h]
  char v50; // [rsp+4h] [rbp-44h]
  int v51; // [rsp+4h] [rbp-44h]
  unsigned __int8 v52; // [rsp+4h] [rbp-44h]
  char v53; // [rsp+4h] [rbp-44h]
  int v54; // [rsp+8h] [rbp-40h]
  unsigned __int8 v55; // [rsp+8h] [rbp-40h]
  int v56; // [rsp+8h] [rbp-40h]
  int v57; // [rsp+Ch] [rbp-3Ch]
  unsigned int v58; // [rsp+Ch] [rbp-3Ch]

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
LABEL_38:
        v57 = v14;
        v54 = a2;
        v50 = v18;
        v34 = sub_1907C70(*a1, a10, (__m128i)a7, a8, v14, a4, v18, a6);
        if ( v34 == 1 )
          return 1;
        LODWORD(v14) = v57;
        a2 = v54;
        v16 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFFELL);
        LOBYTE(v18) = v50;
        goto LABEL_6;
      }
      v35 = 1;
      goto LABEL_41;
    }
    if ( v17 != 3 )
    {
      v18 = 0;
LABEL_5:
      if ( (((unsigned __int8)a10->m128_i8[1] >> 3) & 7) != 3 )
        goto LABEL_6;
      goto LABEL_38;
    }
LABEL_40:
    v35 = 0;
LABEL_41:
    v58 = a4;
    v55 = v35;
    v51 = a2;
    v36 = sub_BFAB60(a2);
    v38 = v55;
    v39 = v36 - 21;
    if ( (unsigned int)v39 <= 0xA )
      return sub_1C214B0(*(__int64 **)(*a1 + 776), 0, a3, v36, (_DWORD *)a9, a10, a7, a8);
    v56 = v51;
    v52 = v38;
    v44 = sub_1907C70(*a1, (_QWORD *)a9, (__m128i)a7, a8, v58, v39, v38, v37);
    v18 = v52;
    a2 = v56;
    v14 = v58;
    if ( v44 == 1 )
      return 1;
    v15 = (__int64 *)(v44 & 0xFFFFFFFFFFFFFFFELL);
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
          goto LABEL_34;
        v26 = 0x4040600007CLL;
        if ( !_bittest64(&v26, v25) && (_BYTE)v25 != 33 )
          goto LABEL_34;
      }
      else if ( (unsigned __int8)(v25 - 47) <= 1u )
      {
        goto LABEL_34;
      }
      v27 = *(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL);
      v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (*(_BYTE *)(v27 + 17) & 4) != 0 )
      {
        if ( (unsigned __int8)v28 <= 0x2Au )
        {
          v45 = 0x4040600007CLL;
          if ( _bittest64(&v45, v28) || (_BYTE)v28 == 33 )
            return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
        }
      }
      else if ( (unsigned __int8)(v28 - 47) > 1u )
      {
        return sub_191AF90(*a1, v15, v14, v16, a3, a6, a7, a8);
      }
LABEL_34:
      if ( v16 && !(_BYTE)v18 )
        goto LABEL_36;
LABEL_15:
      v23 = sub_BF9700(a2, v18);
      return sub_1C09DA0((__m128 *)*a1, a3, v23, a6, v15, a5, a7, a8);
    }
    goto LABEL_5;
  }
  if ( v17 == 3 )
    goto LABEL_40;
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
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
            goto LABEL_31;
        }
        else
        {
          v47 = *(unsigned __int8 *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( (unsigned __int8)v47 <= 0x2Au )
          {
            v48 = 0x4040600007CLL;
            if ( _bittest64(&v48, v47) || (_BYTE)v47 == 33 )
            {
LABEL_31:
              v49 = a2;
              v31 = sub_1741750(*(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL));
              a2 = v49;
              if ( !v31 )
              {
                v32 = sub_BFAB60(v49);
                return sub_1928110(*a1, a3, v32, (unsigned __int64)v15, (unsigned __int64)v16, 0, a7, a8);
              }
            }
          }
        }
      }
LABEL_36:
      v33 = sub_BFAB60(a2);
      result = sub_1C07820((__m128 *)*a1, a3, v33, a6, v15, (__int64)v16, *(double *)a7.m128_u64, a8, a5, 1, 0);
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
        goto LABEL_46;
    }
    else
    {
      v40 = *(unsigned __int8 *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)v40 <= 0x2Au )
      {
        v41 = 0x4040600007CLL;
        if ( _bittest64(&v41, v40) || (_BYTE)v40 == 33 )
          goto LABEL_46;
      }
    }
    if ( a2 != 11 )
      goto LABEL_15;
    v53 = v18;
    v46 = sub_18C3500(*a1, (__int64)v15);
    LOBYTE(v18) = v53;
    a2 = 11;
    if ( !v46 )
      goto LABEL_15;
LABEL_46:
    v42 = sub_BF9700(a2, v18);
    return sub_19249E0(*a1, a3, v42, (unsigned __int64)v15, 0, v43, a7, a8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 1;
  return sub_1C042D0((__m128 *)*a1, a7, a8, 0, (__int64)v15, a3, nullptr, a6);
}
