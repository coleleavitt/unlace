__int64 __fastcall sub_A4F1C0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  *a1 = result;
  return result;
}
