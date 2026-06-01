__int64 __fastcall sub_872150(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(*(_QWORD *)(result + 16) + 8LL);
  return result;
}

