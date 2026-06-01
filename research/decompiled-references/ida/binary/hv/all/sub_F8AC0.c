char __fastcall sub_F8AC0(_DWORD *a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // edx

  LODWORD(v7) = a1[11];
  if ( (unsigned int)v7 <= a4 )
  {
    if ( (unsigned int)v7 < a4 )
    {
      sub_F8120((__int64)a1, a4 - v7);
      sub_F81A0((__int64)a1, a4, a5);
    }
    else
    {
      sub_F81A0((__int64)a1, a4, a5);
    }
    LODWORD(v7) = a1[11];
  }
  v8 = v7 - a4;
  LOBYTE(v7) = a4 >= (unsigned int)v7;
  if ( !((unsigned __int8)v7 | (a4 < a1[10])) && v8 > 2 )
  {
    v7 = (unsigned int)*a3;
    if ( !(_DWORD)v7 || v8 > *(_DWORD *)(a2 + 8LL * (unsigned int)(v7 - 1) + 4) && (unsigned int)v7 <= 0xFFF )
    {
      v9 = a1[12];
      *(_DWORD *)(a2 + 8 * v7 + 4) = v8;
      v7 = (unsigned int)*a3;
      *(_DWORD *)(a2 + 8 * v7) = v9 + 3;
      ++*a3;
    }
  }
  return v7;
}

