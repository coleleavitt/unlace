__int64 __fastcall sub_125F9A0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128i a5)
{
  char *v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v5 = "i386-gnu";
    v6 = 8;
    if ( *(_DWORD *)(a1 + 2424) != 37 )
    {
      v5 = *(char **)(a1 + 2392);
      v6 = *(_QWORD *)(a1 + 2400);
    }
    return sub_1218340((_QWORD *)a1, a2, a3, (__int64)v5, v6, a4, a5);
  }
  return result;
}
