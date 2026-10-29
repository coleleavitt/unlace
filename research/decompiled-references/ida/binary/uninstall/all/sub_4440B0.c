__int64 __fastcall sub_4440B0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = sub_444080(*(_QWORD *)(a1 + 32), a2);
  *(_QWORD *)(a1 + 24) = 0;
  return result;
}

