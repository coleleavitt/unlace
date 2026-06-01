__int64 __fastcall sub_B6110(__int64 a1, __int64 a2, double a3, __m128i a4)
{
  const char *v4; // rax

  v4 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)sub_B5C80(v4, a3, a4);
  return 0;
}

