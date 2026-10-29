/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453FB0
// Address: 0x00453FB0

//----- (00453FB0) --------------------------------------------------------
int __userpurge sub_453FB0@<eax>(int a1@<ebx>, __m128i *a2, char *a3, int a4)
{
  unsigned int v4; // kr00_4
  void *v5; // esp
  int *v6; // eax
  char *v8; // [esp-Ch] [ebp-14h]
  unsigned __int8 v9[4]; // [esp+0h] [ebp-8h] BYREF

  v4 = strlen(a3);
  v5 = alloca(v4 + 100);
  v8 = sub_453BC0(a3, v9, v4 + 100);
  v6 = sub_453D40();
  return sub_471A42(a1, *v6, v6[1], a2, 0xFFFFFFFF, (int)v8, nullptr, a4);
}
