__int64 __fastcall sub_4EB210(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 16 * v2;
      do
      {
        v5 = v1;
        v1 += 16;
        sub_15D0DF0(v5);
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    return sub_186B220((void *)(v1 - 8));
  }
  return result;
}

