__int64 __fastcall ClpSimplex::createStatus(ClpSimplex *this)
{
  void *v2; // rdi
  size_t v3; // rdx
  __int64 result; // rax
  __int64 i; // rdx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rax

  v2 = *((void **)this + 33);
  v3 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
  if ( !v2 )
  {
    v8 = operator new[](*((_DWORD *)this + 27) + *((_DWORD *)this + 26));
    LODWORD(v3) = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
    v2 = (void *)v8;
    *((_QWORD *)this + 33) = v8;
    v3 = (int)v3;
  }
  memset(v2, 0, v3);
  result = *((unsigned int *)this + 27);
  for ( i = 0; (int)result > (int)i; ++i )
  {
    *(_BYTE *)(i + *((_QWORD *)this + 33)) = *(_BYTE *)(i + *((_QWORD *)this + 33)) & 0xF8 | 3;
    result = *((unsigned int *)this + 27);
  }
  if ( *((int *)this + 26) > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + result;
      ++v6;
      result = *((_QWORD *)this + 33) + v7;
      *(_BYTE *)result = *(_BYTE *)result & 0xF8 | 1;
      if ( *((_DWORD *)this + 26) <= v6 )
        break;
      LODWORD(result) = *((_DWORD *)this + 27);
    }
  }
  return result;
}

