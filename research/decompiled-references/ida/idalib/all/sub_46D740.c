__int64 __fastcall sub_46D740(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rax
  void *v12; // rbx
  __int64 first_fcref_to; // r15
  __int64 *v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // [rsp+0h] [rbp-1B8h]
  void *v22; // [rsp+8h] [rbp-1B0h]
  _BYTE v23[360]; // [rsp+10h] [rbp-1A8h] BYREF
  _QWORD v24[8]; // [rsp+178h] [rbp-40h] BYREF

  v9 = (unsigned int)a1;
  v10 = a5;
  v24[0] = __readfsqword(0x28u);
  v11 = a1[13];
  if ( (_WORD)v11 && v11 <= a3 )
    return 0;
  v12 = (void *)(a3 + a2);
  switch_dbctx(*(int *)(a4 + 4LL * a6 + 16));
  if ( (get_flags_ex(v12, 4) & 0x1000) == 0
    || (HIDWORD(v22) = 0, first_fcref_to = get_first_fcref_to(v12), first_fcref_to == -1)
    && (HIDWORD(v22) = 1, first_fcref_to = get_first_dref_to(v12), first_fcref_to == -1) )
  {
    switch_dbctx(*(int *)(a4 + 4 * v10 + 16));
    return 0;
  }
  BYTE3(v22) = sub_410E80();
  v15 = *(__int64 **)(switch_dbctx(*(int *)(a4 + 4 * v10 + 16)) + 1672);
  v16 = sub_3BE900(v15, (unsigned __int64)v12, 0);
  v17 = v16;
  BYTE1(v16) |= 0x10u;
  sub_3D07C0(v15, v12, v16);
  sub_4111A0(
    v15,
    first_fcref_to,
    v12,
    SBYTE4(v22),
    SBYTE3(v22),
    a7,
    a8,
    v18,
    v21,
    v22,
    *(__int64 *)v23,
    *(int *)&v23[8],
    *(int *)&v23[16],
    *(int *)&v23[24],
    *(int *)&v23[32],
    *(int *)&v23[40],
    *(int *)&v23[48],
    *(int *)&v23[56],
    *(int *)&v23[64],
    *(int *)&v23[72],
    *(int *)&v23[80],
    *(int *)&v23[88],
    *(__int64 *)&v23[96]);
  v20 = &v23[40];
  memset(v23, 255, 24);
  *(_QWORD *)&v23[24] = 0;
  *(_QWORD *)&v23[32] = 0;
  do
  {
    *(_WORD *)v20 = 0;
    v20 += 5;
    *((_WORD *)v20 - 19) = 0;
    *((_WORD *)v20 - 18) = 0;
    *((_DWORD *)v20 - 2) = 0;
    *((_WORD *)v20 - 17) = 0;
    *((_OWORD *)v20 - 2) = 0;
    *(v20 - 2) = 0;
  }
  while ( v24 != v20 );
  qmemcpy(a1, v23, 0x168u);
  LOBYTE(v9) = (int)decode_insn(a1, a2, v24, 0, 0, v19, 0.0) > 0;
  sub_3E3B20(v15, v12);
  sub_3D07C0(v15, v12, v17);
  return v9;
}
