__int64 __fastcall sub_4B0740(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 result; // rax

  v3 = a1 + 1;
  *(v3 - 1) = a2;
  sub_16669D0(v3, a2);
  result = *a1;
  a1[4] = 0;
  a1[6] = 0;
  a1[3] = result;
  return result;
}

