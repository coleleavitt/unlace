__int64 __fastcall sub_836360(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = operator new(0x8090u);
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = a1;
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)result = off_2B3CAE0;
  *(_DWORD *)(result + 32904) = a2;
  return result;
}
