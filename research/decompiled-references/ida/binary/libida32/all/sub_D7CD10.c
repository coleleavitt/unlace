__int64 __fastcall sub_D7CD10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_DFF520(a1);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  result = *(unsigned int *)(a2 + 56);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}

