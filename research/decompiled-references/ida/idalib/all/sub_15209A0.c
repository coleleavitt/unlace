char __fastcall sub_15209A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rdi
  int *v4; // rsi
  __int16 v6[5]; // [rsp+Eh] [rbp-Ah] BYREF

  v2 = *a1;
  v6[0] = 1;
  sub_15680D0(v2, v6, 1, 2);
  v3 = *(__int64 **)(*a1 + 8);
  v4 = (int *)(*a1 + 16);
  *(_DWORD *)(*a1 + 40) = *v4;
  return sub_14634E0(v3, v4);
}
