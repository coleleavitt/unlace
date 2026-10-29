__int64 __fastcall sub_755E90(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  unsigned int *v8; // rbp

  result = 1;
  if ( a3 != a2 )
  {
    v5 = *(_QWORD *)(a1 + 48) + 176LL * a2;
    v6 = *(_QWORD *)(v5 + 32);
    v7 = *(unsigned int **)(v5 + 24);
    v8 = (unsigned int *)((char *)v7 + 5 * v6);
    if ( v7 == v8 )
    {
      return 0;
    }
    else
    {
      result = *((unsigned __int8 *)v7 + 4);
      if ( (_BYTE)result )
      {
LABEL_10:
        while ( 1 )
        {
          result = sub_755E90(a1, *v7, a3);
          if ( (_BYTE)result || v8 == (unsigned int *)((char *)v7 + 5) )
            break;
          result = *((unsigned __int8 *)v7 + 9);
          if ( !(_BYTE)result )
          {
            if ( (*(_BYTE *)(v5 + 164) & 4) != 0 )
              return result;
            v7 = (unsigned int *)((char *)v7 + 10);
            if ( v8 == v7 )
              return result;
            while ( !*((_BYTE *)v7 + 4) )
            {
              v7 = (unsigned int *)((char *)v7 + 5);
              if ( v8 == v7 )
                return 0;
            }
            goto LABEL_9;
          }
          v7 = (unsigned int *)((char *)v7 + 5);
        }
      }
      else if ( (*(_BYTE *)(v5 + 164) & 4) == 0 )
      {
        v7 = (unsigned int *)((char *)v7 + 5);
        if ( v6 != 1 )
        {
          while ( !*((_BYTE *)v7 + 4) )
          {
            v7 = (unsigned int *)((char *)v7 + 5);
            if ( v8 == v7 )
              return 0;
          }
        }
LABEL_9:
        if ( v8 != v7 )
          goto LABEL_10;
      }
    }
  }
  return result;
}

