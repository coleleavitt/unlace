__int64 __fastcall ClpSimplexDual::checkFakeBounds(ClpSimplexDual *this)
{
  int v1; // eax
  unsigned __int8 *v2; // rdx
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int8 *v5; // rcx
  unsigned __int8 *v6; // rdi
  unsigned int v7; // edx
  bool v8; // cf

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
      if ( (v7 & 7) == 2 )
      {
        v8 = ((v7 >> 3) & 2) == 0;
        v2 = v5;
        result = (unsigned int)result - (v8 - 1);
        if ( v6 == v5 )
          return result;
      }
      else
      {
        if ( (v7 & 7) == 3 )
          result = (unsigned int)result - (((v7 & 8) == 0) - 1);
        v2 = v5;
        if ( v6 == v5 )
          return result;
      }
      ++v5;
    }
  }
  return 0;
}

