__int64 __fastcall CoinPackedMatrix::getMajorIndices(CoinPackedMatrix *this)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax
  int v5; // r9d
  int v6; // edi
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx

  v1 = *((int *)this + 16);
  if ( !(_DWORD)v1 )
    return 0;
  v2 = *(int *)(*((_QWORD *)this + 6) + 4 * v1);
  if ( (_DWORD)v2 != *((_DWORD *)this + 18) )
    return 0;
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  result = operator new[](4 * v2);
  v5 = *((_DWORD *)this + 16);
  if ( v5 > 0 )
  {
    v6 = 0;
    v7 = (_DWORD *)(*((_QWORD *)this + 6) + 4LL);
    do
    {
      v8 = (int)*(v7 - 1);
      if ( (int)v8 < *v7 )
      {
        v9 = (int)v8 + 1;
        v10 = result + 4 * (v8 - v9);
        do
        {
          *(_DWORD *)(v10 + 4 * v9) = v6;
          v11 = v9++;
        }
        while ( *v7 > v11 );
      }
      ++v6;
      ++v7;
    }
    while ( v6 != v5 );
  }
  return result;
}

