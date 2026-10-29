unsigned __int64 __fastcall sub_8BBF00(__int64 **a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  v6 = a3;
  result = (unsigned __int64)sub_8B8C20(a1, a3);
  v8 = (unsigned __int64 *)a1[11];
  v9 = (unsigned __int64 *)(result + 24);
  if ( (unsigned __int64 *)result == v8 )
    v9 = (unsigned __int64 *)a1[2];
  if ( v8 != v9 && *v9 < a4 )
  {
    result = a2[1];
    v10 = *a2;
    if ( a2[2] < result + 1 )
    {
      v12 = qvector_reserve(a2, v10, result + 1, 1);
      *a2 = v12;
      v10 = v12;
      result = a2[1];
    }
    *(_BYTE *)(v10 + result) = 1;
    ++a2[1];
    for ( ; a1[11] != (__int64 *)v9; v9 += 3 )
    {
      result = v9[1];
      if ( v6 >= result )
        break;
      v11 = *v9;
      if ( v6 >= *v9 )
        v11 = v6;
      if ( result > a4 )
        result = a4;
      v6 = result;
      if ( v11 >= result )
        break;
      result = sub_8B9860(a2, a1, v11, result, 1);
      if ( !(_BYTE)result )
        break;
    }
  }
  return result;
}
