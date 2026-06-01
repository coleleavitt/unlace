/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD060
// Address: 0x080BD060

//----- (080BD060) --------------------------------------------------------
int *__userpurge sub_80BD060@<eax>(int *a1, char a2)
{
  char *v2; // eax
  int v3; // ecx
  int v4; // eax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (char *)sub_80CF920((int)a1, nullptr, 5u, 1u);
  v3 = a1[1];
  *a1 = (int)v2;
  memset(&v2[v3], 0, 5 - v3);
  v4 = *a1;
  a1[1] = 5;
  *(_DWORD *)v4 = 0;
  *(_BYTE *)(v4 + 4) = a2;
  return a1;
}
