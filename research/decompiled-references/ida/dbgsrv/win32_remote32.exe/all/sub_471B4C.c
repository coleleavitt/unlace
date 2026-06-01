/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471B4C
// Address: 0x00471B4C

//----- (00471B4C) --------------------------------------------------------
int __usercall sub_471B4C@<eax>(int a1@<ebx>, _DWORD *a2, int *a3, char *a4)
{
  const char *v5; // eax
  int v6; // ebx
  unsigned int v7; // kr00_4
  _BYTE *v8; // eax
  int v9; // [esp+8h] [ebp-4h]

  if ( !a2 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( !a4 )
  {
LABEL_2:
    *sub_46B984() = 22;
    sub_467EF4(a1, (int)a2);
    return 22;
  }
  v5 = sub_471BEF(a1, a4);
  v6 = (int)v5;
  if ( v5 )
  {
    v7 = strlen(v5);
    v8 = sub_46C90D(v7 + 1, 1u);
    *a2 = v8;
    if ( !v8 )
    {
      *sub_46B984() = 12;
      return 12;
    }
    v9 = v7 + 1;
    if ( sub_46C78C(v6, v9, v8, v9, v6) )
    {
      sub_467F04(v6, v9);
      __debugbreak();
    }
    if ( a3 )
      *a3 = v9;
  }
  return 0;
}
