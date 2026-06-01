__int64 __fastcall sub_ECA090(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16) + a2)) = a3;
  return result;
}

