__int64 __fastcall sub_BD4300(__int64 *ptr)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax

  if ( ptr )
  {
    v2 = (__int64 *)ptr[3];
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      if ( v2 >= v3 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v4 = *v2;
          if ( *v2 )
          {
            v5 = ptr[2];
            v6 = (*(_DWORD *)(v4 + 8))-- == 1;
            if ( v6 )
              break;
          }
          if ( ++v2 >= v3 )
            goto LABEL_9;
        }
        sub_15D7BC0(v5, v4);
        ++v2;
      }
      while ( v2 < v3 );
LABEL_9:
      v2 = (__int64 *)ptr[3];
      if ( v2 )
LABEL_10:
        sub_186B220(v2 - 1);
    }
    v7 = (__int64 *)ptr[1];
    if ( v7 )
    {
      v8 = &v7[*((unsigned int *)v7 - 1)];
      if ( v7 >= v8 )
        goto LABEL_19;
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = *ptr;
            v6 = (*(_DWORD *)(v9 + 8))-- == 1;
            if ( v6 )
              break;
          }
          if ( ++v7 >= v8 )
            goto LABEL_18;
        }
        sub_15D7BC0(v10, v9);
        ++v7;
      }
      while ( v7 < v8 );
LABEL_18:
      v7 = (__int64 *)ptr[1];
      if ( v7 )
LABEL_19:
        sub_186B220(v7 - 1);
    }
    return sub_186B220(ptr);
  }
  return result;
}

