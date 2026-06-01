/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BD57
// Address: 0x0047BD57

//----- (0047BD57) --------------------------------------------------------
int __usercall sub_47BD57@<eax>(int a1@<ebx>, int *a2)
{
  int *v2; // edi
  int *v4; // eax
  int i; // ecx
  _BYTE *v6; // eax
  int v7; // esi
  _WORD *v8; // ecx
  _WORD *v9; // edx
  int v11; // [esp+4h] [ebp-8h]

  v2 = a2;
  if ( !a2 )
    return 0;
  v4 = a2;
  for ( i = 0; *v4; ++i )
    ++v4;
  v6 = sub_4791B9(i + 1, 4u);
  v7 = (int)v6;
  if ( !v6 )
LABEL_14:
    sub_467F38(a1, v2, v7);
  v8 = (_WORD *)*a2;
  if ( *a2 )
  {
    a1 = v6 - (_BYTE *)a2;
    do
    {
      v9 = v8 + 1;
      while ( *v8++ )
        ;
      v11 = v8 - v9 + 1;
      *(int *)((char *)v2 + a1) = (int)sub_4791B9(v11, 2u);
      sub_479216(nullptr);
      if ( !*(int *)((char *)v2 + a1) )
        goto LABEL_14;
      if ( sub_47B594(a1, (int)v2, *(_WORD **)((char *)v2 + a1), v11, *v2) )
      {
        sub_467F04(a1, (int)v2);
        __debugbreak();
      }
      v8 = (_WORD *)*++v2;
    }
    while ( *v2 );
  }
  sub_479216(nullptr);
  return v7;
}
