__int64 __fastcall sub_CEBDF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx

  result = a8;
  *(_BYTE *)(a2 + 24) = 0;
  v9 = *(_DWORD *)(a8 + 20);
  if ( v9 != -1 )
  {
    v10 = *(_DWORD *)(a8 + 16);
    result = v9 / v10;
    if ( v10 <= v9 )
    {
      if ( (unsigned int)result <= 3 )
      {
        v12 = 0;
      }
      else
      {
        v11 = a2;
        do
        {
          *(_OWORD *)(v11 + 32) = 0;
          v11 += 16;
        }
        while ( v11 != a2 + 16LL * ((unsigned int)result >> 2) );
        v12 = result & 0xFFFFFFFC;
        if ( (_DWORD)result == (result & 0xFFFFFFFC) )
          return result;
      }
      *(_DWORD *)(a2 + 4LL * v12 + 32) = 0;
      v13 = v12 + 1;
      if ( (unsigned int)result > (unsigned int)v13 )
      {
        v14 = v12 + 2;
        *(_DWORD *)(a2 + 4 * v13 + 32) = 0;
        if ( (unsigned int)result > (unsigned int)v14 )
          *(_DWORD *)(a2 + 4 * v14 + 32) = 0;
      }
    }
  }
  return result;
}
