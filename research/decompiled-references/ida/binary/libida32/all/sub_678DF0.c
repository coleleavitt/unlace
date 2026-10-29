unsigned __int64 __fastcall sub_678DF0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1648);
  result = sub_678CA0((__int64 *)(v3 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8), a3 == 1);
  *(_QWORD *)(v3 + 64) = -1;
  return result;
}

