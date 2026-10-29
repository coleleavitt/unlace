__int64 __fastcall sub_FDE0D0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  char v5; // al
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(__int64 **)(a1 + 16);
  v3 = *v2;
  v6[0] = v2 + 2;
  v6[1] = (unsigned int)v3;
  if ( (v3 & 0xFFFFFFFE) == 0 )
    return 0;
  if ( *((_BYTE *)v2 + 16) != 95 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 8) != 0 && sub_2246AB0(v6, "__", 2, 0) != -1 )
      return 5;
    return 0;
  }
  v5 = *((_BYTE *)v2 + 17);
  if ( v5 == 95 )
    return 3;
  else
    return (unsigned __int8)(v5 - 65) < 0x1Au ? 4 : 1;
}
