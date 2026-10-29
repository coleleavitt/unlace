__int64 __fastcall sub_1842C10(int *a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned __int8 v19; // al
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r13
  size_t v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // r12
  int v29; // r13d
  __int64 v30; // rbp
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r13
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+0h] [rbp-60h]
  void *v42; // [rsp+8h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+10h] [rbp-50h]
  __int64 v44[2]; // [rsp+18h] [rbp-48h] BYREF
  __int64 v45; // [rsp+28h] [rbp-38h]

  if ( a3 == 1 || a4 == 1 )
    return 1;
  v9 = sub_B77890(*((_QWORD *)a1 + 2));
  v10 = sub_BFAB60(v9);
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v11 + 8);
  if ( (*(_BYTE *)(v11 + 17) & 4) == 0 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
      goto LABEL_8;
LABEL_16:
    v15 = (unsigned int)a1[44];
    v18 = sub_1C07820(
            *(_QWORD *)a1,
            v15,
            v10,
            (int)a1 + 32,
            (unsigned int)a3 & 0xFFFFFFFE,
            (unsigned int)a4 & 0xFFFFFFFE,
            1,
            1,
            *((_QWORD *)a1 + 2));
    if ( v18 == 1 )
      return 1;
    goto LABEL_9;
  }
  v13 = *(unsigned __int8 *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)v13 > 0x2Au )
    goto LABEL_16;
  v14 = 0x4040600007CLL;
  if ( !_bittest64(&v14, v13) && (_BYTE)v13 != 33 )
    goto LABEL_16;
LABEL_8:
  v15 = (unsigned int)a1[44];
  v18 = sub_1928110(*(_QWORD *)a1, v15, v10, a3 & 0xFFFFFFFFFFFFFFFELL, a4 & 0xFFFFFFFFFFFFFFFELL, 0);
  if ( v18 == 1 )
    return 1;
LABEL_9:
  v19 = *((_BYTE *)a1 + 24);
  if ( v19 != 2 )
  {
    if ( v19 > 2u )
    {
      if ( v19 <= 4u )
        return v18 & 0xFFFFFFFFFFFFFFFELL;
    }
    else if ( v19 == 1 )
    {
      v18 = sub_1C02150(*(_QWORD *)a1, v18 & 0xFFFFFFFFFFFFFFFELL);
      if ( v18 != 1 )
        return v18 & 0xFFFFFFFFFFFFFFFELL;
      return 1;
    }
  }
  v20 = sub_C1D490(*((_QWORD *)a1 + 2), v15, v16, v17);
  v23 = sub_18398F0((__int64)a1, v18 & 0xFFFFFFFFFFFFFFFELL, a5, v21, v22);
  if ( v23 == 1 )
    return 1;
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 17504LL);
  v25 = j__strlen("cmp");
  v26 = sub_6F3470(v24, "cmp", v25);
  v27 = sub_A81910(*(_QWORD **)(*(_QWORD *)a1 + 248LL), v20, a1[44]);
  v28 = sub_B731A0(
          *(_QWORD *)(*(_QWORD *)a1 + 248LL),
          *(_QWORD *)(*(_QWORD *)a1 + 544LL),
          a1[44],
          a1[44],
          v26,
          v20,
          (__int64)v27,
          0);
  sub_17ED4C0(*(_QWORD *)a1, v28, v23 & 0xFFFFFFFFFFFFFFFELL, 0, a5, a6);
  v29 = a1[44];
  v30 = sub_EEE9A0(24, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
  v31 = *(_WORD *)v30 & 0xFE00;
  LOBYTE(v31) = -11;
  *(_WORD *)v30 = v31;
  if ( unk_2CD7484 )
    sub_EE9B50(245);
  *(_DWORD *)(v30 + 16) = v29;
  *(_DWORD *)(v30 + 20) = v29;
  *(_QWORD *)(v30 + 8) = v28;
  v35 = sub_1837680((__int64 *)a1, v28);
  if ( v35 == 1 )
    return 1;
  v43 = sub_AAC1F0(
          *(_QWORD *)(*(_QWORD *)a1 + 248LL),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 18720LL),
          v32,
          v33,
          v34);
  if ( v43 > 0x40 )
    sub_2205470(&v42, 0, 0);
  else
    v42 = nullptr;
  v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
  v37 = sub_C0C5D0(
          *(_QWORD **)(*(_QWORD *)a1 + 248LL),
          (__int64)&v42,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 18720LL),
          a1[44]);
  if ( sub_1741750(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
    v38 = sub_1C07820(*(_QWORD *)a1, a1[44], 15, (int)a1 + 32, v36, v37, 1, 1, *((_QWORD *)a1 + 2));
  else
    v38 = sub_1928110(*(_QWORD *)a1, (unsigned int)a1[44], 15, v36, v37, 0);
  if ( v38 == 1
    || (sub_1917B40((unsigned int)v44, *(_QWORD *)a1, 0, a1[44], v38 & 0xFFFFFFFE, 0, 0), (_BYTE)v45)
    || (v39 = sub_1837680((__int64 *)a1, v28), v39 == 1)
    || (v40 = sub_1C46CA0(*(_QWORD *)a1, (unsigned int)a1[44], v39 & 0xFFFFFFFFFFFFFFFELL, 0), v40 == 1) )
  {
    result = 1;
  }
  else
  {
    result = sub_1C3A020(
               *(_QWORD *)a1,
               a1[44],
               0,
               a1[44],
               v30,
               a1[44],
               v44[0],
               v44[1],
               v45,
               v40 & 0xFFFFFFFFFFFFFFFELL,
               0,
               0);
  }
  if ( v43 > 0x40 )
  {
    if ( v42 )
    {
      v41 = result;
      operator delete[](v42);
      return v41;
    }
  }
  return result;
}
