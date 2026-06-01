/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4754EE
// Address: 0x004754EE

//----- (004754EE) --------------------------------------------------------
int __usercall sub_4754EE@<eax>(
        unsigned int a1@<ebx>,
        int a2@<edi>,
        __m128i *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v8; // [esp+10h] [ebp-1Ch]

  if ( a5 && a6 )
  {
    if ( a7 )
    {
      sub_469596((int)a7);
      v8 = sub_4752EB(a1, a2, a3, a4, a5, a6, a7);
      sub_4695AA((int)a7);
      return v8;
    }
    if ( a4 != -1 )
      sub_464890(a3, 0, a4);
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
  }
  return 0;
}
