__int64 __fastcall sub_2051F10(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int16 *v3; // rbp
  unsigned int v4; // edx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int16 *)(v2 + sub_2051EA0(a1) * a2);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 8LL) >> 8;
  if ( v4 == 16 )
    return *v3;
  if ( v4 <= 0x10 )
  {
    if ( v4 == 8 )
      return *(unsigned __int8 *)v3;
  }
  else
  {
    if ( v4 == 32 )
      return *(unsigned int *)v3;
    if ( v4 == 64 )
      return *(_QWORD *)v3;
  }
  return sub_2051F80();
}
