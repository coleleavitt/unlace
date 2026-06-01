__int64 __fastcall sub_B96D80(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  result = 0;
  if ( v1
    && (*(_BYTE *)(v1 + 10) & 0x20) != 0
    && (*(_BYTE *)(v1 + 104) & 0x18) == 0
    && (*(_DWORD *)(v1 + 104) & 0xFFFE0) == 0 )
  {
    return *(_BYTE *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 1LL) >> 7;
  }
  return result;
}
