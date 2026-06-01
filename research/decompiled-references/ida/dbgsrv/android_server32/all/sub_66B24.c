/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66B24
// Address: 0x00066B24

//----- (00066B24) --------------------------------------------------------
int __fastcall sub_66B24(_DWORD *a1, unsigned int a2, int a3)
{
  int v5; // r0
  int *v6; // r1
  int *v7; // r3
  unsigned int v8; // r0
  int *v9; // r2
  int *v10; // r5
  unsigned int v11; // r2
  int **v12; // r6
  unsigned int v13; // r3
  int result; // r0
  int *v15; // r0
  bool v16; // zf
  int v17; // r2
  int **v18; // r7
  int *v19; // r1
  int **v20; // r0
  _DWORD *v21; // r1
  int v22; // r2

  v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 248))(a1);
  v6 = a1 + 66;
  v7 = (int *)a1[66];
  v8 = -v5 & a2;
  v9 = a1 + 66;
  if ( !v7 )
    goto LABEL_10;
  v10 = a1 + 66;
  do
  {
    v11 = v7[4];
    if ( v11 >= v8 )
      v10 = v7;
    v12 = (int **)(v7 + 1);
    if ( v11 >= v8 )
      v12 = (int **)v7;
    v7 = *v12;
  }
  while ( *v12 );
  v9 = a1 + 66;
  if ( v10 == v6 || (v13 = v10[4], v9 = v10, v13 >= a2 + 1) )
  {
LABEL_10:
    result = 0;
    if ( v9 == (int *)a1[65] )
      return result;
    v15 = (int *)*v9;
    if ( *v9 )
    {
      do
      {
        v10 = v15;
        v15 = (int *)v15[1];
      }
      while ( v15 );
    }
    else
    {
      do
      {
        v10 = (int *)v9[2];
        v16 = *v10 == (_DWORD)v9;
        v9 = v10;
      }
      while ( v16 );
    }
    v13 = v10[4];
  }
  result = 0;
  if ( v13 <= a2 )
  {
    v17 = v10[8];
    if ( v17 )
    {
      if ( v13 + v17 - 1 >= a2 && v10 != v6 && v10[5] == a2 && v10[12] == a3 )
      {
        v18 = (int **)(a1 + 65);
        (*(void (__fastcall **)(_DWORD *, int *, _DWORD))(*a1 + 172))(a1, v10, 0);
        v19 = (int *)v10[1];
        if ( v19 )
        {
          do
          {
            v20 = (int **)v19;
            v19 = (int *)*v19;
          }
          while ( v19 );
        }
        else
        {
          v21 = v10 + 2;
          v20 = (int **)v10[2];
          if ( *v20 != v10 )
          {
            do
            {
              v22 = *v21;
              v21 = (_DWORD *)(*v21 + 8);
              v20 = *(int ***)(v22 + 8);
            }
            while ( *v20 != (int *)v22 );
          }
        }
        if ( *v18 == v10 )
          *v18 = (int *)v20;
        --a1[67];
        sub_27512((int *)a1[66], v10);
        operator delete(v10);
        return 1;
      }
    }
  }
  return result;
}
