__int64 __fastcall sub_C3FAF0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars4; // [rsp+4h] [rbp+4h]

  vars4 &= ~1u;
  vars0 = 0;
  if ( (unsigned __int8)sub_C39A10((__int64)&vars0, a1, a2, a4, a5)
    || (**(_BYTE **)(a1 + 24) = 1, *(_DWORD *)(a1 + 916) > 2u)
    || *(_BYTE *)(a1 + 914) )
  {
    v5 = 1;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 915);
  }
  if ( vars0 > 1 )
    sub_A4F8E0((int *)&vars0);
  return v5;
}
