__int64 __fastcall sub_1840030(__int64 a1, int *a2, _QWORD *a3)
{
  __int64 v3; // r8
  int v4; // edi
  int v5; // eax
  unsigned int v6; // ecx
  _DWORD *v7; // rsi
  int v8; // r9d
  __int64 result; // rax
  int v10; // r11d
  _DWORD *v11; // r10

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 8;
    v4 = 3;
  }
  else
  {
    result = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = result - 1;
    if ( !(_DWORD)result )
    {
      *a3 = 0;
      return result;
    }
  }
  v5 = *a2;
  v6 = v4 & (37 * *a2);
  v7 = (_DWORD *)(v3 + 40LL * v6);
  v8 = *v7;
  if ( v5 == *v7 )
  {
    *a3 = v7;
    return 1;
  }
  else if ( v8 == 0x7FFFFFFF )
  {
    *a3 = v7;
    return 0;
  }
  else
  {
    v10 = 1;
    v11 = nullptr;
    while ( 1 )
    {
      if ( !v11 && v8 == 0x80000000 )
        v11 = v7;
      v6 = v4 & (v10 + v6);
      v7 = (_DWORD *)(v3 + 40LL * v6);
      v8 = *v7;
      if ( *v7 == v5 )
      {
        *a3 = v7;
        return 1;
      }
      if ( v8 == 0x7FFFFFFF )
        break;
      ++v10;
    }
    if ( v11 )
      v7 = v11;
    *a3 = v7;
    return 0;
  }
}
