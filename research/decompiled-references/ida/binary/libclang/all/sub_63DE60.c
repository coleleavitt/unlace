__int64 __fastcall sub_63DE60(__int64 a1, unsigned __int8 **a2)
{
  unsigned __int8 *v4; // rbp
  unsigned __int8 *v5; // rsi
  __int64 v6; // rbp
  signed __int64 v7; // r12
  unsigned __int8 *v8; // rdi
  __int64 result; // rax
  unsigned __int8 *v10; // rdx
  size_t v11; // rdx
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // rdi
  unsigned __int8 *v14; // rdx

  if ( (unsigned __int8 **)a1 != a2 )
  {
    v4 = (unsigned __int8 *)(a2 + 3);
    v5 = *a2;
    if ( v5 == v4 )
    {
      v6 = (__int64)a2[1];
      v7 = *(_QWORD *)(a1 + 8);
      if ( v7 >= (unsigned __int64)v6 )
      {
        if ( v6 )
        {
          v13 = *(unsigned __int8 **)a1;
          if ( v6 <= 1 )
          {
            if ( v6 == 1 )
            {
              result = *v5;
              *v13 = result;
            }
          }
          else
          {
            result = (__int64)memmove(v13, v5, (size_t)a2[1]);
          }
        }
        goto LABEL_16;
      }
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v6 )
      {
        v14 = a2[1];
        v7 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        result = sub_25D6230(a1, a1 + 24, v14, 1);
      }
      else
      {
        v8 = *(unsigned __int8 **)a1;
        if ( !v7 )
        {
          v11 = (size_t)a2[1];
          goto LABEL_18;
        }
        if ( v7 <= 1 )
        {
          if ( v7 != 1 )
          {
            v5 += v7;
            v8 += v7;
            v11 = v6 - v7;
            goto LABEL_18;
          }
          result = *v5;
          *v8 = result;
        }
        else
        {
          result = (__int64)memmove(v8, v5, v7);
        }
      }
      v10 = a2[1];
      if ( (unsigned __int8 *)v7 == v10 )
      {
LABEL_16:
        *(_QWORD *)(a1 + 8) = v6;
        a2[1] = nullptr;
        return result;
      }
      v11 = (size_t)&v10[-v7];
      v8 = (unsigned __int8 *)(v7 + *(_QWORD *)a1);
      v5 = &(*a2)[v7];
LABEL_18:
      result = (__int64)memcpy(v8, v5, v11);
      goto LABEL_16;
    }
    v12 = *(unsigned __int8 **)a1;
    if ( v12 != (unsigned __int8 *)(a1 + 24) )
    {
      free(v12);
      v5 = *a2;
    }
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = a2[1];
    result = (__int64)a2[2];
    *(_QWORD *)(a1 + 16) = result;
    *a2 = v4;
    *(_OWORD *)(a2 + 1) = 0;
  }
  return result;
}

