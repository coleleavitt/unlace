__int64 __fastcall sub_16660B0(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_DWORD *)(a3 + 16) * ((*(_WORD *)(a3 + 2) >> 6) & 7u);
  if ( (_DWORD)result == 8 )
  {
    result = 0x554358245452432ELL;
    if ( *(_QWORD *)(a3 + 4LL * *(unsigned int *)(a3 + 4) + 20) == 0x554358245452432ELL )
      a3 = 0;
  }
  *(_QWORD *)(a1 + 1968) = a3;
  *(_DWORD *)(a1 + 1976) = a2;
  return result;
}
