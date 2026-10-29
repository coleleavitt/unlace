__int64 __fastcall apply_fixup(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(qword_2CCB598 + 1672);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 1600LL);
  result = 0;
  if ( a1 != *(_QWORD *)(v5 + 8) )
  {
    *(_QWORD *)(v5 + 8) = a1;
    result = sub_41CC80(v4, a1, a2, a3, a4);
    *(_QWORD *)(v5 + 8) = -1;
  }
  return result;
}
