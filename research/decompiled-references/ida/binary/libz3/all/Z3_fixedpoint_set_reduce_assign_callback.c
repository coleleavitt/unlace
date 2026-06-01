__int64 __fastcall Z3_fixedpoint_set_reduce_assign_callback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(result + 24) = a3;
  return result;
}

