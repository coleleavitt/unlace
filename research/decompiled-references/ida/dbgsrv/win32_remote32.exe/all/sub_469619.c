/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469619
// Address: 0x00469619

//----- (00469619) --------------------------------------------------------
int __usercall sub_469619@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        _DWORD *a10,
        int a11)
{
  int result; // eax
  int *v12; // eax
  int v13; // [esp+0h] [ebp-4h]

  if ( !a9 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  if ( a8 )
  {
    if ( !a6 )
    {
LABEL_20:
      *sub_46B984() = 22;
      goto LABEL_21;
    }
  }
  else if ( !a6 )
  {
    if ( !a7 )
      return 0;
    goto LABEL_20;
  }
  a1 = a7;
  if ( !a7 )
    goto LABEL_20;
  v12 = sub_46B984();
  if ( a7 > a8 )
  {
    a1 = *v12;
    result = sub_469718(a8, a3, a4, a5, a6, a8 + 1, a9, a10, a11);
    if ( result == -2 )
    {
      if ( *sub_46B984() == 34 )
        *sub_46B984() = a1;
      return -1;
    }
    goto LABEL_17;
  }
  v13 = *v12;
  result = sub_469718(a8, a3, a4, a5, a6, a7, a9, a10, a11);
  *((_BYTE *)a6 + a7 - 1) = 0;
  if ( result != -2 )
  {
LABEL_17:
    if ( result >= 0 )
      return result;
    goto LABEL_18;
  }
  if ( a8 == -1 )
  {
    if ( *sub_46B984() == 34 )
      *sub_46B984() = v13;
    return -1;
  }
LABEL_18:
  *(_BYTE *)a6 = 0;
  if ( result == -2 )
  {
    *sub_46B984() = 34;
LABEL_21:
    sub_467EF4(a1, a8);
  }
  return -1;
}
