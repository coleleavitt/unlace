unsigned __int64 __fastcall sub_4F5C60(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1568);
  result = sub_4F5B10((__int64 *)(v3 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8), a3 == 1);
  *(_QWORD *)(v3 + 8) = -1;
  return result;
}

