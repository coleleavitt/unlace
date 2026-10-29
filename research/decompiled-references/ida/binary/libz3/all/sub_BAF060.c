__int64 __fastcall sub_BAF060(__int64 a1)
{
  __int64 v2; // r13
  size_t v3; // r12
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  unsigned int *v7; // rbp
  __int64 v8; // r15
  unsigned int v9; // eax
  _DWORD *v10; // rdi
  bool v11; // cl
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  void *v15; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+0h] [rbp-88h]
  int v22[2]; // [rsp+8h] [rbp-80h]
  int v23[2]; // [rsp+10h] [rbp-78h] BYREF
  double v24; // [rsp+18h] [rbp-70h] BYREF
  int v25[2]; // [rsp+20h] [rbp-68h] BYREF
  char v26[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-48h] BYREF
  void *v30; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v3 = sub_15D1F10(**(_QWORD **)(a1 + 16));
  sub_BAE160(*(_QWORD *)(a1 + 8), v3, (double *)v23, &v24);
  v6 = sub_15DC610(
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
         v23[0],
         1,
         (int)v25,
         v4,
         v5,
         v21,
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
         v23[0],
         SLODWORD(v24),
         **(_QWORD **)(a1 + 16),
         v26[0],
         v27,
         v28,
         v29,
         v30);
  v7 = (unsigned int *)v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  sub_180C5A0(v26, "bv");
  v9 = sub_15DA4C0(v8 + 560, v26);
  if ( v9 == -1 )
    goto LABEL_17;
  v10 = *(_DWORD **)(v2 + 8672);
  if ( !v10 )
  {
LABEL_19:
    v11 = 0;
    goto LABEL_8;
  }
  if ( v9 >= *(v10 - 1) )
  {
LABEL_17:
    v11 = 0;
    v10 = nullptr;
    goto LABEL_8;
  }
  v10 = *(_DWORD **)&v10[2 * v9];
  if ( !v10 )
    goto LABEL_19;
  v10 = __dynamic_cast(
          v10,
          (const struct __class_type_info *)&`typeinfo for'smt::theory,
          (const struct __class_type_info *)&`typeinfo for'smt::theory_bv,
          0);
  v11 = v10 != nullptr;
LABEL_8:
  v27 = 0;
  v12 = *(_QWORD *)(v2 + 8656);
  v28 = 0;
  v29 = 1;
  v30 = nullptr;
  if ( v12
    && (v13 = *v7, (unsigned int)v13 < *(_DWORD *)(v12 - 4))
    && *(_QWORD *)(v12 + 8 * v13)
    && v11
    && (unsigned __int8)sub_AB6550((__int64)v10, v7, (__int64)&v27) )
  {
    v18 = *(_QWORD *)(a1 + 8) + 56LL;
    v19 = sub_182D050(qword_1C7F2C0, &v27);
    v20 = sub_1625BE0(v18, v19, v3);
    v15 = qword_1C7F2C0;
    v14 = v20;
  }
  else
  {
    v14 = sub_1625BE0(*(_QWORD *)(a1 + 8) + 56LL, 0, v3);
    v15 = qword_1C7F2C0;
  }
  sub_182CBA0(v15, &v27);
  sub_182CBA0(v15, &v29);
  if ( v7[2]-- == 1 )
    sub_15D7BC0(*(_QWORD *)v22, v7);
  return v14;
}

