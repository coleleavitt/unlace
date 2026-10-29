__int64 __fastcall sub_A566E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v7; // rax

  result = *(_QWORD *)(a1 + 2272);
  if ( !result )
  {
    v7 = sub_6E4280(
           (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL) + 72LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL),
           a3,
           a4,
           a5,
           a6);
    result = sub_B55780(a1, v7);
    *(_QWORD *)(a1 + 2272) = result;
  }
  return result;
}

