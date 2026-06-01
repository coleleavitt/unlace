/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D45E
// Address: 0x0046D45E

//----- (0046D45E) --------------------------------------------------------
int __usercall sub_46D45E@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _BYTE *a9,
        int a10,
        unsigned int *a11)
{
  unsigned int *v11; // esi
  int result; // eax
  int v13; // eax
  _BYTE v14[780]; // [esp+4h] [ebp-310h] BYREF

  v11 = a11;
  if ( a11 && a3 )
  {
    v13 = sub_46D550(a1, a2, a3, &a4, (int)v14);
    result = sub_46DBFB(v13, (int)v14, v11);
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    result = 1;
  }
  if ( a9 )
  {
    if ( !a8 )
      *a9 = 0;
  }
  return result;
}
