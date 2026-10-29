__int64 __fastcall sub_A92A30(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // r12
  __int64 result; // rax

  if ( a2 == a3 )
    return a2;
  v5 = sub_A92560(a1, a2, a4);
  result = sub_A92560(a1, a3, 0);
  if ( result != v5 )
    return 0;
  return result;
}

