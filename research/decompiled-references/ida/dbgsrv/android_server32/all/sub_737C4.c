/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_737C4
// Address: 0x000737C4

//----- (000737C4) --------------------------------------------------------
_DWORD *__fastcall sub_737C4(_DWORD *result, int *a2, const char *a3)
{
  int v4; // r5
  unsigned int v5; // r2
  int v6; // r5
  int v7; // r6
  int v8; // r4
  _DWORD *v9; // r0
  int v10; // r5
  unsigned int v11; // r1
  unsigned int v12; // r7
  unsigned int v13; // r4
  unsigned int v14; // r3
  void *v15; // r1
  _DWORD *v16; // r5
  unsigned int v17; // r2
  size_t v18; // r7
  int v19; // r1
  int v20; // r4
  size_t v21; // r3
  void *v22; // r1
  bool v23; // cf
  unsigned int v24; // r2
  _DWORD *v25; // r5
  unsigned int v26; // [sp+4h] [bp-1Ch]
  unsigned int v27; // [sp+8h] [bp-18h]
  int v29; // [sp+10h] [bp-10h]
  size_t v30; // [sp+14h] [bp-Ch]
  int v31; // [sp+1Ch] [bp-4h]

  *result = 0;
  result[1] = 0;
  result[2] = 0;
  v4 = a2[1];
  if ( v4 )
  {
    v31 = (int)result;
    v30 = strlen(a3);
    v5 = (v4 - 1) * v30;
    v6 = 12 * v4;
    v7 = *a2;
    v8 = *a2 + v6;
    if ( v6 )
    {
      v9 = (_DWORD *)(v7 + 4);
      do
      {
        if ( *v9 )
          v5 = v5 + *v9 - 1;
        v9 += 3;
        v6 -= 12;
      }
      while ( v6 );
    }
    v10 = v8;
    if ( *(_DWORD *)(v31 + 8) < v5 )
    {
      *(_DWORD *)v31 = qvector_reserve(v31, *(void **)v31, v5, 1u);
      v7 = *a2;
      v10 = *a2 + 12 * a2[1];
    }
    result = (_DWORD *)v31;
    if ( v7 != v10 )
    {
      v29 = v10;
      do
      {
        v11 = result[1];
        if ( v11 >= 2 )
        {
          v12 = v11 + v30;
          v13 = v11 - 1;
          v14 = v11 - 1 + v30;
          v15 = (void *)*result;
          if ( result[2] < v12 )
          {
            v27 = v14;
            v16 = result;
            v15 = qvector_reserve((int)result, v15, v12, 1u);
            *v16 = v15;
            result = v16;
            v10 = v29;
            v14 = v27;
          }
          result[1] = v12;
          *((_BYTE *)v15 + v14) = 0;
          memmove((void *)(*result + v13), a3, v30);
          result = (_DWORD *)v31;
        }
        v17 = *(_DWORD *)(v7 + 4);
        v18 = v17 - 1;
        if ( v17 >= 2 )
        {
          v19 = result[1];
          v20 = v19 - 1;
          if ( !v19 )
            v20 = 0;
          v21 = v20 + v18;
          v22 = (void *)*result;
          v23 = result[2] >= v20 + v17;
          v24 = v20 + v17;
          if ( v23 )
          {
            v10 = v29;
          }
          else
          {
            v25 = result;
            v26 = v24;
            v22 = qvector_reserve((int)result, v22, v24, 1u);
            *v25 = v22;
            result = v25;
            v10 = v29;
            v21 = v20 + v18;
            v24 = v26;
          }
          result[1] = v24;
          *((_BYTE *)v22 + v21) = 0;
          qmemcpy((void *)(*result + v20), *(const void **)v7, v18);
          result = (_DWORD *)v31;
        }
        v7 += 12;
      }
      while ( v10 != v7 );
    }
  }
  return result;
}
