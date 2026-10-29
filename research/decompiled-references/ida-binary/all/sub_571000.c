char *__fastcall sub_571000(unsigned __int64 a1, unsigned __int16 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  size_t v8; // r12
  char *v9; // rbx
  char v11[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v8 = sub_5630C0(a1, v11, 1u, a4, a5, a2, a3, "__ROOT__") + 1;
  v9 = (char *)off_8C52B8(v8);
  sub_5630C0(a1, v9, v8, a4, a5, a2, a3, "__ROOT__");
  return v9;
}
