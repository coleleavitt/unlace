__int64 __fastcall sub_41F2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE *v6; // rax
  int v7; // eax
  int v8; // edx

  result = 1;
  if ( *(_DWORD *)(a2 + 28) == 1 )
  {
    v6 = *(_BYTE **)(a4 + 120);
    if ( v6 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v6 = *(_BYTE **)(a4 + 120);
    }
    *v6 = 66;
    *(_DWORD *)(a4 + 3276) = 0;
    v7 = dword_654C4C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v7 )
      return 0;
    if ( v7 == 0x80000000 )
    {
      v8 = *(_DWORD *)(a4 + 48);
      v7 = 1;
    }
    else if ( v7 < 0 )
    {
      v8 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v8 )
      {
        *(_DWORD *)(a4 + 44) = v8;
        *(_DWORD *)(a4 + 48) = v8 + v7;
        return 0;
      }
    }
    else
    {
      v8 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v8 + v7;
    return 0;
  }
  return result;
}

