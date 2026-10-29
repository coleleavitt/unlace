/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55250
// Address: 0x00055250

//----- (00055250) --------------------------------------------------------
int *__cdecl sub_55250(int a1)
{
  int *result; // eax
  int *v2; // edx
  char **v3; // eax
  char **v4; // edi
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  char *v8; // [esp+Ch] [ebp-20h]
  char **v9; // [esp+14h] [ebp-18h]

  result = (int *)a1;
  v2 = *(int **)(a1 + 24);
  if ( off_13B614 != v2 )
  {
    v3 = off_13B618;
    v4 = &off_13B618[6 * (_DWORD)v2];
    v9 = &off_13B618[6 * (_DWORD)off_13B614];
    if ( v4 < v9 )
    {
      do
      {
        v5 = v4[3];
        if ( v5 )
        {
          v8 = v4[3];
          v6 = *((_DWORD *)v5 - 1);
          if ( v6 )
          {
            v7 = 20 * v6;
            do
            {
              free_idcv(&v8[v7 - 20]);
              v7 -= 20;
            }
            while ( v7 );
          }
          operator delete[](v8 - 4);
        }
        qfree(*v4);
        qfree(v4[2]);
        v4[1] = nullptr;
        *v4 = nullptr;
        v4[3] = nullptr;
        v4[2] = nullptr;
        v4[5] = nullptr;
        v4[4] = nullptr;
        v4 += 6;
      }
      while ( v4 < v9 );
      v3 = off_13B618;
    }
    qfree(v3);
    off_13B618 = *(char ***)(a1 + 20);
    result = *(int **)(a1 + 24);
    off_13B614 = result;
  }
  return result;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
