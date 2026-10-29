/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_845C4
// Address: 0x000845C4

//----- (000845C4) --------------------------------------------------------
int __fastcall sub_845C4(_DWORD *a1, char a2)
{
  _BYTE *v2; // r3
  unsigned int v4; // r2
  unsigned __int8 v5; // r4
  bool v6; // cc
  unsigned int v7; // r3
  int v8; // r1
  int result; // r0
  unsigned int v10; // r1
  _BYTE *v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r3
  int v15; // r1
  int v16; // r4
  int *v17; // r3
  int v18; // r1
  int v19; // r2
  _DWORD *v20; // r5
  __int64 v21; // kr08_8
  __int64 v22; // kr10_8
  int v23; // r7
  int v24; // lr

  v2 = (_BYTE *)a1[3];
  if ( *v2 != 83 )
    return 0;
  a1[3] = v2 + 1;
  v4 = (unsigned __int8)v2[1];
  if ( v2[1] )
  {
    a1[3] = v2 + 2;
    v4 = (unsigned __int8)v2[1];
    v5 = v4 - 48;
    v6 = v4 > 0x5F;
    if ( v4 != 95 )
      v6 = (unsigned __int8)(v4 - 48) > 9u;
    if ( !v6 || v4 - 65 <= 0x19 )
    {
      if ( v4 == 95 )
      {
        v7 = 0;
LABEL_9:
        if ( a1[8] > v7 )
        {
          v8 = a1[7];
          ++a1[10];
          return *(_DWORD *)(v8 + 4 * v7);
        }
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          v12 = v4 - 65;
          v13 = v4 + 36 * v10;
          v14 = v13 - 55;
          if ( v5 > 9u )
          {
            if ( v12 > 0x19 )
              return 0;
          }
          else
          {
            v14 = v13 - 48;
          }
          v6 = v10 > v14;
          v10 = v14;
          if ( v6 )
            break;
          v11 = (_BYTE *)a1[3];
          v4 = (unsigned __int8)*v11;
          if ( *v11 )
          {
            a1[3] = v11 + 1;
            v4 = (unsigned __int8)*v11;
            if ( v4 == 95 )
            {
              v7 = v14 + 1;
              goto LABEL_9;
            }
          }
          v5 = v4 - 48;
        }
      }
      return 0;
    }
  }
  v15 = a2 & 1;
  if ( (a1[2] & 8) != 0 )
  {
    v15 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( v15 && (unsigned int)*(unsigned __int8 *)a1[3] - 67 <= 1 )
    v16 = 1;
  v17 = &dword_D1D58;
  if ( v4 != 116 )
  {
    do
    {
      v17 += 7;
      if ( v17 >= (int *)&off_D1E1C )
        return 0;
    }
    while ( v4 != *(unsigned __int8 *)v17 );
  }
  result = v17[5];
  v18 = a1[6];
  v19 = a1[5];
  if ( result )
  {
    if ( v19 < v18 )
    {
      v23 = 16 * v19;
      v24 = v17[6];
      ++v19;
      v20 = (_DWORD *)(a1[4] + v23);
      v20[1] = 0;
      a1[5] = v19;
      *v20 = 24;
      v20[2] = result;
      v20[3] = v24;
    }
    else
    {
      v20 = nullptr;
    }
    a1[11] = v20;
  }
  if ( v16 )
    v21 = *(_QWORD *)(v17 + 3);
  else
    v21 = *(_QWORD *)(v17 + 1);
  if ( v18 <= v19 )
    result = 0;
  a1[12] += HIDWORD(v21);
  if ( v18 > v19 )
  {
    result = a1[4] + 16 * v19;
    *(_DWORD *)(result + 4) = 0;
    a1[5] = v19 + 1;
    *(_DWORD *)result = 24;
    *(_QWORD *)(result + 8) = v21;
  }
  if ( *(_BYTE *)a1[3] == 66 )
  {
    result = sub_8458C((int)a1, result);
    if ( result )
    {
      v22 = *((_QWORD *)a1 + 4);
      if ( (int)v22 < SHIDWORD(v22) )
      {
        *(_DWORD *)(a1[7] + 4 * v22) = result;
        a1[8] = v22 + 1;
      }
      return result;
    }
    return 0;
  }
  return result;
}
// D1D58: using guessed type int dword_D1D58;
// D1E1C: using guessed type char *off_D1E1C;
