__int64 __fastcall sub_83ADC0(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 8);
  *(_DWORD *)(result + 4LL * *(unsigned int *)(a1 + 16)) = *(_DWORD *)(a1 + 20);
  return result;
}

