__int64 __fastcall sub_CC85C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_DFF520(a3);
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 56);
  *(_DWORD *)(a3 + 56) = result;
  return result;
}

