/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453DB0
// Address: 0x00453DB0

//----- (00453DB0) --------------------------------------------------------
int __userpurge sub_453DB0@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, int a4, char *a5, int a6)
{
  unsigned int v7; // kr00_4
  void *v8; // esp
  int *v9; // eax
  char *v10; // [esp-Ch] [ebp-14h]
  unsigned __int8 v11[4]; // [esp+0h] [ebp-8h] BYREF

  if ( a4 )
  {
    v7 = strlen(a5);
    v8 = alloca(v7 + 100);
    v10 = sub_453BC0(a5, v11, v7 + 100);
    v9 = sub_41C0F0();
    return sub_46B544(a1, a2, a3, *v9, v9[1], a4, (int)v10, 0, a6);
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
