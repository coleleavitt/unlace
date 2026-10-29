bool __fastcall sub_5B0E70(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int *v6; // r12

  v3 = a3 - 1;
  if ( a2[1] != a3 && (!a2 || !(unsigned __int8)sub_5B0DC0(v3, a2)) )
    return 0;
  v6 = sub_4EE820(a1 + 1552, v3);
  return v6 == sub_4EE820(a1 + 1552, a3);
}

