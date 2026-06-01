__int64 __fastcall sub_BE1F20(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  _QWORD *v7; // rdx

  result = sub_BE07E0(a1, (__int64)a2);
  v5 = *(_QWORD *)result;
  v6 = *(_QWORD *)result + 16LL * *(unsigned int *)(result + 8);
  if ( *(_QWORD *)result != v6 )
  {
    while ( *(_QWORD *)(v5 + 8) <= 1u )
    {
      v5 += 16;
      if ( v6 == v5 )
        return result;
    }
    if ( v6 != v5 )
    {
      v7 = *(_QWORD **)(v5 + 8);
      do
      {
        sub_BE16E0(a1, a2, v7, a3);
        result = v5 + 16;
        if ( v6 == v5 + 16 )
          break;
        while ( 1 )
        {
          v7 = *(_QWORD **)(result + 8);
          v5 = result;
          if ( (unsigned __int64)v7 > 1 )
            break;
          result += 16;
          if ( v6 == result )
            return result;
        }
      }
      while ( v6 != result );
    }
  }
  return result;
}

