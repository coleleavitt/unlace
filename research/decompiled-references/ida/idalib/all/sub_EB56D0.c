_QWORD *__fastcall sub_EB56D0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rsi

  result = a1;
  v3 = (_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 80);
  v4 = 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + 1);
  v5 = (__int64)&v3[(unsigned __int64)v4 / 8];
  v6 = v4 >> 3;
  v7 = v4 >> 5;
  if ( !v7 )
  {
    v10 = (_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 80);
LABEL_14:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          goto LABEL_22;
        goto LABEL_17;
      }
      if ( !*v10 )
      {
LABEL_21:
        v5 = (__int64)v10;
        goto LABEL_22;
      }
      ++v10;
    }
    if ( *v10 )
    {
      ++v10;
LABEL_17:
      if ( !*v10 )
        v5 = (__int64)v10;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( *v3 )
  {
    if ( *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 88) )
    {
      if ( *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 96) )
      {
        v8 = (_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 80);
        v9 = &v3[4 * v7];
        if ( *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 104) )
        {
          while ( 1 )
          {
            v10 = v8 + 4;
            if ( v8 + 4 == v9 )
            {
              v6 = (v5 - (__int64)v9) >> 3;
              goto LABEL_14;
            }
            if ( !v8[4] )
              goto LABEL_21;
            if ( !v8[5] )
            {
              v5 = (__int64)(v8 + 5);
              goto LABEL_22;
            }
            if ( !v8[6] )
            {
              v5 = (__int64)(v8 + 6);
              goto LABEL_22;
            }
            if ( !v8[7] )
              break;
            v8 += 4;
          }
          v5 = (__int64)(v8 + 7);
        }
        else
        {
          v5 = a2 + 40LL * *(unsigned int *)(a2 + 16) + 104;
        }
      }
      else
      {
        v5 = a2 + 40LL * *(unsigned int *)(a2 + 16) + 96;
      }
    }
    else
    {
      v5 = a2 + 40LL * *(unsigned int *)(a2 + 16) + 88;
    }
  }
  else
  {
    v5 = a2 + 40LL * *(unsigned int *)(a2 + 16) + 80;
  }
LABEL_22:
  *result = v3;
  result[1] = 0;
  result[3] = v5;
  result[4] = 0;
  return result;
}
