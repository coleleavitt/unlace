BitVector128 *__fastcall BitVector128::str(BitVector128 *this, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // r9d
  int v5; // r8d
  char s[72]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a2[2];
  v3 = a2[3];
  v4 = *a2;
  v5 = a2[1];
  s[32] = 0;
  sprintf(s, "%08X%08X%08X%08X", v3, v2, v5, v4);
  std::string::string();
  return this;
}

