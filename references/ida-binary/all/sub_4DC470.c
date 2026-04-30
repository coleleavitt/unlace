__int64 __fastcall sub_4DC470(__int64 **a1, __int64 a2, unsigned __int8 *a3, signed __int64 a4)
{
  __int64 result; // rax

  result = sub_4DC0B0(a1, a3, a4, 0);
  *(_DWORD *)(result + 8) = 5;
  *(_QWORD *)result = a2;
  return result;
}
