__int64 __fastcall sub_E96020(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r10d

  sub_971800(*a1, "aligned");
  sub_E95EF0((const __m128i **)a1, a2, 40);
  if ( *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24) )
  {
    sub_971800(*a1, ": ");
    v2 = sub_E90F10();
    sub_EE3EC0(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", v2);
  }
  return sub_971800(*a1, ")");
}

