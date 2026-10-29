__int64 __fastcall sub_49ADC0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 216);
  result = 0;
  dword_8C2ED8 = v1;
  if ( v1 >= 0 )
  {
    LOBYTE(v1) = v1 != 0;
    return v1 | (unsigned int)((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 15LL) & 2) == 0);
  }
  return result;
}
