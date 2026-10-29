__int64 __fastcall sub_3BE360(__int64 *ptr)
{
  bool v1; // zf
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax

  v1 = (*((_DWORD *)ptr + 19))-- == 1;
  if ( v1 )
  {
    sub_3BCB50(ptr[4], ptr[5]);
    v3 = (__int64 *)ptr[3];
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_11;
      do
      {
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v6 = ptr[2];
            v1 = (*(_DWORD *)(v5 + 8))-- == 1;
            if ( v1 )
              break;
          }
          if ( ++v3 >= v4 )
            goto LABEL_10;
        }
        sub_15D7BC0(v6, v5);
        ++v3;
      }
      while ( v3 < v4 );
LABEL_10:
      v3 = (__int64 *)ptr[3];
      if ( v3 )
LABEL_11:
        sub_186B220(v3 - 1);
    }
    v7 = *ptr;
    if ( *ptr )
    {
      v8 = ptr[1];
      v1 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v1 )
        sub_15D7BC0(v8, v7);
    }
    return sub_186B220(ptr);
  }
  return result;
}

