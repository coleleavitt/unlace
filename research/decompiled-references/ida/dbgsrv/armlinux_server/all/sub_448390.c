/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448390
// Address: 0x0000000000448390

//----- (0000000000448390) ----------------------------------------------------
void __fastcall sub_448390(char **a1)
{
  unsigned __int64 v2; // x3
  int v3; // w19
  __int64 v4; // x1
  __int64 v5; // x0
  int v6; // w1
  char *v7; // x0
  int v8; // w1
  __int64 v9; // x19
  unsigned __int64 v10; // x22
  __int64 v11; // x20
  void *v12; // x0

  v2 = (unsigned __int64)a1[4];
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = (__int64)&a1[3][56 * v4];
        v6 = *(unsigned __int8 *)(v5 + 24);
        if ( v6 == 5 || v6 == 6 && qword_520148 <= (unsigned __int64)-*(_DWORD *)(v5 + 32) )
          break;
        v4 = ++v3;
        if ( v3 >= v2 )
          goto LABEL_8;
      }
      ++v3;
      sub_448310((__int64 *)(v5 + 24));
      v2 = (unsigned __int64)a1[4];
      v4 = v3;
    }
    while ( v3 < v2 );
  }
LABEL_8:
  if ( off_520170 )
    ((void (*)(void))off_520170)();
  v7 = *a1;
  v8 = (unsigned int)a1[1] - 1;
  if ( v8 >= 0 )
  {
    v9 = 8LL * v8;
    v10 = 8 * (v8 - (unsigned __int64)(unsigned int)v8) - 8;
    do
    {
      v11 = *(_QWORD *)&v7[v9];
      if ( v11 )
      {
        v12 = *(void **)(v11 + 56);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 64) = 0;
          j__free(v12);
        }
        sub_444770(v11, *(_QWORD **)(v11 + 16));
        j_j__free_0((void *)v11);
        v7 = *a1;
      }
      v9 -= 8;
    }
    while ( v10 != v9 );
  }
  if ( v7 )
  {
    a1[1] = nullptr;
    j__free(v7);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
// 520148: using guessed type __int64 qword_520148;
// 520170: using guessed type _UNKNOWN *off_520170;
