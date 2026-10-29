unsigned __int64 __fastcall sub_1044D10(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // esi

  result = 32;
  if ( *(_DWORD *)(a1 + 248) != 25 )
  {
    if ( a2 > 0x18 )
      v3 = a2 - 25;
    else
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * a2);
    return (-(__int64)(((v3 - 3) & 0xFFFFFFFD) == 0) & 0xFFFFFFFFFFFFFFE0LL) + 64;
  }
  return result;
}

