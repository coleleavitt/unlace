__int64 __fastcall sub_E6C2C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int8 v4; // dl

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 4;
  v2 = (*(__int64 *)(a1 + 8) >> 1) & 3;
  if ( (_DWORD)v2 != 1 )
    return 3 * (unsigned int)((_DWORD)v2 == 2);
  result = 5;
  v4 = *(_BYTE *)(v1 + 28) & 0x7F;
  if ( (unsigned int)v4 - 59 > 2 )
    return (unsigned int)(v4 != 24) + 1;
  return result;
}

