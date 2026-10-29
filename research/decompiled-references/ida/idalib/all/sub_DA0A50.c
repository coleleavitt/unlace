__int64 __fastcall sub_DA0A50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_E23260(a1);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 56);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
