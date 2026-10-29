__int64 __fastcall sub_920BA0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int v3; // r12d
  int v4; // ebp
  int v5; // r12d

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 400LL) + ((unsigned __int64)a2 << 6);
  v3 = sub_182DB30(v2);
  v4 = v3 + 3 * sub_182DB30(v2 + 16);
  v5 = sub_182DB30(v2 + 32);
  return v4 ^ (v5 + 3 * (unsigned int)sub_182DB30(v2 + 48) + 1);
}

