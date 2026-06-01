__int64 __fastcall ClpSimplexDual::numberAtFakeBound(ClpSimplexDual *this)
{
  int v1; // eax
  unsigned __int8 *v2; // rdx
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rdi
  unsigned __int8 v7; // dl
  int v8; // ecx
  char v9; // dl

  v1 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v1 > 0 )
  {
    v2 = *((unsigned __int8 **)this + 33);
    v3 = (unsigned int)(v1 - 1);
    result = 0;
    v5 = v2 + 1;
    v6 = &v2[v3 + 1];
    while ( 1 )
    {
      v7 = *v2;
      v8 = (int)v7 >> 3;
      v9 = v7 & 7;
      if ( v9 == 2 )
      {
        v2 = v5;
        result = ((v8 & 3u) - 2 < 2) + (unsigned int)result;
        if ( v6 == v5 )
          return result;
      }
      else
      {
        if ( v9 == 3 )
          result = (unsigned int)result - (((v8 & 1) == 0) - 1);
        v2 = v5;
        if ( v6 == v5 )
          return result;
      }
      ++v5;
    }
  }
  return 0;
}

