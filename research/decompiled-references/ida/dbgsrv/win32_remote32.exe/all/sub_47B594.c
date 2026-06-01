/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B594
// Address: 0x0047B594

//----- (0047B594) --------------------------------------------------------
int __usercall sub_47B594@<eax>(int a1@<ebx>, int a2@<edi>, _WORD *a3, int a4, int a5)
{
  int v5; // ecx
  int *v6; // eax
  int v7; // esi
  _WORD *v9; // edi
  __int16 v10; // ax
  int v11; // [esp-4h] [ebp-8h]
  int v12; // [esp-4h] [ebp-8h]

  if ( !a3 )
    goto LABEL_5;
  v5 = a4;
  if ( !a4 )
    goto LABEL_5;
  if ( !a5 )
  {
    *a3 = 0;
LABEL_5:
    v6 = sub_46B984();
    v11 = 22;
    goto LABEL_6;
  }
  v12 = a2;
  v9 = a3;
  do
  {
    v10 = *(_WORD *)((char *)v9 + a5 - (_DWORD)a3);
    *v9++ = v10;
    if ( !v10 )
      break;
    --v5;
  }
  while ( v5 );
  a2 = v12;
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
