void __fastcall sub_49D1C0(_QWORD *a1, _QWORD *a2, char *a3, char *a4, __int64 a5)
{
  _QWORD *v6; // rdx
  char *v7; // rax
  signed __int64 v8; // rdx
  size_t v9; // rdx

  if ( a1 != a2 )
  {
    if ( a3 == a4 )
      return;
    v6 = a2 - 1;
    v7 = a4 - 8;
    while ( 1 )
    {
      if ( *(_QWORD *)v7 < *v6 )
      {
        *(_QWORD *)(a5 - 8) = *v6;
        if ( a1 == v6 )
        {
          v8 = v7 + 8 - a3;
          if ( v8 <= 8 )
          {
            if ( v8 == 8 )
              *(_QWORD *)(a5 - 16) = *(_QWORD *)a3;
          }
          else
          {
            memmove((void *)(a5 - 8 - v8), a3, v8);
          }
          return;
        }
        --v6;
      }
      else
      {
        *(_QWORD *)(a5 - 8) = *(_QWORD *)v7;
        if ( a3 == v7 )
          return;
        v7 -= 8;
      }
      a5 -= 8;
    }
  }
  v9 = a4 - a3;
  if ( a4 - a3 <= 8 )
  {
    if ( a4 - a3 == 8 )
      *(_QWORD *)(a5 - 8) = *(_QWORD *)a3;
  }
  else
  {
    memmove((void *)(a5 - v9), a3, v9);
  }
}
