__int64 __fastcall sub_2FF9C0(__int64 a1)
{
  void *v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  const void *v8; // rdi
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r13
  int v15; // r12d
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  int v21; // [rsp+8h] [rbp-30h] BYREF
  char v22; // [rsp+Ch] [rbp-2Ch]

  v2 = sub_2FF930(a1);
  if ( v2 )
  {
    v3 = (__int64)v2;
    sub_97C740(v2);
  }
  else
  {
    v3 = sub_186B270(0x3B8u);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
    v14 = *(_QWORD *)(a1 + 8);
    v15 = v13;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
    sub_97CB90(v3, v16, v14, v15, v17, v18, v20);
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
    sub_8F1E10(v19, v3);
  }
  v4 = *(_QWORD *)(a1 + 8);
  sub_180C5A0(&v21, "pb");
  v5 = (unsigned int)sub_15D1320(v4 + 560, &v21);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
  if ( (_DWORD)v5 != -1 )
  {
    v7 = *(_QWORD *)(v6 + 8672);
    if ( v7 )
    {
      if ( (unsigned int)v5 < *(_DWORD *)(v7 - 4) )
      {
        v8 = *(const void **)(v7 + 8 * v5);
        if ( v8 )
        {
          if ( __dynamic_cast(
                 v8,
                 (const struct __class_type_info *)&`typeinfo for'smt::theory,
                 (const struct __class_type_info *)&`typeinfo for'smt::theory_pb,
                 0) )
          {
            return v3;
          }
        }
      }
    }
  }
  v22 = 1;
  v20 = 0;
  v21 = 1000;
  sub_15B6C70(&v21, &v20);
  sub_18572D0(&v20);
  v10 = sub_186B270(0x3C8u);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
  sub_B04810(v10, v11);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
  sub_8F1E10(v12, v10);
  return v3;
}

