__int64 __fastcall sub_368FD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // r8

  v2 = *(unsigned int *)(a1 + 8);
  v3 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CA1588 )
  {
    v4 = *(_QWORD *)(qword_2CA1580 + 8 * v2);
    if ( v4 )
      v3 = base2file(
             v4,
             *(_QWORD *)(a1 + 40),
             *(unsigned int *)(a1 + 72),
             (unsigned int)(*(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 104)));
  }
  *(_DWORD *)(a2 + 8) = v3;
  return 0;
}

