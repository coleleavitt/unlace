unsigned __int64 __fastcall sub_1921D60(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // r14
  __int64 *v40; // r15
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9

  sub_18D4200((__int64)a1, a2, a3, a4, 0, *(double *)a6.m128_u64);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1E2 )
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  v15 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1E2 )
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  v17 = *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v18 <= 1 )
  {
    v19 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 57;
    if ( (unsigned int)v19 > 1 )
      v17 = sub_18BBF30(
              *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
              (__int64)a2,
              v19,
              v18);
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1E2 )
      return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
    v15 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 57;
    if ( (unsigned int)v22 > 1 )
      v21 = sub_18BBF30(v21, (__int64)a2, v22, v18);
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1E2 )
      return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  v24 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL);
  v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v26 <= 1
    || (v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3
                                                                                                & 0xFFFFFFFFFFFFFFFELL)
                                                                                               + 8)
                                                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                                                       + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 57,
        (unsigned int)v26 <= 1) )
  {
    if ( sub_F61A60(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v26, v18, v11, v12)
      && sub_F61A60(
           *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
           (__int64)a2,
           v27,
           v28,
           v29,
           v30)
      || (*(_BYTE *)(a1[29] + 89) & 1) != 0
      && (sub_F580C0(*(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))
       || sub_F580C0(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))) )
    {
      return sub_1918B10(a1, a2, a3, a4, a5, (*(_BYTE *)(a1[29] + 13) & 2) != 0, a6, a7, 0, 0, 1);
    }
    return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
  }
  if ( sub_F58380(v25) || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    if ( !sub_F61A60(
            *(_QWORD *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)a2,
            v31,
            v32,
            v33,
            v34)
      || !sub_F61A60(
            *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)a2,
            v43,
            v44,
            v45,
            v46) )
    {
      return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
    }
    return sub_1918440((__int64)a1, a2, a3, a4, a5, 0, a6, a7);
  }
  else
  {
    v35 = sub_191F280((__int64)a1, a2, a3, a4, 4 * (unsigned int)(a5 != 0), a6, a7);
    v39 = v35;
    if ( *a2 != 1 && *a3 != 1 )
    {
      v40 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0
        && (sub_9EC890(*v40, (__int64)a2, v36, v37, v38) || (*(_BYTE *)(a1[29] + 89) & 1) != 0 && sub_F58060(*v40)) )
      {
        sub_18CAD50((__int64)a1, a3, a4, 0, *(double *)a6.m128_u64, v41, v42);
        return v39;
      }
      return sub_18F40B0((__int64)a1, a4, a2, a3, *(double *)a6.m128_u64);
    }
    return 0;
  }
}
