__int64 __fastcall sub_15C1130(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 56);
  a1[1] = a2;
  *a1 = v2;
  result = operator new(0x10u);
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 8) = 512;
  a1[2] = result;
  return result;
}
