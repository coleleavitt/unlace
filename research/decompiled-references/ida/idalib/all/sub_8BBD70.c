__int64 __fastcall sub_8BBD70(__int64 **a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v6 = a3;
  result = (__int64)sub_8B8C20(a1, a3);
  v8 = (unsigned __int64 *)a1[11];
  v9 = (unsigned __int64 *)(result + 24);
  if ( (unsigned __int64 *)result == v8 )
    v9 = (unsigned __int64 *)a1[2];
  if ( v8 == v9 || v6 < *v9 || v9[1] < a4 )
  {
    result = a2[1];
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)(result + 1) )
    {
      v12 = qvector_reserve(a2, v10, result + 1, 1);
      *a2 = v12;
      v10 = v12;
      result = a2[1];
    }
    *(_BYTE *)(v10 + result) = 0;
    ++a2[1];
    if ( v6 < a4 )
    {
      while ( a1[11] != (__int64 *)v9 )
      {
        v11 = *v9;
        if ( *v9 >= a4 )
          break;
        if ( v6 < v11 )
          result = sub_8B9860(a2, a1, v6, v11, 0);
        v6 = v9[1];
        v9 += 3;
        if ( v6 >= a4 )
          return result;
      }
      return sub_8B9860(a2, a1, v6, a4, 0);
    }
  }
  return result;
}
