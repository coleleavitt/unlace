/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8138
// Address: 0x00000000000D8138

//----- (00000000000D8138) ----------------------------------------------------
__int64 __fastcall sub_D8138(__int64 result, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // w20
  __int64 v7; // x24
  __int64 v8; // x8
  __int64 v9; // x22
  __int64 v10; // x9
  char *v11; // x8
  int v12; // w8
  __int64 v13; // x0
  char *v14; // x2
  unsigned __int64 v15; // x24
  _QWORD *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x3

  v4 = a4;
  if ( result == *(_QWORD *)(a2 + 16) )
  {
    v11 = *(char **)(a2 + 32);
    if ( v11 )
    {
      if ( v11 == a3 )
      {
        if ( *(_DWORD *)(a2 + 48) == 2 )
          *(_DWORD *)(a2 + 48) = a4;
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 48) = 2;
        *(_DWORD *)(a2 + 60) = v12 + 1;
        *(_BYTE *)(a2 + 78) = 1;
      }
    }
    else
    {
      *(_QWORD *)(a2 + 32) = a3;
      *(_DWORD *)(a2 + 48) = a4;
      *(_DWORD *)(a2 + 60) = 1;
    }
  }
  else
  {
    v7 = *(unsigned int *)(result + 20);
    v8 = *(_QWORD *)(result + 32);
    v9 = result;
    if ( a3 )
    {
      v10 = v8 >> 8;
      if ( (v8 & 1) != 0 )
        v10 = *(_QWORD *)(*(_QWORD *)a3 + v10);
    }
    else
    {
      v10 = 0;
    }
    v13 = *(_QWORD *)(result + 24);
    v14 = &a3[v10];
    if ( (v8 & 2) != 0 )
      a4 = (unsigned int)a4;
    else
      a4 = 2;
    result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v13 + 56LL))(v13, a2, v14, a4);
    if ( (unsigned int)v7 >= 2 )
    {
      v15 = v9 + 16 * v7 + 24;
      v16 = (_QWORD *)(v9 + 40);
      do
      {
        v17 = v16[1];
        if ( a3 )
        {
          v18 = v17 >> 8;
          if ( (v17 & 1) != 0 )
            v18 = *(_QWORD *)(*(_QWORD *)a3 + v18);
        }
        else
        {
          v18 = 0;
        }
        if ( (v17 & 2) != 0 )
          v19 = v4;
        else
          v19 = 2;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64))(*(_QWORD *)*v16 + 56LL))(
                   *v16,
                   a2,
                   &a3[v18],
                   v19);
        if ( *(_BYTE *)(a2 + 78) )
          break;
        v16 += 2;
      }
      while ( (unsigned __int64)v16 < v15 );
    }
  }
  return result;
}
