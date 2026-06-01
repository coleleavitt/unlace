_QWORD *__fastcall sub_145CD40(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r8
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx

  v2 = *(_QWORD **)(a1 + 720);
  result = *(_QWORD **)(a1 + 712);
  v5 = ((char *)v2 - (char *)result) >> 5;
  v6 = v2 - result;
  if ( v5 <= 0 )
  {
    v8 = *(_QWORD **)(a1 + 712);
LABEL_14:
    switch ( v6 )
    {
      case 2LL:
        v7 = v8;
        break;
      case 3LL:
        v7 = v8 + 1;
        if ( a2 == *v8 )
          goto LABEL_19;
        break;
      case 1LL:
        goto LABEL_28;
      default:
        goto LABEL_17;
    }
    v8 = v7 + 1;
    if ( a2 == *v7 )
    {
      result = v7 + 1;
      v8 = v7++;
      goto LABEL_19;
    }
LABEL_28:
    if ( a2 == *v8 )
    {
LABEL_18:
      v7 = v8 + 1;
      goto LABEL_19;
    }
LABEL_17:
    v7 = v2 + 1;
    v8 = v2;
    goto LABEL_19;
  }
  v7 = result + 1;
  if ( *result != a2 )
  {
    if ( result[1] == a2 )
    {
      v8 = result + 1;
    }
    else
    {
      v8 = result + 2;
      if ( a2 != result[2] )
      {
        v9 = &result[4 * v5];
        if ( a2 == result[3] )
        {
          v8 = result + 3;
        }
        else
        {
          while ( 1 )
          {
            v8 = result + 4;
            if ( v9 == result + 4 )
            {
              v6 = v2 - v8;
              goto LABEL_14;
            }
            if ( a2 == result[4] )
            {
              v7 = result + 5;
              goto LABEL_19;
            }
            if ( a2 == result[5] )
            {
              v8 = result + 5;
              goto LABEL_18;
            }
            if ( a2 == result[6] )
            {
              v8 = result + 6;
              goto LABEL_18;
            }
            if ( a2 == result[7] )
              break;
            result += 4;
          }
          v8 = result + 7;
        }
      }
    }
    goto LABEL_18;
  }
  v8 = *(_QWORD **)(a1 + 712);
LABEL_19:
  if ( v2 != v7 )
  {
    result = memmove(v8, v7, (char *)v2 - (char *)v7);
    v7 = *(_QWORD **)(a1 + 720);
  }
  *(_QWORD *)(a1 + 720) = v7 - 1;
  return result;
}
