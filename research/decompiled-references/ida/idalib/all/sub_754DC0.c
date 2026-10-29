__int64 __fastcall sub_754DC0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1568);
  *(_DWORD *)(result + 65552) = a2;
  *(_DWORD *)(result + 65548) = -1;
  return result;
}
