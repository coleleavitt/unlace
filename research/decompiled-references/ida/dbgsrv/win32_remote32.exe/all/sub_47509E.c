/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47509E
// Address: 0x0047509E

//----- (0047509E) --------------------------------------------------------
int __usercall sub_47509E@<eax>(int a1@<ebx>, int a2@<edi>, _BYTE *a3, int a4, unsigned int a5)
{
  int v5; // esi
  char *v6; // eax
  int v7; // eax

  if ( a3 && a4 )
  {
    v6 = sub_475052(a5);
    v7 = sub_46C902(a2, a3, a4, (int)v6, -1);
    if ( v7 && (v7 == 22 || v7 == 34) )
    {
      sub_467F04(a1, a2);
      __debugbreak();
    }
    return v7 != 80 ? v7 : 0;
  }
  else
  {
    v5 = 22;
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
  }
  return v5;
}
