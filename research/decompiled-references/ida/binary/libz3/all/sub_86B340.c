__int64 __fastcall sub_86B340(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r13d
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edx

  v2 = sub_7E4F30(a1, (unsigned int *)a2);
  v3 = sub_7E4F30(a1, *(unsigned int **)(a2 + 32));
  v4 = sub_7E4F30(a1, *(unsigned int **)(a2 + 40));
  v5 = sub_7E4F30(a1, *(unsigned int **)(a2 + 48));
  sub_7E5420(a1, v2 ^ 1, v3, v4, nullptr);
  v6 = v3;
  v3 ^= 1u;
  sub_7E5420(a1, v2 ^ 1, v6, v5, nullptr);
  v7 = v5;
  v8 = v4;
  v4 ^= 1u;
  v5 ^= 1u;
  sub_7E5420(a1, v2 ^ 1, v8, v7, nullptr);
  sub_7E5420(a1, v2, v3, v4, nullptr);
  sub_7E5420(a1, v2, v3, v5, nullptr);
  return sub_7E5420(a1, v2, v4, v5, nullptr);
}

