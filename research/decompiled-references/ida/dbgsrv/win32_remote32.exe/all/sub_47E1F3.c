/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E1F3
// Address: 0x0047E1F3

//----- (0047E1F3) --------------------------------------------------------
int __usercall sub_47E1F3@<eax>(int a1@<edi>, _WORD *a2, int a3, int a4, int a5)
{
  _WORD *v5; // ecx
  int v6; // ebx
  int *v7; // eax
  _WORD *v9; // edx
  int v10; // edi
  __int16 v11; // ax
  int v12; // ecx
  __int16 v13; // ax
  bool v14; // zf
  int v15; // [esp-4h] [ebp-Ch]
  int v16; // [esp-4h] [ebp-Ch]

  v5 = a2;
  v6 = a4;
  if ( a5 )
  {
    if ( !a2 )
      goto LABEL_4;
  }
  else if ( !a2 )
  {
    if ( a3 )
    {
LABEL_4:
      v7 = sub_46B984();
      v15 = 22;
LABEL_5:
      *v7 = v15;
      sub_467EF4(v6, a1);
      return v15;
    }
    return 0;
  }
  if ( !a3 )
    goto LABEL_4;
  if ( !a5 )
  {
    *a2 = 0;
    return 0;
  }
  if ( !a4 )
  {
    *a2 = 0;
    goto LABEL_4;
  }
  v6 = a4 - (_DWORD)a2;
  v9 = a2;
  v16 = a1;
  v10 = a3;
  if ( a5 == -1 )
  {
    do
    {
      v11 = *(_WORD *)((char *)v9 + v6);
      *v9++ = v11;
      if ( !v11 )
        break;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    v12 = a5;
    do
    {
      v13 = *(_WORD *)((char *)v9 + v6);
      *v9++ = v13;
      if ( !v13 )
        break;
      if ( !--v10 )
        break;
      --v12;
    }
    while ( v12 );
    v14 = v12 == 0;
    v5 = a2;
    if ( v14 )
      *v9 = 0;
  }
  v14 = v10 == 0;
  a1 = v16;
  if ( !v14 )
    return 0;
  if ( a5 != -1 )
  {
    *v5 = 0;
    v7 = sub_46B984();
    v15 = 34;
    goto LABEL_5;
  }
  v5[a3 - 1] = 0;
  return 80;
}
