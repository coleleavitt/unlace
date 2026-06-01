__int64 __fastcall sub_6A6800(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // esi
  unsigned int v4; // ecx
  __int64 v5; // rdx

  result = *(unsigned __int8 *)(a1 + 88);
  v2 = *(_BYTE *)(a1 + 88) & 0xF0;
  if ( (result & 0xF0) == 0xC0 )
    v2 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)(v2 - 208) > 0x2F )
  {
    v3 = -48;
    v4 = v2 & 0xFFFFFFF0;
    if ( (v2 & 0xFFFFFFF0) != 0x40 )
    {
      if ( v4 > 0x70 )
      {
        if ( (v2 & 0xFFFFFFE0) == 0x80 )
          v3 = -32;
        else
          v3 = -16;
      }
      else
      {
        v3 = -16;
        if ( v4 > 0x4F )
        {
          v5 = 0x100010001LL;
          *(_DWORD *)(a1 + 28) = 0;
          result = (_bittest64(&v5, v4 - 80) == 0 ? -16 : -32) | (unsigned int)(result & 0xF);
          *(_BYTE *)(a1 + 88) = result;
          return result;
        }
      }
    }
    *(_DWORD *)(a1 + 28) = 0;
    result = v3 | (unsigned int)(result & 0xF);
    *(_BYTE *)(a1 + 88) = result;
  }
  return result;
}
