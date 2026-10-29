/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D360
// Address: 0x0002D360

//----- (0002D360) --------------------------------------------------------
_DWORD **__cdecl sub_2D360(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
  _DWORD **result; // eax
  _DWORD *v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // edi
  _DWORD *v13; // ecx
  _DWORD *v14; // esi
  unsigned int v15; // esi
  _DWORD *v16; // ecx
  unsigned int v17; // edx
  _DWORD *v18; // edx
  int *v19; // edi
  int v20; // edi
  bool v21; // zf
  unsigned int v22; // edx
  _DWORD *v23; // edx

  result = (_DWORD **)(a1 + 1);
  v6 = a2;
  if ( a2 != a1 + 1 )
  {
    v7 = *a5;
    v8 = a2[4];
    if ( *a5 >= v8 )
    {
      if ( v8 >= v7 )
      {
        *a3 = a2;
        *a4 = a2;
        return (_DWORD **)a4;
      }
      v12 = (_DWORD *)a2[1];
      if ( v12 )
      {
        do
        {
          v13 = v12;
          v12 = (_DWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        v13 = (_DWORD *)a2[2];
        if ( (_DWORD *)*v13 != a2 )
        {
          v19 = a2 + 2;
          do
          {
            v20 = *v19;
            v13 = *(_DWORD **)(v20 + 8);
            v21 = *v13 == v20;
            v19 = (int *)(v20 + 8);
          }
          while ( !v21 );
        }
      }
      if ( v13 != result && v7 >= v13[4] )
      {
        v13 = *result;
        if ( !*result )
        {
          *a3 = result;
          return result;
        }
        while ( 1 )
        {
          v22 = v13[4];
          if ( v7 >= v22 )
          {
            if ( v22 >= v7 || (result = (_DWORD **)(v13 + 1), (v23 = (_DWORD *)v13[1]) == nullptr) )
            {
              *a3 = v13;
              return result;
            }
          }
          else
          {
            v23 = (_DWORD *)*v13;
            result = (_DWORD **)v13;
            if ( !*v13 )
              goto LABEL_37;
          }
          v13 = v23;
        }
      }
      if ( a2[1] )
      {
LABEL_37:
        *a3 = v13;
        return (_DWORD **)v13;
      }
      *a3 = a2;
      return (_DWORD **)(a2 + 1);
    }
  }
  v9 = *a2;
  if ( (_DWORD *)*a1 == a2 )
  {
    v11 = a2;
LABEL_16:
    if ( v9 )
    {
      *a3 = v11;
      return (_DWORD **)(v11 + 1);
    }
    *a3 = a2;
    return (_DWORD **)v6;
  }
  if ( v9 )
  {
    v10 = (_DWORD *)*a2;
    do
    {
      v11 = v10;
      v10 = (_DWORD *)v10[1];
    }
    while ( v10 );
  }
  else
  {
    v11 = a2;
    do
    {
      v14 = v11;
      v11 = (_DWORD *)v11[2];
    }
    while ( (_DWORD *)*v11 == v14 );
  }
  v15 = *a5;
  if ( v11[4] < *a5 )
    goto LABEL_16;
  v16 = *result;
  if ( *result )
  {
    result = (_DWORD **)(a1 + 1);
    while ( 1 )
    {
      v17 = v16[4];
      if ( v15 >= v17 )
      {
        if ( v17 >= v15 || (result = (_DWORD **)(v16 + 1), (v18 = (_DWORD *)v16[1]) == nullptr) )
        {
          *a3 = v16;
          return result;
        }
      }
      else
      {
        v18 = (_DWORD *)*v16;
        result = (_DWORD **)v16;
        if ( !*v16 )
        {
          *a3 = v16;
          return (_DWORD **)v16;
        }
      }
      v16 = v18;
    }
  }
  *a3 = result;
  return result;
}
