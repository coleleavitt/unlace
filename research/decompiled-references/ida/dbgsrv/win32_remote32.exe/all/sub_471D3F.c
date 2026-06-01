/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471D3F
// Address: 0x00471D3F

//----- (00471D3F) --------------------------------------------------------
int __usercall sub_471D3F@<eax>(int a1@<edi>, unsigned int *a2, _WORD *a3, unsigned int a4, unsigned __int16 *a5)
{
  int v6; // eax
  int v7; // edx
  _WORD *v8; // ecx
  unsigned int v10; // ecx
  int v11; // [esp+8h] [ebp-8h]

  if ( !a2 )
  {
    *sub_46B984() = 22;
    sub_467EF4(0, a1);
    return 22;
  }
  *a2 = 0;
  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_5;
LABEL_14:
    *sub_46B984() = 22;
    sub_467EF4((int)a2, (int)a3);
    return 22;
  }
  if ( !a4 )
    goto LABEL_14;
LABEL_5:
  if ( a3 )
    *a3 = 0;
  v6 = sub_471C5C((int)a2, a5);
  v7 = v6;
  if ( v6 )
  {
    v8 = (_WORD *)v6;
    v11 = v6 + 2;
    while ( *v8++ )
      ;
    v10 = (((int)v8 - v11) >> 1) + 1;
    *a2 = v10;
    if ( a4 )
    {
      if ( v10 > a4 )
        return 34;
      if ( sub_47B594((int)a2, (int)a3, a3, a4, v7) )
      {
        sub_467F04((int)a2, (int)a3);
        __debugbreak();
      }
    }
  }
  return 0;
}
