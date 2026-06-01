/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CB6D
// Address: 0x0046CB6D

//----- (0046CB6D) --------------------------------------------------------
int __usercall sub_46CB6D@<eax>(unsigned int a1@<ebx>, _BYTE *a2, unsigned int a3, int a4)
{
  int v4; // esi
  int v6[9]; // [esp+8h] [ebp-28h] BYREF

  if ( a2 && a3 && (*a2 = 0, a3 >= 0x1A) && a4 )
  {
    if ( *(int *)(a4 + 4) >= 0 )
    {
      v4 = sub_46D0D2(a1, (int)a2, v6, a4);
      if ( !v4 )
        return sub_46CB62(a1, (int)a2, a2, a3, v6);
    }
    else
    {
      v4 = 22;
      *sub_46B984() = 22;
    }
  }
  else
  {
    v4 = 22;
    *sub_46B984() = 22;
    sub_467EF4(a1, (int)a2);
  }
  return v4;
}
