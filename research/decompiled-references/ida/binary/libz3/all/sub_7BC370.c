__int64 __fastcall sub_7BC370(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 result; // rax

  v2 = a2 >> 1;
  sub_7BC120(a1, v2);
  result = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(result + 8LL * v2) = 0;
  return result;
}

