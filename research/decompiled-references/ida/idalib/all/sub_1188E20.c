_QWORD *__fastcall sub_1188E20(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 8);
  **(_DWORD **)a1 = *(_DWORD *)(a2 + 64);
  *result = a3;
  return result;
}
