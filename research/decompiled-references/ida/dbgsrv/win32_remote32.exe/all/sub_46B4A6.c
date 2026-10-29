/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B4A6
// Address: 0x0046B4A6

//----- (0046B4A6) --------------------------------------------------------
int __thiscall sub_46B4A6(_DWORD **this, char *a2, int a3, _DWORD *a4, int **a5)
{
  _DWORD **v5; // edx
  int *v6; // esi
  int *v7; // eax
  char *v8; // ebx
  int result; // eax
  int *v10; // eax
  int v11; // [esp+Ch] [ebp-8h]

  v5 = this;
  v6 = *a5;
  if ( !*a5 )
  {
    v7 = sub_46B984();
    v5 = this;
    v6 = v7;
    *a5 = v7;
  }
  v8 = a2;
  result = *v6;
  *v6 = 0;
  v11 = result;
  if ( a2 == &a2[a3] )
    goto LABEL_15;
  while ( 1 )
  {
    if ( sub_46B293(v5, (int)v8, (int)a4, *v8) )
      goto LABEL_9;
    v10 = *a5;
    if ( !*a5 )
    {
      v10 = sub_46B984();
      *a5 = v10;
    }
    if ( *v10 != 42 )
      break;
    if ( !sub_46B293(this, (int)v8, (int)a4, 63) )
    {
      *a4 = -1;
      goto LABEL_11;
    }
LABEL_9:
    ++*a4;
LABEL_11:
    v5 = this;
    if ( ++v8 == &a2[a3] )
      goto LABEL_14;
  }
  *a4 = -1;
LABEL_14:
  result = v11;
LABEL_15:
  if ( !*v6 )
  {
    if ( result )
      *v6 = result;
  }
  return result;
}
