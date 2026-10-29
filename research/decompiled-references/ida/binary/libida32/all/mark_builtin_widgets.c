__int64 __fastcall mark_builtin_widgets(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax

  v5 = a1;
  v7 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1512LL);
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 40);
  if ( a3 )
  {
    result = v5 | v8;
    *(_QWORD *)(v7 + 32) = result;
    *(_QWORD *)(v7 + 40) = a2 | v9;
  }
  else
  {
    result = ~v5 & v8;
    *(_QWORD *)(v7 + 32) = result;
    *(_QWORD *)(v7 + 40) = ~a2 & v9;
  }
  return result;
}

