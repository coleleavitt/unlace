__int64 __fastcall sub_27B20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  result = 0;
  if ( *(_DWORD *)a1 == 4
    && *(_BYTE *)(a1 + 64) == 1
    && *(_BYTE *)(a1 + 32) == 2
    && *(_DWORD *)(a1 + 68) == 8
    && (a2 == -1 || *(_QWORD *)(a1 + 24) == a2) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    result = 0;
    if ( v3
      && *(_QWORD *)(v3 + 24) == *(_QWORD *)(a1 + 24)
      && *(_DWORD *)v3 == 4
      && *(_BYTE *)(v3 + 32) == 1
      && (*(_QWORD *)(v3 + 64) & 0xFFFFFFFF000000FFLL) == 0x200000001LL )
    {
      v4 = *(_QWORD *)(v3 + 16);
      result = 1;
      if ( v4 )
        return *(_BYTE *)(v4 + 4) >> 7;
    }
  }
  return result;
}
