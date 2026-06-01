__int64 __fastcall sub_677500(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 result; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r13

  if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), a3, a4, a5, a6) )
    return 0;
  result = sub_675910(a1, *(_QWORD *)(a2 + 24), *(__int64 **)(a2 + 40), a3, a4, a5, a6);
  v7 = result;
  if ( !(_BYTE)result )
    return 0;
  v8 = *(_QWORD *)(a2 + 64);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 8);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 16;
      v11 = v10 + 32 * v9;
      while ( 1 )
      {
        result = sub_674590(a1, v10, a3, a4, a5, a6);
        if ( !(_BYTE)result )
          break;
        v10 += 32;
        if ( v10 == v11 )
          return v7;
      }
    }
    else
    {
      return v7;
    }
  }
  return result;
}

