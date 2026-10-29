/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C490
// Address: 0x0006C490

//----- (0006C490) --------------------------------------------------------
int __fastcall sub_6C490(int a1, int a2)
{
  int *v4; // r3
  int *v5; // r0
  int *v6; // r6
  int *v7; // r2
  bool v8; // zf
  int *v9; // r3
  int **v10; // r1
  _DWORD *v11; // r3
  int v12; // r7
  int result; // r0
  int **v14; // [sp+0h] [bp-4h]

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v5 = *(int **)(a1 + 44);
  v6 = (int *)v5[1];
  v7 = v5 + 1;
  if ( v5 + 2 != v6 )
  {
    v14 = (int **)(v5 + 1);
    while ( v6[4] != a2 )
    {
      v4 = (int *)v6[1];
      if ( v4 )
      {
        do
        {
          v6 = v4;
          v4 = (int *)*v4;
        }
        while ( v4 );
      }
      else
      {
        v4 = v6 + 2;
        v7 = (int *)v6[2];
        v8 = *v7 == (_DWORD)v6;
        v6 = v7;
        if ( !v8 )
        {
          do
          {
            v7 = (int *)*v4;
            v4 = (int *)(*v4 + 8);
            v6 = (int *)v7[2];
          }
          while ( (int *)*v6 != v7 );
        }
      }
      if ( v5 + 2 == v6 )
        goto LABEL_21;
    }
    if ( v6[5] )
    {
      qthread_free(v6[5]);
      v5 = *(int **)(a1 + 44);
      v14 = (int **)(v5 + 1);
    }
    v9 = (int *)v6[1];
    if ( v9 )
    {
      do
      {
        v10 = (int **)v9;
        v9 = (int *)*v9;
      }
      while ( v9 );
    }
    else
    {
      v11 = v6 + 2;
      v10 = (int **)v6[2];
      if ( *v10 != v6 )
      {
        do
        {
          v12 = *v11;
          v11 = (_DWORD *)(*v11 + 8);
          v10 = *(int ***)(v12 + 8);
        }
        while ( *v10 != (int *)v12 );
      }
    }
    if ( *v14 == v6 )
      *v14 = (int *)v10;
    --v5[3];
    sub_27512((int *)v5[2], v6);
    operator delete(v6);
    v5 = *(int **)(a1 + 44);
  }
LABEL_21:
  result = (*(int (__fastcall **)(int *, _DWORD, int *, int *))(*v5 + 12))(v5, *(_DWORD *)(*v5 + 12), v7, v4);
  if ( a2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  return result;
}
// 6C54A: variable 'v7' is possibly undefined
// 6C54A: variable 'v4' is possibly undefined
