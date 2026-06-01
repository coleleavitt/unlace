__int64 __fastcall sub_FF80B0(__int64 a1, int *a2, _QWORD *a3)
{
  __int64 v3; // r8
  int v4; // edi
  int v5; // ecx
  unsigned int v6; // r9d
  _DWORD *v7; // rax
  int v8; // esi
  __int64 result; // rax
  int v10; // r11d
  _DWORD *v11; // r10

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 8;
    v4 = 15;
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
  v6 = v4 & *a2;
  v7 = (_DWORD *)(v3 + 16LL * v6);
  v8 = *v7;
  if ( v5 == *v7 )
  {
    *a3 = v7;
    return 1;
  }
  else if ( v8 )
  {
    v10 = 1;
    v11 = nullptr;
    while ( 1 )
    {
      if ( !v11 && v8 == -1 )
        v11 = v7;
      v6 = v4 & (v10 + v6);
      v7 = (_DWORD *)(v3 + 16LL * v6);
      v8 = *v7;
      if ( v5 == *v7 )
      {
        *a3 = v7;
        return 1;
      }
      if ( !v8 )
        break;
      ++v10;
    }
    if ( v11 )
      v7 = v11;
    *a3 = v7;
    return 0;
  }
  else
  {
    *a3 = v7;
    return 0;
  }
}

