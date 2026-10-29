int *__fastcall sub_7C5580(__int64 a1, unsigned int a2, unsigned int a3)
{
  int *result; // rax
  int *v4; // rdx
  int v5; // ecx
  int v6; // esi
  int v7; // ecx

  result = (int *)(a1 + 8LL * a3 + 76);
  v4 = (int *)(a1 + 8LL * a2 + 76);
  v5 = *v4;
  *v4 = *result;
  v6 = result[1];
  *result = v5;
  v7 = v4[1];
  v4[1] = v6;
  result[1] = v7;
  return result;
}

