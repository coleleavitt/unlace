__int64 __fastcall sub_795DE0(__int64 ***a1)
{
  __int64 **v1; // r15
  __int64 result; // rax
  __int64 **v4; // rbp
  __int64 *v5; // r13
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 == v4 )
      goto LABEL_16;
    do
    {
      v5 = *v1;
      if ( *v1 )
      {
        v6 = (__int64 *)v5[1];
        if ( v6 )
        {
          v7 = &v6[*((unsigned int *)v6 - 1)];
          if ( v6 >= v7 )
            goto LABEL_12;
          do
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( *v6 )
              {
                v9 = *v5;
                if ( (*(_DWORD *)(v8 + 8))-- == 1 )
                  break;
              }
              if ( ++v6 >= v7 )
                goto LABEL_11;
            }
            sub_15D7BC0(v9, v8);
            ++v6;
          }
          while ( v6 < v7 );
LABEL_11:
          v6 = (__int64 *)v5[1];
          if ( v6 )
LABEL_12:
            sub_186B220(v6 - 1);
        }
        result = sub_186B220(v5);
      }
      ++v1;
    }
    while ( v4 != v1 );
    v4 = *a1;
    if ( *a1 )
    {
LABEL_16:
      *((_DWORD *)v4 - 1) = 0;
      return sub_186B220(v4 - 1);
    }
  }
  return result;
}

