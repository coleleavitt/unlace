unsigned __int64 __fastcall sub_19A9E70(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v10; // r12d
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rsi
  unsigned __int64 result; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rsi
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // [rsp+8h] [rbp-110h]
  __int64 v45; // [rsp+10h] [rbp-108h]
  __int64 v46; // [rsp+18h] [rbp-100h]
  __int64 v47; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v52[200]; // [rsp+50h] [rbp-C8h] BYREF

  v10 = a5;
  *a3 = sub_19179A0((__int64)a1, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), 1u, (__int64)a4, a5, a6, a7, a8);
  v13 = (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL);
  *a4 = sub_19179A0((__int64)a1, v13, 1u, v14, v15, v16, a7, a8);
  v47 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v19 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 57 > 1 )
    v19 = sub_F63050(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), v13, v17, v18);
  v20 = *(_DWORD *)(v19 + 20);
  v45 = *(_QWORD *)(v19 + 32);
  v48 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v21 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 57 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      v21 = 0;
    else
      v21 = sub_F63050(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), v13, v21, v18);
  }
  v49 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v22 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 57 <= 1 )
  {
    v50 = 0;
    if ( v21 )
    {
LABEL_6:
      if ( (*(_BYTE *)(v21 + 16) == 58) != (*(_BYTE *)(v19 + 16) == 58) )
      {
        sub_168B9F0((__int64)v52, a1 + 1, v10, 0xD7Du, 0);
        LOBYTE(v51) = *(_BYTE *)(v19 + 16) == 58;
        sub_1588420((__int64)v52, (unsigned __int8 *)&v51);
        sub_15F7200(v52);
        return 0;
      }
      v23 = v48;
      if ( (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)v48 | (unsigned __int8)*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v49 | (unsigned __int8)*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      {
        sub_168B9F0((__int64)v52, a1 + 1, v10, 0xD80u, 0);
        v24 = sub_1605D30((__int64)v52, (__int64 *)&v48);
        v25 = (__int64 *)&v49;
LABEL_17:
        sub_1605D30(v24, v25);
        sub_15F7200(v52);
        return 0;
      }
      v50 = sub_ABBE20((_QWORD *)a1[31], v48, v49, 0);
      v28 = v50 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_13;
    }
LABEL_12:
    v23 = (__int64)a3;
    v50 = sub_1918B10(a1, a3, a4, v10, 0, 1, a7, a8, 0, 1, 1);
    result = 0;
    v28 = v50 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v50 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return result;
    goto LABEL_13;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
  {
    v50 = 0;
    if ( v21 )
      goto LABEL_12;
  }
  else
  {
    v46 = v21;
    v34 = sub_F63050(v22, v13, v21, v18);
    v21 = v46;
    v50 = 0;
    if ( v46 )
    {
      if ( v34 )
        goto LABEL_6;
      goto LABEL_12;
    }
    if ( v34 )
      goto LABEL_12;
  }
  v48 = sub_6D5440(&v48);
  v37 = sub_6D5440(&v49);
  v49 = v37;
  if ( (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v48 | (unsigned __int8)*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v37 | (unsigned __int8)*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
    v51 = sub_ABBE20((_QWORD *)a1[31], v48, v37, 0);
  else
    v51 = sub_191F280((__int64)a1, a3, a4, v10, 3u, a7, a8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    sub_168B9F0((__int64)v52, a1 + 1, v10, 0xD81u, 0);
    sub_1605D30((__int64)v52, (__int64 *)&v51);
    sub_15F7200(v52);
    return 0;
  }
  v38 = a1[31];
  v39 = *(_DWORD *)(v19 + 20);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58 )
    v50 = sub_A76A60(v38, v51, v39);
  else
    v50 = sub_A70300(v38, v51, v39, 0);
  v40 = sub_160A600(
          (__int64)a1,
          *a3 & 0xFFFFFFFFFFFFFFFELL,
          v50,
          0x1Au,
          0,
          0,
          *(double *)a7.m128_u64,
          *(double *)a8.m128_u64,
          0);
  v41 = v50;
  *a3 = v40;
  v23 = *a4 & 0xFFFFFFFFFFFFFFFELL;
  v42 = sub_160A600((__int64)a1, v23, v41, 0x1Au, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
  v43 = v50;
  *a4 = v42;
  v28 = v43 & 0xFFFFFFFFFFFFFFF0LL;
  v27 = v44;
LABEL_13:
  v29 = *(_QWORD *)v28;
  v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v28 + 16LL) - 57;
  if ( (unsigned int)v30 > 1 )
  {
    v35 = sub_F63050(v29, v23, v30, v27);
    v31 = *(_QWORD *)(v35 + 32);
    if ( v20 != *(_DWORD *)(v35 + 20) )
      goto LABEL_15;
  }
  else
  {
    v31 = *(_QWORD *)(v29 + 32);
    if ( v20 != *(_DWORD *)(v29 + 20) )
    {
LABEL_15:
      v32 = a1 + 1;
      v33 = 3458;
LABEL_16:
      sub_168B9F0((__int64)v52, v32, v10, v33, 0);
      v24 = sub_1605D30((__int64)v52, &v47);
      v25 = (__int64 *)&v50;
      goto LABEL_17;
    }
  }
  v36 = sub_A97D20(a1[31], *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v36 != sub_A97D20(a1[31], *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v32 = a1 + 1;
    v33 = 3454;
    goto LABEL_16;
  }
  return v50;
}
