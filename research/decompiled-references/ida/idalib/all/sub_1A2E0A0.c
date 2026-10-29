char __fastcall sub_1A2E0A0(__int64 a1, __int64 a2, __m128i *a3, __int64 *a4)
{
  __int64 *v7; // rax
  __int64 v8; // r13
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int16 v13; // ax
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64); // rax
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // edx
  bool v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // edx
  _QWORD *v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+10h] [rbp-F8h]
  char v37; // [rsp+18h] [rbp-F0h]
  int v38; // [rsp+1Ch] [rbp-ECh]
  __int64 v39; // [rsp+20h] [rbp-E8h] BYREF
  int v40; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+30h] [rbp-D8h] BYREF
  int v42; // [rsp+38h] [rbp-D0h]
  _QWORD *v43; // [rsp+40h] [rbp-C8h]
  __m128i v44; // [rsp+50h] [rbp-B8h] BYREF
  int v45; // [rsp+60h] [rbp-A8h]
  int v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]

  v7 = (__int64 *)(a4[6] & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 16) != 26 )
    v8 = sub_F63050(*v7, a2, a3, a4);
  v9 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v8 + 16)) >> 7, 0, 0);
  v10 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v8 + 16)) >> 7, 1, 0);
  if ( v10 != ((*(_WORD *)(v8 + 20) >> 2) & 0x3F) || v9 == v10 )
    LOWORD(v9) = (*(_WORD *)(v8 + 20) >> 2) & 0x3F;
  v11 = sub_1A2DFC0(a1, v8, v9);
  v12 = sub_A74B00(*(_QWORD *)(a1 + 248), v11);
  v13 = sub_A64670(*(_QWORD *)(a1 + 248), 0, 1, 0);
  v14 = *(_QWORD *)(a1 + 248);
  v44.m128i_i32[0] = __PAIR32__(v44.m128i_u16[1], v13) & 0xF000FFFF;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v44.m128i_i64[1] = 1;
  v15 = sub_A73610(v14, v12, nullptr, 0, &v44, 0);
  v36 = sub_B87AA0(
          *(_QWORD *)(a1 + 248) + 17536LL,
          *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v12 | (unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
  v16 = sub_A81910(*(_QWORD **)(a1 + 248), v12, a2);
  v39 = 0;
  v35 = v16;
  v20 = *a4;
  v40 = 0;
  v21 = *(__int64 (__fastcall **)(__int64))(v20 + 64);
  if ( v21 == sub_6EF210 )
    v22 = sub_B7F750(a4, &v41, (__int64)sub_6EF210, v17, v18, v19);
  else
    v22 = v21((__int64)a4);
  v23 = sub_EEC140(v22);
  v24 = *(_DWORD *)(a1 + 224);
  if ( ((v24 >> 3) & 7) == 7 )
  {
    v25 = 1;
    if ( (v24 & 0x104) != 0 )
      goto LABEL_9;
LABEL_12:
    v25 = 1;
    if ( (unsigned __int8)v24 >> 6 == 3 )
    {
      v34 = v24 & 0x100;
      if ( v34 )
        goto LABEL_9;
    }
    else
    {
      if ( (unsigned __int8)v24 >> 6 )
        goto LABEL_9;
      v34 = v24 & 0x100;
    }
    v25 = v34 != 0;
    goto LABEL_9;
  }
  v25 = 1;
  if ( ((v24 >> 3) & 7) == 1 )
    goto LABEL_12;
LABEL_9:
  v38 = v23;
  v37 = v25;
  v26 = sub_A81910(*(_QWORD **)(a1 + 248), v15, a2);
  v42 = a2;
  v27 = *(_QWORD **)(a1 + 248);
  v41 = v36;
  v43 = v35;
  v28 = sub_B995D0(v27, (__int64)a3, a2, &v41, v15, (__int64)v26, v37, 1, 0, 0, v38, (__int64)&v39);
  v29 = *(_BYTE *)(v28 + 29) & 0x9D | 2u;
  *(_BYTE *)(v28 + 29) = *(_BYTE *)(v28 + 29) & 0x9D | 2;
  return sub_B94AD0(a3 + 4, v28, v29, v30, v31, v32);
}
