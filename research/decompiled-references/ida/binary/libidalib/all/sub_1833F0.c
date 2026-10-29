__int64 __fastcall sub_1833F0(__int64 **a1, __int64 a2, unsigned __int8 *a3, signed __int64 a4, size_t a5)
{
  __int64 result; // rax

  result = sub_182C10(a1, a3, a4, 0, a5);
  *(_DWORD *)(result + 8) = 5;
  *(_QWORD *)result = a2;
  return result;
}

