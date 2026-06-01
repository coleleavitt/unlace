__int64 __fastcall sub_33A050(_OWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // rcx

  *a1 = 0;
  a1[1] = 0;
  v2 = *a2;
  v3 = *a2 + 16 * a2[1];
  if ( v2 == v3 )
    return 1;
  while ( *(_DWORD *)v2 == 1 )
  {
    v5 = *(_QWORD *)(v2 + 8);
    if ( (unsigned int)v5 > 0x39 )
      break;
    v2 += 16;
    *((_BYTE *)a1 + ((unsigned __int64)(int)v5 >> 3)) |= 1 << (v5 & 7);
    if ( v3 == v2 )
      return 1;
  }
  *a1 = -1;
  a1[1] = -1;
  return 0;
}
