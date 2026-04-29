__int64 __fastcall sub_22A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 *v11; // rdx

  result = (unsigned int)*(unsigned __int8 *)(a3 + 24) - 10;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 24) - 10) <= 1u )
  {
    v7 = *(_QWORD *)(a3 + 8);
    v8 = *(__int64 **)a3;
    v9 = *v8;
    if ( v7 == 1 || (result = (__int64)(v8 + 3), v10 = 3 * v7, v11 = &v8[v10], v10 == 3) )
    {
LABEL_8:
      result = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(result + 16) != v9 && v9 != -1 )
      {
        get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        result = is_defarg();
        if ( !(_BYTE)result )
        {
          result = *(_QWORD *)a3;
          if ( 24LL * *(_QWORD *)(a3 + 8) )
          {
            while ( *(_WORD *)(result + 16) != 497 )
            {
              result += 24;
              if ( result == *(_QWORD *)a3 + 24LL * *(_QWORD *)(a3 + 8) )
                goto LABEL_17;
            }
            return op_offset();
          }
LABEL_17:
          if ( a4 )
          {
            result = op_based_stroff();
            if ( !(_BYTE)result )
            {
              result = is_spec_ea();
              if ( !(_BYTE)result )
                return op_offset();
            }
          }
        }
      }
    }
    else
    {
      while ( v9 == *(_QWORD *)result )
      {
        result += 24;
        if ( v11 == (__int64 *)result )
          goto LABEL_8;
      }
    }
  }
  return result;
}
