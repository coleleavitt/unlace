__int64 __fastcall sub_634790(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 result; // rax

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 1512);
  if ( !a2 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1480) + 8LL);
  result = sub_62F4D0(*(_QWORD *)(a1 + 1512), v4);
  if ( (_BYTE)result )
  {
    sub_52E6A0(a1, v4);
    sub_634830(v5, v4, a3);
    sub_633BB0(a1, 7u, a3 ^ 1, 0, nullptr);
    return mark_builtin_widgets(512, 0, 1);
  }
  return result;
}

