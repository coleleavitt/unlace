__int64 __fastcall sub_FFFE10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1001100(a1, a2, *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL));
  *(_QWORD *)(a1 + 8) = a3;
  return result;
}
