__int64 __fastcall sub_652960(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = a2;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 1704LL);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)(v6 + 40);
  if ( a4 )
  {
    *(_QWORD *)(v6 + 32) = result | v7;
    *(_QWORD *)(v6 + 40) = a3 | v8;
  }
  else
  {
    result = ~result;
    *(_QWORD *)(v6 + 32) = result & v7;
    *(_QWORD *)(v6 + 40) = ~a3 & v8;
  }
  return result;
}
