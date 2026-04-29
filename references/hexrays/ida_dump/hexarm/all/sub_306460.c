bool __fastcall sub_306460(__int64 a1)
{
  __int64 v2; // rdi
  __int64 func; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    return v2 != 0;
  func = get_func(*(_QWORD *)(a1 + 80));
  if ( !func )
  {
LABEL_10:
    v2 = *(_QWORD *)(a1 + 72);
    return v2 != 0;
  }
  v9 = func;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL);
  v11 = 0;
  v10 = 0;
  sub_14C800(&v8, v5, &v9, nullptr, 1);
  sub_13FB80((_QWORD *)(a1 + 72), v5);
  v6 = v8;
  *(_QWORD *)(a1 + 72) = v8;
  if ( v6 )
    ++*(_DWORD *)(v6 + 104);
  sub_13FB80(&v8, v5);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    sub_2585A0(v2, v5, v7);
    goto LABEL_10;
  }
  return v2 != 0;
}
