__int64 __fastcall sub_191E8A0(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // r14d
  char v10; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // r11
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r13
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // [rsp+8h] [rbp-120h]
  __int64 v51; // [rsp+8h] [rbp-120h]
  __int64 v52; // [rsp+10h] [rbp-118h]
  __int64 v53; // [rsp+10h] [rbp-118h]
  __int64 v54; // [rsp+18h] [rbp-110h]
  __int64 v55; // [rsp+18h] [rbp-110h]
  __int64 v56; // [rsp+20h] [rbp-108h]
  __int64 v57; // [rsp+28h] [rbp-100h]
  __int64 v58; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v61; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v62[200]; // [rsp+60h] [rbp-C8h] BYREF

  v9 = a4;
  v10 = a5;
  v12 = a1[29];
  if ( ((*(_BYTE *)(v12 + 47) & 0x20) != 0 || (*(_BYTE *)(v12 + 13) & 4) != 0)
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 > 1 )
  {
    sub_168B9F0((__int64)v62, a1 + 1, a4, 0x1373u, 0);
    v58 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v29 = sub_162B6D0((__int64)v62, &v58);
    v30 = *a2;
LABEL_17:
    v59 = *(_QWORD *)((v30 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v31 = sub_162B6D0(v29, &v59);
    v60 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v59, *(double *)a7.m128_u64);
    v32 = sub_1587DB0(v31, &v60);
LABEL_18:
    v27 = *a3;
    v28 = v32;
    goto LABEL_19;
  }
  if ( !(_BYTE)a5 )
  {
    v13 = sub_191BD20((__int64)a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), a7, a8, (__int64)a3, a4, a5, a6);
    *a2 = v13;
    if ( v13 == 1 )
      return 0;
  }
  v14 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v15 = sub_191BD20((__int64)a1, v14, a7, a8, (__int64)a3, a4, a5, a6);
  *a3 = v15;
  if ( v15 == 1 )
    return 0;
  v17 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 57;
  if ( (unsigned int)v19 <= 1
    || (v18 = sub_18BBF30(
                *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
                (__int64)v14,
                v18,
                v19),
        v15 = *a3,
        v18) )
  {
    v50 = *(_QWORD *)(v18 + 32);
  }
  else
  {
    v50 = v17;
  }
  v20 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 57 <= 1
    || (v55 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 8),
        v53 = v18,
        v36 = sub_18BBF30(v21, (__int64)v14, v18, v20),
        v18 = v53,
        v20 = v55,
        (v21 = v36) != 0) )
  {
    v52 = *(_QWORD *)(v21 + 32);
    if ( !v18 )
      goto LABEL_12;
    v22 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) != 58 )
      goto LABEL_12;
  }
  else
  {
    if ( !v53 )
    {
      v52 = v55;
      v21 = 0;
      goto LABEL_23;
    }
    v37 = *(_QWORD *)(v53 + 8);
    v52 = v55;
    v22 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) != 58 )
      goto LABEL_23;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1B4 )
    goto LABEL_15;
  if ( !v21 )
    goto LABEL_23;
LABEL_12:
  v23 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) == 58 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
LABEL_15:
      sub_168B9F0((__int64)v62, a1 + 1, v9, 0x14A4u, 0);
      v59 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v25 = sub_162B6D0((__int64)v62, &v59);
      v60 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v26 = sub_162B6D0(v25, &v60);
      v27 = *a2;
      v28 = v26;
LABEL_19:
      v61 = sub_EEC8C0(v27 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v60, *(double *)a7.m128_u64);
      sub_1587DB0(v28, &v61);
      sub_15F7200(v62);
      return 0;
    }
  }
LABEL_23:
  v57 = v20;
  v56 = v21;
  v54 = v18;
  if ( !sub_9EC890(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v14, v18, v20, v16) )
  {
    sub_168B9F0((__int64)v62, a1 + 1, v9, 0x1493u, 0);
    v60 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v35 = sub_162B6D0((__int64)v62, &v60);
    v61 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v60, *(double *)a7.m128_u64);
    sub_1587DB0(v35, &v61);
    sub_15F7200(v62);
    return 0;
  }
  v39 = sub_9EC890(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v14, v54, v57, v34);
  v40 = v56;
  if ( !v39 )
  {
    sub_168B9F0((__int64)v62, a1 + 1, v9, 0x1493u, 0);
    v60 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v32 = sub_162B6D0((__int64)v62, &v60);
    goto LABEL_18;
  }
  if ( v54 )
  {
    v41 = *(_DWORD *)(v54 + 20);
    if ( !v56 )
    {
      v49 = sub_A76A60(a1[31], v52, v41);
      *a3 = sub_160A600(
              (__int64)a1,
              *a3 & 0xFFFFFFFFFFFFFFFELL,
              v49,
              0x1Au,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
      return v17;
    }
    if ( *(_DWORD *)(v56 + 20) != v41 )
    {
      sub_168B9F0((__int64)v62, a1 + 1, v9, 0x14C7u, 0);
      v58 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v29 = sub_162B6D0((__int64)v62, &v58);
      v30 = *a3;
      goto LABEL_17;
    }
    v42 = a1[29];
    if ( (*(_BYTE *)(v42 + 47) & 0x20) == 0 && (*(_BYTE *)(v42 + 13) & 4) == 0 )
    {
      v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v45 = *(_BYTE *)(v44 + 16);
      if ( *(_BYTE *)(v43 + 16) == 13 )
      {
        if ( v45 == 13 )
        {
          if ( v43 != v44 )
            goto LABEL_50;
          return v17;
        }
        v44 = 0;
      }
      else
      {
        v43 = 0;
        if ( v45 != 13 )
          return v17;
      }
LABEL_50:
      v51 = sub_A97D20(a1[31], v43);
      if ( v51 != sub_A97D20(a1[31], v44) )
      {
        sub_168B9F0((__int64)v62, a1 + 1, v9, 0x1D23u, 0);
        v58 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
        v46 = sub_162B6D0((__int64)v62, &v58);
        v59 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
        v47 = sub_162B6D0(v46, &v59);
        v60 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v59, *(double *)a7.m128_u64);
        v48 = sub_1587DB0(v47, &v60);
        v61 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v60, *(double *)a7.m128_u64);
        sub_1587DB0(v48, &v61);
        sub_15F7200(v62);
      }
    }
    return v17;
  }
  result = v57;
  if ( !v10 )
  {
    if ( v50 != v52 )
    {
      *a2 = sub_160A600(
              (__int64)a1,
              *a2 & 0xFFFFFFFFFFFFFFFELL,
              v52,
              0x1Bu,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
      v40 = v56;
    }
    v17 = sub_A76A60(a1[31], v52, *(_DWORD *)(v40 + 20));
    *a2 = sub_160A600(
            (__int64)a1,
            *a2 & 0xFFFFFFFFFFFFFFFELL,
            v17,
            0x1Au,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    return v17;
  }
  return result;
}
