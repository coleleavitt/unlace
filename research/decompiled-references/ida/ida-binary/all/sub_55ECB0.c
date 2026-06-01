__int64 __fastcall sub_55ECB0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 result; // rax
  unsigned int v4; // ebp
  void *v6; // rdi
  size_t v7; // rsi

  v2 = *(_DWORD *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  if ( v2 < (unsigned int)result )
  {
    v4 = 2 * v2;
    if ( 2 * v2 < (unsigned int)result )
      v4 = *(_DWORD *)(a1 + 8) + 1;
    result = 8;
    if ( v4 < 8 )
      v4 = 8;
    if ( v2 < v4 )
    {
      v6 = *(void **)a1;
      v7 = v4 * a2;
      if ( v6 )
        result = (__int64)off_8C52A8(v6, v7);
      else
        result = (__int64)off_8C52B8(v7);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 12) = v4;
    }
  }
  return result;
}
