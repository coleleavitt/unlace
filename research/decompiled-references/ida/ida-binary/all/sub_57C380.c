int __fastcall sub_57C380(_QWORD *a1, int a2)
{
  int v2; // eax
  FILE *v3; // rax
  __int64 v4; // r12
  FILE *v5; // rbx
  unsigned __int16 v7[16]; // [rsp+8h] [rbp-20h] BYREF

  v2 = dup(a2);
  v3 = fdopen(v2, "a");
  v4 = a1[1];
  v5 = v3;
  *(_QWORD *)v7 = *a1;
  fwrite("digraph tree {\n", 1u, 0xFu, v3);
  fwrite("edge [arrowhead=none]\n", 1u, 0x16u, v5);
  sub_571090(v7, 0, v4, 0, v5);
  fwrite("}\n", 1u, 2u, v5);
  return fclose(v5);
}
