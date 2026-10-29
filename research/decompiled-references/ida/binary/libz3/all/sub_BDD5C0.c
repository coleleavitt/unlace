signed int *__fastcall sub_BDD5C0(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v5[4]; // [rsp+10h] [rbp-10h] BYREF

  v5[0] = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5[1] = a3;
  return sub_B69FE0(*(_QWORD *)(a1 + 16), v3, 2, v5, 0, 0, 1u);
}

