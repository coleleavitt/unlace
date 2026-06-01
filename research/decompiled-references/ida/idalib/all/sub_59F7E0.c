__int64 __fastcall sub_59F7E0(__int64 a1, int *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rax
  __int64 (__fastcall *v7)(__int64, __int64, int); // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-50h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v17; // [rsp+10h] [rbp-40h]
  unsigned __int64 v18; // [rsp+20h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v4 == sub_3DB7B0 )
    v5 = (unsigned __int64 *)(a2 + 4);
  else
    v5 = (unsigned __int64 *)v4((__int64)a2);
  if ( a3 < *v5 || a3 >= v5[1] )
    return a1;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 40LL);
  if ( v7 != sub_598D40 )
  {
    v9 = v7((__int64)a2, a3, 0);
LABEL_9:
    if ( a3 != v9 )
      return a1;
    goto LABEL_10;
  }
  v8 = switch_dbctx(a2[2]);
  if ( !(unsigned __int8)sub_7BE710(*(_QWORD *)(v8 + 1672) + 2400LL, v8, a3, 4176) )
  {
    v9 = sub_7BEBF0(*(_QWORD *)(v8 + 1672) + 2400LL, v8, a3, 80);
    goto LABEL_9;
  }
LABEL_10:
  v10 = switch_dbctx(a2[2]);
  v11 = sub_3BDE50(*(_QWORD **)(v10 + 1672), a3);
  ptr = nullptr;
  v17 = 0;
  get_ea_diffpos_name(&ptr, v11);
  v12 = switch_dbctx(a2[2]);
  v13 = *(__int64 **)(v12 + 1672);
  sub_7BE710(v13 + 300, v12, a3, 65);
  v14 = sub_3BDE50(v13, a3);
  sub_3BEFF0(v13, &v15, v14);
  sub_35A790((char **)a1);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return a1;
}
