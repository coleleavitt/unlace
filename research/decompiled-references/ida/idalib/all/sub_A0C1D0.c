__int64 __fastcall sub_A0C1D0(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  int v3; // eax
  int v4; // edx
  __int64 result; // rax

  sub_A0BF10(a1, a2);
  v2 = *(_BYTE *)(*a1)++;
  v3 = v2;
  v4 = v2 & 7;
  if ( v4 )
    *(_BYTE *)(a2 + 112) = *(_BYTE *)(a2 + 112) & 0x8F | (16 * v4);
  if ( ((v3 >> 3) & 1) != 0 )
    *(_BYTE *)(a2 + 112) = *(_BYTE *)(a2 + 112) & 0xF3 | 4 | (8 * (((v3 >> 3) & 2) != 0));
  result = (unsigned int)(v3 >> 5);
  if ( (result & 1) != 0 )
  {
    result = *(_BYTE *)(a2 + 112) & 0xFC | 1 | (2 * (((unsigned int)result >> 1) & 1));
    *(_BYTE *)(a2 + 112) = result;
  }
  return result;
}
