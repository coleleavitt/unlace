__int64 __fastcall sub_191E2A0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r13
  unsigned __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rbx
  unsigned int v34; // r12d
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rbx
  unsigned int v42; // [rsp+Ch] [rbp-12Ch]
  __int64 v43; // [rsp+10h] [rbp-128h]
  __int64 v44; // [rsp+18h] [rbp-120h]
  __int64 v45; // [rsp+38h] [rbp-100h] BYREF
  __int64 v46; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-E8h] BYREF
  int v49; // [rsp+58h] [rbp-E0h]
  char v50; // [rsp+5Ch] [rbp-DCh]
  _BYTE v51[8]; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-C0h]
  char v53; // [rsp+7Ch] [rbp-BCh]

  v8 = a5;
  v42 = a4;
  if ( !(_BYTE)a5 )
  {
    v12 = sub_191BD20(a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), a7, a8, (__int64)a3, a4, a5, a6);
    *a2 = v12;
    if ( v12 == 1 )
      return 0;
  }
  v13 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v14 = sub_191BD20(a1, v13, a7, a8, (__int64)a3, a4, a5, a6);
  *a3 = v14;
  if ( v14 == 1 )
    return 0;
  v45 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v16 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F58380(v16) )
  {
    v13 = *(_QWORD **)(a1 + 248);
    v43 = sub_F583D0(v17, v13);
  }
  else
  {
    v43 = v45;
  }
  v46 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v18 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F58380(v18) )
  {
    v13 = *(_QWORD **)(a1 + 248);
    v44 = sub_F583D0(v19, v13);
  }
  else
  {
    v44 = v46;
  }
  if ( v17 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x64 || v19 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x64 )
  {
    sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v42, 0x14A4u, 0);
    v30 = sub_1605D30((__int64)v51, &v45);
    v26 = &v46;
    v27 = sub_1605D30(v30, &v46);
    goto LABEL_15;
  }
  if ( !sub_9EC890(*(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v13, v20, v21, v22) )
  {
    sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v42, 0x1493u, 0);
    v26 = &v47;
    v47 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v27 = sub_162B6D0((__int64)v51, &v47);
LABEL_15:
    v28 = v27;
    v48 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)v26, *(double *)a7.m128_u64);
    sub_1587DB0(v28, &v48);
    sub_15F7200(v51);
    return 0;
  }
  if ( !sub_9EC890(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v13, v23, v24, v25) )
  {
    sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v42, 0x1493u, 0);
    v47 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v29 = sub_162B6D0((__int64)v51, &v47);
    v48 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v47, *(double *)a7.m128_u64);
    sub_1587DB0(v29, &v48);
    sub_15F7200(v51);
    return 0;
  }
  if ( sub_F58380(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL)) && sub_F58380(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_A649E0((__int64)v51, *(_QWORD **)(a1 + 248), v19);
    sub_A649E0((__int64)&v48, *(_QWORD **)(a1 + 248), v17);
    if ( v49 != v52 || v50 != v53 )
    {
      sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v42, 0x14A4u, 0);
      v31 = sub_1605D30((__int64)v51, &v45);
      v32 = sub_1605D30(v31, &v46);
      v47 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v46, *(double *)a7.m128_u64);
      v33 = sub_1587DB0(v32, &v47);
      v48 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v47, *(double *)a7.m128_u64);
      sub_1587DB0(v33, &v48);
      sub_15F7200(v51);
      return 0;
    }
  }
  if ( !sub_F58380(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( v8 )
      return v46;
    if ( v44 != v43 )
      *a2 = sub_160A600(
              a1,
              *a2 & 0xFFFFFFFFFFFFFFFELL,
              v44,
              0x1Bu,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
    sub_A649E0((__int64)v51, *(_QWORD **)(a1 + 248), v19);
    v36 = sub_A980E0(*(_QWORD *)(a1 + 248), v44, v52, 1);
    v37 = sub_160A600(
            a1,
            *a2 & 0xFFFFFFFFFFFFFFFELL,
            v36,
            0x1Au,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    v45 = v36;
    *a2 = v37;
    return v45;
  }
  if ( !v19 || !sub_F58380(v19) )
  {
    sub_A649E0((__int64)v51, *(_QWORD **)(a1 + 248), v17);
    v34 = v52;
    if ( v44 != v43 )
      *a3 = sub_160A600(
              a1,
              *a3 & 0xFFFFFFFFFFFFFFFELL,
              v43,
              0x1Bu,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
    v35 = sub_A980E0(*(_QWORD *)(a1 + 248), v43, v34, 1);
    *a3 = sub_160A600(
            a1,
            *a3 & 0xFFFFFFFFFFFFFFFELL,
            v35,
            0x1Au,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    return v45;
  }
  v38 = sub_A97D20(*(_QWORD *)(a1 + 248), v19);
  if ( v38 == sub_A97D20(*(_QWORD *)(a1 + 248), v17) )
    return v45;
  sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v42, 0x14C7u, 0);
  v39 = sub_1605D30((__int64)v51, &v45);
  v40 = sub_1605D30(v39, &v46);
  v47 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v46, *(double *)a7.m128_u64);
  v41 = sub_1587DB0(v40, &v47);
  v48 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v47, *(double *)a7.m128_u64);
  sub_1587DB0(v41, &v48);
  sub_15F7200(v51);
  return 0;
}
