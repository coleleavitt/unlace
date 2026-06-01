/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B930
// Address: 0x0004B930

//----- (0004B930) --------------------------------------------------------
_DWORD *__fastcall sub_4B930(_DWORD *result, void **a2, unsigned int a3, int a4)
{
  int v4; // r6
  int v5; // r4
  int v6; // r2
  int v7; // r5
  int *v8; // r7
  _DWORD *v10; // r9
  int *v11; // r8
  unsigned int v12; // r2
  int v13; // r6
  unsigned int v14; // r7
  int v15; // r10
  void *v16; // r1
  int v17; // t1

  v4 = result[7];
  if ( a3 < *(_DWORD *)(v4 + 28 * a4 + 4) )
  {
    v5 = *(_DWORD *)(v4 + 28 * a4);
    v6 = 12 * a3;
    v7 = *(_DWORD *)(v5 + v6 + 4);
    if ( v7 )
    {
      v8 = *(int **)(v5 + v6);
      v7 = *(unsigned __int8 *)v8;
    }
    else
    {
      v8 = &dword_8DA5C;
    }
    v10 = result;
    v11 = v8;
    v12 = v7 ^ 0x80;
    if ( v7 )
    {
      do
      {
        if ( v12 <= 0x7E )
        {
          result = (_DWORD *)sub_4B930(v10, a2);
        }
        else
        {
          v13 = (int)a2[1];
          v14 = 2;
          v15 = 0;
          if ( v13 )
          {
            v15 = v13 - 1;
            v14 = v13 + 1;
          }
          else
          {
            v13 = 1;
          }
          v16 = *a2;
          if ( (unsigned int)a2[2] < v14 )
          {
            result = sub_77EB0((int)a2, v16, v14, 1u);
            v16 = result;
            *a2 = result;
          }
          a2[1] = (void *)v14;
          *((_BYTE *)v16 + v15) = v7;
          *((_BYTE *)*a2 + v13) = 0;
        }
        v17 = *((unsigned __int8 *)v11 + 1);
        v11 = (int *)((char *)v11 + 1);
        LOBYTE(v7) = v17;
        v12 = v17 ^ 0x80;
      }
      while ( v17 );
    }
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
