__int64 __fastcall sub_1F69F80(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_DWORD *)(a2 + 4) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) & 0x7FFFFFFF | *(_DWORD *)(a2 + 4) & 0x80000000;
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_BYTE *)(a2 + 7) = ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7) << 7) | *(_BYTE *)(a2 + 7) & 0x7F;
  *(_DWORD *)(a2 + 16) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 20) = sub_1EE7490(*a1);
  *(_QWORD *)(a2 + 24) = sub_1F68F80(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16));
  v8 = *(_QWORD *)(*a1 + 16);
  result = sub_1F68F80(*(_QWORD *)(*a1 + 8), v8);
  *(_QWORD *)(a2 + 32) = result;
  if ( (*(_DWORD *)(a2 + 4) & 0x7FFFFFFF) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*a1 + 8);
      v13 = *(_DWORD *)(v12 + 13208);
      if ( !v13 )
        break;
      if ( v13 <= 2 )
      {
        v8 = *(_QWORD *)(*a1 + 16);
        v11 = sub_1F645A0(v12, v8);
      }
      else
      {
        if ( v13 != 3 )
          return sub_1F6A0A0(v12, v8);
        v11 = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 13072))-- - 8);
      }
      *(_QWORD *)(a2 + 8 * v10++ + 40) = v11;
      result = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)result <= (unsigned int)v10 )
        return result;
    }
    return sub_1F6A0A0(v12, v8);
  }
  return result;
}
