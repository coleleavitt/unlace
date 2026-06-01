__int64 __fastcall sub_7A3430(__int64 a1)
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
    return *(_BYTE *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) >> 7;
  }
  return result;
}

