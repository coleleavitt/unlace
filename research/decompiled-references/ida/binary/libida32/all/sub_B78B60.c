__int64 __fastcall sub_B78B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v7 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v7 + 56) & 4) != 0 )
  {
    v15 = sub_B685F0(a1);
    sub_B72B60(v7 + 40, v15);
  }
  v8 = *(_QWORD **)(v7 + 40);
  v9 = *(_QWORD *)(v7 + 48);
  v10 = 1;
  v11 = v8 + 1;
  v12 = (v9 - (__int64)v8) >> 3;
  if ( a2 == (*v8 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v10 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = v11++;
      if ( a2 == (*v8 & 0xFFFFFFFFFFFFFFF8LL) )
        break;
      ++v10;
    }
  }
  result = v9 - 8;
  if ( v12 - 1 == v10 )
  {
    *(_QWORD *)(v7 + 48) = result;
  }
  else
  {
    v14 = *(_QWORD *)(v9 - 8);
    *(_QWORD *)(v7 + 48) = result;
    *v8 = v14;
  }
  return result;
}

