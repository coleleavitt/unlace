__int64 __fastcall sub_B02A0(__int64 a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)sub_B01B0(0, v3);
  return 0;
}

