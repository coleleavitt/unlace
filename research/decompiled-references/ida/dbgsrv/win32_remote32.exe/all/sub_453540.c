/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453540
// Address: 0x00453540

//----- (00453540) --------------------------------------------------------
char __userpurge sub_453540@<al>(unsigned int a1@<ebx>, _BYTE *a2, unsigned int a3, int a4)
{
  int v4; // eax
  bool v5; // bl
  char result; // al
  __int64 v7; // [esp+Ch] [ebp-8h] BYREF

  v7 = a4;
  v4 = sub_46CB6D(a1, a2, a3, (int)&v7);
  v5 = v4 == 0;
  if ( v4 )
  {
    sub_45ACB0((unsigned int)a2, "[wrong timestamp]\n", a3);
    return v5;
  }
  if ( a3 <= 8 )
    return v5;
  result = 1;
  if ( a2[8] == 32 )
    a2[8] = 48;
  return result;
}
