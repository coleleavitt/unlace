__int64 __fastcall sub_857160(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars4; // [rsp+4h] [rbp+4h]

  vars4 &= ~1u;
  vars0 = 0;
  if ( (unsigned __int8)sub_856400((__int64)&vars0, a1, a2) || (**(_BYTE **)(a1 + 24) = 1, *(_DWORD *)(a1 + 964) > 2u) )
    v2 = 1;
  else
    v2 = (unsigned __int8)(*(_BYTE *)(a1 + 963) | *(_BYTE *)(a1 + 962));
  if ( vars0 > 1 )
    sub_69F740((__int64)&vars0);
  return v2;
}

