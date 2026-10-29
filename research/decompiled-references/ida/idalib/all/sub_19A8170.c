__int64 __fastcall sub_19A8170(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  bool v20; // si
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 *v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r12
  unsigned int v35; // [rsp+10h] [rbp-108h]
  char v36; // [rsp+17h] [rbp-101h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-C0h]
  char v45; // [rsp+5Ch] [rbp-BCh]

  v8 = a5;
  *a3 = sub_19179A0(a1, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), 1u, (__int64)a4, a5, a6, a7, a8);
  *a4 = sub_19179A0(a1, (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL), 1u, v12, v13, v14, a7, a8);
  v15 = *(_QWORD **)(a1 + 248);
  v38 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = sub_F583D0(v16, v15);
  v18 = v16;
  v37 = v17;
  v19 = 0;
  sub_A649E0((__int64)&v43, *(_QWORD **)(a1 + 248), v18);
  v35 = v44;
  v36 = v45;
  v39 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v20 = sub_F58380(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)v21;
    if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) != 13 )
    {
      v20 = 0;
      v19 = 0;
    }
  }
  v40 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( sub_F58380(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL))
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 13 )
  {
    v41 = 0;
    if ( v20 )
    {
      v22 = v39 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)v39 | (unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v40) & 7) )
      {
        sub_168B9F0((__int64)&v43, (__int64 *)(a1 + 8), v8, 0xD80u, 0);
        v23 = sub_1605D30((__int64)&v43, (__int64 *)&v39);
        v24 = (__int64 *)&v40;
LABEL_9:
        sub_1605D30(v23, v24);
        sub_15F7200(&v43);
        return 0;
      }
      v41 = v39;
LABEL_13:
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v27 = sub_F583D0(v26, *(_QWORD **)(a1 + 248));
      sub_A649E0((__int64)&v43, *(_QWORD **)(a1 + 248), v26);
      if ( v35 == v44 && v45 == v36 )
      {
        v34 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v34 == sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL)) )
          return v41;
        v28 = (__int64 *)(a1 + 8);
        v29 = 3454;
      }
      else
      {
        v28 = (__int64 *)(a1 + 8);
        v29 = 3458;
      }
      sub_168B9F0((__int64)&v43, v28, v8, v29, 0);
      v23 = sub_1605D30((__int64)&v43, &v38);
      v24 = &v41;
      goto LABEL_9;
    }
LABEL_12:
    v41 = sub_1918440(a1, a3, a4, v8, 0, 3, a7, a8);
    v22 = v41 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
    goto LABEL_13;
  }
  v41 = 0;
  if ( v19 )
    goto LABEL_12;
  v42 = 0;
  v43 = *(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7;
  v39 = sub_6D5440(&v43);
  v43 = *(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v40) & 7;
  v40 = sub_6D5440(&v43);
  if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v39 | (unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v40) & 7) )
    v42 = v39;
  else
    v42 = sub_191F280(a1, a3, a4, v8, 3u, a7, a8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
  {
    v30 = sub_A980E0(*(_QWORD *)(a1 + 248), v42, v35, 1);
    v31 = *a3;
    v41 = v30;
    v32 = sub_160A600(
            a1,
            v31 & 0xFFFFFFFFFFFFFFFELL,
            v30,
            0x1Au,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    v33 = v41;
    *a3 = v32;
    *a4 = sub_160A600(
            a1,
            *a4 & 0xFFFFFFFFFFFFFFFELL,
            v33,
            0x1Au,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    v22 = v41 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_13;
  }
  sub_168B9F0((__int64)&v43, (__int64 *)(a1 + 8), v8, 0xD81u, 0);
  sub_1605D30((__int64)&v43, (__int64 *)&v42);
  sub_15F7200(&v43);
  return 0;
}
