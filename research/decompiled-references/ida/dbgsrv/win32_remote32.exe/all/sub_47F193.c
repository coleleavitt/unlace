/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F193
// Address: 0x0047F193

//----- (0047F193) --------------------------------------------------------
int __usercall sub_47F193@<eax>(int a1@<ebx>, unsigned int a2, unsigned int a3, int a4, int *a5, int a6, int a7)
{
  int v8; // ecx
  int v9; // eax
  int *v10; // eax
  char *v11; // eax
  char *v12; // esi
  char v13; // dl
  int v14; // [esp-8h] [ebp-14h]
  char *v15; // [esp+8h] [ebp-4h]

  if ( !a2 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 22;
  }
  if ( !a3 )
    goto LABEL_10;
  v8 = a4;
  *(_BYTE *)a2 = 0;
  if ( a4 <= 0 )
    v9 = 0;
  else
    v9 = a4;
  if ( a3 <= v9 + 1 )
  {
    v10 = sub_46B984();
    v14 = 34;
LABEL_11:
    *v10 = v14;
    sub_467EF4(a1, a2);
    return v14;
  }
  a1 = (int)a5;
  if ( !a5 )
  {
LABEL_10:
    v10 = sub_46B984();
    v14 = 22;
    goto LABEL_11;
  }
  v11 = (char *)a5[2];
  v12 = (char *)(a2 + 1);
  v15 = v11;
  *(_BYTE *)a2 = 48;
  while ( v8 > 0 )
  {
    v13 = *v11;
    if ( *v11 )
      ++v11;
    else
      v13 = 48;
    *v12++ = v13;
    --v8;
  }
  *v12 = 0;
  if ( v8 >= 0 && sub_47F115(v15, v11, *a5, a6, a7) )
  {
    while ( *--v12 == 57 )
      *v12 = 48;
    ++*v12;
  }
  if ( *(_BYTE *)a2 == 49 )
    ++a5[1];
  else
    sub_464310(a2, a2 + 1, strlen((const char *)(a2 + 1)) + 1);
  return 0;
}
