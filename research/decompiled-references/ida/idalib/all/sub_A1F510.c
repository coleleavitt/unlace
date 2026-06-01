__int64 __fastcall sub_A1F510(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  _DWORD v4[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( *(char *)(a2 + 15) < 0 )
  {
    v2 = 3;
  }
  else
  {
    v2 = 2;
    if ( *(char *)(a2 + 11) >= 0 )
      v2 = *(_BYTE *)(a2 + 7) >> 7;
  }
  LOBYTE(v4[0]) = v2;
  sub_227BF10(a1, v4, 1);
  v4[0] = *(_DWORD *)a2;
  result = sub_227BF10(a1, v4, 4);
  if ( *(char *)(a2 + 7) < 0 )
  {
    v4[0] = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
    result = sub_227BF10(a1, v4, 4);
  }
  if ( *(char *)(a2 + 11) < 0 )
  {
    v4[0] = *(_DWORD *)(a2 + 8) & 0x7FFFFFFF;
    result = sub_227BF10(a1, v4, 4);
  }
  if ( *(char *)(a2 + 15) < 0 )
  {
    v4[0] = *(_DWORD *)(a2 + 12) & 0x7FFFFFFF;
    return sub_227BF10(a1, v4, 4);
  }
  return result;
}
