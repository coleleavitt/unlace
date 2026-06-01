__int64 __fastcall sub_1919BF0(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v8; // r15
  unsigned __int8 v9; // r13
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned int v22; // r10d
  char v23; // al
  unsigned __int64 v25; // rsi
  char v26; // al
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // dl
  __int16 v31; // ax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // eax
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r13
  __int64 v43; // rdx
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r14
  bool v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  unsigned int v58; // eax
  unsigned __int64 v59; // rax
  char v60; // al
  unsigned int v61; // [rsp+8h] [rbp-120h]
  unsigned int v62; // [rsp+8h] [rbp-120h]
  unsigned int v63; // [rsp+8h] [rbp-120h]
  __int64 v64; // [rsp+8h] [rbp-120h]
  unsigned int v65; // [rsp+10h] [rbp-118h]
  __int64 v66; // [rsp+18h] [rbp-110h]
  unsigned int v67; // [rsp+24h] [rbp-104h]
  __int64 v68[2]; // [rsp+28h] [rbp-100h] BYREF
  unsigned int v69; // [rsp+3Ch] [rbp-ECh] BYREF
  unsigned __int64 v70; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-E0h] BYREF
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-D0h]
  _BYTE v74[200]; // [rsp+60h] [rbp-C8h] BYREF

  v8 = a5;
  v9 = a4;
  v12 = a3;
  v13 = *a3;
  v68[0] = a2;
  v70 = v13;
  v14 = &v70;
  if ( !a6 )
    v12 = &v70;
  v15 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 42
    || (v15 = sub_18BBDD0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)&v70, a4)) != 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) != 42 )
    {
      v16 = sub_18BBDD0(
              *(_QWORD *)(*(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              (__int64)v14,
              a4);
      if ( !v16 )
      {
        if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
          goto LABEL_17;
        goto LABEL_7;
      }
    }
    if ( (unsigned __int8)sub_F6A690(
                            *(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL),
                            21,
                            (__int64)v14,
                            a4,
                            a5)
      && !(unsigned __int8)sub_F6A690(*(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL), 21, v17, a4, a5) )
    {
      v54 = sub_C00A40(*v12 & 0xFFFFFFFFFFFFFFFELL, 21, v53, a4, a5);
      sub_168B9F0((__int64)&ptr, a1 + 1, v54, 0x1BDFu, 0);
      v71 = sub_EEC8C0(*v12 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&ptr, (__int64 *)&v71);
      sub_15F7200(&ptr);
    }
  }
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
  {
LABEL_17:
    v25 = *v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(v25 + 8) == *(_QWORD *)(a1[31] + 19080LL) )
    {
      v55 = sub_1BE7B70(a1, v25, v68[0], 0, &ptr, 0);
      if ( !v55 )
        return 18;
      *v12 = sub_1BD6F50(a1, *v12 & 0xFFFFFFFFFFFFFFFELL, ptr, v55);
    }
    v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    goto LABEL_19;
  }
LABEL_7:
  v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (_BYTE)v19 != 48 && (_BYTE)v19 != 7 )
  {
    v20 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( v9 )
    {
      v21 = sub_6D5440(v68);
      *v12 = sub_1BFA490(a1, *v12 & 0xFFFFFFFFFFFFFFFELL, v21, 0, 0);
    }
    else
    {
      v39 = sub_6D5440(v68);
      sub_1BFA460((unsigned int)&ptr, (_DWORD)a1, *v12 & 0xFFFFFFFE, v39, 0, 0, 0, 0, 0);
      if ( ((((unsigned int)ptr & 0x7FFFFFFF) + 2147483645) & 0x7FFFFFFD) == 0 )
      {
        if ( ((unsigned int)ptr & 0x7FFFFFFF) == 3 )
          sub_1BD22E0(v74);
        return 18;
      }
      v59 = sub_6D5440(v68);
      *v12 = sub_19AFC70(a1, *v12 & 0xFFFFFFFFFFFFFFFELL, v59, &ptr, 0, 0);
      if ( ((unsigned int)ptr & 0x7FFFFFFF) == 3 )
        sub_1BD22E0(v74);
    }
    v22 = 18;
    if ( *v12 != 1 )
    {
      if ( (*(_BYTE *)(a1[29] + 107LL) & 0x14) == 0 )
        return 0;
      v23 = sub_19D1230(a1[92], v68[0], v20);
      v22 = 17;
      if ( v23 )
        return 0;
    }
    return v22;
  }
LABEL_19:
  if ( (unsigned int)(v19 - 43) > 1 )
  {
    v38 = sub_19179A0((__int64)a1, (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFELL), v9, a4, a5, v18, a7, a8);
    *v12 = v38;
    if ( v38 == 1 )
      return 18;
  }
  v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_F64D20(v68) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL);
  if ( (v26 & 0xF7) != 0x22 && v26 != 11
    || ((v27 = *v12 & 0xFFFFFFFFFFFFFFFELL, (*(_BYTE *)a1[29] & 8) == 0)
     || (v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL),
         *(_BYTE *)(v28 + 16) != 13)
     || ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) != 0x1E8)
    && !(unsigned int)sub_BFE6E0(v27, a1[31], 1, *(double *)a7.m128_u64) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v30 = *(_BYTE *)(v29 + 16);
    if ( (*(_BYTE *)a1[29] & 8) != 0 )
    {
      if ( v30 != 13 )
        goto LABEL_42;
      v31 = (*(_WORD *)(v29 + 18) >> 3) & 0x1FF;
      if ( v31 != 436 )
      {
LABEL_40:
        if ( v31 == 495 && (unsigned int)sub_BFE6E0(*v12 & 0xFFFFFFFFFFFFFFFELL, a1[31], 1, *(double *)a7.m128_u64) )
        {
          v57 = sub_160A600(
                  (__int64)a1,
                  *v12 & 0xFFFFFFFFFFFFFFFELL,
                  v68[0],
                  0xDu,
                  0,
                  0,
                  *(double *)a7.m128_u64,
                  *(double *)a8.m128_u64,
                  0);
          v22 = 0;
          *v12 = v57;
          return v22;
        }
LABEL_42:
        v22 = sub_18D2070(
                (__int64)a1,
                v68[0],
                v12,
                (unsigned int *)&v71,
                a6,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64);
        if ( v22 != 18 )
        {
          if ( v68[0] == *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8) )
            return v22;
          v34 = a1[31];
          v61 = v22;
          v35 = sub_F67970(v68, v34);
          v22 = v61;
          v36 = v35;
          ptr = (void *)(*v12 & 0xFFFFFFFFFFFFFFFELL);
          v37 = a1[29];
          if ( (*(_BYTE *)(v37 + 107) & 0x14) != 0 )
          {
            v34 = 0;
            v56 = sub_19E4440(a1[92], 0, v36, (unsigned int)&ptr, 0, v9, v8, 0, 0);
            v22 = v61;
            if ( v56 && !v9 )
              return 18;
            v37 = a1[29];
          }
          if ( (*(_BYTE *)(v37 + 2) & 4) == 0
            || (v67 = v22,
                v64 = a1[92],
                v66 = *((_QWORD *)ptr + 1),
                v58 = sub_EEB7E0((unsigned __int64)ptr, v34, *(double *)a7.m128_u64),
                !(unsigned __int8)sub_19E21D0(v64, v58, v68[0], v66, &ptr, v9))
            && (v60 = sub_19DC760(a1[92], v68[0], &ptr, v9), v22 = v67, !v60) )
          {
            if ( a6 )
            {
              v62 = v22;
              *v12 = sub_160A600(
                       (__int64)a1,
                       (unsigned __int64)ptr,
                       v36,
                       v71,
                       0,
                       0,
                       *(double *)a7.m128_u64,
                       *(double *)a8.m128_u64,
                       0);
              return v62;
            }
            return v22;
          }
          if ( v9 )
          {
            *v12 = (unsigned __int64)ptr;
            return 0;
          }
        }
        return 18;
      }
      v32 = *v12 & 0xFFFFFFFFFFFFFFFELL;
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v33 + 16) != 13 || ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) != 0x1E8 || !a6 && !v9 )
        goto LABEL_42;
      ptr = v74;
      v73 = 0x400000000LL;
      sub_1BDAA60((_DWORD)a1, v32, *(_QWORD *)(a1[31] + 19056LL), (unsigned int)&v71, (unsigned int)&ptr, 0, v9);
      if ( a6 )
        *v12 = sub_160A600(
                 (__int64)a1,
                 *v12 & 0xFFFFFFFFFFFFFFFELL,
                 *(_QWORD *)(a1[31] + 19056LL),
                 v71,
                 0,
                 (__int64)&ptr,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64,
                 0);
      if ( ptr != v74 )
        free(ptr);
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v30 = *(_BYTE *)(v29 + 16);
    }
    if ( v30 != 13 )
      goto LABEL_42;
    v31 = (*(_WORD *)(v29 + 18) >> 3) & 0x1FF;
    goto LABEL_40;
  }
  if ( !a6 && !v9 )
    return 0;
  v40 = *v12;
  ptr = v74;
  v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
  v73 = 0x400000000LL;
  sub_1BDAA60((_DWORD)a1, v41, v68[0], (unsigned int)&v69, (unsigned int)&ptr, 0, v9);
  if ( v69 == 5
    || (*(_BYTE *)(a1[29] + 1LL) & 8) != 0
    || (v42 = *v12 & 0xFFFFFFFFFFFFFFFELL, (int)sub_EEB7E0(v42, v41, *(double *)a7.m128_u64) < 0) )
  {
    v22 = 0;
  }
  else
  {
    v43 = *(_QWORD *)&byte_8[*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL];
    v71 = v43 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v43 | (unsigned __int8)*(_QWORD *)(v42 + 8)) & 7;
    v44 = sub_6D5440(&v71);
    v71 = *(_QWORD *)&byte_8[v68[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v68[0] & 0xFFFFFFFFFFFFFFF0LL] | LOBYTE(v68[0])) & 7;
    v45 = sub_6D5440(&v71);
    v46 = sub_F67340(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL));
    v22 = 0;
    if ( v46
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      v50 = sub_C00A40(*v12 & 0xFFFFFFFFFFFFFFFELL, v41, v47, v48, v49);
      v22 = sub_18BF570(a1, v45, v44, v50, v51, v52) != 0;
    }
  }
  if ( a6 )
  {
    v65 = v22;
    *v12 = sub_160A600(
             (__int64)a1,
             *v12 & 0xFFFFFFFFFFFFFFFELL,
             v68[0],
             v69,
             0,
             (__int64)&ptr,
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64,
             0);
    v22 = v65;
  }
  if ( ptr != v74 )
  {
    v63 = v22;
    free(ptr);
    return v63;
  }
  return v22;
}
