/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C7E6
// Address: 0x0046C7E6

//----- (0046C7E6) --------------------------------------------------------
int __usercall sub_46C7E6@<eax>(int a1@<ebx>, int a2@<edi>, _BYTE *a3, int a4, int a5)
{
  int v5; // ecx
  int *v6; // eax
  int v7; // esi
  _BYTE *v9; // edx
  char v10; // al
  int v11; // [esp-4h] [ebp-Ch]

  if ( !a3 )
    goto LABEL_5;
  v5 = a4;
  if ( !a4 )
    goto LABEL_5;
  a2 = a5;
  if ( !a5 )
    goto LABEL_4;
  v9 = a3;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
  {
LABEL_4:
    *a3 = 0;
LABEL_5:
    v6 = sub_46B984();
    v11 = 22;
    goto LABEL_6;
  }
  a2 = a5 - (_DWORD)v9;
  do
  {
    v10 = v9[a2];
    *v9++ = v10;
    if ( !v10 )
      break;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    return 0;
  *a3 = 0;
  v6 = sub_46B984();
  v11 = 34;
LABEL_6:
  v7 = v11;
  *v6 = v11;
  sub_467EF4(a1, a2);
  return v7;
}
