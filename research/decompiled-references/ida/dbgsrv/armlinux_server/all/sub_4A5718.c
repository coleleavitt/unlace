/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5718
// Address: 0x00000000004A5718

//----- (00000000004A5718) ----------------------------------------------------
__int64 __fastcall sub_4A5718(__int64 a1, char a2)
{
  _BYTE *v3; // x0
  int v4; // w2
  unsigned __int8 v5; // w5
  bool v6; // cc
  unsigned int v7; // w1
  __int64 v8; // x2
  __int64 result; // x0
  unsigned __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x3
  __int64 *v13; // x0
  __int64 v14; // x5
  int v15; // w1
  int v16; // w4
  int v17; // w3
  __int64 v18; // x5
  unsigned int v19; // w3
  unsigned int v20; // w6
  unsigned int v21; // w1
  int v22; // w2
  _BYTE *v23; // x4
  int v24; // w10
  __int64 v25; // x6
  __int64 v26; // x2
  __int64 v27; // x11
  int v28; // w1

  v3 = *(_BYTE **)(a1 + 24);
  if ( *v3 != 83 )
    return 0;
  *(_QWORD *)(a1 + 24) = v3 + 1;
  if ( v3[1] )
  {
    *(_QWORD *)(a1 + 24) = v3 + 2;
    v4 = (unsigned __int8)v3[1];
    v5 = v4 - 48;
    v6 = v4 != 95 && (unsigned __int8)(v4 - 48) > 9u;
    if ( !v6 || (unsigned __int8)(v4 - 65) <= 0x19u )
    {
      v7 = 0;
      if ( v4 == 95 )
      {
LABEL_8:
        if ( *(_DWORD *)(a1 + 56) > v7 )
        {
          v8 = *(_QWORD *)(a1 + 48);
          ++*(_DWORD *)(a1 + 64);
          return *(_QWORD *)(v8 + 8LL * v7);
        }
      }
      else
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = (unsigned __int8)(v4 - 65);
          v21 = v4 + 36 * v19 - 55;
          v22 = v4 + 36 * v19;
          if ( v5 > 9u )
          {
            if ( v20 > 0x19 )
              return 0;
          }
          else
          {
            v21 = v22 - 48;
          }
          v4 = 0;
          if ( v19 > v21 )
            break;
          v23 = *(_BYTE **)(a1 + 24);
          v19 = v21;
          if ( *v23 )
          {
            *(_QWORD *)(a1 + 24) = v23 + 1;
            v4 = (unsigned __int8)*v23;
            if ( v4 == 95 )
            {
              v7 = v21 + 1;
              goto LABEL_8;
            }
          }
          v5 = v4 - 48;
        }
      }
      return 0;
    }
  }
  else
  {
    v4 = 0;
  }
  v10 = *(unsigned int *)(a1 + 16);
  v11 = a2 & 1;
  v12 = (v10 >> 3) & 1;
  if ( (v10 & 8) != 0 )
    v11 = 0;
  if ( v11 && (unsigned __int8)(**(_BYTE **)(a1 + 24) - 67) <= 1u )
    LODWORD(v12) = 1;
  v13 = &qword_51CA90;
  if ( v4 != 116 )
  {
    do
    {
      v13 += 7;
      if ( v13 >= (__int64 *)&off_51CC18 )
        return 0;
    }
    while ( v4 != *(unsigned __int8 *)v13 );
  }
  v14 = v13[5];
  v15 = *(_DWORD *)(a1 + 40);
  v16 = *(_DWORD *)(a1 + 44);
  if ( v14 )
  {
    if ( v15 < v16 )
    {
      v24 = *((_DWORD *)v13 + 12);
      v25 = 24LL * v15++;
      v26 = *(_QWORD *)(a1 + 32) + v25;
      *(_DWORD *)(v26 + 4) = 0;
      *(_DWORD *)(a1 + 40) = v15;
      *(_DWORD *)v26 = 24;
      *(_QWORD *)(v26 + 8) = v14;
      *(_DWORD *)(v26 + 16) = v24;
      *(_QWORD *)(a1 + 72) = v26;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
  if ( (_DWORD)v12 )
  {
    v17 = *((_DWORD *)v13 + 8);
    v18 = v13[3];
  }
  else
  {
    v17 = *((_DWORD *)v13 + 4);
    v18 = v13[1];
  }
  result = 0;
  *(_DWORD *)(a1 + 80) += v17;
  if ( v16 > v15 )
  {
    result = *(_QWORD *)(a1 + 32) + 24LL * v15;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(a1 + 40) = v15 + 1;
    *(_DWORD *)result = 24;
    *(_QWORD *)(result + 8) = v18;
    *(_DWORD *)(result + 16) = v17;
  }
  if ( **(_BYTE **)(a1 + 24) == 66 )
  {
    result = sub_4A5698(a1, result);
    if ( result )
    {
      v28 = *(_DWORD *)(v27 + 56);
      if ( v28 < *(_DWORD *)(v27 + 60) )
      {
        *(_QWORD *)(*(_QWORD *)(v27 + 48) + 8LL * v28) = result;
        *(_DWORD *)(v27 + 56) = v28 + 1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
// 4A594C: variable 'v27' is possibly undefined
// 51CA90: using guessed type __int64 qword_51CA90;
// 51CC18: using guessed type char *off_51CC18;
