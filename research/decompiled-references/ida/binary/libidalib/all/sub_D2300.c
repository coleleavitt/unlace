__int64 __fastcall sub_D2300(__int64 a1)
{
  int v1; // ecx
  __int64 result; // rax
  _DWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // esi
  _DWORD *v10; // rdi
  int v11; // edx

  if ( !*(_DWORD *)a1 )
    return -1;
  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(a1 + 8);
  if ( (v1 & 0x40) != 0 )
  {
    v4 = *(_DWORD **)(a1 + 384);
  }
  else
  {
    v4 = (_DWORD *)qword_252590;
    v5 = v1 | 0x40;
    v6 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 == v6 )
    {
      *(_QWORD *)(a1 + 384) = 0;
      *(_DWORD *)(a1 + 4) = v5;
      return -1;
    }
    while ( *(_DWORD *)a1 != *v4 )
    {
      v4 += 64;
      if ( (_DWORD *)v6 == v4 )
      {
        v4 = nullptr;
        break;
      }
    }
    *(_QWORD *)(a1 + 384) = v4;
    *(_DWORD *)(a1 + 4) = v5;
  }
  if ( !v4 )
    return -1;
  v7 = sub_CFA40(*(_QWORD *)(a1 + 384), -1);
  v8 = v7;
  if ( !v7 )
    return -1;
  v9 = dword_245174;
  result = *(_QWORD *)(v7 + 32LL * dword_245174 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v10 = qword_252758;
      if ( qword_252758 )
      {
        *((_QWORD *)qword_252758 + 1) = v8;
        v10[4] = v9;
        *(_QWORD *)v10 = result;
        v11 = sub_CDCF0((__int64)v10, 11);
        result = -1;
        if ( v11 == 1 )
          result = *(_QWORD *)qword_252758;
      }
    }
  }
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}

