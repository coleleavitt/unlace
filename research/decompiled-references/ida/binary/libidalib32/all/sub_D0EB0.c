__int64 __fastcall sub_D0EB0(__int64 a1)
{
  int v1; // ecx
  __int64 result; // rax
  _DWORD *v4; // rax
  int v5; // ecx
  _DWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  int v12; // edx

  if ( !*(_DWORD *)a1 )
    return 0xFFFFFFFFLL;
  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 1) != 0 )
    return *(unsigned int *)(a1 + 8);
  if ( (v1 & 0x40) != 0 )
  {
    v4 = *(_DWORD **)(a1 + 232);
  }
  else
  {
    v4 = (_DWORD *)qword_251410;
    v5 = v1 | 0x40;
    v6 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
    if ( (_DWORD *)qword_251410 == v6 )
    {
      *(_QWORD *)(a1 + 232) = 0;
      *(_DWORD *)(a1 + 4) = v5;
      return 0xFFFFFFFFLL;
    }
    while ( *(_DWORD *)a1 != *v4 )
    {
      v4 += 58;
      if ( v6 == v4 )
      {
        v4 = nullptr;
        break;
      }
    }
    *(_QWORD *)(a1 + 232) = v4;
    *(_DWORD *)(a1 + 4) = v5;
  }
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v7 = sub_CE480(*(_QWORD *)(a1 + 232), -1);
  v8 = v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = dword_24411C;
  v10 = *(_QWORD *)(v7 + 32LL * dword_24411C + 8);
  result = (unsigned int)v10;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v11 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = v10;
        v11[1] = v8;
        *((_DWORD *)v11 + 4) = v9;
        v12 = sub_CC780((__int64)v11, 11);
        result = 0xFFFFFFFFLL;
        if ( v12 == 1 )
          result = *(unsigned int *)qword_2515B0;
      }
    }
  }
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}

