__int64 __fastcall sub_21F9890(_QWORD *a1)
{
  unsigned int v1; // edx

  v1 = *(_DWORD *)(*a1 + 8LL) + 64;
  if ( v1 > 0x7F )
    return sub_2209930(a1[1], 1, v1 >> 6);
  else
    return sub_2209930(a1 + 1, 1, 1);
}
