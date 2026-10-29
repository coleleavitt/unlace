unsigned int *__fastcall sub_8E8AA0(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  unsigned int *result; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rcx

  sub_9677C0(a1[1107] + 8LL * (a2[2] ^ 1));
  sub_9677C0(a1[1107] + 8LL * (a2[3] ^ 1));
  v3 = a1[1070];
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  result = (unsigned int *)a1[14];
  if ( result[128] == 6 )
  {
    result = a2 + 2;
    v6 = *a2;
    if ( v6 * 4 )
    {
      do
      {
        if ( *result >> 1 < v4 )
        {
          v7 = (_DWORD *)(a1[1108] + 4LL * *result);
          if ( *v7 )
            --*v7;
        }
        ++result;
      }
      while ( result != &a2[v6 + 2] );
    }
  }
  return result;
}

