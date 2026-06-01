/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47692B
// Address: 0x0047692B

//----- (0047692B) --------------------------------------------------------
_DWORD *__cdecl sub_47692B(unsigned __int8 *a1, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int8 *v5; // esi
  bool v7; // cl
  char v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  int v11; // edx
  unsigned int v12; // eax
  bool v13; // cl
  unsigned __int8 v14; // al
  char v16; // [esp+Eh] [ebp-2h]
  bool v17; // [esp+Fh] [ebp-1h]
  bool v18; // [esp+Fh] [ebp-1h]

  v5 = a3;
  *a5 = 0;
  *a4 = 1;
  if ( a2 )
    *a2++ = a3;
  v7 = 0;
  v17 = 0;
  do
  {
    if ( *a1 == 34 )
    {
      v8 = 34;
      v7 = !v7;
      ++a1;
      v17 = v7;
    }
    else
    {
      ++*a5;
      if ( v5 )
        *v5++ = *a1;
      v9 = *a1++;
      v16 = v9;
      if ( sub_47DD2E(v9) )
      {
        ++*a5;
        if ( v5 )
          *v5++ = *a1;
        ++a1;
      }
      v8 = v16;
      if ( !v16 )
      {
        --a1;
        goto LABEL_20;
      }
      v7 = v17;
    }
  }
  while ( v7 || v8 != 32 && v8 != 9 );
  if ( v5 )
    *(v5 - 1) = 0;
LABEL_20:
  v18 = 0;
LABEL_21:
  v10 = *a1;
  if ( *a1 )
  {
    while ( v10 == 32 || v10 == 9 )
      v10 = *++a1;
    if ( v10 )
    {
      if ( a2 )
        *a2++ = v5;
      ++*a4;
      while ( 1 )
      {
        v11 = 1;
        v12 = 0;
        while ( *a1 == 92 )
        {
          ++a1;
          ++v12;
        }
        if ( *a1 == 34 )
          break;
LABEL_43:
        while ( v12 )
        {
          --v12;
          if ( v5 )
            *v5++ = 92;
          ++*a5;
        }
        v14 = *a1;
        if ( !*a1 || !v18 && (v14 == 32 || v14 == 9) )
        {
          if ( v5 )
            *v5++ = 0;
          ++*a5;
          goto LABEL_21;
        }
        if ( v11 )
        {
          if ( v5 )
          {
            *v5++ = v14;
            v14 = *a1;
          }
          if ( sub_47DD2E(v14) )
          {
            ++a1;
            ++*a5;
            if ( v5 )
              *v5++ = *a1;
          }
          ++*a5;
        }
        ++a1;
      }
      if ( (v12 & 1) == 0 )
      {
        v13 = v18;
        if ( v18 )
        {
          if ( a1[1] == 34 )
          {
            ++a1;
            goto LABEL_39;
          }
          v13 = v18;
        }
        v11 = 0;
        v18 = !v13;
      }
LABEL_39:
      v12 >>= 1;
      goto LABEL_43;
    }
  }
  if ( a2 )
    *a2 = nullptr;
  ++*a4;
  return a4;
}
