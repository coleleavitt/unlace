__int64 __fastcall sub_5D8FC0(__int64 *ptr)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax

  if ( ptr )
  {
    v2 = (__int64 *)ptr[3];
    v3 = &v2[*((unsigned int *)ptr + 8)];
    if ( v2 < v3 )
    {
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
            goto LABEL_8;
        }
        sub_15D7BC0(v5, v4);
        ++v2;
      }
      while ( v2 < v3 );
LABEL_8:
      v2 = (__int64 *)ptr[3];
    }
    if ( v2 != ptr + 5 && v2 )
      sub_186B220(v2);
    v7 = *ptr;
    if ( *ptr && (v8 = ptr[1], v6 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v6) )
    {
      sub_15D7BC0(v8, v7);
      return sub_186B220(ptr);
    }
    else
    {
      return sub_186B220(ptr);
    }
  }
  return result;
}

