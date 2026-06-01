/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_261FA
// Address: 0x000261FA

//----- (000261FA) --------------------------------------------------------
int *__fastcall sub_261FA(int *result, int *a2)
{
  int v2; // r4
  _BYTE *v3; // r5
  int *v4; // r3
  _DWORD *v5; // r6
  int v6; // r7
  _BYTE *v7; // r6
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int **v11; // r0
  int v12; // r1
  int **v13; // r1
  _DWORD *v14; // r5
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  int **v18; // r1

  *((_BYTE *)a2 + 12) = a2 == result;
  if ( a2 != result )
  {
    do
    {
      v2 = a2[2];
      v3 = (_BYTE *)(v2 + 12);
      if ( *(_BYTE *)(v2 + 12) )
        break;
      v4 = *(int **)(v2 + 8);
      v5 = (_DWORD *)*v4;
      if ( *v4 == v2 )
      {
        v8 = v4[1];
        if ( !v8 || (v9 = *(unsigned __int8 *)(v8 + 12), v7 = (_BYTE *)(v8 + 12), v9) )
        {
          if ( *(int **)v2 != a2 )
          {
            v14 = *(_DWORD **)(v2 + 4);
            v15 = *v14;
            *(_DWORD *)(v2 + 4) = *v14;
            if ( v15 )
            {
              *(_DWORD *)(v15 + 8) = v2;
              v4 = *(int **)(v2 + 8);
            }
            v14[2] = v4;
            v16 = *(_DWORD **)(v2 + 8);
            if ( *v16 != v2 )
              ++v16;
            *v16 = v14;
            *v14 = v2;
            *(_DWORD *)(v2 + 8) = v14;
            v4 = (int *)v14[2];
            v3 = v14 + 3;
          }
          *v3 = 1;
          *((_BYTE *)v4 + 12) = 0;
          result = (int *)*v4;
          v17 = *(_DWORD *)(*v4 + 4);
          *v4 = v17;
          if ( v17 )
            *(_DWORD *)(v17 + 8) = v4;
          result[2] = v4[2];
          v18 = (int **)v4[2];
          if ( *v18 != v4 )
            ++v18;
          *v18 = result;
          result[1] = (int)v4;
          v4[2] = (int)result;
          return result;
        }
      }
      else if ( !v5 || (v6 = *((unsigned __int8 *)v5 + 12), v7 = v5 + 3, v6) )
      {
        if ( *(int **)v2 == a2 )
        {
          v10 = a2[1];
          *(_DWORD *)v2 = v10;
          if ( v10 )
          {
            *(_DWORD *)(v10 + 8) = v2;
            v4 = *(int **)(v2 + 8);
          }
          a2[2] = (int)v4;
          v11 = *(int ***)(v2 + 8);
          if ( *v11 != (int *)v2 )
            ++v11;
          *v11 = a2;
          a2[1] = v2;
          *(_DWORD *)(v2 + 8) = a2;
          v4 = (int *)a2[2];
          v3 = a2 + 3;
        }
        *v3 = 1;
        *((_BYTE *)v4 + 12) = 0;
        result = (int *)v4[1];
        v12 = *result;
        v4[1] = *result;
        if ( v12 )
          *(_DWORD *)(v12 + 8) = v4;
        result[2] = v4[2];
        v13 = (int **)v4[2];
        if ( *v13 != v4 )
          ++v13;
        *v13 = result;
        *result = (int)v4;
        v4[2] = (int)result;
        return result;
      }
      *v3 = 1;
      *((_BYTE *)v4 + 12) = v4 == result;
      *v7 = 1;
      a2 = v4;
    }
    while ( v4 != result );
  }
  return result;
}
