unsigned __int64 __fastcall sub_C9D60(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a1 + 272);
  switch ( v5 )
  {
    case 6:
      return sub_C58E0(a1, a2, a3, a4, a5, 6);
    case 7:
      return sub_C58E0(a1, a2, a3, a4, a5, 7);
    case 5:
      return sub_C58E0(a1, a2, a3, a4, a5, 5);
  }
  return sub_C58E0(a1, a2, a3, a4, a5, 4);
}

