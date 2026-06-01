/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68980
// Address: 0x00068980

//----- (00068980) --------------------------------------------------------
int __userpurge sub_68980@<eax>(int a1, int **a2, unsigned int *a3, int a4, _DWORD **a5)
{
  int result; // eax
  int *v6; // esi
  int *v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int *v10; // ecx
  _DWORD *v11; // edx
  char v12; // cl
  _DWORD *v13; // eax
  int *v14; // ecx
  _DWORD *v15; // [esp+8h] [ebp-14h]

  result = a1;
  v6 = a2[1];
  if ( v6 )
  {
    v7 = (int *)(a2 + 1);
    v8 = *a3;
    while ( 1 )
    {
      v9 = v6[4];
      if ( v8 >= v9 )
      {
        if ( v9 >= v8 )
          goto LABEL_12;
        v7 = v6 + 1;
        v10 = (int *)v6[1];
        if ( !v10 )
          goto LABEL_12;
      }
      else
      {
        v10 = (int *)*v6;
        v7 = v6;
        if ( !*v6 )
          goto LABEL_11;
      }
      v6 = v10;
    }
  }
  v6 = (int *)(a2 + 1);
LABEL_11:
  v7 = v6;
LABEL_12:
  v11 = (_DWORD *)*v7;
  if ( *v7 )
  {
    v12 = 0;
  }
  else
  {
    v13 = operator new(0x28u);
    v13[4] = **a5;
    *((_BYTE *)v13 + 20) = 2;
    *v13 = 0;
    v13[1] = 0;
    v13[7] = 0;
    v13[6] = 0;
    v13[9] = 0;
    v13[8] = 0;
    v13[2] = v6;
    *v7 = (int)v13;
    v14 = (int *)**a2;
    v15 = v13;
    if ( v14 )
    {
      *a2 = v14;
      v13 = (_DWORD *)*v7;
    }
    sub_2D500((int)a2[1], (int)v13);
    a2[2] = (int *)((char *)a2[2] + 1);
    v12 = 1;
    result = a1;
    v11 = v15;
  }
  *(_DWORD *)result = v11;
  *(_BYTE *)(result + 4) = v12;
  return result;
}
