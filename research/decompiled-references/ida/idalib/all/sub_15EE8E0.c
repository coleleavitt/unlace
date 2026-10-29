__int64 __fastcall sub_15EE8E0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *a1 = 4;
  result = *(_QWORD *)(a2 + 16);
  a1[1] = result;
  return result;
}
