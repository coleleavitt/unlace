size_t __fastcall sub_571530(__int64 a1, __int64 a2, FILE *a3)
{
  unsigned __int16 v5[16]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)v5 = a1;
  fwrite("digraph tree {\n", 1u, 0xFu, a3);
  fwrite("edge [arrowhead=none]\n", 1u, 0x16u, a3);
  sub_571090(v5, 0, a2, 0, a3);
  return fwrite("}\n", 1u, 2u, a3);
}
