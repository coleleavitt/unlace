__int64 __fastcall sub_2160B0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5)
{
  __int64 v5; // r15
  int v7; // ebp
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v5 = a2;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 < v9 )
        break;
      if ( v9 == v10 )
      {
        if ( v9 )
          *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        a2 = *(_QWORD *)(a1 + 48);
        if ( !(unsigned __int8)sub_215840(*(_QWORD *)(a1 + 40), a2, (__int64 *)(a1 + 8), a5) )
        {
          result = v7;
          goto LABEL_11;
        }
        v9 = *(_QWORD *)(a1 + 32);
      }
      ++v7;
      *(_QWORD *)(a1 + 32) = v9 + 1;
      *(_BYTE *)(v5 + v8) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v9);
      v8 = v7;
      if ( v7 >= a3 )
      {
        result = v7;
        goto LABEL_11;
      }
    }
    if ( under_debugger )
      BUG();
    interr(40235, a2, v10, a4, *(double *)a5.m128_u64);
    return sub_216180();
  }
  else
  {
    result = 0;
    v7 = 0;
LABEL_11:
    **(_DWORD **)(a1 + 56) += v7;
  }
  return result;
}
