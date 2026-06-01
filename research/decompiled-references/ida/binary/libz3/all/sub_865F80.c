__int64 __fastcall sub_865F80(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) + 24LL * *(unsigned int *)(a1 + 16);
  *(_DWORD *)(result + 4) = 0;
  return result;
}

