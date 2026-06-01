/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AC94
// Address: 0x000000000004AC94

//----- (000000000004AC94) ----------------------------------------------------
__int64 *__fastcall sub_4AC94(__int64 **a1, unsigned __int64 *a2)
{
  __int64 *result; // x0
  __int64 *v4; // x9
  unsigned __int64 v5; // x10
  __int64 *v6; // x19
  __int64 *v7; // x11
  unsigned __int64 v8; // x12
  bool v9; // cf
  _BOOL4 v10; // w12
  __int64 *v11; // x10
  __int64 **v12; // x9
  __int64 v13; // x10
  __int64 *v14; // x11
  __int64 **v15; // t1

  v4 = (__int64 *)(a1 + 1);
  result = a1[1];
  if ( result )
  {
    v5 = *a2;
    v6 = v4;
    v7 = result;
    do
    {
      v8 = v7[4];
      v9 = v8 >= v5;
      v10 = v8 < v5;
      if ( v9 )
        v6 = v7;
      v7 = (__int64 *)v7[v10];
    }
    while ( v7 );
    if ( v6 == v4 )
    {
      return nullptr;
    }
    else if ( v5 >= v6[4] )
    {
      v11 = (__int64 *)v6[1];
      if ( v11 )
      {
        do
        {
          v12 = (__int64 **)v11;
          v11 = (__int64 *)*v11;
        }
        while ( v11 );
      }
      else
      {
        v13 = (__int64)(v6 + 2);
        v12 = (__int64 **)v6[2];
        if ( *v12 != v6 )
        {
          do
          {
            v14 = *(__int64 **)v13;
            v15 = *(__int64 ***)(*(_QWORD *)v13 + 16LL);
            v13 = *(_QWORD *)v13 + 16LL;
            v12 = v15;
          }
          while ( *v15 != v14 );
        }
      }
      if ( *a1 == v6 )
        *a1 = (__int64 *)v12;
      a1[2] = (__int64 *)((char *)a1[2] - 1);
      sub_4AD74(result, v6);
      operator delete(v6);
      return (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}
// 0: using guessed type int dword_0;
