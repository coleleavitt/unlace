__int64 __fastcall sub_A3FCF0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2320);
  result = 0;
  if ( (*(_BYTE *)(v1 + 17) & 0x20) != 0 )
    return (*(_DWORD *)(v1 + 16) >> 8) & 0x3DFFC0 | 0x57C2000Fu;
  return result;
}

