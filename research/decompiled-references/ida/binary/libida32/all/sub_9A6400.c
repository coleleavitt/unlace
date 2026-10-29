char __fastcall sub_9A6400(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  char result; // al
  __int64 v4; // r13
  __int64 v6; // rbp
  _WORD *v7; // r15
  _WORD *v8; // r14
  __int64 v9; // rax
  unsigned int v10; // [rsp+4h] [rbp-44h]

  result = 0;
  v4 = a1[1];
  if ( (_DWORD)v4 )
  {
    v6 = *a2;
    v7 = (_WORD *)*a1;
    v10 = v4 - 1;
    if ( (_DWORD)v4 == 1 )
    {
      v9 = 0;
    }
    else
    {
      v8 = (_WORD *)*a1;
      do
      {
        result = sub_9A6060((__int64 *)(*(_QWORD *)(v6 + 8LL * (unsigned __int16)*v8) + 8LL), a3);
        if ( result )
        {
          *v8 = v7[v10];
          a1[1] = v4 - 1;
          return result;
        }
        ++v8;
      }
      while ( &v7[(unsigned int)(v4 - 2) + 1] != v8 );
      v9 = v10;
    }
    result = sub_9A6060((__int64 *)(*(_QWORD *)(v6 + 8LL * (unsigned __int16)v7[v9]) + 8LL), a3);
    if ( result )
      a1[1] = v4 - 1;
  }
  return result;
}

