__int64 __fastcall sub_7D04C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 5 * (unsigned int)*(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 56) += result;
  return result;
}

