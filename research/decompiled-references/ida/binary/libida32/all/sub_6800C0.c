unsigned __int64 __fastcall sub_6800C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1648);
  result = sub_67FE60(
             *(_QWORD *)(a2 + 8),
             *(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 4),
             (__int64 *)(v3 + 40),
             a3 == 0);
  *(_QWORD *)(v3 + 64) = -1;
  return result;
}

