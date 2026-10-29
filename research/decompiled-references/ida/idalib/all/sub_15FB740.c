__int64 __fastcall sub_15FB740(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rax

  v6 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), a2, a3);
  result = sub_15C1650(a1 + 2608, v6);
  if ( !result )
  {
    v8 = *(_QWORD *)(a1 + 192);
    v9 = sub_A8A070(*(_QWORD **)(a1 + 248), a4, a2, a3);
    return sub_17B7670(a1, v9, v8, 1);
  }
  return result;
}
