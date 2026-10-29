/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471A66
// Address: 0x00471A66

//----- (00471A66) --------------------------------------------------------
int __usercall sub_471A66@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  int *v7; // eax
  int v8; // [esp-8h] [ebp-Ch]

  if ( !a6 )
    return 0;
  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
  if ( a5 && a4 >= a6 )
  {
    sub_464310((unsigned int)a3, a5, a6);
    return 0;
  }
  sub_464890(a3, 0, a4);
  if ( !a5 )
  {
    v7 = sub_46B984();
    v8 = 22;
LABEL_12:
    *v7 = v8;
    sub_467EF4(a1, a5);
    return v8;
  }
  if ( a4 < a6 )
  {
    v7 = sub_46B984();
    v8 = 34;
    goto LABEL_12;
  }
  return 22;
}
