_BOOL8 __fastcall sub_D4E20(__int64 a1, double a2)
{
  int v2; // edx
  unsigned __int8 v3; // cl
  int v4; // esi
  int *v5; // rdi
  int *v6; // rax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_BYTE *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 24);
  if ( !v2 )
    return sub_D4D90(nullptr, v4, v3, a2);
  v5 = (int *)qword_251410;
  v6 = (int *)(qword_251410 + 232 * xmmword_251418);
  if ( (int *)qword_251410 == v6 )
    return sub_D4D90(nullptr, v4, v3, a2);
  while ( v2 != *v5 )
  {
    v5 += 58;
    if ( v6 == v5 )
      return sub_D4D90(nullptr, v4, v3, a2);
  }
  return sub_D4D90(v5, v4, v3, a2);
}

