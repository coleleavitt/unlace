__int64 __fastcall sub_86B420(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  unsigned int v5; // r14d

  v2 = sub_7E4F30(a1, (unsigned int *)a2);
  v3 = sub_7E4F30(a1, *(unsigned int **)(a2 + 32));
  v4 = sub_7E4F30(a1, *(unsigned int **)(a2 + 40));
  v5 = sub_7E4F30(a1, *(unsigned int **)(a2 + 48));
  sub_7E5560(a1, v2 ^ 1, v3, v4, v5, nullptr);
  sub_7E5560(a1, v2 ^ 1, v3 ^ 1, v4 ^ 1, v5, nullptr);
  sub_7E5560(a1, v2 ^ 1, v3 ^ 1, v4, v5 ^ 1, nullptr);
  sub_7E5560(a1, v2 ^ 1, v3, v4 ^ 1, v5 ^ 1, nullptr);
  sub_7E5560(a1, v2, v3 ^ 1, v4, v5, nullptr);
  sub_7E5560(a1, v2, v3, v4 ^ 1, v5, nullptr);
  sub_7E5560(a1, v2, v3, v4, v5 ^ 1, nullptr);
  return sub_7E5560(a1, v2, v3 ^ 1, v4 ^ 1, v5 ^ 1, nullptr);
}

