/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F830
// Address: 0x000000000049F830

//----- (000000000049F830) ----------------------------------------------------
__int64 __fastcall sub_49F830(char a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _DWORD *v4; // x6
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x5
  _DWORD *v8; // x4
  __int64 v10; // x4
  __int64 v11; // x4
  __int64 v12; // x2
  __int64 v13; // x2
  _DWORD *v14; // x8
  __int64 v15; // x6
  __int64 v16; // x0
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x5
  __int64 v20; // x4
  __int64 v21; // x0
  __int64 v22; // x0

  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = a3;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( a1 )
  {
    a3[2] = a2;
    if ( a4 == a3 )
    {
      a4[1] = a2;
      a4[3] = a2;
    }
    else if ( (_QWORD *)a4[2] == a3 )
    {
      a4[2] = a2;
    }
  }
  else
  {
    a3[3] = a2;
    if ( (_QWORD *)a4[3] == a3 )
      a4[3] = a2;
  }
  v4 = (_DWORD *)a4[1];
LABEL_6:
  while ( (_DWORD *)a2 != v4 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)v5 )
      {
        *v4 = 1;
        return 1;
      }
      v6 = *(_QWORD *)(v5 + 8);
      v7 = v6;
      v8 = *(_DWORD **)(v6 + 16);
      if ( (_DWORD *)v5 == v8 )
        break;
      if ( !v8 || *v8 )
      {
        v10 = *(_QWORD *)(v5 + 16);
        if ( v10 == a2 )
        {
          v17 = *(_QWORD *)(a2 + 24);
          v18 = *(_QWORD *)(v5 + 8);
          *(_QWORD *)(v5 + 16) = v17;
          if ( v17 )
          {
            *(_QWORD *)(v17 + 8) = v5;
            v18 = *(_QWORD *)(v5 + 8);
          }
          *(_QWORD *)(a2 + 8) = v18;
          if ( v5 == a4[1] )
          {
            a4[1] = a2;
          }
          else
          {
            v19 = *(_QWORD *)(v5 + 8);
            if ( v5 == *(_QWORD *)(v19 + 24) )
              *(_QWORD *)(v19 + 24) = a2;
            else
              *(_QWORD *)(v19 + 16) = a2;
          }
          *(_QWORD *)(a2 + 24) = v5;
          *(_QWORD *)(v5 + 8) = a2;
          a2 = v5;
          v5 = v10;
        }
        v11 = *(_QWORD *)(v6 + 24);
        *(_DWORD *)v5 = 1;
        v12 = *(_QWORD *)(v11 + 16);
        *(_DWORD *)v6 = 0;
        *(_QWORD *)(v6 + 24) = v12;
        if ( v12 )
          *(_QWORD *)(v12 + 8) = v6;
        *(_QWORD *)(v11 + 8) = *(_QWORD *)(v6 + 8);
        if ( v6 == a4[1] )
        {
          a4[1] = v11;
        }
        else
        {
          v13 = *(_QWORD *)(v6 + 8);
          if ( v6 == *(_QWORD *)(v13 + 16) )
            *(_QWORD *)(v13 + 16) = v11;
          else
            *(_QWORD *)(v13 + 24) = v11;
        }
        *(_QWORD *)(v11 + 16) = v6;
        *(_QWORD *)(v6 + 8) = v11;
        v4 = (_DWORD *)a4[1];
        goto LABEL_6;
      }
      *(_DWORD *)v5 = 1;
      a2 = v6;
      *v8 = 1;
      *(_DWORD *)v6 = 0;
      if ( (_DWORD *)v6 == v4 )
        goto LABEL_12;
    }
    v14 = *(_DWORD **)(v6 + 24);
    if ( !v14 || *v14 )
    {
      v15 = *(_QWORD *)(v5 + 24);
      if ( v15 == a2 )
      {
        v20 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(v5 + 24) = v20;
        if ( v20 )
        {
          *(_QWORD *)(v20 + 8) = v5;
          v6 = *(_QWORD *)(v5 + 8);
        }
        *(_QWORD *)(a2 + 8) = v6;
        if ( v5 == a4[1] )
        {
          a4[1] = a2;
        }
        else
        {
          v21 = *(_QWORD *)(v5 + 8);
          if ( v5 == *(_QWORD *)(v21 + 16) )
            *(_QWORD *)(v21 + 16) = a2;
          else
            *(_QWORD *)(v21 + 24) = a2;
        }
        *(_QWORD *)(a2 + 16) = v5;
        v8 = (_DWORD *)v15;
        v22 = *(_QWORD *)(v7 + 16);
        v15 = *(_QWORD *)(v22 + 24);
        *(_QWORD *)(v5 + 8) = a2;
        a2 = v5;
        v5 = v22;
      }
      *v8 = 1;
      *(_DWORD *)v7 = 0;
      *(_QWORD *)(v7 + 16) = v15;
      if ( v15 )
        *(_QWORD *)(v15 + 8) = v7;
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v7 + 8);
      if ( v7 == a4[1] )
      {
        a4[1] = v5;
      }
      else
      {
        v16 = *(_QWORD *)(v7 + 8);
        if ( v7 == *(_QWORD *)(v16 + 24) )
          *(_QWORD *)(v16 + 24) = v5;
        else
          *(_QWORD *)(v16 + 16) = v5;
      }
      *(_QWORD *)(v5 + 24) = v7;
      *(_QWORD *)(v7 + 8) = v5;
      v4 = (_DWORD *)a4[1];
    }
    else
    {
      *(_DWORD *)v5 = 1;
      a2 = v6;
      *v14 = 1;
      *(_DWORD *)v6 = 0;
    }
  }
LABEL_12:
  *(_DWORD *)a2 = 1;
  return 1;
}
