/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51844
// Address: 0x00051844

//----- (00051844) --------------------------------------------------------
char *__fastcall sub_51844(char *result, void **a2, unsigned int a3, int a4)
{
  int v5; // r4
  int v6; // r0
  int v7; // r5
  unsigned __int8 *v8; // r6
  void *v9; // r0
  int v10; // r4
  unsigned int v11; // r2
  void *v12; // r1
  void *v13; // r0
  int v14; // [sp+8h] [bp-Ch]
  char *v15; // [sp+Ch] [bp-8h]

  v15 = result;
  v5 = *((_DWORD *)result + 7);
  if ( *(_DWORD *)(v5 + 28 * a4 + 4) > a3 )
  {
    v6 = *(_DWORD *)(v5 + 28 * a4);
    result = *(_DWORD *)(v6 + 12 * a3 + 4) ? *(char **)(v6 + 12 * a3) : &byte_B3CBE;
    LOBYTE(v7) = *result;
    v14 = a4 - 1;
    if ( *result )
    {
      v8 = (unsigned __int8 *)(result + 1);
      do
      {
        if ( (char)v7 <= -2 )
        {
          sub_51844(v15, a2, (unsigned __int8)v7 ^ 0x80, v14);
        }
        else
        {
          v9 = a2[1];
          v10 = (int)v9 - 1;
          if ( !v9 )
            v10 = 0;
          v11 = v10 + 2;
          v12 = *a2;
          if ( (unsigned int)a2[2] < v10 + 2 )
          {
            v13 = qvector_reserve((int)a2, v12, v11, 1u);
            v11 = v10 + 2;
            v12 = v13;
            *a2 = v13;
          }
          a2[1] = (void *)v11;
          *((_BYTE *)v12 + v10) = v7;
          *((_BYTE *)*a2 + v10 + 1) = 0;
        }
        result = (char *)(v8 + 1);
        v7 = *v8++;
      }
      while ( v7 );
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
