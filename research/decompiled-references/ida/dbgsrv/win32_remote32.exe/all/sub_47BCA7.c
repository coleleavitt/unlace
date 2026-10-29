/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BCA7
// Address: 0x0047BCA7

//----- (0047BCA7) --------------------------------------------------------
int __usercall sub_47BCA7@<eax>(int a1@<ebx>, const char **a2)
{
  int *v2; // edi
  int v4; // ecx
  const char **i; // eax
  _BYTE *v6; // eax
  int v7; // esi
  const char *v8; // ecx
  unsigned int v9; // kr00_4

  v2 = (int *)a2;
  if ( !a2 )
    return 0;
  v4 = 0;
  for ( i = a2; *i; ++v4 )
    ++i;
  v6 = sub_4791B9(v4 + 1, 4u);
  v7 = (int)v6;
  if ( !v6 )
LABEL_12:
    sub_467F38(a1, v2, v7);
  v8 = *a2;
  if ( *a2 )
  {
    a1 = v6 - (_BYTE *)a2;
    do
    {
      v9 = strlen(v8);
      *(int *)((char *)v2 + a1) = (int)sub_4791B9(v9 + 1, 1u);
      sub_479216(nullptr);
      if ( !*(int *)((char *)v2 + a1) )
        goto LABEL_12;
      if ( sub_46C78C(a1, (int)v2, *(_BYTE **)((char *)v2 + a1), v9 + 1, *v2) )
      {
        sub_467F04(a1, (int)v2);
        __debugbreak();
      }
      v8 = (const char *)*++v2;
    }
    while ( *v2 );
  }
  sub_479216(nullptr);
  return v7;
}
