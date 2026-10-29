/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_260E0
// Address: 0x000260E0

//----- (000260E0) --------------------------------------------------------
_DWORD *__fastcall sub_260E0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
  unsigned int v5; // r7
  unsigned int v6; // r5
  int v7; // r5
  _DWORD *v8; // r7
  _DWORD *v9; // r3
  _DWORD *v10; // r7
  _DWORD *v11; // r6
  _DWORD *v12; // r3
  bool v13; // zf
  unsigned int v14; // r3
  _DWORD *v15; // r4
  _DWORD *v16; // r0
  unsigned int v17; // r4
  _DWORD *v18; // r4
  _DWORD *v19; // r7
  int v20; // r4
  unsigned int v21; // r3
  _DWORD *v22; // r3
  _DWORD **v24; // [sp+4h] [bp-4h]
  _DWORD **v25; // [sp+4h] [bp-4h]

  if ( a1 + 1 != a2 )
  {
    v5 = a2[4];
    v6 = *a5;
    if ( *a5 >= v5 )
    {
      if ( v5 >= v6 )
      {
        *a3 = a2;
        *a4 = a2;
        return a4;
      }
      v25 = (_DWORD **)(a1 + 1);
      v10 = (_DWORD *)a2[1];
      if ( v10 )
      {
        do
        {
          v11 = v10;
          v10 = (_DWORD *)*v10;
        }
        while ( v10 );
      }
      else
      {
        v19 = a2 + 2;
        v11 = (_DWORD *)a2[2];
        if ( (_DWORD *)*v11 != a2 )
        {
          do
          {
            v20 = *v19;
            v19 = (_DWORD *)(*v19 + 8);
            v11 = *(_DWORD **)(v20 + 8);
          }
          while ( *v11 != v20 );
        }
      }
      v15 = a1 + 1;
      if ( v11 == v25 || v6 < v11[4] )
      {
        if ( a2[1] )
        {
          *a3 = v11;
          return v11;
        }
        else
        {
          *a3 = a2++;
        }
        return a2;
      }
      a2 = *v25;
      if ( *v25 )
      {
        v16 = a1 + 1;
        while ( 1 )
        {
          v21 = a2[4];
          if ( v6 >= v21 )
          {
            if ( v21 >= v6 || (v22 = (_DWORD *)a2[1], v16 = a2 + 1, !v22) )
            {
LABEL_43:
              *a3 = a2;
              return v16;
            }
            ++a2;
          }
          else
          {
            v22 = (_DWORD *)*a2;
            if ( !*a2 )
              goto LABEL_42;
          }
          v16 = a2;
          a2 = v22;
        }
      }
LABEL_44:
      *a3 = v15;
      return v15;
    }
  }
  v7 = *a2;
  v8 = a2;
  if ( (_DWORD *)*a1 != a2 )
  {
    v24 = (_DWORD **)(a1 + 1);
    if ( v7 )
    {
      v9 = (_DWORD *)*a2;
      do
      {
        v8 = v9;
        v9 = (_DWORD *)v9[1];
      }
      while ( v9 );
    }
    else
    {
      v12 = a2;
      do
      {
        v8 = (_DWORD *)v12[2];
        v13 = *v8 == (_DWORD)v12;
        v12 = v8;
      }
      while ( v13 );
    }
    v14 = *a5;
    v15 = a1 + 1;
    if ( v8[4] >= *a5 )
    {
      a2 = *v24;
      if ( *v24 )
      {
        v16 = a1 + 1;
        while ( 1 )
        {
          v17 = a2[4];
          if ( v14 >= v17 )
          {
            if ( v17 >= v14 )
              goto LABEL_43;
            v18 = (_DWORD *)a2[1];
            v16 = a2 + 1;
            if ( !v18 )
              goto LABEL_43;
            ++a2;
          }
          else
          {
            v18 = (_DWORD *)*a2;
            if ( !*a2 )
              goto LABEL_42;
          }
          v16 = a2;
          a2 = v18;
        }
      }
      goto LABEL_44;
    }
  }
  if ( v7 )
  {
    *a3 = v8;
    return v8 + 1;
  }
  else
  {
LABEL_42:
    *a3 = a2;
  }
  return a2;
}
