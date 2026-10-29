void __fastcall sub_640AE0(__int64 *a1)
{
  _BYTE *v2; // rbx
  _BYTE *v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // rdx
  void *v6; // rdi
  const void *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rax

  if ( (unsigned __int64)a1[1] > 1 )
  {
    v2 = nullptr;
    v3 = (_BYTE *)*a1;
    while ( 1 )
    {
      v4 = (_BYTE *)tag_skipcodes(v3);
      if ( !*v4 )
        break;
      v3 = v4 + 1;
      if ( *v4 == 10 )
        v2 = v4;
    }
    if ( v2 )
    {
      v5 = a1[1];
      if ( v5 )
      {
        v6 = (void *)*a1;
        v7 = v2 + 1;
        v8 = v5 - 1;
        v9 = (unsigned __int64)&v2[-*a1 + 1];
        if ( v5 != 1 )
        {
          if ( v9 )
          {
            v10 = 1;
            v11 = 0;
            if ( v9 < v8 )
            {
              v11 = v8 - v9;
              memmove(v6, v7, v8 - v9);
              v10 = v11 + 1;
              v6 = (void *)*a1;
            }
            if ( a1[2] < v10 )
            {
              v12 = qvector_reserve(a1, v6, v10, 1);
              *a1 = v12;
              v6 = (void *)v12;
            }
            a1[1] = v10;
            *((_BYTE *)v6 + v11) = 0;
          }
        }
      }
    }
  }
}

