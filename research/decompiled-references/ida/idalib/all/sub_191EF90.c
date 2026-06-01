__int64 __fastcall sub_191EF90(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        int a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // [rsp+0h] [rbp-48h]
  __int64 v48; // [rsp+0h] [rbp-48h]

  sub_18D4200((__int64)a1, a2, a3, a4, 0, *(double *)a7.m128_u64);
  v16 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    if ( (*(_BYTE *)(a1[29] + 13) & 4) == 0 )
      return sub_191E8A0(a1, a2, a3, a4, a6, v15, a7, a8);
    if ( (v17 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
          v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 57,
          (unsigned int)v18 > 1)
      && (v17 = sub_18BBF30(v17, (__int64)a2, v18, v14)) == 0
      || ((*(_BYTE *)(v17 + 18) >> 3) & 0xF) != 3 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v20 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 57;
      if ( (unsigned int)v20 > 1 )
      {
        v19 = sub_18BBF30(v19, (__int64)a2, v20, v14);
        if ( !v19 )
          return sub_191E8A0(a1, a2, a3, a4, a6, v15, a7, a8);
      }
      if ( ((*(_BYTE *)(v19 + 18) >> 3) & 0xF) != 3 )
        return sub_191E8A0(a1, a2, a3, a4, a6, v15, a7, a8);
    }
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a7.m128_u64);
  }
  if ( sub_F58380(v16) || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
    return sub_191E2A0((__int64)a1, a2, a3, a4, a6, v22, a7, a8);
  v47 = *a2;
  v25 = sub_191BD20((__int64)a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), a7, a8, *a2, v23, v24, v22);
  v29 = v47;
  *a2 = v25;
  if ( v25 != 1 )
  {
    v48 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( a6 )
      *a2 = v29;
    v30 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
    v31 = sub_191BD20((__int64)a1, v30, a7, a8, v29, v26, v27, v28);
    *a3 = v31;
    if ( v31 != 1 )
    {
      v35 = *(_QWORD *)((v31 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v36 = v48 & 0xFFFFFFFFFFFFFFF0LL;
      v37 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v38 + 16) == 13 && (((*(_WORD *)(v38 + 18) >> 3) + 56) & 0x1FFu) <= 0x17
         || sub_9EC890(v37, (__int64)v30, v36, v32, v33)
         || sub_F61A60(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v30, v48 & 0xFFFFFFFFFFFFFFF0LL, v32, v33, v34))
        && sub_F61A60(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v30, v36, v32, v33, v34)
        && !(unsigned __int8)sub_18BAE10(v48, (__int64)v30, v39, v40, v41, v42)
        && !(unsigned __int8)sub_18BAE10(v35, (__int64)v30, v43, v44, v45, v46) )
      {
        sub_18DA630(a1, (__int64 *)a2, (__int64 *)a3, a4, a5, v48, *(double *)a7.m128_u64);
        return v48;
      }
      return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a7.m128_u64);
    }
  }
  return 0;
}
