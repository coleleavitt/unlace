__int64 __fastcall sub_831890(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx

  v3 = *((_DWORD *)a1 + 2);
  v4 = *a1;
  v5 = v3 - 1;
  if ( v3 <= 0x40 )
  {
    LOBYTE(a3) = v4 == 1LL << v5;
    return a3;
  }
  else
  {
    v6 = 0;
    if ( (*(_QWORD *)(v4 + 8LL * (v5 >> 6)) & (1LL << v5)) != 0 )
      LOBYTE(v6) = (unsigned int)sub_25875E0(a1, v4, 0) == v5;
    return v6;
  }
}

