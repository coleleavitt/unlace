__int64 *__fastcall sub_D9D7F0(_QWORD *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rdx

  result = *(__int64 **)(a2 + 24);
  v3 = &result[*(unsigned int *)(a2 + 32)];
  if ( result != v3 )
  {
    while ( 1 )
    {
      v4 = result;
      if ( (unsigned __int64)*result > 1 )
        break;
      if ( v3 == ++result )
        return result;
    }
    if ( v3 != result )
    {
      v5 = *result;
      do
      {
        v6 = v4 + 1;
        if ( v3 == v6 )
        {
          v10 = *(__int64 **)a2;
          result = (__int64 *)*(unsigned int *)(a2 + 8);
          v11 = *(_QWORD *)a2 + 8LL * (_QWORD)result;
          if ( v11 == *(_QWORD *)a2 )
            return result;
LABEL_23:
          while ( (unsigned __int64)*v10 <= 1 )
          {
            if ( (__int64 *)v11 == ++v10 )
              goto LABEL_31;
          }
          if ( (__int64 *)v11 != v10 )
          {
            v12 = *v10;
            do
            {
              sub_D9D240(a1, v5, v12);
              result = v10 + 1;
              if ( (__int64 *)v11 == v10 + 1 )
                break;
              while ( 1 )
              {
                v12 = *result;
                v10 = result;
                if ( (unsigned __int64)*result > 1 )
                  break;
                if ( (__int64 *)v11 == ++result )
                  goto LABEL_31;
              }
            }
            while ( (__int64 *)v11 != result );
          }
LABEL_31:
          if ( v3 == v6 )
            return result;
        }
        else
        {
          v7 = v6;
          while ( (unsigned __int64)*v7 <= 1 )
          {
            if ( v3 == ++v7 )
              goto LABEL_20;
          }
          if ( v3 != v7 )
          {
            v8 = *v7;
            do
            {
              if ( v5 != v8 )
                sub_D9D240(a1, v5, v8);
              v9 = v7 + 1;
              if ( v3 == v7 + 1 )
                break;
              while ( 1 )
              {
                v8 = *v9;
                v7 = v9;
                if ( (unsigned __int64)*v9 > 1 )
                  break;
                if ( v3 == ++v9 )
                  goto LABEL_20;
              }
            }
            while ( v3 != v9 );
          }
LABEL_20:
          v10 = *(__int64 **)a2;
          result = (__int64 *)*(unsigned int *)(a2 + 8);
          v11 = *(_QWORD *)a2 + 8LL * (_QWORD)result;
          if ( *(_QWORD *)a2 != v11 )
            goto LABEL_23;
        }
        result = v6;
        while ( 1 )
        {
          v5 = *result;
          v4 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          if ( v3 == ++result )
            return result;
        }
      }
      while ( v3 != result );
    }
  }
  return result;
}

