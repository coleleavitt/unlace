__int64 __fastcall sub_41D110(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1600LL);
  result = 0;
  if ( *(_QWORD *)(v5 + 8) != a2 )
  {
    *(_QWORD *)(v5 + 8) = a2;
    result = sub_41CC80(a1, a2, a3, a4, a5);
    *(_QWORD *)(v5 + 8) = -1;
  }
  return result;
}
