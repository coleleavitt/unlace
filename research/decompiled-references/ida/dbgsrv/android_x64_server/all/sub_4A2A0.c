/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2A0
// Address: 0x000000000004A2A0

//----- (000000000004A2A0) ----------------------------------------------------
_QWORD **__fastcall sub_4A2A0(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned __int64 *a5)
{
  _QWORD **result; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rsi
  _QWORD *v23; // rsi

  result = (_QWORD **)(a1 + 1);
  if ( a1 + 1 == a2 || (v6 = *a5, v7 = a2[4], *a5 < v7) )
  {
    v8 = *a2;
    if ( (_QWORD *)*a1 == a2 )
    {
      v10 = a2;
      if ( v8 )
      {
LABEL_19:
        *a3 = v10;
        return (_QWORD **)(v10 + 1);
      }
LABEL_29:
      *a3 = a2;
      return (_QWORD **)a2;
    }
    if ( v8 )
    {
      v9 = (_QWORD *)*a2;
      do
      {
        v10 = v9;
        v9 = (_QWORD *)v9[1];
      }
      while ( v9 );
    }
    else
    {
      v10 = a2;
      do
      {
        v14 = v10;
        v10 = (_QWORD *)v10[2];
      }
      while ( (_QWORD *)*v10 == v14 );
    }
    v15 = *a5;
    if ( v10[4] < v15 )
    {
      if ( v8 )
        goto LABEL_19;
      goto LABEL_29;
    }
    a2 = *result;
    if ( *result )
    {
      result = (_QWORD **)(a1 + 1);
      while ( 1 )
      {
        v16 = a2[4];
        if ( v15 >= v16 )
        {
          if ( v16 >= v15 || (result = (_QWORD **)(a2 + 1), (v17 = (_QWORD *)a2[1]) == nullptr) )
          {
            *a3 = a2;
            return result;
          }
        }
        else
        {
          v17 = (_QWORD *)*a2;
          result = (_QWORD **)a2;
          if ( !*a2 )
            goto LABEL_29;
        }
        a2 = v17;
      }
    }
    *a3 = result;
  }
  else
  {
    if ( v7 >= v6 )
    {
      *a3 = a2;
      *a4 = a2;
      return (_QWORD **)a4;
    }
    v11 = a2[1];
    if ( v11 )
    {
      v12 = (_QWORD *)a2[1];
      do
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
    }
    else
    {
      v13 = (_QWORD *)a2[2];
      if ( (_QWORD *)*v13 != a2 )
      {
        v18 = a2 + 2;
        do
        {
          v19 = *v18;
          v13 = *(_QWORD **)(v19 + 16);
          v20 = *v13 == v19;
          v18 = (__int64 *)(v19 + 16);
        }
        while ( !v20 );
      }
    }
    if ( v13 != result && v6 >= v13[4] )
    {
      v21 = *result;
      if ( !*result )
      {
        *a3 = result;
        return result;
      }
      while ( 1 )
      {
        v22 = v21[4];
        if ( v6 >= v22 )
        {
          if ( v22 >= v6 || (result = (_QWORD **)(v21 + 1), (v23 = (_QWORD *)v21[1]) == nullptr) )
          {
            *a3 = v21;
            return result;
          }
        }
        else
        {
          v23 = (_QWORD *)*v21;
          result = (_QWORD **)v21;
          if ( !*v21 )
          {
            *a3 = v21;
            return (_QWORD **)v21;
          }
        }
        v21 = v23;
      }
    }
    if ( v11 )
    {
      *a3 = v13;
      return (_QWORD **)v13;
    }
    else
    {
      *a3 = a2;
      return (_QWORD **)(a2 + 1);
    }
  }
  return result;
}
