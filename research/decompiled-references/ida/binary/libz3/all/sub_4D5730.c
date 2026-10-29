__int64 *__fastcall sub_4D5730(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_186B270(0x20u);
  *(_QWORD *)v2 = off_1C4F4C0;
  *(_QWORD *)(v2 + 16) = a2;
  *(_DWORD *)(v2 + 24) = 0;
  *a1 = v2;
  *(_DWORD *)(v2 + 8) = 1;
  return a1;
}

