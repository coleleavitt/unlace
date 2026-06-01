__int64 __fastcall sub_20495F0(__int64 *a1, int a2, _DWORD *a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  unsigned int v5; // r9d
  char v6; // cl
  __int64 v7; // rsi
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // edi
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rcx

  v3 = *a1;
  result = 0;
  if ( *a1 )
  {
    v5 = (unsigned int)(a2 >> 31) >> 29;
    v6 = a2 + v5;
    v7 = a2 / 8;
    v8 = *(unsigned __int8 *)(v3 + v7 + 28);
    v9 = (v6 & 7) - v5;
    if ( _bittest(&v8, v9) )
    {
      result = 1;
      if ( a3 )
      {
        v10 = *(_DWORD *)(v3 + 8);
        if ( v10 )
        {
          v11 = 0;
          v12 = 1 << v9;
          while ( 1 )
          {
            v13 = *(_QWORD *)(v3 + 8 * v11 + 48);
            if ( v13 && ((unsigned __int8)v12 & *(_BYTE *)(v13 + v7 + 12)) != 0 )
            {
              *a3 = v11 - 1;
              return 1;
            }
            if ( v10 - 1 == v11 )
              break;
            ++v11;
          }
          return 1;
        }
      }
    }
  }
  return result;
}
