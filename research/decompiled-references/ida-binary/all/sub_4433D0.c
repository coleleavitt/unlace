__int64 __fastcall worklists_edit_view_action_t__::vfunc_3(__int64 a1, __int64 a2)
{
  int v2; // r14d
  _QWORD *v3; // rax
  QT::QAbstractItemView *v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi

  v2 = 0;
  v3 = sub_426230(a1, (const char *)a2);
  v4 = *(QT::QAbstractItemView **)a2;
  v5 = (__int64)v3;
  v6 = *(__int64 **)(a2 + 200);
  v7 = *v6;
  v8 = *v6 + 16 * v6[1];
  if ( v8 == *v6 )
    return v2 & (*(unsigned __int8 *)(a1 + 8) ^ 1u);
  while ( 1 )
  {
    v9 = sub_443320(v4, v7);
    if ( v9 )
      break;
LABEL_5:
    v7 += 16;
    if ( v8 == v7 )
      return v2 & (*(unsigned __int8 *)(a1 + 8) ^ 1u);
  }
  if ( !sub_4175F0(v5, v9) )
  {
    v2 = 1;
    goto LABEL_5;
  }
  return *(unsigned __int8 *)(a1 + 8);
}
